#
# %CopyrightBegin%
#
# Copyright Ericsson AB 2008-2014. All Rights Reserved.
#
# The contents of this file are subject to the Erlang Public License,
# Version 1.1, (the "License"); you may not use this file except in
# compliance with the License. You should have received a copy of the
# Erlang Public License along with this software. If not, it can be
# retrieved online at http://www.erlang.org/.
#
# Software distributed under the License is distributed on an "AS IS"
# basis, WITHOUT WARRANTY OF ANY KIND, either express or implied. See
# the License for the specific language governing rights and limitations
# under the License.
#
# %CopyrightEnd%
#

include ../vsn.mk
include ../config.mk

# Darwin os have debug default install of wxWidgets 
FORCED_DEBUG = false
ifeq ($(FORCED_DEBUG),debug)
override TYPE=debug
endif

ifneq ($(TYPE),debug)
override TYPE=opt
endif

SO_EXT    = .so
OBJC_CC=gcc
OBJC_CFLAGS=

GENERAL     = wxe_driver wxe_ps_init wxe_main wxe_impl wxe_helpers wxe_callback_impl wxe_return wxe_gl
GENERAL_H   = wxe_callback_impl.h  wxe_driver.h  wxe_events.h  wxe_gl.h \
	wxe_helpers.h  wxe_impl.h  wxe_memory.h  wxe_return.h

GENERATED_F = wxe_funcs wxe_events wxe_init
GENERATED_H = gen/wxe_macros.h 

GL_H = egl_impl.h gen/glu_finit.h gen/gl_finit.h gen/gl_fdefs.h 

HAVE_OPENGL = true
OPENGL_F = gl_funcs egl_impl

include $(ERL_TOP)/make/target.mk
include $(ERL_TOP)/make/output.mk
include $(ERL_TOP)/make/$(TARGET)/otp_ded.mk

ERL_INCS= $(DED_INCLUDES)

SYS_TYPE    = i686-pc-linux-gnu

GENERAL_O   = $(GENERAL:%=$(SYS_TYPE)/%.o) 
GENERATED_O = $(GENERATED_F:%=$(SYS_TYPE)/%.o)
ifeq ($(HAVE_OPENGL), true)
	GL_OBJECTS = $(OPENGL_F:%=$(SYS_TYPE)/%.o)
else
	GL_OBJECTS = 
endif

RC_FILE_EXT = o
ifeq ($(SYS_TYPE),win32)
RC_FILE     = $(SYS_TYPE)/wxe_win32.$(RC_FILE_EXT)
else 
RC_FILE     = 
endif

WX_OBJECTS  = $(GENERAL_O) $(GENERATED_O) $(RC_FILE)

OBJECTS = $(WX_OBJECTS) $(GL_OBJECTS)

TARGET_DIR = ../priv/$(SYS_TYPE)

# -O2 -funroll-loops  -ffast-math -fomit-frame-pointer 

COMMON_CFLAGS = -DPACKAGE_NAME=\"\" -DPACKAGE_TARNAME=\"\" -DPACKAGE_VERSION=\"\" -DPACKAGE_STRING=\"\" -DPACKAGE_BUGREPORT=\"\" -DSTDC_HEADERS=1 -DHAVE_SYS_TYPES_H=1 -DHAVE_SYS_STAT_H=1 -DHAVE_STDLIB_H=1 -DHAVE_STRING_H=1 -DHAVE_MEMORY_H=1 -DHAVE_STRINGS_H=1 -DHAVE_INTTYPES_H=1 -DHAVE_STDINT_H=1 -DHAVE_UNISTD_H=1 -DSIZEOF_VOID_P=4 -DHAVE_GL_GL_H=1 -DHAVE_GL_GLU_H=1 -DHAVE_GL_SUPPORT=1 -DHAVE_GLINTPTR=1 -DHAVE_GLINTPTRARB=1 -DHAVE_GLCHAR=1 -DHAVE_GLCHARARB=1 -DHAVE_GLHALFARB=1 -DHAVE_GLINT64EXT=1 -DHAVE_WX_STC_STC_H=1  $(ERL_INCS) 

CC		= gcc
CXX		= g++
LD		= $(CXX)
LDFLAGS		= -shared -fPIC 
RESCOMP		= 

ifeq (false,true) 
OPT_WX_LIBS      =  
DEBUG_WX_LIBS    =  
else
OPT_WX_LIBS      =  -pthread   -lwx_gtk2u_stc-2.8 -lwx_gtk2u_xrc-2.8 -lwx_gtk2u_html-2.8 -lwx_gtk2u_adv-2.8 -lwx_baseu_xml-2.8 -lwx_gtk2u_core-2.8 -lwx_baseu-2.8 -lwx_gtk2u_gl-2.8 -lwx_gtk2u_aui-2.8 
DEBUG_WX_LIBS    =  
endif

ifeq ($(TYPE),debug)
WX_CFLAGS	= 
CFLAGS          = -g -Wall -fPIC -g -O2 -Wno-deprecated-declarations -DDEBUG  -D_GNU_SOURCE -D_THREAD_SAFE -D_REENTRANT 
WX_CXX_FLAGS	=  
CXX_FLAGS       =  -g -Wall -fPIC -g -O2 -Wno-deprecated-declarations -DDEBUG  -D_GNU_SOURCE -D_THREAD_SAFE -D_REENTRANT
WX_LIBS		= $(DEBUG_WX_LIBS)
else
WX_CFLAGS	= -I/usr/lib/wx/include/gtk2-unicode-release-2.8 -I/usr/include/wx-2.8 -D_FILE_OFFSET_BITS=64 -D_LARGE_FILES -D__WXGTK__ -pthread
CFLAGS          = -Werror=return-type -g -Wall -O2 -fPIC -g -O2 -Wno-deprecated-declarations -fomit-frame-pointer -fno-strict-aliasing  -D_GNU_SOURCE -D_THREAD_SAFE -D_REENTRANT 
WX_CXX_FLAGS	= -I/usr/lib/wx/include/gtk2-unicode-release-2.8 -I/usr/include/wx-2.8 -D_FILE_OFFSET_BITS=64 -D_LARGE_FILES -D__WXGTK__ -pthread 
CXX_FLAGS       = -Werror=return-type  -g -Wall -O2 -fPIC -g -O2 -Wno-deprecated-declarations -fomit-frame-pointer -fno-strict-aliasing  -D_GNU_SOURCE -D_THREAD_SAFE -D_REENTRANT
WX_LIBS		= $(OPT_WX_LIBS)
endif

GL_LIBS         = -lGL -lGLU

CC_O		= $(V_CC) -c $(CFLAGS) $(WX_CFLAGS) $(COMMON_CFLAGS)
OBJC_CC_O	= $(OBJC_CC) -c $(CFLAGS) $(OBJC_CFLAGS) $(WX_CFLAGS) $(COMMON_CFLAGS)
CXX_O		= $(V_CXX) -c $(CXX_FLAGS) $(WX_CXX_FLAGS)  $(COMMON_CFLAGS)

# Targets

opt:     $(TARGET_DIR)/wxe_driver$(SO_EXT) $(TARGET_DIR)/erl_gl$(SO_EXT)

debug:   
	@${MAKE} TYPE=debug

clean:  
	rm -f $(OBJECTS) 
	rm -f $(TARGET_DIR)/*$(SO_EXT)
	rm -f *~ erl_crash.dump

complete_clean: 
	rm -f $(OBJECTS) 
	rm -f $(GENERATED_F:%=gen/%.cpp)
	rm -f gen/gl_funcs.cpp 
	rm -f $(GENERATED_H)
	rm -f ../priv/*/*
	rm -f *~ erl_crash.dump
	rm -f Makefile

docs:	

$(GL_OBJECTS): $(GL_H)
$(WX_OBJECTS): $(GENERATED_H) $(GENERAL_H) 

$(SYS_TYPE)/%.o: %.cpp 
	$(V_at)mkdir -p $(SYS_TYPE)
	$(CXX_O) $< -o $@

$(SYS_TYPE)/%.o: %.c 
	$(V_at)mkdir -p $(SYS_TYPE)
	$(CC_O) $< -o $@

$(SYS_TYPE)/wxe_ps_init.o: wxe_ps_init.c 
	$(V_at)mkdir -p $(SYS_TYPE)
	$(cc_verbose)$(OBJC_CC_O) $< -o $@

$(SYS_TYPE)/%.o: gen/%.cpp 
	$(V_at)mkdir -p $(SYS_TYPE)
	$(CXX_O) $< -o $@

$(SYS_TYPE)/%.o: gen/%.c 
	$(V_at)mkdir -p $(SYS_TYPE)
	$(CC_O) $< -o $@

$(SYS_TYPE)/wxe_win32.$(RC_FILE_EXT): wxe_win32.rc
	$(V_at)mkdir -p $(SYS_TYPE)
	$(RESCOMP) -o $@ $< 

$(TARGET_DIR)/wxe_driver$(SO_EXT): $(WX_OBJECTS)
	$(V_at)mkdir -p $(TARGET_DIR)
	$(V_LD) $(LDFLAGS) $(WX_OBJECTS) $(WX_LIBS) -o $@

$(TARGET_DIR)/erl_gl$(SO_EXT): $(GL_OBJECTS)
	$(V_at)mkdir -p $(TARGET_DIR)
	$(V_CC) $(LDFLAGS) $(GL_OBJECTS) $(GL_LIBS) -o $@


# ----------------------------------------------------
# Release Target
# ----------------------------------------------------
include $(ERL_TOP)/make/otp_release_targets.mk
release_spec: opt
	$(INSTALL_DIR) "$(RELSYSDIR)/priv"
	$(INSTALL_DATA) ../priv/erlang-logo32.png "$(RELSYSDIR)/priv/"
	$(INSTALL_DATA) ../priv/erlang-logo64.png "$(RELSYSDIR)/priv/"
	$(INSTALL_PROGRAM) $(TARGET_DIR)/wxe_driver$(SO_EXT) "$(RELSYSDIR)/priv/"
	$(INSTALL_PROGRAM) $(TARGET_DIR)/erl_gl$(SO_EXT) "$(RELSYSDIR)/priv/"

release_docs_spec:

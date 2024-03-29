#
# %CopyrightBegin%
#
# Copyright Ericsson AB 1999-2012. All Rights Reserved.
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

#
include $(ERL_TOP)/make/target.mk
include $(ERL_TOP)/make/$(TARGET)/otp.mk

ifeq ($(TYPE),debug)
TYPEMARKER = .debug
TYPEFLAGS = -g
else
TYPEMARKER =
TYPEFLAGS =
endif

WIN_BIN_DIR = ../priv/bin
BIN_DIR = ../priv/bin/$(TARGET)
OBJ_DIR = ../priv/obj/$(TARGET)
INCLUDE_DIR= ../include

.PHONY: create_dirs

# ----------------------------------------------------
# Application version
# ----------------------------------------------------
include ../vsn.mk
VSN=$(ODBC_VSN)

# ----------------------------------------------------
# Release directory specification
# ----------------------------------------------------
RELSYSDIR = $(RELEASE_PATH)/lib/odbc-$(VSN)

# ----------------------------------------------------
# Target Specs
# ----------------------------------------------------
EI_ROOT = $(ERL_TOP)/lib/erl_interface
EI_INCLUDE = -I$(EI_ROOT)/include
ifeq ($(findstring win32,$(TARGET)),win32)
EI_LIB = -lerl_interface_md -lei_md 
ENTRY_OBJ=$(ERL_TOP)/erts/obj/$(TARGET)/port_entry.o
PORT_ENTRY_POINT=erl_port_entry
ENTRY_LDFLAGS=-entry:$(PORT_ENTRY_POINT)
WIN32_TARGET = $(WIN_BIN_DIR)/odbcserver.exe
EXE_TARGET = $(WIN32_TARGET)
else
EI_LIB = -lerl_interface -lei
UNIX_TARGET = $(BIN_DIR)/odbcserver
EXE_TARGET = $(UNIX_TARGET)
endif

C_FILES = odbcserver.c 
H_FILES = odbcserver.h

# ----------------------------------------------------
# ODBC locations and include options from configure
# ----------------------------------------------------
ODBC_LIB = -L/usr/lib -lodbc
ODBC_INCLUDE = -I/usr/include

# ----------------------------------------------------
# FLAGS
# ----------------------------------------------------
CC =  gcc
CFLAGS = $(TYPEFLAGS) -Werror=return-type -g -O2  -D_THREAD_SAFE -D_REENTRANT -DPOSIX_THREADS -D_POSIX_THREAD_SAFE_FUNCTIONS -DPACKAGE_NAME=\"\" -DPACKAGE_TARNAME=\"\" -DPACKAGE_VERSION=\"\" -DPACKAGE_STRING=\"\" -DPACKAGE_BUGREPORT=\"\" -DSTDC_HEADERS=1 -DHAVE_SYS_TYPES_H=1 -DHAVE_SYS_STAT_H=1 -DHAVE_STDLIB_H=1 -DHAVE_STRING_H=1 -DHAVE_MEMORY_H=1 -DHAVE_STRINGS_H=1 -DHAVE_INTTYPES_H=1 -DHAVE_STDINT_H=1 -DHAVE_UNISTD_H=1 -DHAVE_FCNTL_H=1 -DHAVE_NETDB_H=1 -DHAVE_STDLIB_H=1 -DHAVE_STRING_H=1 -DHAVE_SYS_SOCKET_H=1 -DHAVE_SQL_H=1 -DHAVE_SQLEXT_H=1 -DHAVE_STRUCT_SOCKADDR_IN6_SIN6_ADDR=1 -DHAVE_MEMSET=1 -DHAVE_SOCKET=1 -DHAVE_PTHREAD_H=1 -DSIZEOF_VOID_P=4 
EI_LDFLAGS = -L$(EI_ROOT)/obj$(TYPEMARKER)/$(TARGET)
LD = ld
LDFLAGS =  $(ODBC_LIB) $(EI_LDFLAGS)
LIBS =  -lpthread $(EI_LIB)
INCLUDES = -I. $(ODBC_INCLUDE) $(EI_INCLUDE)
TARGET_FLAGS =  -DUNIX

# ----------------------------------------------------
# Targets
# ----------------------------------------------------
_create_dirs := $(shell mkdir -p $(OBJ_DIR) $(BIN_DIR))

ifdef EXE_TARGET
opt debug: $(EXE_TARGET) 
else
opt debug:
endif

clean:	
	rm -f core *~ 
	rm -f $(OBJ_DIR)/*
docs:

# ----------------------------------------------------
# Special Build Targets
# ----------------------------------------------------

ifdef UNIX_TARGET
$(UNIX_TARGET): $(OBJ_DIR)/odbcserver.o
	$(V_CC) $(CFLAGS) -o $@ $(OBJ_DIR)/odbcserver.o $(LDFLAGS) $(LIBS)
endif

ifdef WIN32_TARGET
$(WIN32_TARGET): $(OBJ_DIR)/odbcserver.o
	$(V_LD) $(LDFLAGS) -o $@ $(OBJ_DIR)/odbcserver.o $(ENTRY_OBJ) \
		$(LIBS) $(ENTRY_LDFLAGS)
endif

$(OBJ_DIR)/odbcserver.o: odbcserver.c
	$(V_CC) $(CFLAGS) $(INCLUDES) $(TARGET_FLAGS) -o $@ -c odbcserver.c

# ----------------------------------------------------
# Release Target
# ---------------------------------------------------- 

include $(ERL_TOP)/make/otp_release_targets.mk

release_spec: opt
ifdef EXE_TARGET
	$(INSTALL_DIR) "$(RELSYSDIR)/c_src"
	$(INSTALL_DATA) $(C_FILES) $(H_FILES) "$(RELSYSDIR)/c_src"
	$(INSTALL_DIR) "$(RELSYSDIR)/priv"
	$(INSTALL_DIR) "$(RELSYSDIR)/priv/bin"
	$(INSTALL_DIR) "$(RELSYSDIR)/priv/obj"
	$(INSTALL_PROGRAM) $(EXE_TARGET) "$(RELSYSDIR)/priv/bin"
endif

release_docs_spec:

# Generated dependency rules
# 
# ethread lib objects...
$(r_OBJ_DIR)/ethr_aux.o: common/ethr_aux.c \
 /root/Public/otp_src_17.4/erts/$(TARGET)/config.h \
 ../include/internal/ethread.h ../include/internal/ethread_inline.h \
 ../include/internal/erl_errno.h ../include/internal/i386/ethread.h \
 ../include/internal/i386/ethr_membar.h ../include/internal/i386/atomic.h \
 ../include/internal/i386/ethr_dw_atomic.h \
 ../include/internal/i386/spinlock.h ../include/internal/i386/rwlock.h \
 ../include/internal/libatomic_ops/ethread.h \
 ../include/internal/gcc/ethread.h ../include/internal/ethr_atomics.h \
 ../include/internal/ethr_optimized_fallbacks.h \
 ../include/internal/pthread/ethr_event.h \
 ../include/internal/ethr_mutex.h ../include/internal/ethr_internal.h \
 ../include/internal/erl_misc_utils.h
$(r_OBJ_DIR)/ethr_atomics.o: common/ethr_atomics.c \
 /root/Public/otp_src_17.4/erts/$(TARGET)/config.h \
 ../include/internal/ethread.h ../include/internal/ethread_inline.h \
 ../include/internal/erl_errno.h ../include/internal/i386/ethread.h \
 ../include/internal/i386/ethr_membar.h ../include/internal/i386/atomic.h \
 ../include/internal/i386/ethr_dw_atomic.h \
 ../include/internal/i386/spinlock.h ../include/internal/i386/rwlock.h \
 ../include/internal/libatomic_ops/ethread.h \
 ../include/internal/gcc/ethread.h ../include/internal/ethr_atomics.h \
 ../include/internal/ethr_optimized_fallbacks.h \
 ../include/internal/pthread/ethr_event.h \
 ../include/internal/ethr_mutex.h ../include/internal/ethr_internal.h \
 ../include/internal/erl_misc_utils.h
$(r_OBJ_DIR)/ethr_mutex.o: common/ethr_mutex.c \
 /root/Public/otp_src_17.4/erts/$(TARGET)/config.h \
 ../include/internal/ethread.h ../include/internal/ethread_inline.h \
 ../include/internal/erl_errno.h ../include/internal/i386/ethread.h \
 ../include/internal/i386/ethr_membar.h ../include/internal/i386/atomic.h \
 ../include/internal/i386/ethr_dw_atomic.h \
 ../include/internal/i386/spinlock.h ../include/internal/i386/rwlock.h \
 ../include/internal/libatomic_ops/ethread.h \
 ../include/internal/gcc/ethread.h ../include/internal/ethr_atomics.h \
 ../include/internal/ethr_optimized_fallbacks.h \
 ../include/internal/pthread/ethr_event.h \
 ../include/internal/ethr_mutex.h ../include/internal/ethr_internal.h \
 ../include/internal/erl_misc_utils.h
$(r_OBJ_DIR)/ethr_cbf.o: common/ethr_cbf.c \
 /root/Public/otp_src_17.4/erts/$(TARGET)/config.h \
 ../include/internal/ethread.h ../include/internal/ethread_inline.h \
 ../include/internal/erl_errno.h ../include/internal/i386/ethread.h \
 ../include/internal/i386/ethr_membar.h ../include/internal/i386/atomic.h \
 ../include/internal/i386/ethr_dw_atomic.h \
 ../include/internal/i386/spinlock.h ../include/internal/i386/rwlock.h \
 ../include/internal/libatomic_ops/ethread.h \
 ../include/internal/gcc/ethread.h ../include/internal/ethr_atomics.h \
 ../include/internal/ethr_optimized_fallbacks.h \
 ../include/internal/pthread/ethr_event.h \
 ../include/internal/ethr_mutex.h
$(r_OBJ_DIR)/ethread.o: pthread/ethread.c \
 /root/Public/otp_src_17.4/erts/$(TARGET)/config.h \
 ../include/internal/ethread.h ../include/internal/ethread_inline.h \
 ../include/internal/erl_errno.h ../include/internal/i386/ethread.h \
 ../include/internal/i386/ethr_membar.h ../include/internal/i386/atomic.h \
 ../include/internal/i386/ethr_dw_atomic.h \
 ../include/internal/i386/spinlock.h ../include/internal/i386/rwlock.h \
 ../include/internal/libatomic_ops/ethread.h \
 ../include/internal/gcc/ethread.h ../include/internal/ethr_atomics.h \
 ../include/internal/ethr_optimized_fallbacks.h \
 ../include/internal/pthread/ethr_event.h \
 ../include/internal/ethr_mutex.h ../include/internal/ethr_internal.h \
 ../include/internal/erl_misc_utils.h
$(r_OBJ_DIR)/ethr_event.o: pthread/ethr_event.c \
 /root/Public/otp_src_17.4/erts/$(TARGET)/config.h \
 ../include/internal/ethread.h ../include/internal/ethread_inline.h \
 ../include/internal/erl_errno.h ../include/internal/i386/ethread.h \
 ../include/internal/i386/ethr_membar.h ../include/internal/i386/atomic.h \
 ../include/internal/i386/ethr_dw_atomic.h \
 ../include/internal/i386/spinlock.h ../include/internal/i386/rwlock.h \
 ../include/internal/libatomic_ops/ethread.h \
 ../include/internal/gcc/ethread.h ../include/internal/ethr_atomics.h \
 ../include/internal/ethr_optimized_fallbacks.h \
 ../include/internal/pthread/ethr_event.h \
 ../include/internal/ethr_mutex.h
$(r_OBJ_DIR)/ethr_x86_sse2_asm.o: pthread/ethr_x86_sse2_asm.c \
 /root/Public/otp_src_17.4/erts/$(TARGET)/config.h \
 ../include/internal/ethread.h ../include/internal/ethread_inline.h \
 ../include/internal/erl_errno.h ../include/internal/i386/ethread.h \
 ../include/internal/i386/ethr_membar.h ../include/internal/i386/atomic.h \
 ../include/internal/i386/ethr_dw_atomic.h \
 ../include/internal/i386/spinlock.h ../include/internal/i386/rwlock.h \
 ../include/internal/libatomic_ops/ethread.h \
 ../include/internal/gcc/ethread.h ../include/internal/ethr_atomics.h \
 ../include/internal/ethr_optimized_fallbacks.h \
 ../include/internal/pthread/ethr_event.h \
 ../include/internal/ethr_mutex.h
# erts_internal_r lib objects...
$(r_OBJ_DIR)/erl_printf_format.o: common/erl_printf_format.c \
 /root/Public/otp_src_17.4/erts/$(TARGET)/config.h \
 ../include/internal/erl_errno.h ../include/internal/erl_printf.h \
 ../include/internal/erl_printf_format.h \
 ../include/$(TARGET)/erl_int_sizes_config.h
$(r_OBJ_DIR)/erl_printf.o: common/erl_printf.c \
 /root/Public/otp_src_17.4/erts/$(TARGET)/config.h \
 ../include/internal/erl_errno.h ../include/internal/erl_printf.h \
 ../include/internal/erl_printf_format.h \
 ../include/$(TARGET)/erl_int_sizes_config.h
$(r_OBJ_DIR)/erl_misc_utils.o: common/erl_misc_utils.c \
 /root/Public/otp_src_17.4/erts/$(TARGET)/config.h \
 ../include/internal/ethread_inline.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h
# erts_internal lib objects...
$(OBJ_DIR)/erl_printf_format.o: common/erl_printf_format.c \
 /root/Public/otp_src_17.4/erts/$(TARGET)/config.h \
 ../include/internal/erl_errno.h ../include/internal/erl_printf.h \
 ../include/internal/erl_printf_format.h \
 ../include/$(TARGET)/erl_int_sizes_config.h
$(OBJ_DIR)/erl_printf.o: common/erl_printf.c \
 /root/Public/otp_src_17.4/erts/$(TARGET)/config.h \
 ../include/internal/erl_errno.h ../include/internal/erl_printf.h \
 ../include/internal/erl_printf_format.h \
 ../include/$(TARGET)/erl_int_sizes_config.h
$(OBJ_DIR)/erl_misc_utils.o: common/erl_misc_utils.c \
 /root/Public/otp_src_17.4/erts/$(TARGET)/config.h \
 ../include/internal/ethread_inline.h \
 ../include/internal/erl_misc_utils.h ../include/internal/erl_errno.h
# erts_r lib objects...
$(r_OBJ_DIR)/erl_memory_trace_parser.o: common/erl_memory_trace_parser.c \
 ../include/erl_memory_trace_parser.h \
 ../include/erl_fixed_size_int_types.h \
 ../include/$(TARGET)/erl_int_sizes_config.h \
 ../include/internal/erl_memory_trace_protocol.h
# erts lib objects...
$(OBJ_DIR)/erl_memory_trace_parser.o: common/erl_memory_trace_parser.c \
 ../include/erl_memory_trace_parser.h \
 ../include/erl_fixed_size_int_types.h \
 ../include/$(TARGET)/erl_int_sizes_config.h \
 ../include/internal/erl_memory_trace_protocol.h
# EOF

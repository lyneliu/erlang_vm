/*
 * -----------------------------------------------------------------------
 *
 * NOTE: Do *not* edit this file; instead, edit 'erl_alloc.types' and
 *       build again! This file was automatically generated by
 *       'make_alloc_types' on Sun Jan 11 03:12:14 2015.
 *
 * -----------------------------------------------------------------------
 *
 * 
 * Copyright Ericsson AB 2015. All Rights Reserved.
 * 
 * The contents of this file are subject to the Erlang Public License,
 * Version 1.1, (the "License"); you may not use this file except in
 * compliance with the License. You should have received a copy of the
 * Erlang Public License along with this software. If not, it can be
 * retrieved online at http://www.erlang.org/.
 * 
 * Software distributed under the License is distributed on an "AS IS"
 * basis, WITHOUT WARRANTY OF ANY KIND, either express or implied. See
 * the License for the specific language governing rights and limitations
 * under the License.
 * 
 */

#ifndef ERL_ALLOC_TYPES_H__
#define ERL_ALLOC_TYPES_H__


/* --- Allocator numbers -------------------------------------------------- */

#define ERTS_ALC_A_INVALID (0)

#define ERTS_ALC_A_MIN (1)

#define ERTS_ALC_A_SYSTEM (1)
#define ERTS_ALC_A_TEMPORARY (2)
#define ERTS_ALC_A_SHORT_LIVED (3)
#define ERTS_ALC_A_STANDARD (4)
#define ERTS_ALC_A_LONG_LIVED (5)
#define ERTS_ALC_A_EHEAP (6)
#define ERTS_ALC_A_ETS (7)
#define ERTS_ALC_A_FIXED_SIZE (8)
#define ERTS_ALC_A_BINARY (9)
#define ERTS_ALC_A_DRIVER (10)

#define ERTS_ALC_A_MAX (10)


/* --- Class numbers ------------------------------------------------------ */

#define ERTS_ALC_C_INVALID (0)

#define ERTS_ALC_C_MIN (1)

#define ERTS_ALC_C_PROCESSES  (1)
#define ERTS_ALC_C_ETS  (2)
#define ERTS_ALC_C_BINARIES  (3)
#define ERTS_ALC_C_ATOM  (4)
#define ERTS_ALC_C_SYSTEM  (5)
#define ERTS_ALC_C_CODE  (6)

#define ERTS_ALC_C_MAX (6)


/* --- Type number intervals ---------------------------------------------- */

#define ERTS_ALC_N_INVALID (0)

#define ERTS_ALC_N_MIN (1)

/* Type numbers used for sys_alloc */
#define ERTS_ALC_N_MIN_A_SYSTEM (1)
#define ERTS_ALC_N_MAX_A_SYSTEM (5)

/* Type numbers used for temp_alloc */
#define ERTS_ALC_N_MIN_A_TEMPORARY (6)
#define ERTS_ALC_N_MAX_A_TEMPORARY (24)

/* Type numbers used for sl_alloc */
#define ERTS_ALC_N_MIN_A_SHORT_LIVED (25)
#define ERTS_ALC_N_MAX_A_SHORT_LIVED (59)

/* Type numbers used for std_alloc */
#define ERTS_ALC_N_MIN_A_STANDARD (60)
#define ERTS_ALC_N_MAX_A_STANDARD (95)

/* Type numbers used for ll_alloc */
#define ERTS_ALC_N_MIN_A_LONG_LIVED (96)
#define ERTS_ALC_N_MAX_A_LONG_LIVED (135)

/* Type numbers used for eheap_alloc */
#define ERTS_ALC_N_MIN_A_EHEAP (136)
#define ERTS_ALC_N_MAX_A_EHEAP (139)

/* Type numbers used for ets_alloc */
#define ERTS_ALC_N_MIN_A_ETS (140)
#define ERTS_ALC_N_MAX_A_ETS (148)

/* Type numbers used for fix_alloc */
#define ERTS_ALC_N_MIN_A_FIXED_SIZE (149)
#define ERTS_ALC_N_MAX_A_FIXED_SIZE (154)

/* Type numbers used for binary_alloc */
#define ERTS_ALC_N_MIN_A_BINARY (155)
#define ERTS_ALC_N_MAX_A_BINARY (156)

/* Type numbers used for driver_alloc */
#define ERTS_ALC_N_MIN_A_DRIVER (157)
#define ERTS_ALC_N_MAX_A_DRIVER (174)

#define ERTS_ALC_N_MAX (174)


/* --- Multi thread use of allocators -------------------------------------- */

#define ERTS_ALC_MTA_SYSTEM (1)
#define ERTS_ALC_MTA_TEMPORARY (0)
#define ERTS_ALC_MTA_SHORT_LIVED (0)
#define ERTS_ALC_MTA_STANDARD (0)
#define ERTS_ALC_MTA_LONG_LIVED (0)
#define ERTS_ALC_MTA_EHEAP (0)
#define ERTS_ALC_MTA_ETS (0)
#define ERTS_ALC_MTA_FIXED_SIZE (0)
#define ERTS_ALC_MTA_BINARY (1)
#define ERTS_ALC_MTA_DRIVER (1)


/* --- Types --------------------------------------------------------------- */

typedef Uint32 ErtsAlcType_t; /* The type used for memory types */

#define ERTS_ALC_T_INVALID (0)

#define ERTS_ALC_T_UNDEF (209)
#define ERTS_ALC_T_NBIF_TABLE (337)
#define ERTS_ALC_T_INFO_DSBUF (465)
#define ERTS_ALC_T_HIPE (593)
#define ERTS_ALC_T_PUTENV_STR (721)
#define ERTS_ALC_T_TMP_HEAP (786)
#define ERTS_ALC_T_MSG_ROOTS (914)
#define ERTS_ALC_T_ROOTSET (1042)
#define ERTS_ALC_T_LOADER_TMP (1250)
#define ERTS_ALC_T_NC_TMP (1362)
#define ERTS_ALC_T_TMP (1490)
#define ERTS_ALC_T_DCTRL_BUF (1618)
#define ERTS_ALC_T_TMP_DIST_BUF (1746)
#define ERTS_ALC_T_ESTACK (1874)
#define ERTS_ALC_T_DB_TMP (1954)
#define ERTS_ALC_T_DB_MC_STK (2082)
#define ERTS_ALC_T_DB_MS_CMPL_HEAP (2210)
#define ERTS_ALC_T_LOGGER_DSBUF (2386)
#define ERTS_ALC_T_TMP_DSBUF (2514)
#define ERTS_ALC_T_DDLL_TMP_BUF (2642)
#define ERTS_ALC_T_RE_TMP_BUF (2770)
#define ERTS_ALC_T_TEMP_TERM (2898)
#define ERTS_ALC_T_SYS_READ_BUF (3026)
#define ERTS_ALC_T_ENVIRONMENT (3154)
#define ERTS_ALC_T_PEND_SUSPEND (3219)
#define ERTS_ALC_T_PROC_LIST (3347)
#define ERTS_ALC_T_SAVED_ESTACK (3475)
#define ERTS_ALC_T_PREPARED_CODE (3683)
#define ERTS_ALC_T_SL_BIF_TIMER (3731)
#define ERTS_ALC_T_DB_FIXATION (3875)
#define ERTS_ALC_T_DB_FIX_DEL (4003)
#define ERTS_ALC_T_DB_MS_RUN_HEAP (4131)
#define ERTS_ALC_T_DB_PROC_CLEANUP (4259)
#define ERTS_ALC_T_PORT_TASK (4435)
#define ERTS_ALC_T_PT_HNDL_LIST (4563)
#define ERTS_ALC_T_MISC_OP_LIST (4691)
#define ERTS_ALC_T_PORT_NAMES (4819)
#define ERTS_ALC_T_PTAB_LIST_DEL (4883)
#define ERTS_ALC_T_PTAB_LIST_CNKI (5011)
#define ERTS_ALC_T_PTAB_LIST_PIDS (5139)
#define ERTS_ALC_T_RE_SUBJECT (5331)
#define ERTS_ALC_T_RE_STACK (5459)
#define ERTS_ALC_T_UNICODE_BUFFER (5587)
#define ERTS_ALC_T_BINARY_BUFFER (5715)
#define ERTS_ALC_T_TMP_CPU_IDS (5843)
#define ERTS_ALC_T_EXT_TERM_DATA (5907)
#define ERTS_ALC_T_CODE_IX_LOCK_Q (6099)
#define ERTS_ALC_T_BUSY_CALLER_TAB (6227)
#define ERTS_ALC_T_BUSY_CALLER (6355)
#define ERTS_ALC_T_PROC_SYS_TSK (6419)
#define ERTS_ALC_T_PROC_SYS_TSK_QS (6547)
#define ERTS_ALC_T_THR_Q_SL (6739)
#define ERTS_ALC_T_ETHR_SL (6867)
#define ERTS_ALC_T_AINFO_REQ (6995)
#define ERTS_ALC_T_SCHED_WTIME_REQ (7123)
#define ERTS_ALC_T_GC_INFO_REQ (7251)
#define ERTS_ALC_T_FD_LIST (7379)
#define ERTS_ALC_T_ACTIVE_FD_ARR (7507)
#define ERTS_ALC_T_POLLSET_UPDREQ (7635)
#define ERTS_ALC_T_REG_PROC (7700)
#define ERTS_ALC_T_LINK_LH (7828)
#define ERTS_ALC_T_SUSPEND_MON (7956)
#define ERTS_ALC_T_LL_BIF_TIMER (8084)
#define ERTS_ALC_T_REG_TABLE (8276)
#define ERTS_ALC_T_FUN_TABLE (8420)
#define ERTS_ALC_T_DIST_TABLE (8532)
#define ERTS_ALC_T_NODE_TABLE (8660)
#define ERTS_ALC_T_MODULE_REFS (8804)
#define ERTS_ALC_T_DCACHE (8916)
#define ERTS_ALC_T_DIST_ENTRY (9044)
#define ERTS_ALC_T_NODE_ENTRY (9172)
#define ERTS_ALC_T_ARG_REG (9236)
#define ERTS_ALC_T_PROC_DICT (9364)
#define ERTS_ALC_T_CALLS_BUF (9492)
#define ERTS_ALC_T_BPD (9684)
#define ERTS_ALC_T_LINEBUF (9812)
#define ERTS_ALC_T_IOQ (9940)
#define ERTS_ALC_T_BITS_BUF (10068)
#define ERTS_ALC_T_DB_NTAB_ENT (10148)
#define ERTS_ALC_T_DDLL_HANDLE (10324)
#define ERTS_ALC_T_NODES_MON (10388)
#define ERTS_ALC_T_RE_HEAP (10580)
#define ERTS_ALC_T_PSD (10644)
#define ERTS_ALC_T_PRTSD (10836)
#define ERTS_ALC_T_ZLIB (10964)
#define ERTS_ALC_T_THR_Q (11092)
#define ERTS_ALC_T_ETHR_STD (11220)
#define ERTS_ALC_T_DDLL_PROCESS (11348)
#define ERTS_ALC_T_MONITOR_LH (11412)
#define ERTS_ALC_T_NLINK_LH (11540)
#define ERTS_ALC_T_DB_HEIR_DATA (11684)
#define ERTS_ALC_T_NIF_TRAP_EXPORT (11876)
#define ERTS_ALC_T_PORT_DATA_HEAP (11988)
#define ERTS_ALC_T_FD_ENTRY_BUF (12116)
#define ERTS_ALC_T_PRT_REP_EXIT (12244)
#define ERTS_ALC_T_ATOM (12357)
#define ERTS_ALC_T_MODULE (12517)
#define ERTS_ALC_T_FUN_ENTRY (12645)
#define ERTS_ALC_T_ATOM_TXT (12741)
#define ERTS_ALC_T_BIF_TIMER_TABLE (12885)
#define ERTS_ALC_T_ATOM_TABLE (12997)
#define ERTS_ALC_T_EXPORT_TABLE (13157)
#define ERTS_ALC_T_MODULE_TABLE (13285)
#define ERTS_ALC_T_TAINT (13413)
#define ERTS_ALC_T_PROC_TABLE (13461)
#define ERTS_ALC_T_PORT_TABLE (13653)
#define ERTS_ALC_T_TIMER_WHEEL (13781)
#define ERTS_ALC_T_ASYNC_DATA (13909)
#define ERTS_ALC_T_DB_TABLES (13989)
#define ERTS_ALC_T_INSTR_INFO (14165)
#define ERTS_ALC_T_SCHDLR_SLP_INFO (14293)
#define ERTS_ALC_T_RUNQS (14421)
#define ERTS_ALC_T_DDLL_ERRCODES (14549)
#define ERTS_ALC_T_PRE_ALLOC_DATA (14677)
#define ERTS_ALC_T_CPUDATA (14805)
#define ERTS_ALC_T_CPU_GRPS_MAP (14933)
#define ERTS_ALC_T_AUX_WORK_TMO (15061)
#define ERTS_ALC_T_MISC_AUX_WORK_Q (15189)
#define ERTS_ALC_T_PROC_INTERVAL (15317)
#define ERTS_ALC_T_THR_Q_LL (15445)
#define ERTS_ALC_T_ETHR_LL (15573)
#define ERTS_ALC_T_CODE (15717)
#define ERTS_ALC_T_DB_MS_PSDO_PROC (15781)
#define ERTS_ALC_T_SCHDLR_DATA (15957)
#define ERTS_ALC_T_LL_TEMP_TERM (16085)
#define ERTS_ALC_T_EXPORT (16229)
#define ERTS_ALC_T_DRV_TAB (16341)
#define ERTS_ALC_T_DRV_EV_STATE (16469)
#define ERTS_ALC_T_POLLSET (16597)
#define ERTS_ALC_T_POLL_FDS (16725)
#define ERTS_ALC_T_POLL_RES_EVS (16853)
#define ERTS_ALC_T_FD_STATUS (16981)
#define ERTS_ALC_T_SELECT_FDS (17109)
#define ERTS_ALC_T_FD_TAB (17237)
#define ERTS_ALC_T_CS_PROG_PATH (17365)
#define ERTS_ALC_T_BEAM_REGISTER (17430)
#define ERTS_ALC_T_HEAP (17558)
#define ERTS_ALC_T_OLD_HEAP (17686)
#define ERTS_ALC_T_HEAP_FRAG (17814)
#define ERTS_ALC_T_DB_TABLE (17959)
#define ERTS_ALC_T_DB_SEG (18087)
#define ERTS_ALC_T_DB_SEG_TAB (18215)
#define ERTS_ALC_T_DB_STK (18343)
#define ERTS_ALC_T_DB_TRANS_TAB (18471)
#define ERTS_ALC_T_DB_SEL_LIST (18599)
#define ERTS_ALC_T_DB_DMC_ERROR (18727)
#define ERTS_ALC_T_DB_DMC_ERR_INFO (18855)
#define ERTS_ALC_T_DB_TERM (18983)
#define ERTS_ALC_T_PROC (19096)
#define ERTS_ALC_T_MSG_REF (19224)
#define ERTS_ALC_T_MONITOR_SH (19352)
#define ERTS_ALC_T_NLINK_SH (19480)
#define ERTS_ALC_T_DRV_EV_D_STATE (19672)
#define ERTS_ALC_T_DRV_SEL_D_STATE (19800)
#define ERTS_ALC_T_DRV_BINARY (19897)
#define ERTS_ALC_T_BINARY (20025)
#define ERTS_ALC_T_PORT (20186)
#define ERTS_ALC_T_DRV (20314)
#define ERTS_ALC_T_DRIVER (20442)
#define ERTS_ALC_T_DRV_CMD_DATA (20570)
#define ERTS_ALC_T_DRV_CTRL_DATA (20698)
#define ERTS_ALC_T_DRV_CALL_DATA (20826)
#define ERTS_ALC_T_NIF (20954)
#define ERTS_ALC_T_PORT_DATA_LOCK (21082)
#define ERTS_ALC_T_DRV_THR_OPTS (21210)
#define ERTS_ALC_T_DRV_TID (21338)
#define ERTS_ALC_T_DRV_MTX (21466)
#define ERTS_ALC_T_DRV_CND (21594)
#define ERTS_ALC_T_DRV_RWLCK (21722)
#define ERTS_ALC_T_DRV_TSD (21850)
#define ERTS_ALC_T_THR_Q_EL (21978)
#define ERTS_ALC_T_THR_Q_EL_SL (22106)
#define ERTS_ALC_T_MISC_AUX_WORK (22234)
#define ERTS_ALC_T_ASYNC (22362)


/* --- Field sizes, masks, and shifts -------------------------------------- */

#define ERTS_ALC_A_BITS (4)
#define ERTS_ALC_C_BITS (3)
#define ERTS_ALC_N_BITS (8)
#define ERTS_ALC_T_BITS (15)

#define ERTS_ALC_A_MASK (15)
#define ERTS_ALC_C_MASK (7)
#define ERTS_ALC_N_MASK (255)
#define ERTS_ALC_T_MASK (32767)

#define ERTS_ALC_A_SHIFT (0)
#define ERTS_ALC_C_SHIFT (4)
#define ERTS_ALC_N_SHIFT (7)


/* --- Mappings ------------------------------------------------------------ */

/* type -> type number */
#define ERTS_ALC_T2N(T) (((T) >> ERTS_ALC_N_SHIFT) & ERTS_ALC_N_MASK)

/* type -> allocator number */
#define ERTS_ALC_T2A(T) (((T) >> ERTS_ALC_A_SHIFT) & ERTS_ALC_A_MASK)

/* type -> class number */
#define ERTS_ALC_T2C(T) (((T) >> ERTS_ALC_C_SHIFT) & ERTS_ALC_C_MASK)

/* type number -> type */
#define ERTS_ALC_N2T(N) (erts_alc_n2t[(N)])

/* type number -> type description */
#define ERTS_ALC_N2TD(N) (erts_alc_n2td[(N)])

/* type -> type description */
#define ERTS_ALC_T2TD(T) (ERTS_ALC_N2TD(ERTS_ALC_T2N((T))))

/* class number -> class description */
#define ERTS_ALC_C2CD(C) (erts_alc_c2cd[(C)])

/* allocator number -> allocator description */
#define ERTS_ALC_A2AD(A) (erts_alc_a2ad[(A)])

extern const ErtsAlcType_t erts_alc_n2t[];
extern const char *erts_alc_n2td[];
extern const char *erts_alc_c2cd[];
extern const char *erts_alc_a2ad[];

#ifdef ERTS_ALC_INTERNAL__

const ErtsAlcType_t erts_alc_n2t[] = {
  ERTS_ALC_T_INVALID,
  ERTS_ALC_T_UNDEF,
  ERTS_ALC_T_NBIF_TABLE,
  ERTS_ALC_T_INFO_DSBUF,
  ERTS_ALC_T_HIPE,
  ERTS_ALC_T_PUTENV_STR,
  ERTS_ALC_T_TMP_HEAP,
  ERTS_ALC_T_MSG_ROOTS,
  ERTS_ALC_T_ROOTSET,
  ERTS_ALC_T_LOADER_TMP,
  ERTS_ALC_T_NC_TMP,
  ERTS_ALC_T_TMP,
  ERTS_ALC_T_DCTRL_BUF,
  ERTS_ALC_T_TMP_DIST_BUF,
  ERTS_ALC_T_ESTACK,
  ERTS_ALC_T_DB_TMP,
  ERTS_ALC_T_DB_MC_STK,
  ERTS_ALC_T_DB_MS_CMPL_HEAP,
  ERTS_ALC_T_LOGGER_DSBUF,
  ERTS_ALC_T_TMP_DSBUF,
  ERTS_ALC_T_DDLL_TMP_BUF,
  ERTS_ALC_T_RE_TMP_BUF,
  ERTS_ALC_T_TEMP_TERM,
  ERTS_ALC_T_SYS_READ_BUF,
  ERTS_ALC_T_ENVIRONMENT,
  ERTS_ALC_T_PEND_SUSPEND,
  ERTS_ALC_T_PROC_LIST,
  ERTS_ALC_T_SAVED_ESTACK,
  ERTS_ALC_T_PREPARED_CODE,
  ERTS_ALC_T_SL_BIF_TIMER,
  ERTS_ALC_T_DB_FIXATION,
  ERTS_ALC_T_DB_FIX_DEL,
  ERTS_ALC_T_DB_MS_RUN_HEAP,
  ERTS_ALC_T_DB_PROC_CLEANUP,
  ERTS_ALC_T_PORT_TASK,
  ERTS_ALC_T_PT_HNDL_LIST,
  ERTS_ALC_T_MISC_OP_LIST,
  ERTS_ALC_T_PORT_NAMES,
  ERTS_ALC_T_PTAB_LIST_DEL,
  ERTS_ALC_T_PTAB_LIST_CNKI,
  ERTS_ALC_T_PTAB_LIST_PIDS,
  ERTS_ALC_T_RE_SUBJECT,
  ERTS_ALC_T_RE_STACK,
  ERTS_ALC_T_UNICODE_BUFFER,
  ERTS_ALC_T_BINARY_BUFFER,
  ERTS_ALC_T_TMP_CPU_IDS,
  ERTS_ALC_T_EXT_TERM_DATA,
  ERTS_ALC_T_CODE_IX_LOCK_Q,
  ERTS_ALC_T_BUSY_CALLER_TAB,
  ERTS_ALC_T_BUSY_CALLER,
  ERTS_ALC_T_PROC_SYS_TSK,
  ERTS_ALC_T_PROC_SYS_TSK_QS,
  ERTS_ALC_T_THR_Q_SL,
  ERTS_ALC_T_ETHR_SL,
  ERTS_ALC_T_AINFO_REQ,
  ERTS_ALC_T_SCHED_WTIME_REQ,
  ERTS_ALC_T_GC_INFO_REQ,
  ERTS_ALC_T_FD_LIST,
  ERTS_ALC_T_ACTIVE_FD_ARR,
  ERTS_ALC_T_POLLSET_UPDREQ,
  ERTS_ALC_T_REG_PROC,
  ERTS_ALC_T_LINK_LH,
  ERTS_ALC_T_SUSPEND_MON,
  ERTS_ALC_T_LL_BIF_TIMER,
  ERTS_ALC_T_REG_TABLE,
  ERTS_ALC_T_FUN_TABLE,
  ERTS_ALC_T_DIST_TABLE,
  ERTS_ALC_T_NODE_TABLE,
  ERTS_ALC_T_MODULE_REFS,
  ERTS_ALC_T_DCACHE,
  ERTS_ALC_T_DIST_ENTRY,
  ERTS_ALC_T_NODE_ENTRY,
  ERTS_ALC_T_ARG_REG,
  ERTS_ALC_T_PROC_DICT,
  ERTS_ALC_T_CALLS_BUF,
  ERTS_ALC_T_BPD,
  ERTS_ALC_T_LINEBUF,
  ERTS_ALC_T_IOQ,
  ERTS_ALC_T_BITS_BUF,
  ERTS_ALC_T_DB_NTAB_ENT,
  ERTS_ALC_T_DDLL_HANDLE,
  ERTS_ALC_T_NODES_MON,
  ERTS_ALC_T_RE_HEAP,
  ERTS_ALC_T_PSD,
  ERTS_ALC_T_PRTSD,
  ERTS_ALC_T_ZLIB,
  ERTS_ALC_T_THR_Q,
  ERTS_ALC_T_ETHR_STD,
  ERTS_ALC_T_DDLL_PROCESS,
  ERTS_ALC_T_MONITOR_LH,
  ERTS_ALC_T_NLINK_LH,
  ERTS_ALC_T_DB_HEIR_DATA,
  ERTS_ALC_T_NIF_TRAP_EXPORT,
  ERTS_ALC_T_PORT_DATA_HEAP,
  ERTS_ALC_T_FD_ENTRY_BUF,
  ERTS_ALC_T_PRT_REP_EXIT,
  ERTS_ALC_T_ATOM,
  ERTS_ALC_T_MODULE,
  ERTS_ALC_T_FUN_ENTRY,
  ERTS_ALC_T_ATOM_TXT,
  ERTS_ALC_T_BIF_TIMER_TABLE,
  ERTS_ALC_T_ATOM_TABLE,
  ERTS_ALC_T_EXPORT_TABLE,
  ERTS_ALC_T_MODULE_TABLE,
  ERTS_ALC_T_TAINT,
  ERTS_ALC_T_PROC_TABLE,
  ERTS_ALC_T_PORT_TABLE,
  ERTS_ALC_T_TIMER_WHEEL,
  ERTS_ALC_T_ASYNC_DATA,
  ERTS_ALC_T_DB_TABLES,
  ERTS_ALC_T_INSTR_INFO,
  ERTS_ALC_T_SCHDLR_SLP_INFO,
  ERTS_ALC_T_RUNQS,
  ERTS_ALC_T_DDLL_ERRCODES,
  ERTS_ALC_T_PRE_ALLOC_DATA,
  ERTS_ALC_T_CPUDATA,
  ERTS_ALC_T_CPU_GRPS_MAP,
  ERTS_ALC_T_AUX_WORK_TMO,
  ERTS_ALC_T_MISC_AUX_WORK_Q,
  ERTS_ALC_T_PROC_INTERVAL,
  ERTS_ALC_T_THR_Q_LL,
  ERTS_ALC_T_ETHR_LL,
  ERTS_ALC_T_CODE,
  ERTS_ALC_T_DB_MS_PSDO_PROC,
  ERTS_ALC_T_SCHDLR_DATA,
  ERTS_ALC_T_LL_TEMP_TERM,
  ERTS_ALC_T_EXPORT,
  ERTS_ALC_T_DRV_TAB,
  ERTS_ALC_T_DRV_EV_STATE,
  ERTS_ALC_T_POLLSET,
  ERTS_ALC_T_POLL_FDS,
  ERTS_ALC_T_POLL_RES_EVS,
  ERTS_ALC_T_FD_STATUS,
  ERTS_ALC_T_SELECT_FDS,
  ERTS_ALC_T_FD_TAB,
  ERTS_ALC_T_CS_PROG_PATH,
  ERTS_ALC_T_BEAM_REGISTER,
  ERTS_ALC_T_HEAP,
  ERTS_ALC_T_OLD_HEAP,
  ERTS_ALC_T_HEAP_FRAG,
  ERTS_ALC_T_DB_TABLE,
  ERTS_ALC_T_DB_SEG,
  ERTS_ALC_T_DB_SEG_TAB,
  ERTS_ALC_T_DB_STK,
  ERTS_ALC_T_DB_TRANS_TAB,
  ERTS_ALC_T_DB_SEL_LIST,
  ERTS_ALC_T_DB_DMC_ERROR,
  ERTS_ALC_T_DB_DMC_ERR_INFO,
  ERTS_ALC_T_DB_TERM,
  ERTS_ALC_T_PROC,
  ERTS_ALC_T_MSG_REF,
  ERTS_ALC_T_MONITOR_SH,
  ERTS_ALC_T_NLINK_SH,
  ERTS_ALC_T_DRV_EV_D_STATE,
  ERTS_ALC_T_DRV_SEL_D_STATE,
  ERTS_ALC_T_DRV_BINARY,
  ERTS_ALC_T_BINARY,
  ERTS_ALC_T_PORT,
  ERTS_ALC_T_DRV,
  ERTS_ALC_T_DRIVER,
  ERTS_ALC_T_DRV_CMD_DATA,
  ERTS_ALC_T_DRV_CTRL_DATA,
  ERTS_ALC_T_DRV_CALL_DATA,
  ERTS_ALC_T_NIF,
  ERTS_ALC_T_PORT_DATA_LOCK,
  ERTS_ALC_T_DRV_THR_OPTS,
  ERTS_ALC_T_DRV_TID,
  ERTS_ALC_T_DRV_MTX,
  ERTS_ALC_T_DRV_CND,
  ERTS_ALC_T_DRV_RWLCK,
  ERTS_ALC_T_DRV_TSD,
  ERTS_ALC_T_THR_Q_EL,
  ERTS_ALC_T_THR_Q_EL_SL,
  ERTS_ALC_T_MISC_AUX_WORK,
  ERTS_ALC_T_ASYNC,
  ERTS_ALC_T_INVALID
};

const char *erts_alc_n2td[] = {
  "invalid_type",
  "undefined",
  "nbif_tab",
  "info_dsbuf",
  "hipe_data",
  "putenv_string",
  "tmp_heap",
  "msg_roots",
  "root_set",
  "loader_tmp",
  "nc_tmp",
  "tmp",
  "dctrl_buf",
  "tmp_dist_buf",
  "estack",
  "db_tmp",
  "db_mc_stack",
  "db_match_spec_cmpl_heap",
  "logger_dsbuf",
  "tmp_dsbuf",
  "ddll_tmp_buf",
  "re_tmp_buf",
  "temp_term",
  "sys_read_buf",
  "environment",
  "pending_suspend",
  "proc_list",
  "saved_estack",
  "prepared_code",
  "bif_timer_sl",
  "db_fixation",
  "fixed_del",
  "db_match_spec_run_heap",
  "db_proc_cleanup_state",
  "port_task",
  "port_task_handle_list",
  "misc_op_list",
  "port_names",
  "ptab_list_deleted_el",
  "ptab_list_chunk_info",
  "ptab_list_pids",
  "re_subject",
  "re_stack",
  "unicode_buffer",
  "binary_buffer",
  "tmp_cpu_ids",
  "external_term_data",
  "code_ix_lock_q",
  "busy_caller_table",
  "busy_caller",
  "proc_sys_task",
  "proc_sys_task_queues",
  "short_lived_thr_queue",
  "ethread_short_lived",
  "alloc_info_request",
  "sched_wall_time_request",
  "gc_info_request",
  "fd_list",
  "active_fd_array",
  "pollset_update_req",
  "reg_proc",
  "link_lh",
  "suspend_monitor",
  "bif_timer_ll",
  "reg_tab",
  "fun_tab",
  "dist_tab",
  "node_tab",
  "module_refs",
  "dcache",
  "dist_entry",
  "node_entry",
  "arg_reg",
  "proc_dict",
  "calls_buf",
  "bpd",
  "line_buf",
  "io_queue",
  "bits_buf",
  "db_named_table_entry",
  "ddll_handle",
  "nodes_monitor",
  "re_heap",
  "process_specific_data",
  "port_specific_data",
  "zlib",
  "thr_queue",
  "ethread_standard",
  "ddll_processes",
  "monitor_lh",
  "nlink_lh",
  "db_heir_data",
  "nif_trap_export_entry",
  "port_data_heap",
  "fd_entry_buf",
  "port_report_exit",
  "atom_entry",
  "module_entry",
  "fun_entry",
  "atom_text",
  "bif_timer_table",
  "atom_tab",
  "export_tab",
  "module_tab",
  "taint_list",
  "proc_tab",
  "port_tab",
  "timer_wheel",
  "internal_async_data",
  "db_tabs",
  "instr_info",
  "scheduler_sleep_info",
  "run_queues",
  "ddll_errcodes",
  "pre_alloc_data",
  "cpu_data",
  "cpu_groups_map",
  "aux_work_timeouts",
  "misc_aux_work_q",
  "process_interval",
  "long_lived_thr_queue",
  "ethread_long_lived",
  "code",
  "db_match_pseudo_proc",
  "scheduler_data",
  "ll_temp_term",
  "export_entry",
  "drv_tab",
  "driver_event_state",
  "pollset",
  "poll_fds",
  "poll_result_events",
  "fd_status",
  "select_fds",
  "fd_tab",
  "cs_prog_path",
  "beam_register",
  "heap",
  "old_heap",
  "heap_frag",
  "db_tab",
  "db_segment",
  "db_segment_tab",
  "db_stack",
  "db_trans_tab",
  "db_select_list",
  "db_dmc_error",
  "db_dmc_error_info",
  "db_term",
  "proc",
  "msg_ref",
  "monitor_sh",
  "nlink_sh",
  "driver_event_data_state",
  "driver_select_data_state",
  "drv_binary",
  "binary",
  "port",
  "drv_internal",
  "driver",
  "driver_command_data",
  "driver_control_data",
  "driver_call_data",
  "nif_internal",
  "port_data_lock",
  "driver_thread_opts",
  "driver_tid",
  "driver_mutex",
  "driver_cond",
  "driver_rwlock",
  "driver_tsd",
  "thr_q_element",
  "sl_thr_q_element",
  "misc_aux_work",
  "async",
  NULL
};

const char *erts_alc_c2cd[] = {
  "invalid_class",
  "process_data",
  "ets_data",
  "binary_data",
  "atom_data",
  "system_data",
  "code_data",
  NULL
};

const char *erts_alc_a2ad[] = {
  "invalid_allocator",
  "sys_alloc",
  "temp_alloc",
  "sl_alloc",
  "std_alloc",
  "ll_alloc",
  "eheap_alloc",
  "ets_alloc",
  "fix_alloc",
  "binary_alloc",
  "driver_alloc",
  NULL
};

#endif /* #ifdef ERTS_ALC_INTERNAL__ */


/* ------------------------------------------------------------------------- */
#endif /* #ifndef ERL_ALLOC_TYPES_H__ */

/*
 * Copyright (c) 2004-2005 The Trustees of Indiana University.
 *                         All rights reserved.
 * Copyright (c) 2004-2005 The Trustees of the University of Tennessee.
 *                         All rights reserved.
 * Copyright (c) 2004-2005 High Performance Computing Center Stuttgart, 
 *                         University of Stuttgart.  All rights reserved.
 * Copyright (c) 2004-2005 The Regents of the University of California.
 *                         All rights reserved.
 * $COPYRIGHT$
 * 
 * Additional copyrights may follow
 * 
 * $HEADER$
 */

#ifndef MCA_IO_ADIO_CONV_H
#define MCA_IO_ADIO_CONV_H

#include "ompi_config.h"

/* Prefix that we add to all ROMIO symbols */
#ifdef ROMIO_PREFIX
#undef ROMIO_PREFIX
#endif
#define ROMIO_PREFIX(foo) mca_io_romio_dist_##foo

/* These function #defines are separated from the MPI_File_* (and
   related) #defines mainly on principle */

/* Some places only include adio.h, not mpio.h, but still use
   MPIR_Status_set_bytes.  So add a #define here for it for those
   cases */

#ifndef MPIR_Status_set_bytes
#define MPIR_Status_set_bytes ROMIO_PREFIX(MPIR_Status_set_bytes)
#endif

/* Internal ROMIO functions (found by the illegal symbol report) */

#define ADIO_Close ROMIO_PREFIX(ADIO_Close)
#define ADIO_End ROMIO_PREFIX(ADIO_End)
#define ADIO_FileSysType_fncall ROMIO_PREFIX(ADIO_FileSysType_fncall)
#define ADIO_FileSysType_parentdir ROMIO_PREFIX(ADIO_FileSysType_parentdir)
#define ADIO_FileSysType_prefix ROMIO_PREFIX(ADIO_FileSysType_prefix)
#define ADIO_Get_shared_fp ROMIO_PREFIX(ADIO_Get_shared_fp)
#define ADIOI_Add_req_to_list ROMIO_PREFIX(ADIOI_Add_req_to_list)
#define ADIOI_Async_avail_head ROMIO_PREFIX(ADIOI_Async_avail_head)
#define ADIOI_Async_avail_tail ROMIO_PREFIX(ADIOI_Async_avail_tail)
#define ADIOI_Async_list_head ROMIO_PREFIX(ADIOI_Async_list_head)
#define ADIOI_Async_list_tail ROMIO_PREFIX(ADIOI_Async_list_tail)
#define ADIOI_Calc_aggregator ROMIO_PREFIX(ADIOI_Calc_aggregator)
#define ADIOI_Calc_file_domains ROMIO_PREFIX(ADIOI_Calc_file_domains)
#define ADIOI_Calc_my_off_len ROMIO_PREFIX(ADIOI_Calc_my_off_len)
#define ADIOI_Calc_my_req ROMIO_PREFIX(ADIOI_Calc_my_req)
#define ADIOI_Calc_others_req ROMIO_PREFIX(ADIOI_Calc_others_req)
#define ADIOI_Calloc_fn ROMIO_PREFIX(ADIOI_Calloc_fn)
#define ADIOI_cb_bcast_rank_map ROMIO_PREFIX(ADIOI_cb_bcast_rank_map)
#define ADIOI_cb_config_list_parse ROMIO_PREFIX(ADIOI_cb_config_list_parse)
#define ADIOI_cb_copy_name_array ROMIO_PREFIX(ADIOI_cb_copy_name_array)
#define ADIOI_cb_delete_name_array ROMIO_PREFIX(ADIOI_cb_delete_name_array)
#define ADIOI_cb_gather_name_array ROMIO_PREFIX(ADIOI_cb_gather_name_array)
#define ADIOI_Complete_async ROMIO_PREFIX(ADIOI_Complete_async)
#define ADIOI_Count_contiguous_blocks ROMIO_PREFIX(ADIOI_Count_contiguous_blocks)
#define ADIOI_Datatype_iscontig ROMIO_PREFIX(ADIOI_Datatype_iscontig)
#define ADIOI_Delete_flattened ROMIO_PREFIX(ADIOI_Delete_flattened)
#define ADIOI_Del_req_from_list ROMIO_PREFIX(ADIOI_Del_req_from_list)
#define ADIOI_DFLT_ERR_HANDLER ROMIO_PREFIX(ADIOI_DFLT_ERR_HANDLER)
#define ADIOI_End_call ROMIO_PREFIX(ADIOI_End_call)
#define ADIOI_Error ROMIO_PREFIX(ADIOI_Error)
#define ADIOI_Exch_and_write ROMIO_PREFIX(ADIOI_Exch_and_write)
#define ADIOI_Fill_send_buffer ROMIO_PREFIX(ADIOI_Fill_send_buffer)
#define ADIOI_Fill_user_buffer ROMIO_PREFIX(ADIOI_Fill_user_buffer)
#define ADIOI_Flatlist ROMIO_PREFIX(ADIOI_Flatlist)
#define ADIOI_Flatten_datatype ROMIO_PREFIX(ADIOI_Flatten_datatype)
#define ADIOI_Flatten ROMIO_PREFIX(ADIOI_Flatten)
#define ADIOI_Free_async_node ROMIO_PREFIX(ADIOI_Free_async_node)
#define ADIOI_Free_fn ROMIO_PREFIX(ADIOI_Free_fn)
#define ADIOI_Free_request ROMIO_PREFIX(ADIOI_Free_request)
#define ADIOI_Ftable_max ROMIO_PREFIX(ADIOI_Ftable_max)
#define ADIOI_Ftable_ptr ROMIO_PREFIX(ADIOI_Ftable_ptr)
#define ADIOI_Ftable ROMIO_PREFIX(ADIOI_Ftable)
#define ADIOI_Get_byte_offset ROMIO_PREFIX(ADIOI_Get_byte_offset)
#define ADIOI_Get_eof_offset ROMIO_PREFIX(ADIOI_Get_eof_offset)
#define ADIOI_Get_position ROMIO_PREFIX(ADIOI_Get_position)
#define ADIOI_Heap_merge ROMIO_PREFIX(ADIOI_Heap_merge)
#define ADIOI_Malloc_async_head ROMIO_PREFIX(ADIOI_Malloc_async_head)
#define ADIOI_Malloc_async_node ROMIO_PREFIX(ADIOI_Malloc_async_node)
#define ADIOI_Malloc_async_tail ROMIO_PREFIX(ADIOI_Malloc_async_tail)
#define ADIOI_Malloc_fn ROMIO_PREFIX(ADIOI_Malloc_fn)
#define ADIOI_Malloc_req_head ROMIO_PREFIX(ADIOI_Malloc_req_head)
#define ADIOI_Malloc_req_tail ROMIO_PREFIX(ADIOI_Malloc_req_tail)
#define ADIOI_Malloc_request ROMIO_PREFIX(ADIOI_Malloc_request)
#define ADIO_Init_keyval ROMIO_PREFIX(ADIO_Init_keyval)
#define ADIO_Init ROMIO_PREFIX(ADIO_Init)
#define ADIOI_Oploc_fn ROMIO_PREFIX(ADIOI_Oploc_fn)
#define ADIOI_Optimize_flattened ROMIO_PREFIX(ADIOI_Optimize_flattened)
#define ADIOI_Read_and_exch ROMIO_PREFIX(ADIOI_Read_and_exch)
#define ADIOI_Realloc_fn ROMIO_PREFIX(ADIOI_Realloc_fn)
#define ADIOI_Realloc_fn ROMIO_PREFIX(ADIOI_Realloc_fn)
#define ADIOI_Req_avail_head ROMIO_PREFIX(ADIOI_Req_avail_head)
#define ADIOI_Req_avail_tail ROMIO_PREFIX(ADIOI_Req_avail_tail)
#define ADIOI_Reqtable_max ROMIO_PREFIX(ADIOI_Reqtable_max)
#define ADIOI_Reqtable_ptr ROMIO_PREFIX(ADIOI_Reqtable_ptr)
#define ADIOI_Reqtable ROMIO_PREFIX(ADIOI_Reqtable)
#define ADIOI_R_Exchange_data ROMIO_PREFIX(ADIOI_R_Exchange_data)
#define ADIOI_SetFunctions ROMIO_PREFIX(ADIOI_SetFunctions)
#define ADIOI_Set_lock ROMIO_PREFIX(ADIOI_Set_lock)
#define ADIOI_Shfp_fname ROMIO_PREFIX(ADIOI_Shfp_fname)
#define ADIOI_Uses_generic_read ROMIO_PREFIX(ADIOI_Uses_generic_read)
#define ADIOI_Uses_generic_write ROMIO_PREFIX(ADIOI_Uses_generic_write)
#define ADIOI_W_Exchange_data ROMIO_PREFIX(ADIOI_W_Exchange_data)
#define ADIO_Open ROMIO_PREFIX(ADIO_Open)
#define ADIO_ResolveFileType ROMIO_PREFIX(ADIO_ResolveFileType)
#define ADIO_Set_shared_fp ROMIO_PREFIX(ADIO_Set_shared_fp)
#define ADIO_Set_view ROMIO_PREFIX(ADIO_Set_view)

/* We could have done some fancy-schmancy plan (with pants to match),
   perhaps with some perl and creative grepping, to automatically get
   the symbols for all the ROMIO ADIO modules that would
   hypothetically make things easier the next time we import a new
   version of ROMIO, but it just didn't seem worth it.  Either way,
   we'll end up editing this file again, though, so it seemed
   simplicity was the better choice here. */

#define ADIOI_GEN_Delete ROMIO_PREFIX(ADIOI_GEN_Delete)
#define ADIOI_GEN_Flush ROMIO_PREFIX(ADIOI_GEN_Flush)
#define ADIOI_GEN_ReadStridedColl ROMIO_PREFIX(ADIOI_GEN_ReadStridedColl)
#define ADIOI_GEN_ReadStrided_naive ROMIO_PREFIX(ADIOI_GEN_ReadStrided_naive)
#define ADIOI_GEN_ReadStrided ROMIO_PREFIX(ADIOI_GEN_ReadStrided)
#define ADIOI_GEN_SeekIndividual ROMIO_PREFIX(ADIOI_GEN_SeekIndividual)
#define ADIOI_GEN_SetInfo ROMIO_PREFIX(ADIOI_GEN_SetInfo)
#define ADIOI_GEN_WriteStridedColl ROMIO_PREFIX(ADIOI_GEN_WriteStridedColl)
#define ADIOI_GEN_WriteStrided ROMIO_PREFIX(ADIOI_GEN_WriteStrided)

#define ADIOI_HFS_operations ROMIO_PREFIX(ADIOI_HFS_operations)
#define ADIOI_HFS_Open ROMIO_PREFIX(ADIOI_HFS_Open)
#define ADIOI_HFS_ReadContig ROMIO_PREFIX(ADIOI_HFS_ReadContig)
#define ADIOI_HFS_WriteContig ROMIO_PREFIX(ADIOI_HFS_WriteContig)
#define ADIOI_HFS_SeekIndividual ROMIO_PREFIX(ADIOI_HFS_SeekIndividual)
#define ADIOI_HFS_Fcntl ROMIO_PREFIX(ADIOI_HFS_Fcntl)
#define ADIOI_HFS_Close ROMIO_PREFIX(ADIOI_HFS_Close)
#define ADIOI_HFS_IreadContig ROMIO_PREFIX(ADIOI_HFS_IreadContig)
#define ADIOI_HFS_IwriteContig ROMIO_PREFIX(ADIOI_HFS_IwriteContig)
#define ADIOI_HFS_ReadDone ROMIO_PREFIX(ADIOI_HFS_ReadDone)
#define ADIOI_HFS_WriteDone ROMIO_PREFIX(ADIOI_HFS_WriteDone)
#define ADIOI_HFS_ReadComplete ROMIO_PREFIX(ADIOI_HFS_ReadComplete)
#define ADIOI_HFS_WriteComplete ROMIO_PREFIX(ADIOI_HFS_WriteComplete)
#define ADIOI_HFS_IreadStrided ROMIO_PREFIX(ADIOI_HFS_IreadStrided)
#define ADIOI_HFS_IwriteStrided ROMIO_PREFIX(ADIOI_HFS_IwriteStrided)
#define ADIOI_HFS_Resize ROMIO_PREFIX(ADIOI_HFS_Resize)

#define ADIO_NFS_operations ROMIO_PREFIX(ADIO_NFS_operations)
#define ADIOI_NFS_aio ROMIO_PREFIX(ADIOI_NFS_aio)
#define ADIOI_NFS_Close ROMIO_PREFIX(ADIOI_NFS_Close)
#define ADIOI_NFS_Fcntl ROMIO_PREFIX(ADIOI_NFS_Fcntl)
#define ADIOI_NFS_Flush ROMIO_PREFIX(ADIOI_NFS_Flush)
#define ADIOI_NFS_Get_shared_fp ROMIO_PREFIX(ADIOI_NFS_Get_shared_fp)
#define ADIOI_NFS_IreadContig ROMIO_PREFIX(ADIOI_NFS_IreadContig)
#define ADIOI_NFS_IreadStrided ROMIO_PREFIX(ADIOI_NFS_IreadStrided)
#define ADIOI_NFS_IwriteContig ROMIO_PREFIX(ADIOI_NFS_IwriteContig)
#define ADIOI_NFS_IwriteStrided ROMIO_PREFIX(ADIOI_NFS_IwriteStrided)
#define ADIOI_NFS_Open ROMIO_PREFIX(ADIOI_NFS_Open)
#define ADIOI_NFS_ReadComplete ROMIO_PREFIX(ADIOI_NFS_ReadComplete)
#define ADIOI_NFS_ReadContig ROMIO_PREFIX(ADIOI_NFS_ReadContig)
#define ADIOI_NFS_ReadDone ROMIO_PREFIX(ADIOI_NFS_ReadDone)
#define ADIOI_NFS_ReadStridedColl ROMIO_PREFIX(ADIOI_NFS_ReadStridedColl)
#define ADIOI_NFS_ReadStrided ROMIO_PREFIX(ADIOI_NFS_ReadStrided)
#define ADIOI_NFS_Resize ROMIO_PREFIX(ADIOI_NFS_Resize)
#define ADIOI_NFS_SeekIndividual ROMIO_PREFIX(ADIOI_NFS_SeekIndividual)
#define ADIOI_NFS_SetInfo ROMIO_PREFIX(ADIOI_NFS_SetInfo)
#define ADIOI_NFS_Set_shared_fp ROMIO_PREFIX(ADIOI_NFS_Set_shared_fp)
#define ADIOI_NFS_WriteComplete ROMIO_PREFIX(ADIOI_NFS_WriteComplete)
#define ADIOI_NFS_WriteContig ROMIO_PREFIX(ADIOI_NFS_WriteContig)
#define ADIOI_NFS_WriteDone ROMIO_PREFIX(ADIOI_NFS_WriteDone)
#define ADIOI_NFS_WriteStridedColl ROMIO_PREFIX(ADIOI_NFS_WriteStridedColl)
#define ADIOI_NFS_WriteStrided ROMIO_PREFIX(ADIOI_NFS_WriteStrided)

#define ADIOI_NTFS_operations ROMIO_PREFIX(ADIOI_NTFS_operations)
#define ADIOI_NTFS_Open ROMIO_PREFIX(ADIOI_NTFS_Open)
#define ADIOI_NTFS_ReadContig ROMIO_PREFIX(ADIOI_NTFS_ReadContig)
#define ADIOI_NTFS_WriteContig ROMIO_PREFIX(ADIOI_NTFS_WriteContig)
#define ADIOI_NTFS_SeekIndividual ROMIO_PREFIX(ADIOI_NTFS_SeekIndividual)
#define ADIOI_NTFS_Fcntl ROMIO_PREFIX(ADIOI_NTFS_Fcntl)
#define ADIOI_NTFS_Close ROMIO_PREFIX(ADIOI_NTFS_Close)
#define ADIOI_NTFS_IreadContig ROMIO_PREFIX(ADIOI_NTFS_IreadContig)
#define ADIOI_NTFS_IwriteContig ROMIO_PREFIX(ADIOI_NTFS_IwriteContig)
#define ADIOI_NTFS_ReadDone ROMIO_PREFIX(ADIOI_NTFS_ReadDone)
#define ADIOI_NTFS_WriteDone ROMIO_PREFIX(ADIOI_NTFS_WriteDone)
#define ADIOI_NTFS_ReadComplete ROMIO_PREFIX(ADIOI_NTFS_ReadComplete)
#define ADIOI_NTFS_WriteComplete ROMIO_PREFIX(ADIOI_NTFS_WriteComplete)
#define ADIOI_NTFS_IreadStrided ROMIO_PREFIX(ADIOI_NTFS_IreadStrided)
#define ADIOI_NTFS_IwriteStrided ROMIO_PREFIX(ADIOI_NTFS_IwriteStrided)
#define ADIOI_NTFS_Flush ROMIO_PREFIX(ADIOI_NTFS_Flush)
#define ADIOI_NTFS_Resize ROMIO_PREFIX(ADIOI_NTFS_Resize)

#define ADIOI_PFS_operations ROMIO_PREFIX(ADIOI_PFS_operations)
#define ADIOI_PFS_Open ROMIO_PREFIX(ADIOI_PFS_Open)
#define ADIOI_PFS_ReadContig ROMIO_PREFIX(ADIOI_PFS_ReadContig)
#define ADIOI_PFS_WriteContig ROMIO_PREFIX(ADIOI_PFS_WriteContig)
#define ADIOI_PFS_SeekIndividual ROMIO_PREFIX(ADIOI_PFS_SeekIndividual)
#define ADIOI_PFS_Fcntl ROMIO_PREFIX(ADIOI_PFS_Fcntl)
#define ADIOI_PFS_SetInfo ROMIO_PREFIX(ADIOI_PFS_SetInfo)
#define ADIOI_PFS_Close ROMIO_PREFIX(ADIOI_PFS_Close)
#define ADIOI_PFS_IreadContig ROMIO_PREFIX(ADIOI_PFS_IreadContig)
#define ADIOI_PFS_IwriteContig ROMIO_PREFIX(ADIOI_PFS_IwriteContig)
#define ADIOI_PFS_ReadDone ROMIO_PREFIX(ADIOI_PFS_ReadDone)
#define ADIOI_PFS_WriteDone ROMIO_PREFIX(ADIOI_PFS_WriteDone)
#define ADIOI_PFS_ReadComplete ROMIO_PREFIX(ADIOI_PFS_ReadComplete)
#define ADIOI_PFS_WriteComplete ROMIO_PREFIX(ADIOI_PFS_WriteComplete)
#define ADIOI_PFS_IreadStrided ROMIO_PREFIX(ADIOI_PFS_IreadStrided)
#define ADIOI_PFS_IwriteStrided ROMIO_PREFIX(ADIOI_PFS_IwriteStrided)
#define ADIOI_PFS_Flush ROMIO_PREFIX(ADIOI_PFS_Flush)
#define ADIOI_PFS_Resize ROMIO_PREFIX(ADIOI_PFS_Resize)

#define ADIOI_PIOFS_operations ROMIO_PREFIX(ADIOI_PIOFS_operations)
#define ADIOI_PIOFS_Open ROMIO_PREFIX(ADIOI_PIOFS_Open)
#define ADIOI_PIOFS_ReadContig ROMIO_PREFIX(ADIOI_PIOFS_ReadContig)
#define ADIOI_PIOFS_WriteContig ROMIO_PREFIX(ADIOI_PIOFS_WriteContig)
#define ADIOI_PIOFS_SeekIndividual ROMIO_PREFIX(ADIOI_PIOFS_SeekIndividual)
#define ADIOI_PIOFS_Fcntl ROMIO_PREFIX(ADIOI_PIOFS_Fcntl)
#define ADIOI_PIOFS_SetInfo ROMIO_PREFIX(ADIOI_PIOFS_SetInfo)
#define ADIOI_PIOFS_WriteStrided ROMIO_PREFIX(ADIOI_PIOFS_WriteStrided)
#define ADIOI_PIOFS_Close ROMIO_PREFIX(ADIOI_PIOFS_Close)
#define ADIOI_PIOFS_IreadContig ROMIO_PREFIX(ADIOI_PIOFS_IreadContig)
#define ADIOI_PIOFS_IwriteContig ROMIO_PREFIX(ADIOI_PIOFS_IwriteContig)
#define ADIOI_PIOFS_ReadDone ROMIO_PREFIX(ADIOI_PIOFS_ReadDone)
#define ADIOI_PIOFS_WriteDone ROMIO_PREFIX(ADIOI_PIOFS_WriteDone)
#define ADIOI_PIOFS_ReadComplete ROMIO_PREFIX(ADIOI_PIOFS_ReadComplete)
#define ADIOI_PIOFS_WriteComplete ROMIO_PREFIX(ADIOI_PIOFS_WriteComplete)
#define ADIOI_PIOFS_IreadStrided ROMIO_PREFIX(ADIOI_PIOFS_IreadStrided)
#define ADIOI_PIOFS_IwriteStrided ROMIO_PREFIX(ADIOI_PIOFS_IwriteStrided)
#define ADIOI_PIOFS_Resize ROMIO_PREFIX(ADIOI_PIOFS_Resize)

#define ADIOI_PVFS_operations ROMIO_PREFIX(ADIOI_PVFS_operations)
#define ADIOI_PVFS_ReadContig ROMIO_PREFIX(ADIOI_PVFS_ReadContig)
#define ADIOI_PVFS_WriteContig ROMIO_PREFIX(ADIOI_PVFS_WriteContig)
#define ADIOI_PVFS_SeekIndividual ROMIO_PREFIX(ADIOI_PVFS_SeekIndividual)
#define ADIOI_PVFS_Fcntl ROMIO_PREFIX(ADIOI_PVFS_Fcntl)
#define ADIOI_PVFS_SetInfo ROMIO_PREFIX(ADIOI_PVFS_SetInfo)
#define ADIOI_PVFS_WriteStrided ROMIO_PREFIX(ADIOI_PVFS_WriteStrided)
#define ADIOI_PVFS_Close ROMIO_PREFIX(ADIOI_PVFS_Close)
#define ADIOI_PVFS_IreadContig ROMIO_PREFIX(ADIOI_PVFS_IreadContig)
#define ADIOI_PVFS_IwriteContig ROMIO_PREFIX(ADIOI_PVFS_IwriteContig)
#define ADIOI_PVFS_ReadDone ROMIO_PREFIX(ADIOI_PVFS_ReadDone)
#define ADIOI_PVFS_WriteDone ROMIO_PREFIX(ADIOI_PVFS_WriteDone)
#define ADIOI_PVFS_ReadComplete ROMIO_PREFIX(ADIOI_PVFS_ReadComplete)
#define ADIOI_PVFS_WriteComplete ROMIO_PREFIX(ADIOI_PVFS_WriteComplete)
#define ADIOI_PVFS_IreadStrided ROMIO_PREFIX(ADIOI_PVFS_IreadStrided)
#define ADIOI_PVFS_IwriteStrided ROMIO_PREFIX(ADIOI_PVFS_IwriteStrided)
#define ADIOI_PVFS_Flush ROMIO_PREFIX(ADIOI_PVFS_Flush)
#define ADIOI_PVFS_Resize ROMIO_PREFIX(ADIOI_PVFS_Resize)
#define ADIOI_PVFS_Delete ROMIO_PREFIX(ADIOI_PVFS_Delete)

#define ADIOI_SFS_operations ROMIO_PREFIX(ADIOI_SFS_operations)
#define ADIOI_SFS_Open ROMIO_PREFIX(ADIOI_SFS_Open)
#define ADIOI_SFS_ReadContig ROMIO_PREFIX(ADIOI_SFS_ReadContig)
#define ADIOI_SFS_WriteContig ROMIO_PREFIX(ADIOI_SFS_WriteContig)
#define ADIOI_SFS_Fcntl ROMIO_PREFIX(ADIOI_SFS_Fcntl)
#define ADIOI_SFS_Close ROMIO_PREFIX(ADIOI_SFS_Close)
#define ADIOI_SFS_IreadContig ROMIO_PREFIX(ADIOI_SFS_IreadContig)
#define ADIOI_SFS_IwriteContig ROMIO_PREFIX(ADIOI_SFS_IwriteContig)
#define ADIOI_SFS_ReadDone ROMIO_PREFIX(ADIOI_SFS_ReadDone)
#define ADIOI_SFS_WriteDone ROMIO_PREFIX(ADIOI_SFS_WriteDone)
#define ADIOI_SFS_ReadComplete ROMIO_PREFIX(ADIOI_SFS_ReadComplete)
#define ADIOI_SFS_WriteComplete ROMIO_PREFIX(ADIOI_SFS_WriteComplete)
#define ADIOI_SFS_IreadStrided ROMIO_PREFIX(ADIOI_SFS_IreadStrided)
#define ADIOI_SFS_IwriteStrided ROMIO_PREFIX(ADIOI_SFS_IwriteStrided)
#define ADIOI_SFS_Flush ROMIO_PREFIX(ADIOI_SFS_Flush)
#define ADIOI_SFS_Resize ROMIO_PREFIX(ADIOI_SFS_Resize)

#define ADIOI_TESTFS_operations ROMIO_PREFIX(ADIOI_TESTFS_operations)
#define ADIOI_TESTFS_Open ROMIO_PREFIX(ADIOI_TESTFS_Open)
#define ADIOI_TESTFS_ReadContig ROMIO_PREFIX(ADIOI_TESTFS_ReadContig)
#define ADIOI_TESTFS_WriteContig ROMIO_PREFIX(ADIOI_TESTFS_WriteContig)
#define ADIOI_TESTFS_ReadStridedColl ROMIO_PREFIX(ADIOI_TESTFS_ReadStridedColl)
#define ADIOI_TESTFS_WriteStridedColl ROMIO_PREFIX(ADIOI_TESTFS_WriteStridedColl)
#define ADIOI_TESTFS_SeekIndividual ROMIO_PREFIX(ADIOI_TESTFS_SeekIndividual)
#define ADIOI_TESTFS_Fcntl ROMIO_PREFIX(ADIOI_TESTFS_Fcntl)
#define ADIOI_TESTFS_SetInfo ROMIO_PREFIX(ADIOI_TESTFS_SetInfo)
#define ADIOI_TESTFS_ReadStrided ROMIO_PREFIX(ADIOI_TESTFS_ReadStrided)
#define ADIOI_TESTFS_WriteStrided ROMIO_PREFIX(ADIOI_TESTFS_WriteStrided)
#define ADIOI_TESTFS_Close ROMIO_PREFIX(ADIOI_TESTFS_Close)
#define ADIOI_TESTFS_IreadContig ROMIO_PREFIX(ADIOI_TESTFS_IreadContig)
#define ADIOI_TESTFS_IwriteContig ROMIO_PREFIX(ADIOI_TESTFS_IwriteContig)
#define ADIOI_TESTFS_ReadDone ROMIO_PREFIX(ADIOI_TESTFS_ReadDone)
#define ADIOI_TESTFS_WriteDone ROMIO_PREFIX(ADIOI_TESTFS_WriteDone)
#define ADIOI_TESTFS_ReadComplete ROMIO_PREFIX(ADIOI_TESTFS_ReadComplete)
#define ADIOI_TESTFS_WriteComplete ROMIO_PREFIX(ADIOI_TESTFS_WriteComplete)
#define ADIOI_TESTFS_IreadStrided ROMIO_PREFIX(ADIOI_TESTFS_IreadStrided)
#define ADIOI_TESTFS_IwriteStrided ROMIO_PREFIX(ADIOI_TESTFS_IwriteStrided)
#define ADIOI_TESTFS_Flush ROMIO_PREFIX(ADIOI_TESTFS_Flush)
#define ADIOI_TESTFS_Resize ROMIO_PREFIX(ADIOI_TESTFS_Resize)
#define ADIOI_TESTFS_Delete ROMIO_PREFIX(ADIOI_TESTFS_Delete)

#define ADIO_UFS_operations ROMIO_PREFIX(ADIO_UFS_operations)
#define ADIOI_UFS_aio ROMIO_PREFIX(ADIOI_UFS_aio)
#define ADIOI_UFS_Close ROMIO_PREFIX(ADIOI_UFS_Close)
#define ADIOI_UFS_Fcntl ROMIO_PREFIX(ADIOI_UFS_Fcntl)
#define ADIOI_UFS_Flush ROMIO_PREFIX(ADIOI_UFS_Flush)
#define ADIOI_UFS_IreadContig ROMIO_PREFIX(ADIOI_UFS_IreadContig)
#define ADIOI_UFS_IreadStrided ROMIO_PREFIX(ADIOI_UFS_IreadStrided)
#define ADIOI_UFS_IwriteContig ROMIO_PREFIX(ADIOI_UFS_IwriteContig)
#define ADIOI_UFS_IwriteStrided ROMIO_PREFIX(ADIOI_UFS_IwriteStrided)
#define ADIOI_UFS_Open ROMIO_PREFIX(ADIOI_UFS_Open)
#define ADIOI_UFS_ReadComplete ROMIO_PREFIX(ADIOI_UFS_ReadComplete)
#define ADIOI_UFS_ReadContig ROMIO_PREFIX(ADIOI_UFS_ReadContig)
#define ADIOI_UFS_ReadDone ROMIO_PREFIX(ADIOI_UFS_ReadDone)
#define ADIOI_UFS_ReadStridedColl ROMIO_PREFIX(ADIOI_UFS_ReadStridedColl)
#define ADIOI_UFS_ReadStrided ROMIO_PREFIX(ADIOI_UFS_ReadStrided)
#define ADIOI_UFS_Resize ROMIO_PREFIX(ADIOI_UFS_Resize)
#define ADIOI_UFS_SeekIndividual ROMIO_PREFIX(ADIOI_UFS_SeekIndividual)
#define ADIOI_UFS_SetInfo ROMIO_PREFIX(ADIOI_UFS_SetInfo)
#define ADIOI_UFS_WriteComplete ROMIO_PREFIX(ADIOI_UFS_WriteComplete)
#define ADIOI_UFS_WriteContig ROMIO_PREFIX(ADIOI_UFS_WriteContig)
#define ADIOI_UFS_WriteDone ROMIO_PREFIX(ADIOI_UFS_WriteDone)
#define ADIOI_UFS_WriteStridedColl ROMIO_PREFIX(ADIOI_UFS_WriteStridedColl)
#define ADIOI_UFS_WriteStrided ROMIO_PREFIX(ADIOI_UFS_WriteStrided)

#define ADIOI_XFS_operations ROMIO_PREFIX(ADIOI_XFS_operations)
#define ADIOI_XFS_Open ROMIO_PREFIX(ADIOI_XFS_Open)
#define ADIOI_XFS_ReadContig ROMIO_PREFIX(ADIOI_XFS_ReadContig)
#define ADIOI_XFS_WriteContig ROMIO_PREFIX(ADIOI_XFS_WriteContig)
#define ADIOI_XFS_SeekIndividual ROMIO_PREFIX(ADIOI_XFS_SeekIndividual)
#define ADIOI_XFS_Fcntl ROMIO_PREFIX(ADIOI_XFS_Fcntl)
#define ADIOI_XFS_SetInfo ROMIO_PREFIX(ADIOI_XFS_SetInfo)
#define ADIOI_XFS_Close ROMIO_PREFIX(ADIOI_XFS_Close)
#define ADIOI_XFS_IreadContig ROMIO_PREFIX(ADIOI_XFS_IreadContig)
#define ADIOI_XFS_IwriteContig ROMIO_PREFIX(ADIOI_XFS_IwriteContig)
#define ADIOI_XFS_ReadDone ROMIO_PREFIX(ADIOI_XFS_ReadDone)
#define ADIOI_XFS_WriteDone ROMIO_PREFIX(ADIOI_XFS_WriteDone)
#define ADIOI_XFS_ReadComplete ROMIO_PREFIX(ADIOI_XFS_ReadComplete)
#define ADIOI_XFS_WriteComplete ROMIO_PREFIX(ADIOI_XFS_WriteComplete)
#define ADIOI_XFS_IreadStrided ROMIO_PREFIX(ADIOI_XFS_IreadStrided)
#define ADIOI_XFS_IwriteStrided ROMIO_PREFIX(ADIOI_XFS_IwriteStrided)
#define ADIOI_XFS_Resize ROMIO_PREFIX(ADIOI_XFS_Resize)

#endif /* MCA_IO_ADIO_CONV_H */

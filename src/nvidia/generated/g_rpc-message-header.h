/*
 * SPDX-FileCopyrightText: Copyright (c) 2008-2025 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
 * SPDX-License-Identifier: MIT
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

/*
 * WARNING: This is an autogenerated file. DO NOT EDIT.
 * This file is generated using below files:
 * template file: inc/kernel/vgpu/gt_rpc-message.h
 * definition file: inc/kernel/vgpu/rpc-message-header.def
 */


#ifdef RPC_MESSAGE_STRUCTURES
typedef union rpc_message_rpc_union_field_v03_00
{
    NvU32      spare;
    NvU32      cpuRmGfid;
} rpc_message_rpc_union_field_v03_00;

typedef rpc_message_rpc_union_field_v03_00 rpc_message_rpc_union_field_v;

typedef struct rpc_message_header_v03_00
{
    NvU32      header_version;
    NvU32      signature;
    NvU32      length;
    NvU32      function;
    NvU32      rpc_result;
    NvU32      rpc_result_private;
    NvU32      sequence;
    rpc_message_rpc_union_field_v u;
    rpc_generic_union rpc_message_data[];
} rpc_message_header_v03_00;

typedef rpc_message_header_v03_00 rpc_message_header_v;


#endif

#ifdef RPC_MESSAGE_GENERIC_UNION
// This is a generic union, that will be used for the communication between the vmioplugin & guest RM.
typedef union rpc_message_generic_union {
    rpc_message_rpc_union_field_v03_00 rpc_union_field_v03_00;
    rpc_message_rpc_union_field_v rpc_union_field_v;
    rpc_message_header_v03_00 header_v03_00;
    rpc_message_header_v header_v;
} rpc_message_generic_union;

#endif

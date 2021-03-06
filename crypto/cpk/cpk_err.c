/*
 * Generated by util/mkerr.pl DO NOT EDIT
 * Copyright 1995-2018 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the OpenSSL license (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#include <stdio.h>
#include <openssl/err.h>
#include <openssl/cpk.h>

/* BEGIN ERROR CODES */
#ifndef OPENSSL_NO_ERR

# define ERR_FUNC(func) ERR_PACK(ERR_LIB_CPK,func,0)
# define ERR_REASON(reason) ERR_PACK(ERR_LIB_CPK,0,reason)

static ERR_STRING_DATA CPK_str_functs[] = {
    {ERR_FUNC(CPK_F_CPK_MAP_GET_MD), "CPK_MAP_get_md"},
    {ERR_FUNC(CPK_F_CPK_MAP_IS_VALID), "CPK_MAP_is_valid"},
    {ERR_FUNC(CPK_F_CPK_MAP_NEW), "CPK_MAP_new"},
    {ERR_FUNC(CPK_F_CPK_MAP_NEW_DEFAULT), "CPK_MAP_new_default"},
    {ERR_FUNC(CPK_F_CPK_MAP_NUM_FACTORS), "CPK_MAP_num_factors"},
    {ERR_FUNC(CPK_F_CPK_MAP_NUM_INDEXES), "CPK_MAP_num_indexes"},
    {ERR_FUNC(CPK_F_CPK_MAP_NUM_SUBSET), "CPK_MAP_num_subset"},
    {ERR_FUNC(CPK_F_CPK_MAP_STR2INDEX), "CPK_MAP_str2index"},
    {ERR_FUNC(CPK_F_CPK_MASTER_SECRET_CREATE), "CPK_MASTER_SECRET_create"},
    {ERR_FUNC(CPK_F_CPK_MASTER_SECRET_EXTRACT_PRIVATE_KEY),
     "CPK_MASTER_SECRET_extract_private_key"},
    {ERR_FUNC(CPK_F_CPK_MASTER_SECRET_EXTRACT_PUBLIC_PARAMS),
     "CPK_MASTER_SECRET_extract_public_params"},
    {ERR_FUNC(CPK_F_CPK_MASTER_SECRET_PRINT), "CPK_MASTER_SECRET_print"},
    {ERR_FUNC(CPK_F_CPK_MASTER_SECRET_VALIDATE_PUBLIC_PARAMS),
     "CPK_MASTER_SECRET_validate_public_params"},
    {ERR_FUNC(CPK_F_CPK_PUBLIC_PARAMS_COMPUTE_SHARE_KEY),
     "CPK_PUBLIC_PARAMS_compute_share_key"},
    {ERR_FUNC(CPK_F_CPK_PUBLIC_PARAMS_EXTRACT_PUBLIC_KEY),
     "CPK_PUBLIC_PARAMS_extract_public_key"},
    {ERR_FUNC(CPK_F_CPK_PUBLIC_PARAMS_PRINT), "CPK_PUBLIC_PARAMS_print"},
    {ERR_FUNC(CPK_F_CPK_PUBLIC_PARAMS_VALIDATE_PRIVATE_KEY),
     "CPK_PUBLIC_PARAMS_validate_private_key"},
    {ERR_FUNC(CPK_F_EXTRACT_EC_PARAMS), "extract_ec_params"},
    {ERR_FUNC(CPK_F_EXTRACT_EC_PRIV_KEY), "extract_ec_priv_key"},
    {ERR_FUNC(CPK_F_EXTRACT_EC_PUB_KEY), "extract_ec_pub_key"},
    {ERR_FUNC(CPK_F_X509_ALGOR_GET1_EC_KEY), "X509_ALGOR_get1_EC_KEY"},
    {0, NULL}
};

static ERR_STRING_DATA CPK_str_reasons[] = {
    {ERR_REASON(CPK_R_BAD_ARGUMENT), "bad argument"},
    {ERR_REASON(CPK_R_BAD_ARGUMENTS), "bad arguments"},
    {ERR_REASON(CPK_R_BAD_DATA), "bad data"},
    {ERR_REASON(CPK_R_INVALID_ALGORITHM), "invalid algorithm"},
    {ERR_REASON(CPK_R_INVALID_ARGUMENT), "invalid argument"},
    {ERR_REASON(CPK_R_INVALID_CURVE), "invalid curve"},
    {ERR_REASON(CPK_R_INVALID_ID_LENGTH), "invalid id length"},
    {ERR_REASON(CPK_R_INVALID_MAP_ALGOR), "invalid map algor"},
    {ERR_REASON(CPK_R_INVALID_PKEY_TYPE), "invalid pkey type"},
    {0, NULL}
};

#endif

int ERR_load_CPK_strings(void)
{
#ifndef OPENSSL_NO_ERR

    if (ERR_func_error_string(CPK_str_functs[0].error) == NULL) {
        ERR_load_strings(0, CPK_str_functs);
        ERR_load_strings(0, CPK_str_reasons);
    }
#endif
    return 1;
}


/*
 * Copyright (C) wenjie.zhao
 */


#ifndef CMERRNO_HPP
#define CMERRNO_HPP

extern "C" {
    const char *mstrerror(int errnum);
}

extern int merrno;

// UNIX LIKE OS errno from 1~131

namespace MERROR {
const int E_SUCCESS             = 0x00;

const int E_READDIR             = 200;
const int E_STAT                = 201;
const int E_OPENDIR             = 202;
const int E_MKDIR               = 203;
const int E_DIR_NAME_EMPTY      = 204;
const int E_OPENFILE            = 205;
const int E_READFILE            = 206;
const int E_WRITEFILE           = 207;
const int E_SPACE_NOT_ENOUGH    = 208;
const int E_AMF_TYPE_ERROR      = 209;
const int E_STREAM_SKIP_ERROR   = 210;
const int E_VALUE_IS_ZERO       = 211;
const int E_TYPE_NOT_SUPPORTED  = 212;
const int E_INVOKE_NO_METHOD    = 213;
const int E_WRITE_ERROR         = 214;
const int E_READ_ERROR          = 215;
const int E_URL_NO_TCURL        = 216;
}

#endif // CMERRNO_HPP
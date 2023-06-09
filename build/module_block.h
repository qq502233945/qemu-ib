/* AUTOMATICALLY GENERATED, DO NOT MODIFY */
/*
 * QEMU Block Module Infrastructure
 *
 * Authors:
 *  Marc Mari       <markmb@redhat.com>
 */

#ifndef QEMU_MODULE_BLOCK_H
#define QEMU_MODULE_BLOCK_H

#include "qemu-common.h"

static const struct {
    const char *format_name;
    const char *protocol_name;
    const char *library_name;
} block_driver_modules[] = {
    {
        .library_name = "iscsi",
        .format_name = "iscsi",
        .protocol_name = "iscsi",
    },
    {
        .library_name = "iscsi",
        .format_name = "iser",
        .protocol_name = "iser",
    },
};

#endif

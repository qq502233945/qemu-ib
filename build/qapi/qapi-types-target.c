/* AUTOMATICALLY GENERATED, DO NOT MODIFY */

/*
 * Schema-defined QAPI types
 *
 * Copyright IBM, Corp. 2011
 * Copyright (c) 2013-2018 Red Hat Inc.
 *
 * This work is licensed under the terms of the GNU LGPL, version 2.1 or later.
 * See the COPYING.LIB file in the top-level directory.
 */

#include "qemu/osdep.h"
#include "qapi/dealloc-visitor.h"
#include "qapi-types-target.h"
#include "qapi-visit-target.h"

#if defined(TARGET_I386)
const QEnumLookup SevState_lookup = {
    .array = (const char *const[]) {
        [SEV_STATE_UNINIT] = "uninit",
        [SEV_STATE_LAUNCH_UPDATE] = "launch-update",
        [SEV_STATE_LAUNCH_SECRET] = "launch-secret",
        [SEV_STATE_RUNNING] = "running",
        [SEV_STATE_SEND_UPDATE] = "send-update",
        [SEV_STATE_RECEIVE_UPDATE] = "receive-update",
    },
    .size = SEV_STATE__MAX
};
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
void qapi_free_SevInfo(SevInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_SevInfo(v, NULL, &obj, NULL);
    visit_free(v);
}
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
void qapi_free_SevLaunchMeasureInfo(SevLaunchMeasureInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_SevLaunchMeasureInfo(v, NULL, &obj, NULL);
    visit_free(v);
}
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
void qapi_free_SevCapability(SevCapability *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_SevCapability(v, NULL, &obj, NULL);
    visit_free(v);
}
#endif /* defined(TARGET_I386) */

#if defined(TARGET_S390X)
void qapi_free_CpuModelBaselineInfo(CpuModelBaselineInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_CpuModelBaselineInfo(v, NULL, &obj, NULL);
    visit_free(v);
}
#endif /* defined(TARGET_S390X) */

#if defined(TARGET_S390X)
void qapi_free_CpuModelCompareInfo(CpuModelCompareInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_CpuModelCompareInfo(v, NULL, &obj, NULL);
    visit_free(v);
}
#endif /* defined(TARGET_S390X) */

#if defined(TARGET_ARM)
void qapi_free_GICCapability(GICCapability *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_GICCapability(v, NULL, &obj, NULL);
    visit_free(v);
}
#endif /* defined(TARGET_ARM) */

#if defined(TARGET_ARM)
void qapi_free_GICCapabilityList(GICCapabilityList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_GICCapabilityList(v, NULL, &obj, NULL);
    visit_free(v);
}
#endif /* defined(TARGET_ARM) */

#if defined(TARGET_S390X) || defined(TARGET_I386)
void qapi_free_CpuModelExpansionInfo(CpuModelExpansionInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_CpuModelExpansionInfo(v, NULL, &obj, NULL);
    visit_free(v);
}
#endif /* defined(TARGET_S390X) || defined(TARGET_I386) */

#if defined(TARGET_PPC) || defined(TARGET_ARM) || defined(TARGET_I386) || defined(TARGET_S390X) || defined(TARGET_MIPS)
void qapi_free_CpuDefinitionInfo(CpuDefinitionInfo *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_CpuDefinitionInfo(v, NULL, &obj, NULL);
    visit_free(v);
}
#endif /* defined(TARGET_PPC) || defined(TARGET_ARM) || defined(TARGET_I386) || defined(TARGET_S390X) || defined(TARGET_MIPS) */

#if defined(TARGET_PPC) || defined(TARGET_ARM) || defined(TARGET_I386) || defined(TARGET_S390X) || defined(TARGET_MIPS)
void qapi_free_CpuDefinitionInfoList(CpuDefinitionInfoList *obj)
{
    Visitor *v;

    if (!obj) {
        return;
    }

    v = qapi_dealloc_visitor_new();
    visit_type_CpuDefinitionInfoList(v, NULL, &obj, NULL);
    visit_free(v);
}
#endif /* defined(TARGET_PPC) || defined(TARGET_ARM) || defined(TARGET_I386) || defined(TARGET_S390X) || defined(TARGET_MIPS) */

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_types_target_c;

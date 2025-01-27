// This file is automatically generated by rmconfig - DO NOT EDIT!
//
// Hal registration entry points.
//
// Profile:  shipping-gpus-openrm
// Template: templates/gt_hal_register.h
//
// Chips:    TU10X, GA100, GA102, GA103, GA104, GA106, GA107, AD102, AD103, AD104, AD106, AD107, GH10X, GB100, GB102, GB10B, GB202, GB203, GB205, GB206, GB207
//

#ifndef _G_RMCFG_HAL_REGISTER_H_
#define _G_RMCFG_HAL_REGISTER_H_

//
// per-family HAL registration entry points
//


NV_STATUS registerHalModule_TU102(void);    
NV_STATUS registerHalModule_TU104(void);    
NV_STATUS registerHalModule_TU106(void);    
NV_STATUS registerHalModule_TU116(void);    
NV_STATUS registerHalModule_TU117(void);    

static NV_STATUS NV_INLINE REGISTER_TU10X_HALS(void)
{
    NV_STATUS rmStatus;

    rmStatus = registerHalModule_TU102();
    if (rmStatus != NV_OK)
        return rmStatus;

    rmStatus = registerHalModule_TU104();
    if (rmStatus != NV_OK)
        return rmStatus;

    rmStatus = registerHalModule_TU106();
    if (rmStatus != NV_OK)
        return rmStatus;

    rmStatus = registerHalModule_TU116();
    if (rmStatus != NV_OK)
        return rmStatus;

    rmStatus = registerHalModule_TU117();
    if (rmStatus != NV_OK)
        return rmStatus;

    return NV_OK;
}

NV_STATUS registerHalModule_GA100(void);    
NV_STATUS registerHalModule_GA102(void);    
NV_STATUS registerHalModule_GA103(void);    
NV_STATUS registerHalModule_GA104(void);    
NV_STATUS registerHalModule_GA106(void);    
NV_STATUS registerHalModule_GA107(void);    

static NV_STATUS NV_INLINE REGISTER_GA10X_HALS(void)
{
    NV_STATUS rmStatus;

    rmStatus = registerHalModule_GA100();
    if (rmStatus != NV_OK)
        return rmStatus;

    rmStatus = registerHalModule_GA102();
    if (rmStatus != NV_OK)
        return rmStatus;

    rmStatus = registerHalModule_GA103();
    if (rmStatus != NV_OK)
        return rmStatus;

    rmStatus = registerHalModule_GA104();
    if (rmStatus != NV_OK)
        return rmStatus;

    rmStatus = registerHalModule_GA106();
    if (rmStatus != NV_OK)
        return rmStatus;

    rmStatus = registerHalModule_GA107();
    if (rmStatus != NV_OK)
        return rmStatus;

    return NV_OK;
}

NV_STATUS registerHalModule_AD102(void);    
NV_STATUS registerHalModule_AD103(void);    
NV_STATUS registerHalModule_AD104(void);    
NV_STATUS registerHalModule_AD106(void);    
NV_STATUS registerHalModule_AD107(void);    

static NV_STATUS NV_INLINE REGISTER_AD10X_HALS(void)
{
    NV_STATUS rmStatus;

    rmStatus = registerHalModule_AD102();
    if (rmStatus != NV_OK)
        return rmStatus;

    rmStatus = registerHalModule_AD103();
    if (rmStatus != NV_OK)
        return rmStatus;

    rmStatus = registerHalModule_AD104();
    if (rmStatus != NV_OK)
        return rmStatus;

    rmStatus = registerHalModule_AD106();
    if (rmStatus != NV_OK)
        return rmStatus;

    rmStatus = registerHalModule_AD107();
    if (rmStatus != NV_OK)
        return rmStatus;

    return NV_OK;
}

NV_STATUS registerHalModule_GH100(void);    

static NV_STATUS NV_INLINE REGISTER_GH10X_HALS(void)
{
    NV_STATUS rmStatus;

    rmStatus = registerHalModule_GH100();
    if (rmStatus != NV_OK)
        return rmStatus;

    return NV_OK;
}

NV_STATUS registerHalModule_GB100(void);    
NV_STATUS registerHalModule_GB102(void);    
NV_STATUS registerHalModule_GB10B(void);    

static NV_STATUS NV_INLINE REGISTER_GB10X_HALS(void)
{
    NV_STATUS rmStatus;

    rmStatus = registerHalModule_GB100();
    if (rmStatus != NV_OK)
        return rmStatus;

    rmStatus = registerHalModule_GB102();
    if (rmStatus != NV_OK)
        return rmStatus;

    rmStatus = registerHalModule_GB10B();
    if (rmStatus != NV_OK)
        return rmStatus;

    return NV_OK;
}

NV_STATUS registerHalModule_GB202(void);    
NV_STATUS registerHalModule_GB203(void);    
NV_STATUS registerHalModule_GB205(void);    
NV_STATUS registerHalModule_GB206(void);    
NV_STATUS registerHalModule_GB207(void);    

static NV_STATUS NV_INLINE REGISTER_GB20X_HALS(void)
{
    NV_STATUS rmStatus;

    rmStatus = registerHalModule_GB202();
    if (rmStatus != NV_OK)
        return rmStatus;

    rmStatus = registerHalModule_GB203();
    if (rmStatus != NV_OK)
        return rmStatus;

    rmStatus = registerHalModule_GB205();
    if (rmStatus != NV_OK)
        return rmStatus;

    rmStatus = registerHalModule_GB206();
    if (rmStatus != NV_OK)
        return rmStatus;

    rmStatus = registerHalModule_GB207();
    if (rmStatus != NV_OK)
        return rmStatus;

    return NV_OK;
}

// 
// This routine can be used by platform dependent code to
// enable all HAL modules.
// 
static NV_STATUS NV_INLINE REGISTER_ALL_HALS(void)
{
    NV_STATUS rmStatus;

    rmStatus = REGISTER_TU10X_HALS();
    if (rmStatus != NV_OK)
    {
        return rmStatus;
    }

    rmStatus = REGISTER_GA10X_HALS();
    if (rmStatus != NV_OK)
    {
        return rmStatus;
    }

    rmStatus = REGISTER_AD10X_HALS();
    if (rmStatus != NV_OK)
    {
        return rmStatus;
    }

    rmStatus = REGISTER_GH10X_HALS();
    if (rmStatus != NV_OK)
    {
        return rmStatus;
    }

    rmStatus = REGISTER_GB10X_HALS();
    if (rmStatus != NV_OK)
    {
        return rmStatus;
    }

    rmStatus = REGISTER_GB20X_HALS();
    if (rmStatus != NV_OK)
    {
        return rmStatus;
    }

    return NV_OK;
}



#endif  // _G_RMCFG_HAL_REGISTER_H_

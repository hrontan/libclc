_CLC_OVERLOAD _CLC_DECL GENTYPE FUNCTION(GENTYPE a, GENTYPE b);
_CLC_OVERLOAD _CLC_DECL GENTYPE FUNCTION(GENTYPE a, float b);

#ifdef cl_khr_fp64
_CLC_OVERLOAD _CLC_DECL GENTYPE FUNCTION(GENTYPE a, double b);
#endif
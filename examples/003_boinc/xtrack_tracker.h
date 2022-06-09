
#include <stdio.h>
#ifndef NULL
    #define NULL 0
#endif
#include <stdint.h>
#ifndef XOBJ_TYPEDEF_ReferenceEnergyIncreaseData
#define XOBJ_TYPEDEF_ReferenceEnergyIncreaseData
typedef   struct ReferenceEnergyIncreaseData_s * ReferenceEnergyIncreaseData;
 static inline ReferenceEnergyIncreaseData ReferenceEnergyIncreaseData_getp(ReferenceEnergyIncreaseData  obj){
  int64_t offset=0;
  return (ReferenceEnergyIncreaseData)(( char*) obj+offset);
}
 static inline double ReferenceEnergyIncreaseData_get_Delta_p0c(const ReferenceEnergyIncreaseData  obj){
  int64_t offset=0;
  return *( double*)(( char*) obj+offset);
}
 static inline void ReferenceEnergyIncreaseData_set_Delta_p0c(ReferenceEnergyIncreaseData  obj, double value){
  int64_t offset=0;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* ReferenceEnergyIncreaseData_getp_Delta_p0c(ReferenceEnergyIncreaseData  obj){
  int64_t offset=0;
  return ( double*)(( char*) obj+offset);
}
#endif
#ifndef XOBJ_TYPEDEF_DriftData
#define XOBJ_TYPEDEF_DriftData
typedef   struct DriftData_s * DriftData;
 static inline DriftData DriftData_getp(DriftData  obj){
  int64_t offset=0;
  return (DriftData)(( char*) obj+offset);
}
 static inline double DriftData_get_length(const DriftData  obj){
  int64_t offset=0;
  return *( double*)(( char*) obj+offset);
}
 static inline void DriftData_set_length(DriftData  obj, double value){
  int64_t offset=0;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* DriftData_getp_length(DriftData  obj){
  int64_t offset=0;
  return ( double*)(( char*) obj+offset);
}
#endif
#ifndef XOBJ_TYPEDEF_WireData
#define XOBJ_TYPEDEF_WireData
typedef   struct WireData_s * WireData;
 static inline WireData WireData_getp(WireData  obj){
  int64_t offset=0;
  return (WireData)(( char*) obj+offset);
}
 static inline double WireData_get_L_phy(const WireData  obj){
  int64_t offset=0;
  return *( double*)(( char*) obj+offset);
}
 static inline void WireData_set_L_phy(WireData  obj, double value){
  int64_t offset=0;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* WireData_getp_L_phy(WireData  obj){
  int64_t offset=0;
  return ( double*)(( char*) obj+offset);
}
 static inline double WireData_get_L_int(const WireData  obj){
  int64_t offset=0;
  offset+=8;
  return *( double*)(( char*) obj+offset);
}
 static inline void WireData_set_L_int(WireData  obj, double value){
  int64_t offset=0;
  offset+=8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* WireData_getp_L_int(WireData  obj){
  int64_t offset=0;
  offset+=8;
  return ( double*)(( char*) obj+offset);
}
 static inline double WireData_get_current(const WireData  obj){
  int64_t offset=0;
  offset+=16;
  return *( double*)(( char*) obj+offset);
}
 static inline void WireData_set_current(WireData  obj, double value){
  int64_t offset=0;
  offset+=16;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* WireData_getp_current(WireData  obj){
  int64_t offset=0;
  offset+=16;
  return ( double*)(( char*) obj+offset);
}
 static inline double WireData_get_xma(const WireData  obj){
  int64_t offset=0;
  offset+=24;
  return *( double*)(( char*) obj+offset);
}
 static inline void WireData_set_xma(WireData  obj, double value){
  int64_t offset=0;
  offset+=24;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* WireData_getp_xma(WireData  obj){
  int64_t offset=0;
  offset+=24;
  return ( double*)(( char*) obj+offset);
}
 static inline double WireData_get_yma(const WireData  obj){
  int64_t offset=0;
  offset+=32;
  return *( double*)(( char*) obj+offset);
}
 static inline void WireData_set_yma(WireData  obj, double value){
  int64_t offset=0;
  offset+=32;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* WireData_getp_yma(WireData  obj){
  int64_t offset=0;
  offset+=32;
  return ( double*)(( char*) obj+offset);
}
#endif
#ifndef XOBJ_TYPEDEF_CavityData
#define XOBJ_TYPEDEF_CavityData
typedef   struct CavityData_s * CavityData;
 static inline CavityData CavityData_getp(CavityData  obj){
  int64_t offset=0;
  return (CavityData)(( char*) obj+offset);
}
 static inline double CavityData_get_voltage(const CavityData  obj){
  int64_t offset=0;
  return *( double*)(( char*) obj+offset);
}
 static inline void CavityData_set_voltage(CavityData  obj, double value){
  int64_t offset=0;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* CavityData_getp_voltage(CavityData  obj){
  int64_t offset=0;
  return ( double*)(( char*) obj+offset);
}
 static inline double CavityData_get_frequency(const CavityData  obj){
  int64_t offset=0;
  offset+=8;
  return *( double*)(( char*) obj+offset);
}
 static inline void CavityData_set_frequency(CavityData  obj, double value){
  int64_t offset=0;
  offset+=8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* CavityData_getp_frequency(CavityData  obj){
  int64_t offset=0;
  offset+=8;
  return ( double*)(( char*) obj+offset);
}
 static inline double CavityData_get_lag(const CavityData  obj){
  int64_t offset=0;
  offset+=16;
  return *( double*)(( char*) obj+offset);
}
 static inline void CavityData_set_lag(CavityData  obj, double value){
  int64_t offset=0;
  offset+=16;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* CavityData_getp_lag(CavityData  obj){
  int64_t offset=0;
  offset+=16;
  return ( double*)(( char*) obj+offset);
}
#endif
#ifndef XOBJ_TYPEDEF_SRotationData
#define XOBJ_TYPEDEF_SRotationData
typedef   struct SRotationData_s * SRotationData;
 static inline SRotationData SRotationData_getp(SRotationData  obj){
  int64_t offset=0;
  return (SRotationData)(( char*) obj+offset);
}
 static inline double SRotationData_get_cos_z(const SRotationData  obj){
  int64_t offset=0;
  return *( double*)(( char*) obj+offset);
}
 static inline void SRotationData_set_cos_z(SRotationData  obj, double value){
  int64_t offset=0;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* SRotationData_getp_cos_z(SRotationData  obj){
  int64_t offset=0;
  return ( double*)(( char*) obj+offset);
}
 static inline double SRotationData_get_sin_z(const SRotationData  obj){
  int64_t offset=0;
  offset+=8;
  return *( double*)(( char*) obj+offset);
}
 static inline void SRotationData_set_sin_z(SRotationData  obj, double value){
  int64_t offset=0;
  offset+=8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* SRotationData_getp_sin_z(SRotationData  obj){
  int64_t offset=0;
  offset+=8;
  return ( double*)(( char*) obj+offset);
}
#endif
#ifndef XOBJ_TYPEDEF_XYShiftData
#define XOBJ_TYPEDEF_XYShiftData
typedef   struct XYShiftData_s * XYShiftData;
 static inline XYShiftData XYShiftData_getp(XYShiftData  obj){
  int64_t offset=0;
  return (XYShiftData)(( char*) obj+offset);
}
 static inline double XYShiftData_get_dx(const XYShiftData  obj){
  int64_t offset=0;
  return *( double*)(( char*) obj+offset);
}
 static inline void XYShiftData_set_dx(XYShiftData  obj, double value){
  int64_t offset=0;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* XYShiftData_getp_dx(XYShiftData  obj){
  int64_t offset=0;
  return ( double*)(( char*) obj+offset);
}
 static inline double XYShiftData_get_dy(const XYShiftData  obj){
  int64_t offset=0;
  offset+=8;
  return *( double*)(( char*) obj+offset);
}
 static inline void XYShiftData_set_dy(XYShiftData  obj, double value){
  int64_t offset=0;
  offset+=8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* XYShiftData_getp_dy(XYShiftData  obj){
  int64_t offset=0;
  offset+=8;
  return ( double*)(( char*) obj+offset);
}
#endif
#ifndef XOBJ_TYPEDEF_DipoleEdgeData
#define XOBJ_TYPEDEF_DipoleEdgeData
typedef   struct DipoleEdgeData_s * DipoleEdgeData;
 static inline DipoleEdgeData DipoleEdgeData_getp(DipoleEdgeData  obj){
  int64_t offset=0;
  return (DipoleEdgeData)(( char*) obj+offset);
}
 static inline double DipoleEdgeData_get_r21(const DipoleEdgeData  obj){
  int64_t offset=0;
  return *( double*)(( char*) obj+offset);
}
 static inline void DipoleEdgeData_set_r21(DipoleEdgeData  obj, double value){
  int64_t offset=0;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* DipoleEdgeData_getp_r21(DipoleEdgeData  obj){
  int64_t offset=0;
  return ( double*)(( char*) obj+offset);
}
 static inline double DipoleEdgeData_get_r43(const DipoleEdgeData  obj){
  int64_t offset=0;
  offset+=8;
  return *( double*)(( char*) obj+offset);
}
 static inline void DipoleEdgeData_set_r43(DipoleEdgeData  obj, double value){
  int64_t offset=0;
  offset+=8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* DipoleEdgeData_getp_r43(DipoleEdgeData  obj){
  int64_t offset=0;
  offset+=8;
  return ( double*)(( char*) obj+offset);
}
 static inline double DipoleEdgeData_get_hgap(const DipoleEdgeData  obj){
  int64_t offset=0;
  offset+=16;
  return *( double*)(( char*) obj+offset);
}
 static inline void DipoleEdgeData_set_hgap(DipoleEdgeData  obj, double value){
  int64_t offset=0;
  offset+=16;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* DipoleEdgeData_getp_hgap(DipoleEdgeData  obj){
  int64_t offset=0;
  offset+=16;
  return ( double*)(( char*) obj+offset);
}
 static inline double DipoleEdgeData_get_h(const DipoleEdgeData  obj){
  int64_t offset=0;
  offset+=24;
  return *( double*)(( char*) obj+offset);
}
 static inline void DipoleEdgeData_set_h(DipoleEdgeData  obj, double value){
  int64_t offset=0;
  offset+=24;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* DipoleEdgeData_getp_h(DipoleEdgeData  obj){
  int64_t offset=0;
  offset+=24;
  return ( double*)(( char*) obj+offset);
}
 static inline double DipoleEdgeData_get_e1(const DipoleEdgeData  obj){
  int64_t offset=0;
  offset+=32;
  return *( double*)(( char*) obj+offset);
}
 static inline void DipoleEdgeData_set_e1(DipoleEdgeData  obj, double value){
  int64_t offset=0;
  offset+=32;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* DipoleEdgeData_getp_e1(DipoleEdgeData  obj){
  int64_t offset=0;
  offset+=32;
  return ( double*)(( char*) obj+offset);
}
 static inline double DipoleEdgeData_get_fint(const DipoleEdgeData  obj){
  int64_t offset=0;
  offset+=40;
  return *( double*)(( char*) obj+offset);
}
 static inline void DipoleEdgeData_set_fint(DipoleEdgeData  obj, double value){
  int64_t offset=0;
  offset+=40;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* DipoleEdgeData_getp_fint(DipoleEdgeData  obj){
  int64_t offset=0;
  offset+=40;
  return ( double*)(( char*) obj+offset);
}
#endif
#ifndef XOBJ_TYPEDEF_ElensData
#define XOBJ_TYPEDEF_ElensData
typedef   struct ElensData_s * ElensData;
 static inline ElensData ElensData_getp(ElensData  obj){
  int64_t offset=0;
  return (ElensData)(( char*) obj+offset);
}
 static inline double ElensData_get_current(const ElensData  obj){
  int64_t offset=0;
  return *( double*)(( char*) obj+offset);
}
 static inline void ElensData_set_current(ElensData  obj, double value){
  int64_t offset=0;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* ElensData_getp_current(ElensData  obj){
  int64_t offset=0;
  return ( double*)(( char*) obj+offset);
}
 static inline double ElensData_get_inner_radius(const ElensData  obj){
  int64_t offset=0;
  offset+=8;
  return *( double*)(( char*) obj+offset);
}
 static inline void ElensData_set_inner_radius(ElensData  obj, double value){
  int64_t offset=0;
  offset+=8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* ElensData_getp_inner_radius(ElensData  obj){
  int64_t offset=0;
  offset+=8;
  return ( double*)(( char*) obj+offset);
}
 static inline double ElensData_get_outer_radius(const ElensData  obj){
  int64_t offset=0;
  offset+=16;
  return *( double*)(( char*) obj+offset);
}
 static inline void ElensData_set_outer_radius(ElensData  obj, double value){
  int64_t offset=0;
  offset+=16;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* ElensData_getp_outer_radius(ElensData  obj){
  int64_t offset=0;
  offset+=16;
  return ( double*)(( char*) obj+offset);
}
 static inline double ElensData_get_elens_length(const ElensData  obj){
  int64_t offset=0;
  offset+=24;
  return *( double*)(( char*) obj+offset);
}
 static inline void ElensData_set_elens_length(ElensData  obj, double value){
  int64_t offset=0;
  offset+=24;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* ElensData_getp_elens_length(ElensData  obj){
  int64_t offset=0;
  offset+=24;
  return ( double*)(( char*) obj+offset);
}
 static inline double ElensData_get_voltage(const ElensData  obj){
  int64_t offset=0;
  offset+=32;
  return *( double*)(( char*) obj+offset);
}
 static inline void ElensData_set_voltage(ElensData  obj, double value){
  int64_t offset=0;
  offset+=32;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* ElensData_getp_voltage(ElensData  obj){
  int64_t offset=0;
  offset+=32;
  return ( double*)(( char*) obj+offset);
}
 static inline double ElensData_get_residual_kick_x(const ElensData  obj){
  int64_t offset=0;
  offset+=40;
  return *( double*)(( char*) obj+offset);
}
 static inline void ElensData_set_residual_kick_x(ElensData  obj, double value){
  int64_t offset=0;
  offset+=40;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* ElensData_getp_residual_kick_x(ElensData  obj){
  int64_t offset=0;
  offset+=40;
  return ( double*)(( char*) obj+offset);
}
 static inline double ElensData_get_residual_kick_y(const ElensData  obj){
  int64_t offset=0;
  offset+=48;
  return *( double*)(( char*) obj+offset);
}
 static inline void ElensData_set_residual_kick_y(ElensData  obj, double value){
  int64_t offset=0;
  offset+=48;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* ElensData_getp_residual_kick_y(ElensData  obj){
  int64_t offset=0;
  offset+=48;
  return ( double*)(( char*) obj+offset);
}
#endif
#ifndef XOBJ_TYPEDEF_LongitudinalProfileQGaussianData
#define XOBJ_TYPEDEF_LongitudinalProfileQGaussianData
typedef   struct LongitudinalProfileQGaussianData_s * LongitudinalProfileQGaussianData;
 static inline LongitudinalProfileQGaussianData LongitudinalProfileQGaussianData_getp(LongitudinalProfileQGaussianData  obj){
  int64_t offset=0;
  return (LongitudinalProfileQGaussianData)(( char*) obj+offset);
}
 static inline double LongitudinalProfileQGaussianData_get_number_of_particles(const LongitudinalProfileQGaussianData  obj){
  int64_t offset=0;
  return *( double*)(( char*) obj+offset);
}
 static inline void LongitudinalProfileQGaussianData_set_number_of_particles(LongitudinalProfileQGaussianData  obj, double value){
  int64_t offset=0;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* LongitudinalProfileQGaussianData_getp_number_of_particles(LongitudinalProfileQGaussianData  obj){
  int64_t offset=0;
  return ( double*)(( char*) obj+offset);
}
 static inline double LongitudinalProfileQGaussianData_get__q_tol(const LongitudinalProfileQGaussianData  obj){
  int64_t offset=0;
  offset+=8;
  return *( double*)(( char*) obj+offset);
}
 static inline void LongitudinalProfileQGaussianData_set__q_tol(LongitudinalProfileQGaussianData  obj, double value){
  int64_t offset=0;
  offset+=8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* LongitudinalProfileQGaussianData_getp__q_tol(LongitudinalProfileQGaussianData  obj){
  int64_t offset=0;
  offset+=8;
  return ( double*)(( char*) obj+offset);
}
 static inline double LongitudinalProfileQGaussianData_get__z0(const LongitudinalProfileQGaussianData  obj){
  int64_t offset=0;
  offset+=16;
  return *( double*)(( char*) obj+offset);
}
 static inline void LongitudinalProfileQGaussianData_set__z0(LongitudinalProfileQGaussianData  obj, double value){
  int64_t offset=0;
  offset+=16;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* LongitudinalProfileQGaussianData_getp__z0(LongitudinalProfileQGaussianData  obj){
  int64_t offset=0;
  offset+=16;
  return ( double*)(( char*) obj+offset);
}
 static inline double LongitudinalProfileQGaussianData_get__sigma_z(const LongitudinalProfileQGaussianData  obj){
  int64_t offset=0;
  offset+=24;
  return *( double*)(( char*) obj+offset);
}
 static inline void LongitudinalProfileQGaussianData_set__sigma_z(LongitudinalProfileQGaussianData  obj, double value){
  int64_t offset=0;
  offset+=24;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* LongitudinalProfileQGaussianData_getp__sigma_z(LongitudinalProfileQGaussianData  obj){
  int64_t offset=0;
  offset+=24;
  return ( double*)(( char*) obj+offset);
}
 static inline double LongitudinalProfileQGaussianData_get__q_param(const LongitudinalProfileQGaussianData  obj){
  int64_t offset=0;
  offset+=32;
  return *( double*)(( char*) obj+offset);
}
 static inline void LongitudinalProfileQGaussianData_set__q_param(LongitudinalProfileQGaussianData  obj, double value){
  int64_t offset=0;
  offset+=32;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* LongitudinalProfileQGaussianData_getp__q_param(LongitudinalProfileQGaussianData  obj){
  int64_t offset=0;
  offset+=32;
  return ( double*)(( char*) obj+offset);
}
 static inline double LongitudinalProfileQGaussianData_get__cq_param(const LongitudinalProfileQGaussianData  obj){
  int64_t offset=0;
  offset+=40;
  return *( double*)(( char*) obj+offset);
}
 static inline void LongitudinalProfileQGaussianData_set__cq_param(LongitudinalProfileQGaussianData  obj, double value){
  int64_t offset=0;
  offset+=40;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* LongitudinalProfileQGaussianData_getp__cq_param(LongitudinalProfileQGaussianData  obj){
  int64_t offset=0;
  offset+=40;
  return ( double*)(( char*) obj+offset);
}
 static inline double LongitudinalProfileQGaussianData_get__beta_param(const LongitudinalProfileQGaussianData  obj){
  int64_t offset=0;
  offset+=48;
  return *( double*)(( char*) obj+offset);
}
 static inline void LongitudinalProfileQGaussianData_set__beta_param(LongitudinalProfileQGaussianData  obj, double value){
  int64_t offset=0;
  offset+=48;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* LongitudinalProfileQGaussianData_getp__beta_param(LongitudinalProfileQGaussianData  obj){
  int64_t offset=0;
  offset+=48;
  return ( double*)(( char*) obj+offset);
}
 static inline double LongitudinalProfileQGaussianData_get__sqrt_beta_param(const LongitudinalProfileQGaussianData  obj){
  int64_t offset=0;
  offset+=56;
  return *( double*)(( char*) obj+offset);
}
 static inline void LongitudinalProfileQGaussianData_set__sqrt_beta_param(LongitudinalProfileQGaussianData  obj, double value){
  int64_t offset=0;
  offset+=56;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* LongitudinalProfileQGaussianData_getp__sqrt_beta_param(LongitudinalProfileQGaussianData  obj){
  int64_t offset=0;
  offset+=56;
  return ( double*)(( char*) obj+offset);
}
 static inline double LongitudinalProfileQGaussianData_get__support_min(const LongitudinalProfileQGaussianData  obj){
  int64_t offset=0;
  offset+=64;
  return *( double*)(( char*) obj+offset);
}
 static inline void LongitudinalProfileQGaussianData_set__support_min(LongitudinalProfileQGaussianData  obj, double value){
  int64_t offset=0;
  offset+=64;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* LongitudinalProfileQGaussianData_getp__support_min(LongitudinalProfileQGaussianData  obj){
  int64_t offset=0;
  offset+=64;
  return ( double*)(( char*) obj+offset);
}
 static inline double LongitudinalProfileQGaussianData_get__support_max(const LongitudinalProfileQGaussianData  obj){
  int64_t offset=0;
  offset+=72;
  return *( double*)(( char*) obj+offset);
}
 static inline void LongitudinalProfileQGaussianData_set__support_max(LongitudinalProfileQGaussianData  obj, double value){
  int64_t offset=0;
  offset+=72;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* LongitudinalProfileQGaussianData_getp__support_max(LongitudinalProfileQGaussianData  obj){
  int64_t offset=0;
  offset+=72;
  return ( double*)(( char*) obj+offset);
}
#endif
#ifndef XOBJ_TYPEDEF_ArrNFloat64
#define XOBJ_TYPEDEF_ArrNFloat64
typedef   struct ArrNFloat64_s * ArrNFloat64;
 static inline ArrNFloat64 ArrNFloat64_getp(ArrNFloat64  obj){
  int64_t offset=0;
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t ArrNFloat64_len(ArrNFloat64  obj){
  int64_t offset=0;
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double ArrNFloat64_get(const ArrNFloat64  obj, int64_t i0){
  int64_t offset=0;
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void ArrNFloat64_set(ArrNFloat64  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* ArrNFloat64_getp1(ArrNFloat64  obj, int64_t i0){
  int64_t offset=0;
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
#endif
#ifndef XOBJ_TYPEDEF_BoostParameters
#define XOBJ_TYPEDEF_BoostParameters
typedef   struct BoostParameters_s * BoostParameters;
 static inline BoostParameters BoostParameters_getp(BoostParameters  obj){
  int64_t offset=0;
  return (BoostParameters)(( char*) obj+offset);
}
 static inline double BoostParameters_get_sphi(const BoostParameters  obj){
  int64_t offset=0;
  return *( double*)(( char*) obj+offset);
}
 static inline void BoostParameters_set_sphi(BoostParameters  obj, double value){
  int64_t offset=0;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* BoostParameters_getp_sphi(BoostParameters  obj){
  int64_t offset=0;
  return ( double*)(( char*) obj+offset);
}
 static inline double BoostParameters_get_cphi(const BoostParameters  obj){
  int64_t offset=0;
  offset+=8;
  return *( double*)(( char*) obj+offset);
}
 static inline void BoostParameters_set_cphi(BoostParameters  obj, double value){
  int64_t offset=0;
  offset+=8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* BoostParameters_getp_cphi(BoostParameters  obj){
  int64_t offset=0;
  offset+=8;
  return ( double*)(( char*) obj+offset);
}
 static inline double BoostParameters_get_tphi(const BoostParameters  obj){
  int64_t offset=0;
  offset+=16;
  return *( double*)(( char*) obj+offset);
}
 static inline void BoostParameters_set_tphi(BoostParameters  obj, double value){
  int64_t offset=0;
  offset+=16;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* BoostParameters_getp_tphi(BoostParameters  obj){
  int64_t offset=0;
  offset+=16;
  return ( double*)(( char*) obj+offset);
}
 static inline double BoostParameters_get_salpha(const BoostParameters  obj){
  int64_t offset=0;
  offset+=24;
  return *( double*)(( char*) obj+offset);
}
 static inline void BoostParameters_set_salpha(BoostParameters  obj, double value){
  int64_t offset=0;
  offset+=24;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* BoostParameters_getp_salpha(BoostParameters  obj){
  int64_t offset=0;
  offset+=24;
  return ( double*)(( char*) obj+offset);
}
 static inline double BoostParameters_get_calpha(const BoostParameters  obj){
  int64_t offset=0;
  offset+=32;
  return *( double*)(( char*) obj+offset);
}
 static inline void BoostParameters_set_calpha(BoostParameters  obj, double value){
  int64_t offset=0;
  offset+=32;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* BoostParameters_getp_calpha(BoostParameters  obj){
  int64_t offset=0;
  offset+=32;
  return ( double*)(( char*) obj+offset);
}
#endif
#ifndef XOBJ_TYPEDEF_Sigmas
#define XOBJ_TYPEDEF_Sigmas
typedef   struct Sigmas_s * Sigmas;
 static inline Sigmas Sigmas_getp(Sigmas  obj){
  int64_t offset=0;
  return (Sigmas)(( char*) obj+offset);
}
 static inline double Sigmas_get_Sig_11(const Sigmas  obj){
  int64_t offset=0;
  return *( double*)(( char*) obj+offset);
}
 static inline void Sigmas_set_Sig_11(Sigmas  obj, double value){
  int64_t offset=0;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* Sigmas_getp_Sig_11(Sigmas  obj){
  int64_t offset=0;
  return ( double*)(( char*) obj+offset);
}
 static inline double Sigmas_get_Sig_12(const Sigmas  obj){
  int64_t offset=0;
  offset+=8;
  return *( double*)(( char*) obj+offset);
}
 static inline void Sigmas_set_Sig_12(Sigmas  obj, double value){
  int64_t offset=0;
  offset+=8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* Sigmas_getp_Sig_12(Sigmas  obj){
  int64_t offset=0;
  offset+=8;
  return ( double*)(( char*) obj+offset);
}
 static inline double Sigmas_get_Sig_13(const Sigmas  obj){
  int64_t offset=0;
  offset+=16;
  return *( double*)(( char*) obj+offset);
}
 static inline void Sigmas_set_Sig_13(Sigmas  obj, double value){
  int64_t offset=0;
  offset+=16;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* Sigmas_getp_Sig_13(Sigmas  obj){
  int64_t offset=0;
  offset+=16;
  return ( double*)(( char*) obj+offset);
}
 static inline double Sigmas_get_Sig_14(const Sigmas  obj){
  int64_t offset=0;
  offset+=24;
  return *( double*)(( char*) obj+offset);
}
 static inline void Sigmas_set_Sig_14(Sigmas  obj, double value){
  int64_t offset=0;
  offset+=24;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* Sigmas_getp_Sig_14(Sigmas  obj){
  int64_t offset=0;
  offset+=24;
  return ( double*)(( char*) obj+offset);
}
 static inline double Sigmas_get_Sig_22(const Sigmas  obj){
  int64_t offset=0;
  offset+=32;
  return *( double*)(( char*) obj+offset);
}
 static inline void Sigmas_set_Sig_22(Sigmas  obj, double value){
  int64_t offset=0;
  offset+=32;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* Sigmas_getp_Sig_22(Sigmas  obj){
  int64_t offset=0;
  offset+=32;
  return ( double*)(( char*) obj+offset);
}
 static inline double Sigmas_get_Sig_23(const Sigmas  obj){
  int64_t offset=0;
  offset+=40;
  return *( double*)(( char*) obj+offset);
}
 static inline void Sigmas_set_Sig_23(Sigmas  obj, double value){
  int64_t offset=0;
  offset+=40;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* Sigmas_getp_Sig_23(Sigmas  obj){
  int64_t offset=0;
  offset+=40;
  return ( double*)(( char*) obj+offset);
}
 static inline double Sigmas_get_Sig_24(const Sigmas  obj){
  int64_t offset=0;
  offset+=48;
  return *( double*)(( char*) obj+offset);
}
 static inline void Sigmas_set_Sig_24(Sigmas  obj, double value){
  int64_t offset=0;
  offset+=48;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* Sigmas_getp_Sig_24(Sigmas  obj){
  int64_t offset=0;
  offset+=48;
  return ( double*)(( char*) obj+offset);
}
 static inline double Sigmas_get_Sig_33(const Sigmas  obj){
  int64_t offset=0;
  offset+=56;
  return *( double*)(( char*) obj+offset);
}
 static inline void Sigmas_set_Sig_33(Sigmas  obj, double value){
  int64_t offset=0;
  offset+=56;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* Sigmas_getp_Sig_33(Sigmas  obj){
  int64_t offset=0;
  offset+=56;
  return ( double*)(( char*) obj+offset);
}
 static inline double Sigmas_get_Sig_34(const Sigmas  obj){
  int64_t offset=0;
  offset+=64;
  return *( double*)(( char*) obj+offset);
}
 static inline void Sigmas_set_Sig_34(Sigmas  obj, double value){
  int64_t offset=0;
  offset+=64;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* Sigmas_getp_Sig_34(Sigmas  obj){
  int64_t offset=0;
  offset+=64;
  return ( double*)(( char*) obj+offset);
}
 static inline double Sigmas_get_Sig_44(const Sigmas  obj){
  int64_t offset=0;
  offset+=72;
  return *( double*)(( char*) obj+offset);
}
 static inline void Sigmas_set_Sig_44(Sigmas  obj, double value){
  int64_t offset=0;
  offset+=72;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* Sigmas_getp_Sig_44(Sigmas  obj){
  int64_t offset=0;
  offset+=72;
  return ( double*)(( char*) obj+offset);
}
#endif
#ifndef XOBJ_TYPEDEF_LinearTransferMatrixData
#define XOBJ_TYPEDEF_LinearTransferMatrixData
typedef   struct LinearTransferMatrixData_s * LinearTransferMatrixData;
 static inline LinearTransferMatrixData LinearTransferMatrixData_getp(LinearTransferMatrixData  obj){
  int64_t offset=0;
  return (LinearTransferMatrixData)(( char*) obj+offset);
}
 static inline int64_t LinearTransferMatrixData_get_no_detuning(const LinearTransferMatrixData  obj){
  int64_t offset=0;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void LinearTransferMatrixData_set_no_detuning(LinearTransferMatrixData  obj, int64_t value){
  int64_t offset=0;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* LinearTransferMatrixData_getp_no_detuning(LinearTransferMatrixData  obj){
  int64_t offset=0;
  return ( int64_t*)(( char*) obj+offset);
}
 static inline double LinearTransferMatrixData_get_q_x(const LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=8;
  return *( double*)(( char*) obj+offset);
}
 static inline void LinearTransferMatrixData_set_q_x(LinearTransferMatrixData  obj, double value){
  int64_t offset=0;
  offset+=8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* LinearTransferMatrixData_getp_q_x(LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=8;
  return ( double*)(( char*) obj+offset);
}
 static inline double LinearTransferMatrixData_get_q_y(const LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=16;
  return *( double*)(( char*) obj+offset);
}
 static inline void LinearTransferMatrixData_set_q_y(LinearTransferMatrixData  obj, double value){
  int64_t offset=0;
  offset+=16;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* LinearTransferMatrixData_getp_q_y(LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=16;
  return ( double*)(( char*) obj+offset);
}
 static inline double LinearTransferMatrixData_get_cos_s(const LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=24;
  return *( double*)(( char*) obj+offset);
}
 static inline void LinearTransferMatrixData_set_cos_s(LinearTransferMatrixData  obj, double value){
  int64_t offset=0;
  offset+=24;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* LinearTransferMatrixData_getp_cos_s(LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=24;
  return ( double*)(( char*) obj+offset);
}
 static inline double LinearTransferMatrixData_get_sin_s(const LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=32;
  return *( double*)(( char*) obj+offset);
}
 static inline void LinearTransferMatrixData_set_sin_s(LinearTransferMatrixData  obj, double value){
  int64_t offset=0;
  offset+=32;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* LinearTransferMatrixData_getp_sin_s(LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=32;
  return ( double*)(( char*) obj+offset);
}
 static inline double LinearTransferMatrixData_get_beta_x_0(const LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=40;
  return *( double*)(( char*) obj+offset);
}
 static inline void LinearTransferMatrixData_set_beta_x_0(LinearTransferMatrixData  obj, double value){
  int64_t offset=0;
  offset+=40;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* LinearTransferMatrixData_getp_beta_x_0(LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=40;
  return ( double*)(( char*) obj+offset);
}
 static inline double LinearTransferMatrixData_get_beta_y_0(const LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=48;
  return *( double*)(( char*) obj+offset);
}
 static inline void LinearTransferMatrixData_set_beta_y_0(LinearTransferMatrixData  obj, double value){
  int64_t offset=0;
  offset+=48;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* LinearTransferMatrixData_getp_beta_y_0(LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=48;
  return ( double*)(( char*) obj+offset);
}
 static inline double LinearTransferMatrixData_get_beta_ratio_x(const LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=56;
  return *( double*)(( char*) obj+offset);
}
 static inline void LinearTransferMatrixData_set_beta_ratio_x(LinearTransferMatrixData  obj, double value){
  int64_t offset=0;
  offset+=56;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* LinearTransferMatrixData_getp_beta_ratio_x(LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=56;
  return ( double*)(( char*) obj+offset);
}
 static inline double LinearTransferMatrixData_get_beta_prod_x(const LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=64;
  return *( double*)(( char*) obj+offset);
}
 static inline void LinearTransferMatrixData_set_beta_prod_x(LinearTransferMatrixData  obj, double value){
  int64_t offset=0;
  offset+=64;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* LinearTransferMatrixData_getp_beta_prod_x(LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=64;
  return ( double*)(( char*) obj+offset);
}
 static inline double LinearTransferMatrixData_get_beta_ratio_y(const LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=72;
  return *( double*)(( char*) obj+offset);
}
 static inline void LinearTransferMatrixData_set_beta_ratio_y(LinearTransferMatrixData  obj, double value){
  int64_t offset=0;
  offset+=72;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* LinearTransferMatrixData_getp_beta_ratio_y(LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=72;
  return ( double*)(( char*) obj+offset);
}
 static inline double LinearTransferMatrixData_get_beta_prod_y(const LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=80;
  return *( double*)(( char*) obj+offset);
}
 static inline void LinearTransferMatrixData_set_beta_prod_y(LinearTransferMatrixData  obj, double value){
  int64_t offset=0;
  offset+=80;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* LinearTransferMatrixData_getp_beta_prod_y(LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=80;
  return ( double*)(( char*) obj+offset);
}
 static inline double LinearTransferMatrixData_get_alpha_x_0(const LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=88;
  return *( double*)(( char*) obj+offset);
}
 static inline void LinearTransferMatrixData_set_alpha_x_0(LinearTransferMatrixData  obj, double value){
  int64_t offset=0;
  offset+=88;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* LinearTransferMatrixData_getp_alpha_x_0(LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=88;
  return ( double*)(( char*) obj+offset);
}
 static inline double LinearTransferMatrixData_get_alpha_x_1(const LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=96;
  return *( double*)(( char*) obj+offset);
}
 static inline void LinearTransferMatrixData_set_alpha_x_1(LinearTransferMatrixData  obj, double value){
  int64_t offset=0;
  offset+=96;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* LinearTransferMatrixData_getp_alpha_x_1(LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=96;
  return ( double*)(( char*) obj+offset);
}
 static inline double LinearTransferMatrixData_get_alpha_y_0(const LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=104;
  return *( double*)(( char*) obj+offset);
}
 static inline void LinearTransferMatrixData_set_alpha_y_0(LinearTransferMatrixData  obj, double value){
  int64_t offset=0;
  offset+=104;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* LinearTransferMatrixData_getp_alpha_y_0(LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=104;
  return ( double*)(( char*) obj+offset);
}
 static inline double LinearTransferMatrixData_get_alpha_y_1(const LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=112;
  return *( double*)(( char*) obj+offset);
}
 static inline void LinearTransferMatrixData_set_alpha_y_1(LinearTransferMatrixData  obj, double value){
  int64_t offset=0;
  offset+=112;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* LinearTransferMatrixData_getp_alpha_y_1(LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=112;
  return ( double*)(( char*) obj+offset);
}
 static inline double LinearTransferMatrixData_get_disp_x_0(const LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=120;
  return *( double*)(( char*) obj+offset);
}
 static inline void LinearTransferMatrixData_set_disp_x_0(LinearTransferMatrixData  obj, double value){
  int64_t offset=0;
  offset+=120;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* LinearTransferMatrixData_getp_disp_x_0(LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=120;
  return ( double*)(( char*) obj+offset);
}
 static inline double LinearTransferMatrixData_get_disp_x_1(const LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=128;
  return *( double*)(( char*) obj+offset);
}
 static inline void LinearTransferMatrixData_set_disp_x_1(LinearTransferMatrixData  obj, double value){
  int64_t offset=0;
  offset+=128;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* LinearTransferMatrixData_getp_disp_x_1(LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=128;
  return ( double*)(( char*) obj+offset);
}
 static inline double LinearTransferMatrixData_get_disp_y_0(const LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=136;
  return *( double*)(( char*) obj+offset);
}
 static inline void LinearTransferMatrixData_set_disp_y_0(LinearTransferMatrixData  obj, double value){
  int64_t offset=0;
  offset+=136;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* LinearTransferMatrixData_getp_disp_y_0(LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=136;
  return ( double*)(( char*) obj+offset);
}
 static inline double LinearTransferMatrixData_get_disp_y_1(const LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=144;
  return *( double*)(( char*) obj+offset);
}
 static inline void LinearTransferMatrixData_set_disp_y_1(LinearTransferMatrixData  obj, double value){
  int64_t offset=0;
  offset+=144;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* LinearTransferMatrixData_getp_disp_y_1(LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=144;
  return ( double*)(( char*) obj+offset);
}
 static inline double LinearTransferMatrixData_get_beta_s(const LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=152;
  return *( double*)(( char*) obj+offset);
}
 static inline void LinearTransferMatrixData_set_beta_s(LinearTransferMatrixData  obj, double value){
  int64_t offset=0;
  offset+=152;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* LinearTransferMatrixData_getp_beta_s(LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=152;
  return ( double*)(( char*) obj+offset);
}
 static inline double LinearTransferMatrixData_get_energy_ref_increment(const LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=160;
  return *( double*)(( char*) obj+offset);
}
 static inline void LinearTransferMatrixData_set_energy_ref_increment(LinearTransferMatrixData  obj, double value){
  int64_t offset=0;
  offset+=160;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* LinearTransferMatrixData_getp_energy_ref_increment(LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=160;
  return ( double*)(( char*) obj+offset);
}
 static inline double LinearTransferMatrixData_get_energy_increment(const LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=168;
  return *( double*)(( char*) obj+offset);
}
 static inline void LinearTransferMatrixData_set_energy_increment(LinearTransferMatrixData  obj, double value){
  int64_t offset=0;
  offset+=168;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* LinearTransferMatrixData_getp_energy_increment(LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=168;
  return ( double*)(( char*) obj+offset);
}
 static inline double LinearTransferMatrixData_get_chroma_x(const LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=176;
  return *( double*)(( char*) obj+offset);
}
 static inline void LinearTransferMatrixData_set_chroma_x(LinearTransferMatrixData  obj, double value){
  int64_t offset=0;
  offset+=176;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* LinearTransferMatrixData_getp_chroma_x(LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=176;
  return ( double*)(( char*) obj+offset);
}
 static inline double LinearTransferMatrixData_get_chroma_y(const LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=184;
  return *( double*)(( char*) obj+offset);
}
 static inline void LinearTransferMatrixData_set_chroma_y(LinearTransferMatrixData  obj, double value){
  int64_t offset=0;
  offset+=184;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* LinearTransferMatrixData_getp_chroma_y(LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=184;
  return ( double*)(( char*) obj+offset);
}
 static inline double LinearTransferMatrixData_get_detx_x(const LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=192;
  return *( double*)(( char*) obj+offset);
}
 static inline void LinearTransferMatrixData_set_detx_x(LinearTransferMatrixData  obj, double value){
  int64_t offset=0;
  offset+=192;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* LinearTransferMatrixData_getp_detx_x(LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=192;
  return ( double*)(( char*) obj+offset);
}
 static inline double LinearTransferMatrixData_get_detx_y(const LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=200;
  return *( double*)(( char*) obj+offset);
}
 static inline void LinearTransferMatrixData_set_detx_y(LinearTransferMatrixData  obj, double value){
  int64_t offset=0;
  offset+=200;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* LinearTransferMatrixData_getp_detx_y(LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=200;
  return ( double*)(( char*) obj+offset);
}
 static inline double LinearTransferMatrixData_get_dety_y(const LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=208;
  return *( double*)(( char*) obj+offset);
}
 static inline void LinearTransferMatrixData_set_dety_y(LinearTransferMatrixData  obj, double value){
  int64_t offset=0;
  offset+=208;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* LinearTransferMatrixData_getp_dety_y(LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=208;
  return ( double*)(( char*) obj+offset);
}
 static inline double LinearTransferMatrixData_get_dety_x(const LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=216;
  return *( double*)(( char*) obj+offset);
}
 static inline void LinearTransferMatrixData_set_dety_x(LinearTransferMatrixData  obj, double value){
  int64_t offset=0;
  offset+=216;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* LinearTransferMatrixData_getp_dety_x(LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=216;
  return ( double*)(( char*) obj+offset);
}
 static inline double LinearTransferMatrixData_get_x_ref_0(const LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=224;
  return *( double*)(( char*) obj+offset);
}
 static inline void LinearTransferMatrixData_set_x_ref_0(LinearTransferMatrixData  obj, double value){
  int64_t offset=0;
  offset+=224;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* LinearTransferMatrixData_getp_x_ref_0(LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=224;
  return ( double*)(( char*) obj+offset);
}
 static inline double LinearTransferMatrixData_get_px_ref_0(const LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=232;
  return *( double*)(( char*) obj+offset);
}
 static inline void LinearTransferMatrixData_set_px_ref_0(LinearTransferMatrixData  obj, double value){
  int64_t offset=0;
  offset+=232;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* LinearTransferMatrixData_getp_px_ref_0(LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=232;
  return ( double*)(( char*) obj+offset);
}
 static inline double LinearTransferMatrixData_get_y_ref_0(const LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=240;
  return *( double*)(( char*) obj+offset);
}
 static inline void LinearTransferMatrixData_set_y_ref_0(LinearTransferMatrixData  obj, double value){
  int64_t offset=0;
  offset+=240;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* LinearTransferMatrixData_getp_y_ref_0(LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=240;
  return ( double*)(( char*) obj+offset);
}
 static inline double LinearTransferMatrixData_get_py_ref_0(const LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=248;
  return *( double*)(( char*) obj+offset);
}
 static inline void LinearTransferMatrixData_set_py_ref_0(LinearTransferMatrixData  obj, double value){
  int64_t offset=0;
  offset+=248;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* LinearTransferMatrixData_getp_py_ref_0(LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=248;
  return ( double*)(( char*) obj+offset);
}
 static inline double LinearTransferMatrixData_get_x_ref_1(const LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=256;
  return *( double*)(( char*) obj+offset);
}
 static inline void LinearTransferMatrixData_set_x_ref_1(LinearTransferMatrixData  obj, double value){
  int64_t offset=0;
  offset+=256;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* LinearTransferMatrixData_getp_x_ref_1(LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=256;
  return ( double*)(( char*) obj+offset);
}
 static inline double LinearTransferMatrixData_get_px_ref_1(const LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=264;
  return *( double*)(( char*) obj+offset);
}
 static inline void LinearTransferMatrixData_set_px_ref_1(LinearTransferMatrixData  obj, double value){
  int64_t offset=0;
  offset+=264;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* LinearTransferMatrixData_getp_px_ref_1(LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=264;
  return ( double*)(( char*) obj+offset);
}
 static inline double LinearTransferMatrixData_get_y_ref_1(const LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=272;
  return *( double*)(( char*) obj+offset);
}
 static inline void LinearTransferMatrixData_set_y_ref_1(LinearTransferMatrixData  obj, double value){
  int64_t offset=0;
  offset+=272;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* LinearTransferMatrixData_getp_y_ref_1(LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=272;
  return ( double*)(( char*) obj+offset);
}
 static inline double LinearTransferMatrixData_get_py_ref_1(const LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=280;
  return *( double*)(( char*) obj+offset);
}
 static inline void LinearTransferMatrixData_set_py_ref_1(LinearTransferMatrixData  obj, double value){
  int64_t offset=0;
  offset+=280;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* LinearTransferMatrixData_getp_py_ref_1(LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=280;
  return ( double*)(( char*) obj+offset);
}
 static inline int64_t LinearTransferMatrixData_get_uncorrelated_rad_damping(const LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=288;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void LinearTransferMatrixData_set_uncorrelated_rad_damping(LinearTransferMatrixData  obj, int64_t value){
  int64_t offset=0;
  offset+=288;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* LinearTransferMatrixData_getp_uncorrelated_rad_damping(LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=288;
  return ( int64_t*)(( char*) obj+offset);
}
 static inline double LinearTransferMatrixData_get_damping_factor_x(const LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=296;
  return *( double*)(( char*) obj+offset);
}
 static inline void LinearTransferMatrixData_set_damping_factor_x(LinearTransferMatrixData  obj, double value){
  int64_t offset=0;
  offset+=296;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* LinearTransferMatrixData_getp_damping_factor_x(LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=296;
  return ( double*)(( char*) obj+offset);
}
 static inline double LinearTransferMatrixData_get_damping_factor_y(const LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=304;
  return *( double*)(( char*) obj+offset);
}
 static inline void LinearTransferMatrixData_set_damping_factor_y(LinearTransferMatrixData  obj, double value){
  int64_t offset=0;
  offset+=304;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* LinearTransferMatrixData_getp_damping_factor_y(LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=304;
  return ( double*)(( char*) obj+offset);
}
 static inline double LinearTransferMatrixData_get_damping_factor_s(const LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=312;
  return *( double*)(( char*) obj+offset);
}
 static inline void LinearTransferMatrixData_set_damping_factor_s(LinearTransferMatrixData  obj, double value){
  int64_t offset=0;
  offset+=312;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* LinearTransferMatrixData_getp_damping_factor_s(LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=312;
  return ( double*)(( char*) obj+offset);
}
 static inline int64_t LinearTransferMatrixData_get_uncorrelated_gauss_noise(const LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=320;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void LinearTransferMatrixData_set_uncorrelated_gauss_noise(LinearTransferMatrixData  obj, int64_t value){
  int64_t offset=0;
  offset+=320;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* LinearTransferMatrixData_getp_uncorrelated_gauss_noise(LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=320;
  return ( int64_t*)(( char*) obj+offset);
}
 static inline double LinearTransferMatrixData_get_gauss_noise_ampl_x(const LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=328;
  return *( double*)(( char*) obj+offset);
}
 static inline void LinearTransferMatrixData_set_gauss_noise_ampl_x(LinearTransferMatrixData  obj, double value){
  int64_t offset=0;
  offset+=328;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* LinearTransferMatrixData_getp_gauss_noise_ampl_x(LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=328;
  return ( double*)(( char*) obj+offset);
}
 static inline double LinearTransferMatrixData_get_gauss_noise_ampl_y(const LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=336;
  return *( double*)(( char*) obj+offset);
}
 static inline void LinearTransferMatrixData_set_gauss_noise_ampl_y(LinearTransferMatrixData  obj, double value){
  int64_t offset=0;
  offset+=336;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* LinearTransferMatrixData_getp_gauss_noise_ampl_y(LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=336;
  return ( double*)(( char*) obj+offset);
}
 static inline double LinearTransferMatrixData_get_gauss_noise_ampl_s(const LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=344;
  return *( double*)(( char*) obj+offset);
}
 static inline void LinearTransferMatrixData_set_gauss_noise_ampl_s(LinearTransferMatrixData  obj, double value){
  int64_t offset=0;
  offset+=344;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* LinearTransferMatrixData_getp_gauss_noise_ampl_s(LinearTransferMatrixData  obj){
  int64_t offset=0;
  offset+=344;
  return ( double*)(( char*) obj+offset);
}
#endif
#ifndef XOBJ_TYPEDEF_BiGaussianFieldMapData
#define XOBJ_TYPEDEF_BiGaussianFieldMapData
typedef   struct BiGaussianFieldMapData_s * BiGaussianFieldMapData;
 static inline BiGaussianFieldMapData BiGaussianFieldMapData_getp(BiGaussianFieldMapData  obj){
  int64_t offset=0;
  return (BiGaussianFieldMapData)(( char*) obj+offset);
}
 static inline double BiGaussianFieldMapData_get_mean_x(const BiGaussianFieldMapData  obj){
  int64_t offset=0;
  return *( double*)(( char*) obj+offset);
}
 static inline void BiGaussianFieldMapData_set_mean_x(BiGaussianFieldMapData  obj, double value){
  int64_t offset=0;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* BiGaussianFieldMapData_getp_mean_x(BiGaussianFieldMapData  obj){
  int64_t offset=0;
  return ( double*)(( char*) obj+offset);
}
 static inline double BiGaussianFieldMapData_get_mean_y(const BiGaussianFieldMapData  obj){
  int64_t offset=0;
  offset+=8;
  return *( double*)(( char*) obj+offset);
}
 static inline void BiGaussianFieldMapData_set_mean_y(BiGaussianFieldMapData  obj, double value){
  int64_t offset=0;
  offset+=8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* BiGaussianFieldMapData_getp_mean_y(BiGaussianFieldMapData  obj){
  int64_t offset=0;
  offset+=8;
  return ( double*)(( char*) obj+offset);
}
 static inline double BiGaussianFieldMapData_get_sigma_x(const BiGaussianFieldMapData  obj){
  int64_t offset=0;
  offset+=16;
  return *( double*)(( char*) obj+offset);
}
 static inline void BiGaussianFieldMapData_set_sigma_x(BiGaussianFieldMapData  obj, double value){
  int64_t offset=0;
  offset+=16;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* BiGaussianFieldMapData_getp_sigma_x(BiGaussianFieldMapData  obj){
  int64_t offset=0;
  offset+=16;
  return ( double*)(( char*) obj+offset);
}
 static inline double BiGaussianFieldMapData_get_sigma_y(const BiGaussianFieldMapData  obj){
  int64_t offset=0;
  offset+=24;
  return *( double*)(( char*) obj+offset);
}
 static inline void BiGaussianFieldMapData_set_sigma_y(BiGaussianFieldMapData  obj, double value){
  int64_t offset=0;
  offset+=24;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* BiGaussianFieldMapData_getp_sigma_y(BiGaussianFieldMapData  obj){
  int64_t offset=0;
  offset+=24;
  return ( double*)(( char*) obj+offset);
}
 static inline double BiGaussianFieldMapData_get_min_sigma_diff(const BiGaussianFieldMapData  obj){
  int64_t offset=0;
  offset+=32;
  return *( double*)(( char*) obj+offset);
}
 static inline void BiGaussianFieldMapData_set_min_sigma_diff(BiGaussianFieldMapData  obj, double value){
  int64_t offset=0;
  offset+=32;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* BiGaussianFieldMapData_getp_min_sigma_diff(BiGaussianFieldMapData  obj){
  int64_t offset=0;
  offset+=32;
  return ( double*)(( char*) obj+offset);
}
 static inline int64_t BiGaussianFieldMapData_get__updatable(const BiGaussianFieldMapData  obj){
  int64_t offset=0;
  offset+=40;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void BiGaussianFieldMapData_set__updatable(BiGaussianFieldMapData  obj, int64_t value){
  int64_t offset=0;
  offset+=40;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* BiGaussianFieldMapData_getp__updatable(BiGaussianFieldMapData  obj){
  int64_t offset=0;
  offset+=40;
  return ( int64_t*)(( char*) obj+offset);
}
#endif
#ifndef XOBJ_TYPEDEF_RecordIdentifier
#define XOBJ_TYPEDEF_RecordIdentifier
typedef   struct RecordIdentifier_s * RecordIdentifier;
 static inline RecordIdentifier RecordIdentifier_getp(RecordIdentifier  obj){
  int64_t offset=0;
  return (RecordIdentifier)(( char*) obj+offset);
}
 static inline int64_t RecordIdentifier_get_buffer_id(const RecordIdentifier  obj){
  int64_t offset=0;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void RecordIdentifier_set_buffer_id(RecordIdentifier  obj, int64_t value){
  int64_t offset=0;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* RecordIdentifier_getp_buffer_id(RecordIdentifier  obj){
  int64_t offset=0;
  return ( int64_t*)(( char*) obj+offset);
}
 static inline int64_t RecordIdentifier_get_offset(const RecordIdentifier  obj){
  int64_t offset=0;
  offset+=8;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void RecordIdentifier_set_offset(RecordIdentifier  obj, int64_t value){
  int64_t offset=0;
  offset+=8;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* RecordIdentifier_getp_offset(RecordIdentifier  obj){
  int64_t offset=0;
  offset+=8;
  return ( int64_t*)(( char*) obj+offset);
}
#endif
#ifndef XOBJ_TYPEDEF_ArrNInt64
#define XOBJ_TYPEDEF_ArrNInt64
typedef   struct ArrNInt64_s * ArrNInt64;
 static inline ArrNInt64 ArrNInt64_getp(ArrNInt64  obj){
  int64_t offset=0;
  return (ArrNInt64)(( char*) obj+offset);
}
 static inline int64_t ArrNInt64_len(ArrNInt64  obj){
  int64_t offset=0;
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline int64_t ArrNInt64_get(const ArrNInt64  obj, int64_t i0){
  int64_t offset=0;
  offset+=16+i0*8;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void ArrNInt64_set(ArrNInt64  obj, int64_t i0, int64_t value){
  int64_t offset=0;
  offset+=16+i0*8;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* ArrNInt64_getp1(ArrNInt64  obj, int64_t i0){
  int64_t offset=0;
  offset+=16+i0*8;
  return ( int64_t*)(( char*) obj+offset);
}
#endif
#ifndef XOBJ_TYPEDEF_ArrNUint32
#define XOBJ_TYPEDEF_ArrNUint32
typedef   struct ArrNUint32_s * ArrNUint32;
 static inline ArrNUint32 ArrNUint32_getp(ArrNUint32  obj){
  int64_t offset=0;
  return (ArrNUint32)(( char*) obj+offset);
}
 static inline int64_t ArrNUint32_len(ArrNUint32  obj){
  int64_t offset=0;
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline uint32_t ArrNUint32_get(const ArrNUint32  obj, int64_t i0){
  int64_t offset=0;
  offset+=16+i0*4;
  return *( uint32_t*)(( char*) obj+offset);
}
 static inline void ArrNUint32_set(ArrNUint32  obj, int64_t i0, uint32_t value){
  int64_t offset=0;
  offset+=16+i0*4;
  *( uint32_t*)(( char*) obj+offset)=value;
}
 static inline  uint32_t* ArrNUint32_getp1(ArrNUint32  obj, int64_t i0){
  int64_t offset=0;
  offset+=16+i0*4;
  return ( uint32_t*)(( char*) obj+offset);
}
#endif
#ifndef XOBJ_TYPEDEF_RFMultipoleData
#define XOBJ_TYPEDEF_RFMultipoleData
typedef   struct RFMultipoleData_s * RFMultipoleData;
 static inline RFMultipoleData RFMultipoleData_getp(RFMultipoleData  obj){
  int64_t offset=0;
  return (RFMultipoleData)(( char*) obj+offset);
}
 static inline int64_t RFMultipoleData_get_order(const RFMultipoleData  obj){
  int64_t offset=0;
  offset+=8;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void RFMultipoleData_set_order(RFMultipoleData  obj, int64_t value){
  int64_t offset=0;
  offset+=8;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* RFMultipoleData_getp_order(RFMultipoleData  obj){
  int64_t offset=0;
  offset+=8;
  return ( int64_t*)(( char*) obj+offset);
}
 static inline double RFMultipoleData_get_voltage(const RFMultipoleData  obj){
  int64_t offset=0;
  offset+=16;
  return *( double*)(( char*) obj+offset);
}
 static inline void RFMultipoleData_set_voltage(RFMultipoleData  obj, double value){
  int64_t offset=0;
  offset+=16;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* RFMultipoleData_getp_voltage(RFMultipoleData  obj){
  int64_t offset=0;
  offset+=16;
  return ( double*)(( char*) obj+offset);
}
 static inline double RFMultipoleData_get_frequency(const RFMultipoleData  obj){
  int64_t offset=0;
  offset+=24;
  return *( double*)(( char*) obj+offset);
}
 static inline void RFMultipoleData_set_frequency(RFMultipoleData  obj, double value){
  int64_t offset=0;
  offset+=24;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* RFMultipoleData_getp_frequency(RFMultipoleData  obj){
  int64_t offset=0;
  offset+=24;
  return ( double*)(( char*) obj+offset);
}
 static inline double RFMultipoleData_get_lag(const RFMultipoleData  obj){
  int64_t offset=0;
  offset+=32;
  return *( double*)(( char*) obj+offset);
}
 static inline void RFMultipoleData_set_lag(RFMultipoleData  obj, double value){
  int64_t offset=0;
  offset+=32;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* RFMultipoleData_getp_lag(RFMultipoleData  obj){
  int64_t offset=0;
  offset+=32;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNFloat64 RFMultipoleData_getp_bal(RFMultipoleData  obj){
  int64_t offset=0;
  offset+=48;
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t RFMultipoleData_len_bal(RFMultipoleData  obj){
  int64_t offset=0;
  offset+=48;
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double RFMultipoleData_get_bal(const RFMultipoleData  obj, int64_t i0){
  int64_t offset=0;
  offset+=48;
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void RFMultipoleData_set_bal(RFMultipoleData  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=48;
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* RFMultipoleData_getp1_bal(RFMultipoleData  obj, int64_t i0){
  int64_t offset=0;
  offset+=48;
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNFloat64 RFMultipoleData_getp_phase(RFMultipoleData  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+40);
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t RFMultipoleData_len_phase(RFMultipoleData  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+40);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double RFMultipoleData_get_phase(const RFMultipoleData  obj, int64_t i0){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+40);
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void RFMultipoleData_set_phase(RFMultipoleData  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+40);
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* RFMultipoleData_getp1_phase(RFMultipoleData  obj, int64_t i0){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+40);
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
#endif
#ifndef XOBJ_TYPEDEF_BeamBeamBiGaussian3DData
#define XOBJ_TYPEDEF_BeamBeamBiGaussian3DData
typedef   struct BeamBeamBiGaussian3DData_s * BeamBeamBiGaussian3DData;
 static inline BeamBeamBiGaussian3DData BeamBeamBiGaussian3DData_getp(BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  return (BeamBeamBiGaussian3DData)(( char*) obj+offset);
}
 static inline double BeamBeamBiGaussian3DData_get_q0(const BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=8;
  return *( double*)(( char*) obj+offset);
}
 static inline void BeamBeamBiGaussian3DData_set_q0(BeamBeamBiGaussian3DData  obj, double value){
  int64_t offset=0;
  offset+=8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* BeamBeamBiGaussian3DData_getp_q0(BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=8;
  return ( double*)(( char*) obj+offset);
}
 static inline BoostParameters BeamBeamBiGaussian3DData_getp_boost_parameters(BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=16;
  return (BoostParameters)(( char*) obj+offset);
}
 static inline double BeamBeamBiGaussian3DData_get_boost_parameters_sphi(const BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=16;
  return *( double*)(( char*) obj+offset);
}
 static inline void BeamBeamBiGaussian3DData_set_boost_parameters_sphi(BeamBeamBiGaussian3DData  obj, double value){
  int64_t offset=0;
  offset+=16;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* BeamBeamBiGaussian3DData_getp_boost_parameters_sphi(BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=16;
  return ( double*)(( char*) obj+offset);
}
 static inline double BeamBeamBiGaussian3DData_get_boost_parameters_cphi(const BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=24;
  return *( double*)(( char*) obj+offset);
}
 static inline void BeamBeamBiGaussian3DData_set_boost_parameters_cphi(BeamBeamBiGaussian3DData  obj, double value){
  int64_t offset=0;
  offset+=24;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* BeamBeamBiGaussian3DData_getp_boost_parameters_cphi(BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=24;
  return ( double*)(( char*) obj+offset);
}
 static inline double BeamBeamBiGaussian3DData_get_boost_parameters_tphi(const BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=32;
  return *( double*)(( char*) obj+offset);
}
 static inline void BeamBeamBiGaussian3DData_set_boost_parameters_tphi(BeamBeamBiGaussian3DData  obj, double value){
  int64_t offset=0;
  offset+=32;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* BeamBeamBiGaussian3DData_getp_boost_parameters_tphi(BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=32;
  return ( double*)(( char*) obj+offset);
}
 static inline double BeamBeamBiGaussian3DData_get_boost_parameters_salpha(const BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=40;
  return *( double*)(( char*) obj+offset);
}
 static inline void BeamBeamBiGaussian3DData_set_boost_parameters_salpha(BeamBeamBiGaussian3DData  obj, double value){
  int64_t offset=0;
  offset+=40;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* BeamBeamBiGaussian3DData_getp_boost_parameters_salpha(BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=40;
  return ( double*)(( char*) obj+offset);
}
 static inline double BeamBeamBiGaussian3DData_get_boost_parameters_calpha(const BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=48;
  return *( double*)(( char*) obj+offset);
}
 static inline void BeamBeamBiGaussian3DData_set_boost_parameters_calpha(BeamBeamBiGaussian3DData  obj, double value){
  int64_t offset=0;
  offset+=48;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* BeamBeamBiGaussian3DData_getp_boost_parameters_calpha(BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=48;
  return ( double*)(( char*) obj+offset);
}
 static inline Sigmas BeamBeamBiGaussian3DData_getp_Sigmas_0_star(BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=56;
  return (Sigmas)(( char*) obj+offset);
}
 static inline double BeamBeamBiGaussian3DData_get_Sigmas_0_star_Sig_11(const BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=56;
  return *( double*)(( char*) obj+offset);
}
 static inline void BeamBeamBiGaussian3DData_set_Sigmas_0_star_Sig_11(BeamBeamBiGaussian3DData  obj, double value){
  int64_t offset=0;
  offset+=56;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* BeamBeamBiGaussian3DData_getp_Sigmas_0_star_Sig_11(BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=56;
  return ( double*)(( char*) obj+offset);
}
 static inline double BeamBeamBiGaussian3DData_get_Sigmas_0_star_Sig_12(const BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=64;
  return *( double*)(( char*) obj+offset);
}
 static inline void BeamBeamBiGaussian3DData_set_Sigmas_0_star_Sig_12(BeamBeamBiGaussian3DData  obj, double value){
  int64_t offset=0;
  offset+=64;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* BeamBeamBiGaussian3DData_getp_Sigmas_0_star_Sig_12(BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=64;
  return ( double*)(( char*) obj+offset);
}
 static inline double BeamBeamBiGaussian3DData_get_Sigmas_0_star_Sig_13(const BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=72;
  return *( double*)(( char*) obj+offset);
}
 static inline void BeamBeamBiGaussian3DData_set_Sigmas_0_star_Sig_13(BeamBeamBiGaussian3DData  obj, double value){
  int64_t offset=0;
  offset+=72;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* BeamBeamBiGaussian3DData_getp_Sigmas_0_star_Sig_13(BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=72;
  return ( double*)(( char*) obj+offset);
}
 static inline double BeamBeamBiGaussian3DData_get_Sigmas_0_star_Sig_14(const BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=80;
  return *( double*)(( char*) obj+offset);
}
 static inline void BeamBeamBiGaussian3DData_set_Sigmas_0_star_Sig_14(BeamBeamBiGaussian3DData  obj, double value){
  int64_t offset=0;
  offset+=80;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* BeamBeamBiGaussian3DData_getp_Sigmas_0_star_Sig_14(BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=80;
  return ( double*)(( char*) obj+offset);
}
 static inline double BeamBeamBiGaussian3DData_get_Sigmas_0_star_Sig_22(const BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=88;
  return *( double*)(( char*) obj+offset);
}
 static inline void BeamBeamBiGaussian3DData_set_Sigmas_0_star_Sig_22(BeamBeamBiGaussian3DData  obj, double value){
  int64_t offset=0;
  offset+=88;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* BeamBeamBiGaussian3DData_getp_Sigmas_0_star_Sig_22(BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=88;
  return ( double*)(( char*) obj+offset);
}
 static inline double BeamBeamBiGaussian3DData_get_Sigmas_0_star_Sig_23(const BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=96;
  return *( double*)(( char*) obj+offset);
}
 static inline void BeamBeamBiGaussian3DData_set_Sigmas_0_star_Sig_23(BeamBeamBiGaussian3DData  obj, double value){
  int64_t offset=0;
  offset+=96;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* BeamBeamBiGaussian3DData_getp_Sigmas_0_star_Sig_23(BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=96;
  return ( double*)(( char*) obj+offset);
}
 static inline double BeamBeamBiGaussian3DData_get_Sigmas_0_star_Sig_24(const BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=104;
  return *( double*)(( char*) obj+offset);
}
 static inline void BeamBeamBiGaussian3DData_set_Sigmas_0_star_Sig_24(BeamBeamBiGaussian3DData  obj, double value){
  int64_t offset=0;
  offset+=104;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* BeamBeamBiGaussian3DData_getp_Sigmas_0_star_Sig_24(BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=104;
  return ( double*)(( char*) obj+offset);
}
 static inline double BeamBeamBiGaussian3DData_get_Sigmas_0_star_Sig_33(const BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=112;
  return *( double*)(( char*) obj+offset);
}
 static inline void BeamBeamBiGaussian3DData_set_Sigmas_0_star_Sig_33(BeamBeamBiGaussian3DData  obj, double value){
  int64_t offset=0;
  offset+=112;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* BeamBeamBiGaussian3DData_getp_Sigmas_0_star_Sig_33(BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=112;
  return ( double*)(( char*) obj+offset);
}
 static inline double BeamBeamBiGaussian3DData_get_Sigmas_0_star_Sig_34(const BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=120;
  return *( double*)(( char*) obj+offset);
}
 static inline void BeamBeamBiGaussian3DData_set_Sigmas_0_star_Sig_34(BeamBeamBiGaussian3DData  obj, double value){
  int64_t offset=0;
  offset+=120;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* BeamBeamBiGaussian3DData_getp_Sigmas_0_star_Sig_34(BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=120;
  return ( double*)(( char*) obj+offset);
}
 static inline double BeamBeamBiGaussian3DData_get_Sigmas_0_star_Sig_44(const BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=128;
  return *( double*)(( char*) obj+offset);
}
 static inline void BeamBeamBiGaussian3DData_set_Sigmas_0_star_Sig_44(BeamBeamBiGaussian3DData  obj, double value){
  int64_t offset=0;
  offset+=128;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* BeamBeamBiGaussian3DData_getp_Sigmas_0_star_Sig_44(BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=128;
  return ( double*)(( char*) obj+offset);
}
 static inline double BeamBeamBiGaussian3DData_get_min_sigma_diff(const BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=136;
  return *( double*)(( char*) obj+offset);
}
 static inline void BeamBeamBiGaussian3DData_set_min_sigma_diff(BeamBeamBiGaussian3DData  obj, double value){
  int64_t offset=0;
  offset+=136;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* BeamBeamBiGaussian3DData_getp_min_sigma_diff(BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=136;
  return ( double*)(( char*) obj+offset);
}
 static inline double BeamBeamBiGaussian3DData_get_threshold_singular(const BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=144;
  return *( double*)(( char*) obj+offset);
}
 static inline void BeamBeamBiGaussian3DData_set_threshold_singular(BeamBeamBiGaussian3DData  obj, double value){
  int64_t offset=0;
  offset+=144;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* BeamBeamBiGaussian3DData_getp_threshold_singular(BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=144;
  return ( double*)(( char*) obj+offset);
}
 static inline int64_t BeamBeamBiGaussian3DData_get_num_slices(const BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=152;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void BeamBeamBiGaussian3DData_set_num_slices(BeamBeamBiGaussian3DData  obj, int64_t value){
  int64_t offset=0;
  offset+=152;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* BeamBeamBiGaussian3DData_getp_num_slices(BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=152;
  return ( int64_t*)(( char*) obj+offset);
}
 static inline double BeamBeamBiGaussian3DData_get_delta_x(const BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=160;
  return *( double*)(( char*) obj+offset);
}
 static inline void BeamBeamBiGaussian3DData_set_delta_x(BeamBeamBiGaussian3DData  obj, double value){
  int64_t offset=0;
  offset+=160;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* BeamBeamBiGaussian3DData_getp_delta_x(BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=160;
  return ( double*)(( char*) obj+offset);
}
 static inline double BeamBeamBiGaussian3DData_get_delta_y(const BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=168;
  return *( double*)(( char*) obj+offset);
}
 static inline void BeamBeamBiGaussian3DData_set_delta_y(BeamBeamBiGaussian3DData  obj, double value){
  int64_t offset=0;
  offset+=168;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* BeamBeamBiGaussian3DData_getp_delta_y(BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=168;
  return ( double*)(( char*) obj+offset);
}
 static inline double BeamBeamBiGaussian3DData_get_x_CO(const BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=176;
  return *( double*)(( char*) obj+offset);
}
 static inline void BeamBeamBiGaussian3DData_set_x_CO(BeamBeamBiGaussian3DData  obj, double value){
  int64_t offset=0;
  offset+=176;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* BeamBeamBiGaussian3DData_getp_x_CO(BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=176;
  return ( double*)(( char*) obj+offset);
}
 static inline double BeamBeamBiGaussian3DData_get_px_CO(const BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=184;
  return *( double*)(( char*) obj+offset);
}
 static inline void BeamBeamBiGaussian3DData_set_px_CO(BeamBeamBiGaussian3DData  obj, double value){
  int64_t offset=0;
  offset+=184;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* BeamBeamBiGaussian3DData_getp_px_CO(BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=184;
  return ( double*)(( char*) obj+offset);
}
 static inline double BeamBeamBiGaussian3DData_get_y_CO(const BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=192;
  return *( double*)(( char*) obj+offset);
}
 static inline void BeamBeamBiGaussian3DData_set_y_CO(BeamBeamBiGaussian3DData  obj, double value){
  int64_t offset=0;
  offset+=192;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* BeamBeamBiGaussian3DData_getp_y_CO(BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=192;
  return ( double*)(( char*) obj+offset);
}
 static inline double BeamBeamBiGaussian3DData_get_py_CO(const BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=200;
  return *( double*)(( char*) obj+offset);
}
 static inline void BeamBeamBiGaussian3DData_set_py_CO(BeamBeamBiGaussian3DData  obj, double value){
  int64_t offset=0;
  offset+=200;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* BeamBeamBiGaussian3DData_getp_py_CO(BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=200;
  return ( double*)(( char*) obj+offset);
}
 static inline double BeamBeamBiGaussian3DData_get_sigma_CO(const BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=208;
  return *( double*)(( char*) obj+offset);
}
 static inline void BeamBeamBiGaussian3DData_set_sigma_CO(BeamBeamBiGaussian3DData  obj, double value){
  int64_t offset=0;
  offset+=208;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* BeamBeamBiGaussian3DData_getp_sigma_CO(BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=208;
  return ( double*)(( char*) obj+offset);
}
 static inline double BeamBeamBiGaussian3DData_get_delta_CO(const BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=216;
  return *( double*)(( char*) obj+offset);
}
 static inline void BeamBeamBiGaussian3DData_set_delta_CO(BeamBeamBiGaussian3DData  obj, double value){
  int64_t offset=0;
  offset+=216;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* BeamBeamBiGaussian3DData_getp_delta_CO(BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=216;
  return ( double*)(( char*) obj+offset);
}
 static inline double BeamBeamBiGaussian3DData_get_Dx_sub(const BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=224;
  return *( double*)(( char*) obj+offset);
}
 static inline void BeamBeamBiGaussian3DData_set_Dx_sub(BeamBeamBiGaussian3DData  obj, double value){
  int64_t offset=0;
  offset+=224;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* BeamBeamBiGaussian3DData_getp_Dx_sub(BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=224;
  return ( double*)(( char*) obj+offset);
}
 static inline double BeamBeamBiGaussian3DData_get_Dpx_sub(const BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=232;
  return *( double*)(( char*) obj+offset);
}
 static inline void BeamBeamBiGaussian3DData_set_Dpx_sub(BeamBeamBiGaussian3DData  obj, double value){
  int64_t offset=0;
  offset+=232;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* BeamBeamBiGaussian3DData_getp_Dpx_sub(BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=232;
  return ( double*)(( char*) obj+offset);
}
 static inline double BeamBeamBiGaussian3DData_get_Dy_sub(const BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=240;
  return *( double*)(( char*) obj+offset);
}
 static inline void BeamBeamBiGaussian3DData_set_Dy_sub(BeamBeamBiGaussian3DData  obj, double value){
  int64_t offset=0;
  offset+=240;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* BeamBeamBiGaussian3DData_getp_Dy_sub(BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=240;
  return ( double*)(( char*) obj+offset);
}
 static inline double BeamBeamBiGaussian3DData_get_Dpy_sub(const BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=248;
  return *( double*)(( char*) obj+offset);
}
 static inline void BeamBeamBiGaussian3DData_set_Dpy_sub(BeamBeamBiGaussian3DData  obj, double value){
  int64_t offset=0;
  offset+=248;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* BeamBeamBiGaussian3DData_getp_Dpy_sub(BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=248;
  return ( double*)(( char*) obj+offset);
}
 static inline double BeamBeamBiGaussian3DData_get_Dsigma_sub(const BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=256;
  return *( double*)(( char*) obj+offset);
}
 static inline void BeamBeamBiGaussian3DData_set_Dsigma_sub(BeamBeamBiGaussian3DData  obj, double value){
  int64_t offset=0;
  offset+=256;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* BeamBeamBiGaussian3DData_getp_Dsigma_sub(BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=256;
  return ( double*)(( char*) obj+offset);
}
 static inline double BeamBeamBiGaussian3DData_get_Ddelta_sub(const BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=264;
  return *( double*)(( char*) obj+offset);
}
 static inline void BeamBeamBiGaussian3DData_set_Ddelta_sub(BeamBeamBiGaussian3DData  obj, double value){
  int64_t offset=0;
  offset+=264;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* BeamBeamBiGaussian3DData_getp_Ddelta_sub(BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=264;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNFloat64 BeamBeamBiGaussian3DData_getp_N_part_per_slice(BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=296;
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t BeamBeamBiGaussian3DData_len_N_part_per_slice(BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=296;
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double BeamBeamBiGaussian3DData_get_N_part_per_slice(const BeamBeamBiGaussian3DData  obj, int64_t i0){
  int64_t offset=0;
  offset+=296;
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void BeamBeamBiGaussian3DData_set_N_part_per_slice(BeamBeamBiGaussian3DData  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=296;
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* BeamBeamBiGaussian3DData_getp1_N_part_per_slice(BeamBeamBiGaussian3DData  obj, int64_t i0){
  int64_t offset=0;
  offset+=296;
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNFloat64 BeamBeamBiGaussian3DData_getp_x_slices_star(BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+272);
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t BeamBeamBiGaussian3DData_len_x_slices_star(BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+272);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double BeamBeamBiGaussian3DData_get_x_slices_star(const BeamBeamBiGaussian3DData  obj, int64_t i0){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+272);
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void BeamBeamBiGaussian3DData_set_x_slices_star(BeamBeamBiGaussian3DData  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+272);
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* BeamBeamBiGaussian3DData_getp1_x_slices_star(BeamBeamBiGaussian3DData  obj, int64_t i0){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+272);
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNFloat64 BeamBeamBiGaussian3DData_getp_y_slices_star(BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+280);
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t BeamBeamBiGaussian3DData_len_y_slices_star(BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+280);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double BeamBeamBiGaussian3DData_get_y_slices_star(const BeamBeamBiGaussian3DData  obj, int64_t i0){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+280);
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void BeamBeamBiGaussian3DData_set_y_slices_star(BeamBeamBiGaussian3DData  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+280);
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* BeamBeamBiGaussian3DData_getp1_y_slices_star(BeamBeamBiGaussian3DData  obj, int64_t i0){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+280);
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNFloat64 BeamBeamBiGaussian3DData_getp_sigma_slices_star(BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+288);
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t BeamBeamBiGaussian3DData_len_sigma_slices_star(BeamBeamBiGaussian3DData  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+288);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double BeamBeamBiGaussian3DData_get_sigma_slices_star(const BeamBeamBiGaussian3DData  obj, int64_t i0){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+288);
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void BeamBeamBiGaussian3DData_set_sigma_slices_star(BeamBeamBiGaussian3DData  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+288);
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* BeamBeamBiGaussian3DData_getp1_sigma_slices_star(BeamBeamBiGaussian3DData  obj, int64_t i0){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+288);
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
#endif
#ifndef XOBJ_TYPEDEF_SpaceChargeBiGaussianData
#define XOBJ_TYPEDEF_SpaceChargeBiGaussianData
typedef   struct SpaceChargeBiGaussianData_s * SpaceChargeBiGaussianData;
 static inline SpaceChargeBiGaussianData SpaceChargeBiGaussianData_getp(SpaceChargeBiGaussianData  obj){
  int64_t offset=0;
  return (SpaceChargeBiGaussianData)(( char*) obj+offset);
}
 static inline LongitudinalProfileQGaussianData SpaceChargeBiGaussianData_getp_longitudinal_profile(SpaceChargeBiGaussianData  obj){
  int64_t offset=0;
  return (LongitudinalProfileQGaussianData)(( char*) obj+offset);
}
 static inline double SpaceChargeBiGaussianData_get_longitudinal_profile_number_of_particles(const SpaceChargeBiGaussianData  obj){
  int64_t offset=0;
  return *( double*)(( char*) obj+offset);
}
 static inline void SpaceChargeBiGaussianData_set_longitudinal_profile_number_of_particles(SpaceChargeBiGaussianData  obj, double value){
  int64_t offset=0;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* SpaceChargeBiGaussianData_getp_longitudinal_profile_number_of_particles(SpaceChargeBiGaussianData  obj){
  int64_t offset=0;
  return ( double*)(( char*) obj+offset);
}
 static inline double SpaceChargeBiGaussianData_get_longitudinal_profile__q_tol(const SpaceChargeBiGaussianData  obj){
  int64_t offset=0;
  offset+=8;
  return *( double*)(( char*) obj+offset);
}
 static inline void SpaceChargeBiGaussianData_set_longitudinal_profile__q_tol(SpaceChargeBiGaussianData  obj, double value){
  int64_t offset=0;
  offset+=8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* SpaceChargeBiGaussianData_getp_longitudinal_profile__q_tol(SpaceChargeBiGaussianData  obj){
  int64_t offset=0;
  offset+=8;
  return ( double*)(( char*) obj+offset);
}
 static inline double SpaceChargeBiGaussianData_get_longitudinal_profile__z0(const SpaceChargeBiGaussianData  obj){
  int64_t offset=0;
  offset+=16;
  return *( double*)(( char*) obj+offset);
}
 static inline void SpaceChargeBiGaussianData_set_longitudinal_profile__z0(SpaceChargeBiGaussianData  obj, double value){
  int64_t offset=0;
  offset+=16;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* SpaceChargeBiGaussianData_getp_longitudinal_profile__z0(SpaceChargeBiGaussianData  obj){
  int64_t offset=0;
  offset+=16;
  return ( double*)(( char*) obj+offset);
}
 static inline double SpaceChargeBiGaussianData_get_longitudinal_profile__sigma_z(const SpaceChargeBiGaussianData  obj){
  int64_t offset=0;
  offset+=24;
  return *( double*)(( char*) obj+offset);
}
 static inline void SpaceChargeBiGaussianData_set_longitudinal_profile__sigma_z(SpaceChargeBiGaussianData  obj, double value){
  int64_t offset=0;
  offset+=24;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* SpaceChargeBiGaussianData_getp_longitudinal_profile__sigma_z(SpaceChargeBiGaussianData  obj){
  int64_t offset=0;
  offset+=24;
  return ( double*)(( char*) obj+offset);
}
 static inline double SpaceChargeBiGaussianData_get_longitudinal_profile__q_param(const SpaceChargeBiGaussianData  obj){
  int64_t offset=0;
  offset+=32;
  return *( double*)(( char*) obj+offset);
}
 static inline void SpaceChargeBiGaussianData_set_longitudinal_profile__q_param(SpaceChargeBiGaussianData  obj, double value){
  int64_t offset=0;
  offset+=32;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* SpaceChargeBiGaussianData_getp_longitudinal_profile__q_param(SpaceChargeBiGaussianData  obj){
  int64_t offset=0;
  offset+=32;
  return ( double*)(( char*) obj+offset);
}
 static inline double SpaceChargeBiGaussianData_get_longitudinal_profile__cq_param(const SpaceChargeBiGaussianData  obj){
  int64_t offset=0;
  offset+=40;
  return *( double*)(( char*) obj+offset);
}
 static inline void SpaceChargeBiGaussianData_set_longitudinal_profile__cq_param(SpaceChargeBiGaussianData  obj, double value){
  int64_t offset=0;
  offset+=40;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* SpaceChargeBiGaussianData_getp_longitudinal_profile__cq_param(SpaceChargeBiGaussianData  obj){
  int64_t offset=0;
  offset+=40;
  return ( double*)(( char*) obj+offset);
}
 static inline double SpaceChargeBiGaussianData_get_longitudinal_profile__beta_param(const SpaceChargeBiGaussianData  obj){
  int64_t offset=0;
  offset+=48;
  return *( double*)(( char*) obj+offset);
}
 static inline void SpaceChargeBiGaussianData_set_longitudinal_profile__beta_param(SpaceChargeBiGaussianData  obj, double value){
  int64_t offset=0;
  offset+=48;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* SpaceChargeBiGaussianData_getp_longitudinal_profile__beta_param(SpaceChargeBiGaussianData  obj){
  int64_t offset=0;
  offset+=48;
  return ( double*)(( char*) obj+offset);
}
 static inline double SpaceChargeBiGaussianData_get_longitudinal_profile__sqrt_beta_param(const SpaceChargeBiGaussianData  obj){
  int64_t offset=0;
  offset+=56;
  return *( double*)(( char*) obj+offset);
}
 static inline void SpaceChargeBiGaussianData_set_longitudinal_profile__sqrt_beta_param(SpaceChargeBiGaussianData  obj, double value){
  int64_t offset=0;
  offset+=56;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* SpaceChargeBiGaussianData_getp_longitudinal_profile__sqrt_beta_param(SpaceChargeBiGaussianData  obj){
  int64_t offset=0;
  offset+=56;
  return ( double*)(( char*) obj+offset);
}
 static inline double SpaceChargeBiGaussianData_get_longitudinal_profile__support_min(const SpaceChargeBiGaussianData  obj){
  int64_t offset=0;
  offset+=64;
  return *( double*)(( char*) obj+offset);
}
 static inline void SpaceChargeBiGaussianData_set_longitudinal_profile__support_min(SpaceChargeBiGaussianData  obj, double value){
  int64_t offset=0;
  offset+=64;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* SpaceChargeBiGaussianData_getp_longitudinal_profile__support_min(SpaceChargeBiGaussianData  obj){
  int64_t offset=0;
  offset+=64;
  return ( double*)(( char*) obj+offset);
}
 static inline double SpaceChargeBiGaussianData_get_longitudinal_profile__support_max(const SpaceChargeBiGaussianData  obj){
  int64_t offset=0;
  offset+=72;
  return *( double*)(( char*) obj+offset);
}
 static inline void SpaceChargeBiGaussianData_set_longitudinal_profile__support_max(SpaceChargeBiGaussianData  obj, double value){
  int64_t offset=0;
  offset+=72;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* SpaceChargeBiGaussianData_getp_longitudinal_profile__support_max(SpaceChargeBiGaussianData  obj){
  int64_t offset=0;
  offset+=72;
  return ( double*)(( char*) obj+offset);
}
 static inline BiGaussianFieldMapData SpaceChargeBiGaussianData_getp_fieldmap(SpaceChargeBiGaussianData  obj){
  int64_t offset=0;
  offset+=80;
  return (BiGaussianFieldMapData)(( char*) obj+offset);
}
 static inline double SpaceChargeBiGaussianData_get_fieldmap_mean_x(const SpaceChargeBiGaussianData  obj){
  int64_t offset=0;
  offset+=80;
  return *( double*)(( char*) obj+offset);
}
 static inline void SpaceChargeBiGaussianData_set_fieldmap_mean_x(SpaceChargeBiGaussianData  obj, double value){
  int64_t offset=0;
  offset+=80;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* SpaceChargeBiGaussianData_getp_fieldmap_mean_x(SpaceChargeBiGaussianData  obj){
  int64_t offset=0;
  offset+=80;
  return ( double*)(( char*) obj+offset);
}
 static inline double SpaceChargeBiGaussianData_get_fieldmap_mean_y(const SpaceChargeBiGaussianData  obj){
  int64_t offset=0;
  offset+=88;
  return *( double*)(( char*) obj+offset);
}
 static inline void SpaceChargeBiGaussianData_set_fieldmap_mean_y(SpaceChargeBiGaussianData  obj, double value){
  int64_t offset=0;
  offset+=88;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* SpaceChargeBiGaussianData_getp_fieldmap_mean_y(SpaceChargeBiGaussianData  obj){
  int64_t offset=0;
  offset+=88;
  return ( double*)(( char*) obj+offset);
}
 static inline double SpaceChargeBiGaussianData_get_fieldmap_sigma_x(const SpaceChargeBiGaussianData  obj){
  int64_t offset=0;
  offset+=96;
  return *( double*)(( char*) obj+offset);
}
 static inline void SpaceChargeBiGaussianData_set_fieldmap_sigma_x(SpaceChargeBiGaussianData  obj, double value){
  int64_t offset=0;
  offset+=96;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* SpaceChargeBiGaussianData_getp_fieldmap_sigma_x(SpaceChargeBiGaussianData  obj){
  int64_t offset=0;
  offset+=96;
  return ( double*)(( char*) obj+offset);
}
 static inline double SpaceChargeBiGaussianData_get_fieldmap_sigma_y(const SpaceChargeBiGaussianData  obj){
  int64_t offset=0;
  offset+=104;
  return *( double*)(( char*) obj+offset);
}
 static inline void SpaceChargeBiGaussianData_set_fieldmap_sigma_y(SpaceChargeBiGaussianData  obj, double value){
  int64_t offset=0;
  offset+=104;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* SpaceChargeBiGaussianData_getp_fieldmap_sigma_y(SpaceChargeBiGaussianData  obj){
  int64_t offset=0;
  offset+=104;
  return ( double*)(( char*) obj+offset);
}
 static inline double SpaceChargeBiGaussianData_get_fieldmap_min_sigma_diff(const SpaceChargeBiGaussianData  obj){
  int64_t offset=0;
  offset+=112;
  return *( double*)(( char*) obj+offset);
}
 static inline void SpaceChargeBiGaussianData_set_fieldmap_min_sigma_diff(SpaceChargeBiGaussianData  obj, double value){
  int64_t offset=0;
  offset+=112;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* SpaceChargeBiGaussianData_getp_fieldmap_min_sigma_diff(SpaceChargeBiGaussianData  obj){
  int64_t offset=0;
  offset+=112;
  return ( double*)(( char*) obj+offset);
}
 static inline int64_t SpaceChargeBiGaussianData_get_fieldmap__updatable(const SpaceChargeBiGaussianData  obj){
  int64_t offset=0;
  offset+=120;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void SpaceChargeBiGaussianData_set_fieldmap__updatable(SpaceChargeBiGaussianData  obj, int64_t value){
  int64_t offset=0;
  offset+=120;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* SpaceChargeBiGaussianData_getp_fieldmap__updatable(SpaceChargeBiGaussianData  obj){
  int64_t offset=0;
  offset+=120;
  return ( int64_t*)(( char*) obj+offset);
}
 static inline double SpaceChargeBiGaussianData_get_length(const SpaceChargeBiGaussianData  obj){
  int64_t offset=0;
  offset+=128;
  return *( double*)(( char*) obj+offset);
}
 static inline void SpaceChargeBiGaussianData_set_length(SpaceChargeBiGaussianData  obj, double value){
  int64_t offset=0;
  offset+=128;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* SpaceChargeBiGaussianData_getp_length(SpaceChargeBiGaussianData  obj){
  int64_t offset=0;
  offset+=128;
  return ( double*)(( char*) obj+offset);
}
#endif
#ifndef XOBJ_TYPEDEF_BeamBeamBiGaussian2DData
#define XOBJ_TYPEDEF_BeamBeamBiGaussian2DData
typedef   struct BeamBeamBiGaussian2DData_s * BeamBeamBiGaussian2DData;
 static inline BeamBeamBiGaussian2DData BeamBeamBiGaussian2DData_getp(BeamBeamBiGaussian2DData  obj){
  int64_t offset=0;
  return (BeamBeamBiGaussian2DData)(( char*) obj+offset);
}
 static inline double BeamBeamBiGaussian2DData_get_n_particles(const BeamBeamBiGaussian2DData  obj){
  int64_t offset=0;
  return *( double*)(( char*) obj+offset);
}
 static inline void BeamBeamBiGaussian2DData_set_n_particles(BeamBeamBiGaussian2DData  obj, double value){
  int64_t offset=0;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* BeamBeamBiGaussian2DData_getp_n_particles(BeamBeamBiGaussian2DData  obj){
  int64_t offset=0;
  return ( double*)(( char*) obj+offset);
}
 static inline double BeamBeamBiGaussian2DData_get_q0(const BeamBeamBiGaussian2DData  obj){
  int64_t offset=0;
  offset+=8;
  return *( double*)(( char*) obj+offset);
}
 static inline void BeamBeamBiGaussian2DData_set_q0(BeamBeamBiGaussian2DData  obj, double value){
  int64_t offset=0;
  offset+=8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* BeamBeamBiGaussian2DData_getp_q0(BeamBeamBiGaussian2DData  obj){
  int64_t offset=0;
  offset+=8;
  return ( double*)(( char*) obj+offset);
}
 static inline double BeamBeamBiGaussian2DData_get_beta0(const BeamBeamBiGaussian2DData  obj){
  int64_t offset=0;
  offset+=16;
  return *( double*)(( char*) obj+offset);
}
 static inline void BeamBeamBiGaussian2DData_set_beta0(BeamBeamBiGaussian2DData  obj, double value){
  int64_t offset=0;
  offset+=16;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* BeamBeamBiGaussian2DData_getp_beta0(BeamBeamBiGaussian2DData  obj){
  int64_t offset=0;
  offset+=16;
  return ( double*)(( char*) obj+offset);
}
 static inline BiGaussianFieldMapData BeamBeamBiGaussian2DData_getp_fieldmap(BeamBeamBiGaussian2DData  obj){
  int64_t offset=0;
  offset+=24;
  return (BiGaussianFieldMapData)(( char*) obj+offset);
}
 static inline double BeamBeamBiGaussian2DData_get_fieldmap_mean_x(const BeamBeamBiGaussian2DData  obj){
  int64_t offset=0;
  offset+=24;
  return *( double*)(( char*) obj+offset);
}
 static inline void BeamBeamBiGaussian2DData_set_fieldmap_mean_x(BeamBeamBiGaussian2DData  obj, double value){
  int64_t offset=0;
  offset+=24;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* BeamBeamBiGaussian2DData_getp_fieldmap_mean_x(BeamBeamBiGaussian2DData  obj){
  int64_t offset=0;
  offset+=24;
  return ( double*)(( char*) obj+offset);
}
 static inline double BeamBeamBiGaussian2DData_get_fieldmap_mean_y(const BeamBeamBiGaussian2DData  obj){
  int64_t offset=0;
  offset+=32;
  return *( double*)(( char*) obj+offset);
}
 static inline void BeamBeamBiGaussian2DData_set_fieldmap_mean_y(BeamBeamBiGaussian2DData  obj, double value){
  int64_t offset=0;
  offset+=32;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* BeamBeamBiGaussian2DData_getp_fieldmap_mean_y(BeamBeamBiGaussian2DData  obj){
  int64_t offset=0;
  offset+=32;
  return ( double*)(( char*) obj+offset);
}
 static inline double BeamBeamBiGaussian2DData_get_fieldmap_sigma_x(const BeamBeamBiGaussian2DData  obj){
  int64_t offset=0;
  offset+=40;
  return *( double*)(( char*) obj+offset);
}
 static inline void BeamBeamBiGaussian2DData_set_fieldmap_sigma_x(BeamBeamBiGaussian2DData  obj, double value){
  int64_t offset=0;
  offset+=40;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* BeamBeamBiGaussian2DData_getp_fieldmap_sigma_x(BeamBeamBiGaussian2DData  obj){
  int64_t offset=0;
  offset+=40;
  return ( double*)(( char*) obj+offset);
}
 static inline double BeamBeamBiGaussian2DData_get_fieldmap_sigma_y(const BeamBeamBiGaussian2DData  obj){
  int64_t offset=0;
  offset+=48;
  return *( double*)(( char*) obj+offset);
}
 static inline void BeamBeamBiGaussian2DData_set_fieldmap_sigma_y(BeamBeamBiGaussian2DData  obj, double value){
  int64_t offset=0;
  offset+=48;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* BeamBeamBiGaussian2DData_getp_fieldmap_sigma_y(BeamBeamBiGaussian2DData  obj){
  int64_t offset=0;
  offset+=48;
  return ( double*)(( char*) obj+offset);
}
 static inline double BeamBeamBiGaussian2DData_get_fieldmap_min_sigma_diff(const BeamBeamBiGaussian2DData  obj){
  int64_t offset=0;
  offset+=56;
  return *( double*)(( char*) obj+offset);
}
 static inline void BeamBeamBiGaussian2DData_set_fieldmap_min_sigma_diff(BeamBeamBiGaussian2DData  obj, double value){
  int64_t offset=0;
  offset+=56;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* BeamBeamBiGaussian2DData_getp_fieldmap_min_sigma_diff(BeamBeamBiGaussian2DData  obj){
  int64_t offset=0;
  offset+=56;
  return ( double*)(( char*) obj+offset);
}
 static inline int64_t BeamBeamBiGaussian2DData_get_fieldmap__updatable(const BeamBeamBiGaussian2DData  obj){
  int64_t offset=0;
  offset+=64;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void BeamBeamBiGaussian2DData_set_fieldmap__updatable(BeamBeamBiGaussian2DData  obj, int64_t value){
  int64_t offset=0;
  offset+=64;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* BeamBeamBiGaussian2DData_getp_fieldmap__updatable(BeamBeamBiGaussian2DData  obj){
  int64_t offset=0;
  offset+=64;
  return ( int64_t*)(( char*) obj+offset);
}
 static inline double BeamBeamBiGaussian2DData_get_d_px(const BeamBeamBiGaussian2DData  obj){
  int64_t offset=0;
  offset+=72;
  return *( double*)(( char*) obj+offset);
}
 static inline void BeamBeamBiGaussian2DData_set_d_px(BeamBeamBiGaussian2DData  obj, double value){
  int64_t offset=0;
  offset+=72;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* BeamBeamBiGaussian2DData_getp_d_px(BeamBeamBiGaussian2DData  obj){
  int64_t offset=0;
  offset+=72;
  return ( double*)(( char*) obj+offset);
}
 static inline double BeamBeamBiGaussian2DData_get_d_py(const BeamBeamBiGaussian2DData  obj){
  int64_t offset=0;
  offset+=80;
  return *( double*)(( char*) obj+offset);
}
 static inline void BeamBeamBiGaussian2DData_set_d_py(BeamBeamBiGaussian2DData  obj, double value){
  int64_t offset=0;
  offset+=80;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* BeamBeamBiGaussian2DData_getp_d_py(BeamBeamBiGaussian2DData  obj){
  int64_t offset=0;
  offset+=80;
  return ( double*)(( char*) obj+offset);
}
#endif
#ifndef XOBJ_TYPEDEF_MultipoleData
#define XOBJ_TYPEDEF_MultipoleData
typedef   struct MultipoleData_s * MultipoleData;
 static inline MultipoleData MultipoleData_getp(MultipoleData  obj){
  int64_t offset=0;
  return (MultipoleData)(( char*) obj+offset);
}
 static inline int64_t MultipoleData_get_order(const MultipoleData  obj){
  int64_t offset=0;
  offset+=8;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void MultipoleData_set_order(MultipoleData  obj, int64_t value){
  int64_t offset=0;
  offset+=8;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* MultipoleData_getp_order(MultipoleData  obj){
  int64_t offset=0;
  offset+=8;
  return ( int64_t*)(( char*) obj+offset);
}
 static inline double MultipoleData_get_length(const MultipoleData  obj){
  int64_t offset=0;
  offset+=16;
  return *( double*)(( char*) obj+offset);
}
 static inline void MultipoleData_set_length(MultipoleData  obj, double value){
  int64_t offset=0;
  offset+=16;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* MultipoleData_getp_length(MultipoleData  obj){
  int64_t offset=0;
  offset+=16;
  return ( double*)(( char*) obj+offset);
}
 static inline double MultipoleData_get_hxl(const MultipoleData  obj){
  int64_t offset=0;
  offset+=24;
  return *( double*)(( char*) obj+offset);
}
 static inline void MultipoleData_set_hxl(MultipoleData  obj, double value){
  int64_t offset=0;
  offset+=24;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* MultipoleData_getp_hxl(MultipoleData  obj){
  int64_t offset=0;
  offset+=24;
  return ( double*)(( char*) obj+offset);
}
 static inline double MultipoleData_get_hyl(const MultipoleData  obj){
  int64_t offset=0;
  offset+=32;
  return *( double*)(( char*) obj+offset);
}
 static inline void MultipoleData_set_hyl(MultipoleData  obj, double value){
  int64_t offset=0;
  offset+=32;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* MultipoleData_getp_hyl(MultipoleData  obj){
  int64_t offset=0;
  offset+=32;
  return ( double*)(( char*) obj+offset);
}
 static inline int64_t MultipoleData_get_radiation_flag(const MultipoleData  obj){
  int64_t offset=0;
  offset+=40;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void MultipoleData_set_radiation_flag(MultipoleData  obj, int64_t value){
  int64_t offset=0;
  offset+=40;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* MultipoleData_getp_radiation_flag(MultipoleData  obj){
  int64_t offset=0;
  offset+=40;
  return ( int64_t*)(( char*) obj+offset);
}
 static inline ArrNFloat64 MultipoleData_getp_bal(MultipoleData  obj){
  int64_t offset=0;
  offset+=64;
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t MultipoleData_len_bal(MultipoleData  obj){
  int64_t offset=0;
  offset+=64;
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double MultipoleData_get_bal(const MultipoleData  obj, int64_t i0){
  int64_t offset=0;
  offset+=64;
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void MultipoleData_set_bal(MultipoleData  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=64;
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* MultipoleData_getp1_bal(MultipoleData  obj, int64_t i0){
  int64_t offset=0;
  offset+=64;
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
 static inline RecordIdentifier MultipoleData_getp__internal_record_id(MultipoleData  obj){
  int64_t offset=0;
  offset+=48;
  return (RecordIdentifier)(( char*) obj+offset);
}
 static inline int64_t MultipoleData_get__internal_record_id_buffer_id(const MultipoleData  obj){
  int64_t offset=0;
  offset+=48;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void MultipoleData_set__internal_record_id_buffer_id(MultipoleData  obj, int64_t value){
  int64_t offset=0;
  offset+=48;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* MultipoleData_getp__internal_record_id_buffer_id(MultipoleData  obj){
  int64_t offset=0;
  offset+=48;
  return ( int64_t*)(( char*) obj+offset);
}
 static inline int64_t MultipoleData_get__internal_record_id_offset(const MultipoleData  obj){
  int64_t offset=0;
  offset+=56;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void MultipoleData_set__internal_record_id_offset(MultipoleData  obj, int64_t value){
  int64_t offset=0;
  offset+=56;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* MultipoleData_getp__internal_record_id_offset(MultipoleData  obj){
  int64_t offset=0;
  offset+=56;
  return ( int64_t*)(( char*) obj+offset);
}
#endif
#ifndef XOBJ_TYPEDEF_ParticlesData
#define XOBJ_TYPEDEF_ParticlesData
typedef   struct ParticlesData_s * ParticlesData;
 static inline ParticlesData ParticlesData_getp(ParticlesData  obj){
  int64_t offset=0;
  return (ParticlesData)(( char*) obj+offset);
}
 static inline int64_t ParticlesData_get__capacity(const ParticlesData  obj){
  int64_t offset=0;
  offset+=8;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void ParticlesData_set__capacity(ParticlesData  obj, int64_t value){
  int64_t offset=0;
  offset+=8;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* ParticlesData_getp__capacity(ParticlesData  obj){
  int64_t offset=0;
  offset+=8;
  return ( int64_t*)(( char*) obj+offset);
}
 static inline int64_t ParticlesData_get__num_active_particles(const ParticlesData  obj){
  int64_t offset=0;
  offset+=16;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void ParticlesData_set__num_active_particles(ParticlesData  obj, int64_t value){
  int64_t offset=0;
  offset+=16;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* ParticlesData_getp__num_active_particles(ParticlesData  obj){
  int64_t offset=0;
  offset+=16;
  return ( int64_t*)(( char*) obj+offset);
}
 static inline int64_t ParticlesData_get__num_lost_particles(const ParticlesData  obj){
  int64_t offset=0;
  offset+=24;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void ParticlesData_set__num_lost_particles(ParticlesData  obj, int64_t value){
  int64_t offset=0;
  offset+=24;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* ParticlesData_getp__num_lost_particles(ParticlesData  obj){
  int64_t offset=0;
  offset+=24;
  return ( int64_t*)(( char*) obj+offset);
}
 static inline int64_t ParticlesData_get_start_tracking_at_element(const ParticlesData  obj){
  int64_t offset=0;
  offset+=32;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void ParticlesData_set_start_tracking_at_element(ParticlesData  obj, int64_t value){
  int64_t offset=0;
  offset+=32;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* ParticlesData_getp_start_tracking_at_element(ParticlesData  obj){
  int64_t offset=0;
  offset+=32;
  return ( int64_t*)(( char*) obj+offset);
}
 static inline double ParticlesData_get_q0(const ParticlesData  obj){
  int64_t offset=0;
  offset+=40;
  return *( double*)(( char*) obj+offset);
}
 static inline void ParticlesData_set_q0(ParticlesData  obj, double value){
  int64_t offset=0;
  offset+=40;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* ParticlesData_getp_q0(ParticlesData  obj){
  int64_t offset=0;
  offset+=40;
  return ( double*)(( char*) obj+offset);
}
 static inline double ParticlesData_get_mass0(const ParticlesData  obj){
  int64_t offset=0;
  offset+=48;
  return *( double*)(( char*) obj+offset);
}
 static inline void ParticlesData_set_mass0(ParticlesData  obj, double value){
  int64_t offset=0;
  offset+=48;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* ParticlesData_getp_mass0(ParticlesData  obj){
  int64_t offset=0;
  offset+=48;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNFloat64 ParticlesData_getp_p0c(ParticlesData  obj){
  int64_t offset=0;
  offset+=248;
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t ParticlesData_len_p0c(ParticlesData  obj){
  int64_t offset=0;
  offset+=248;
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double ParticlesData_get_p0c(const ParticlesData  obj, int64_t i0){
  int64_t offset=0;
  offset+=248;
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void ParticlesData_set_p0c(ParticlesData  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=248;
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* ParticlesData_getp1_p0c(ParticlesData  obj, int64_t i0){
  int64_t offset=0;
  offset+=248;
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNFloat64 ParticlesData_getp_gamma0(ParticlesData  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+56);
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t ParticlesData_len_gamma0(ParticlesData  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+56);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double ParticlesData_get_gamma0(const ParticlesData  obj, int64_t i0){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+56);
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void ParticlesData_set_gamma0(ParticlesData  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+56);
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* ParticlesData_getp1_gamma0(ParticlesData  obj, int64_t i0){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+56);
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNFloat64 ParticlesData_getp_beta0(ParticlesData  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+64);
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t ParticlesData_len_beta0(ParticlesData  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+64);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double ParticlesData_get_beta0(const ParticlesData  obj, int64_t i0){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+64);
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void ParticlesData_set_beta0(ParticlesData  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+64);
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* ParticlesData_getp1_beta0(ParticlesData  obj, int64_t i0){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+64);
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNFloat64 ParticlesData_getp_s(ParticlesData  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+72);
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t ParticlesData_len_s(ParticlesData  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+72);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double ParticlesData_get_s(const ParticlesData  obj, int64_t i0){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+72);
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void ParticlesData_set_s(ParticlesData  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+72);
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* ParticlesData_getp1_s(ParticlesData  obj, int64_t i0){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+72);
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNFloat64 ParticlesData_getp_x(ParticlesData  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+80);
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t ParticlesData_len_x(ParticlesData  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+80);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double ParticlesData_get_x(const ParticlesData  obj, int64_t i0){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+80);
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void ParticlesData_set_x(ParticlesData  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+80);
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* ParticlesData_getp1_x(ParticlesData  obj, int64_t i0){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+80);
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNFloat64 ParticlesData_getp_y(ParticlesData  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+88);
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t ParticlesData_len_y(ParticlesData  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+88);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double ParticlesData_get_y(const ParticlesData  obj, int64_t i0){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+88);
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void ParticlesData_set_y(ParticlesData  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+88);
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* ParticlesData_getp1_y(ParticlesData  obj, int64_t i0){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+88);
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNFloat64 ParticlesData_getp_px(ParticlesData  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+96);
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t ParticlesData_len_px(ParticlesData  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+96);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double ParticlesData_get_px(const ParticlesData  obj, int64_t i0){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+96);
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void ParticlesData_set_px(ParticlesData  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+96);
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* ParticlesData_getp1_px(ParticlesData  obj, int64_t i0){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+96);
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNFloat64 ParticlesData_getp_py(ParticlesData  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+104);
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t ParticlesData_len_py(ParticlesData  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+104);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double ParticlesData_get_py(const ParticlesData  obj, int64_t i0){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+104);
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void ParticlesData_set_py(ParticlesData  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+104);
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* ParticlesData_getp1_py(ParticlesData  obj, int64_t i0){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+104);
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNFloat64 ParticlesData_getp_zeta(ParticlesData  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+112);
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t ParticlesData_len_zeta(ParticlesData  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+112);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double ParticlesData_get_zeta(const ParticlesData  obj, int64_t i0){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+112);
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void ParticlesData_set_zeta(ParticlesData  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+112);
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* ParticlesData_getp1_zeta(ParticlesData  obj, int64_t i0){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+112);
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNFloat64 ParticlesData_getp_ptau(ParticlesData  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+120);
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t ParticlesData_len_ptau(ParticlesData  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+120);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double ParticlesData_get_ptau(const ParticlesData  obj, int64_t i0){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+120);
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void ParticlesData_set_ptau(ParticlesData  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+120);
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* ParticlesData_getp1_ptau(ParticlesData  obj, int64_t i0){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+120);
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNFloat64 ParticlesData_getp_delta(ParticlesData  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+128);
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t ParticlesData_len_delta(ParticlesData  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+128);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double ParticlesData_get_delta(const ParticlesData  obj, int64_t i0){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+128);
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void ParticlesData_set_delta(ParticlesData  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+128);
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* ParticlesData_getp1_delta(ParticlesData  obj, int64_t i0){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+128);
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNFloat64 ParticlesData_getp_rpp(ParticlesData  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+136);
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t ParticlesData_len_rpp(ParticlesData  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+136);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double ParticlesData_get_rpp(const ParticlesData  obj, int64_t i0){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+136);
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void ParticlesData_set_rpp(ParticlesData  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+136);
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* ParticlesData_getp1_rpp(ParticlesData  obj, int64_t i0){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+136);
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNFloat64 ParticlesData_getp_rvv(ParticlesData  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+144);
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t ParticlesData_len_rvv(ParticlesData  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+144);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double ParticlesData_get_rvv(const ParticlesData  obj, int64_t i0){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+144);
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void ParticlesData_set_rvv(ParticlesData  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+144);
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* ParticlesData_getp1_rvv(ParticlesData  obj, int64_t i0){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+144);
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNFloat64 ParticlesData_getp_chi(ParticlesData  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+152);
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t ParticlesData_len_chi(ParticlesData  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+152);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double ParticlesData_get_chi(const ParticlesData  obj, int64_t i0){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+152);
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void ParticlesData_set_chi(ParticlesData  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+152);
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* ParticlesData_getp1_chi(ParticlesData  obj, int64_t i0){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+152);
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNFloat64 ParticlesData_getp_charge_ratio(ParticlesData  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+160);
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t ParticlesData_len_charge_ratio(ParticlesData  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+160);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double ParticlesData_get_charge_ratio(const ParticlesData  obj, int64_t i0){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+160);
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void ParticlesData_set_charge_ratio(ParticlesData  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+160);
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* ParticlesData_getp1_charge_ratio(ParticlesData  obj, int64_t i0){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+160);
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNFloat64 ParticlesData_getp_weight(ParticlesData  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+168);
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t ParticlesData_len_weight(ParticlesData  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+168);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double ParticlesData_get_weight(const ParticlesData  obj, int64_t i0){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+168);
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void ParticlesData_set_weight(ParticlesData  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+168);
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* ParticlesData_getp1_weight(ParticlesData  obj, int64_t i0){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+168);
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNInt64 ParticlesData_getp_particle_id(ParticlesData  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+176);
  return (ArrNInt64)(( char*) obj+offset);
}
 static inline int64_t ParticlesData_len_particle_id(ParticlesData  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+176);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline int64_t ParticlesData_get_particle_id(const ParticlesData  obj, int64_t i0){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+176);
  offset+=16+i0*8;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void ParticlesData_set_particle_id(ParticlesData  obj, int64_t i0, int64_t value){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+176);
  offset+=16+i0*8;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* ParticlesData_getp1_particle_id(ParticlesData  obj, int64_t i0){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+176);
  offset+=16+i0*8;
  return ( int64_t*)(( char*) obj+offset);
}
 static inline ArrNInt64 ParticlesData_getp_at_element(ParticlesData  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+184);
  return (ArrNInt64)(( char*) obj+offset);
}
 static inline int64_t ParticlesData_len_at_element(ParticlesData  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+184);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline int64_t ParticlesData_get_at_element(const ParticlesData  obj, int64_t i0){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+184);
  offset+=16+i0*8;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void ParticlesData_set_at_element(ParticlesData  obj, int64_t i0, int64_t value){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+184);
  offset+=16+i0*8;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* ParticlesData_getp1_at_element(ParticlesData  obj, int64_t i0){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+184);
  offset+=16+i0*8;
  return ( int64_t*)(( char*) obj+offset);
}
 static inline ArrNInt64 ParticlesData_getp_at_turn(ParticlesData  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+192);
  return (ArrNInt64)(( char*) obj+offset);
}
 static inline int64_t ParticlesData_len_at_turn(ParticlesData  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+192);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline int64_t ParticlesData_get_at_turn(const ParticlesData  obj, int64_t i0){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+192);
  offset+=16+i0*8;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void ParticlesData_set_at_turn(ParticlesData  obj, int64_t i0, int64_t value){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+192);
  offset+=16+i0*8;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* ParticlesData_getp1_at_turn(ParticlesData  obj, int64_t i0){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+192);
  offset+=16+i0*8;
  return ( int64_t*)(( char*) obj+offset);
}
 static inline ArrNInt64 ParticlesData_getp_state(ParticlesData  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+200);
  return (ArrNInt64)(( char*) obj+offset);
}
 static inline int64_t ParticlesData_len_state(ParticlesData  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+200);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline int64_t ParticlesData_get_state(const ParticlesData  obj, int64_t i0){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+200);
  offset+=16+i0*8;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void ParticlesData_set_state(ParticlesData  obj, int64_t i0, int64_t value){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+200);
  offset+=16+i0*8;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* ParticlesData_getp1_state(ParticlesData  obj, int64_t i0){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+200);
  offset+=16+i0*8;
  return ( int64_t*)(( char*) obj+offset);
}
 static inline ArrNInt64 ParticlesData_getp_parent_particle_id(ParticlesData  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+208);
  return (ArrNInt64)(( char*) obj+offset);
}
 static inline int64_t ParticlesData_len_parent_particle_id(ParticlesData  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+208);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline int64_t ParticlesData_get_parent_particle_id(const ParticlesData  obj, int64_t i0){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+208);
  offset+=16+i0*8;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void ParticlesData_set_parent_particle_id(ParticlesData  obj, int64_t i0, int64_t value){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+208);
  offset+=16+i0*8;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* ParticlesData_getp1_parent_particle_id(ParticlesData  obj, int64_t i0){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+208);
  offset+=16+i0*8;
  return ( int64_t*)(( char*) obj+offset);
}
 static inline ArrNUint32 ParticlesData_getp__rng_s1(ParticlesData  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+216);
  return (ArrNUint32)(( char*) obj+offset);
}
 static inline int64_t ParticlesData_len__rng_s1(ParticlesData  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+216);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline uint32_t ParticlesData_get__rng_s1(const ParticlesData  obj, int64_t i0){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+216);
  offset+=16+i0*4;
  return *( uint32_t*)(( char*) obj+offset);
}
 static inline void ParticlesData_set__rng_s1(ParticlesData  obj, int64_t i0, uint32_t value){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+216);
  offset+=16+i0*4;
  *( uint32_t*)(( char*) obj+offset)=value;
}
 static inline  uint32_t* ParticlesData_getp1__rng_s1(ParticlesData  obj, int64_t i0){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+216);
  offset+=16+i0*4;
  return ( uint32_t*)(( char*) obj+offset);
}
 static inline ArrNUint32 ParticlesData_getp__rng_s2(ParticlesData  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+224);
  return (ArrNUint32)(( char*) obj+offset);
}
 static inline int64_t ParticlesData_len__rng_s2(ParticlesData  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+224);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline uint32_t ParticlesData_get__rng_s2(const ParticlesData  obj, int64_t i0){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+224);
  offset+=16+i0*4;
  return *( uint32_t*)(( char*) obj+offset);
}
 static inline void ParticlesData_set__rng_s2(ParticlesData  obj, int64_t i0, uint32_t value){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+224);
  offset+=16+i0*4;
  *( uint32_t*)(( char*) obj+offset)=value;
}
 static inline  uint32_t* ParticlesData_getp1__rng_s2(ParticlesData  obj, int64_t i0){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+224);
  offset+=16+i0*4;
  return ( uint32_t*)(( char*) obj+offset);
}
 static inline ArrNUint32 ParticlesData_getp__rng_s3(ParticlesData  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+232);
  return (ArrNUint32)(( char*) obj+offset);
}
 static inline int64_t ParticlesData_len__rng_s3(ParticlesData  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+232);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline uint32_t ParticlesData_get__rng_s3(const ParticlesData  obj, int64_t i0){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+232);
  offset+=16+i0*4;
  return *( uint32_t*)(( char*) obj+offset);
}
 static inline void ParticlesData_set__rng_s3(ParticlesData  obj, int64_t i0, uint32_t value){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+232);
  offset+=16+i0*4;
  *( uint32_t*)(( char*) obj+offset)=value;
}
 static inline  uint32_t* ParticlesData_getp1__rng_s3(ParticlesData  obj, int64_t i0){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+232);
  offset+=16+i0*4;
  return ( uint32_t*)(( char*) obj+offset);
}
 static inline ArrNUint32 ParticlesData_getp__rng_s4(ParticlesData  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+240);
  return (ArrNUint32)(( char*) obj+offset);
}
 static inline int64_t ParticlesData_len__rng_s4(ParticlesData  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+240);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline uint32_t ParticlesData_get__rng_s4(const ParticlesData  obj, int64_t i0){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+240);
  offset+=16+i0*4;
  return *( uint32_t*)(( char*) obj+offset);
}
 static inline void ParticlesData_set__rng_s4(ParticlesData  obj, int64_t i0, uint32_t value){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+240);
  offset+=16+i0*4;
  *( uint32_t*)(( char*) obj+offset)=value;
}
 static inline  uint32_t* ParticlesData_getp1__rng_s4(ParticlesData  obj, int64_t i0){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+240);
  offset+=16+i0*4;
  return ( uint32_t*)(( char*) obj+offset);
}
#endif
#ifndef XOBJ_TYPEDEF_ParticlesMonitorData
#define XOBJ_TYPEDEF_ParticlesMonitorData
typedef   struct ParticlesMonitorData_s * ParticlesMonitorData;
 static inline ParticlesMonitorData ParticlesMonitorData_getp(ParticlesMonitorData  obj){
  int64_t offset=0;
  return (ParticlesMonitorData)(( char*) obj+offset);
}
 static inline int64_t ParticlesMonitorData_get_start_at_turn(const ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=8;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void ParticlesMonitorData_set_start_at_turn(ParticlesMonitorData  obj, int64_t value){
  int64_t offset=0;
  offset+=8;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* ParticlesMonitorData_getp_start_at_turn(ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=8;
  return ( int64_t*)(( char*) obj+offset);
}
 static inline int64_t ParticlesMonitorData_get_stop_at_turn(const ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=16;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void ParticlesMonitorData_set_stop_at_turn(ParticlesMonitorData  obj, int64_t value){
  int64_t offset=0;
  offset+=16;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* ParticlesMonitorData_getp_stop_at_turn(ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=16;
  return ( int64_t*)(( char*) obj+offset);
}
 static inline int64_t ParticlesMonitorData_get_part_id_start(const ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=24;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void ParticlesMonitorData_set_part_id_start(ParticlesMonitorData  obj, int64_t value){
  int64_t offset=0;
  offset+=24;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* ParticlesMonitorData_getp_part_id_start(ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=24;
  return ( int64_t*)(( char*) obj+offset);
}
 static inline int64_t ParticlesMonitorData_get_part_id_end(const ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=32;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void ParticlesMonitorData_set_part_id_end(ParticlesMonitorData  obj, int64_t value){
  int64_t offset=0;
  offset+=32;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* ParticlesMonitorData_getp_part_id_end(ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=32;
  return ( int64_t*)(( char*) obj+offset);
}
 static inline int64_t ParticlesMonitorData_get_ebe_mode(const ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=40;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void ParticlesMonitorData_set_ebe_mode(ParticlesMonitorData  obj, int64_t value){
  int64_t offset=0;
  offset+=40;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* ParticlesMonitorData_getp_ebe_mode(ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=40;
  return ( int64_t*)(( char*) obj+offset);
}
 static inline int64_t ParticlesMonitorData_get_n_records(const ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=48;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void ParticlesMonitorData_set_n_records(ParticlesMonitorData  obj, int64_t value){
  int64_t offset=0;
  offset+=48;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* ParticlesMonitorData_getp_n_records(ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=48;
  return ( int64_t*)(( char*) obj+offset);
}
 static inline int64_t ParticlesMonitorData_get_n_repetitions(const ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=56;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void ParticlesMonitorData_set_n_repetitions(ParticlesMonitorData  obj, int64_t value){
  int64_t offset=0;
  offset+=56;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* ParticlesMonitorData_getp_n_repetitions(ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=56;
  return ( int64_t*)(( char*) obj+offset);
}
 static inline int64_t ParticlesMonitorData_get_repetition_period(const ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=64;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void ParticlesMonitorData_set_repetition_period(ParticlesMonitorData  obj, int64_t value){
  int64_t offset=0;
  offset+=64;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* ParticlesMonitorData_getp_repetition_period(ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=64;
  return ( int64_t*)(( char*) obj+offset);
}
 static inline ParticlesData ParticlesMonitorData_getp_data(ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=72;
  return (ParticlesData)(( char*) obj+offset);
}
 static inline int64_t ParticlesMonitorData_get_data__capacity(const ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=80;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void ParticlesMonitorData_set_data__capacity(ParticlesMonitorData  obj, int64_t value){
  int64_t offset=0;
  offset+=80;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* ParticlesMonitorData_getp_data__capacity(ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=80;
  return ( int64_t*)(( char*) obj+offset);
}
 static inline int64_t ParticlesMonitorData_get_data__num_active_particles(const ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=88;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void ParticlesMonitorData_set_data__num_active_particles(ParticlesMonitorData  obj, int64_t value){
  int64_t offset=0;
  offset+=88;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* ParticlesMonitorData_getp_data__num_active_particles(ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=88;
  return ( int64_t*)(( char*) obj+offset);
}
 static inline int64_t ParticlesMonitorData_get_data__num_lost_particles(const ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=96;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void ParticlesMonitorData_set_data__num_lost_particles(ParticlesMonitorData  obj, int64_t value){
  int64_t offset=0;
  offset+=96;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* ParticlesMonitorData_getp_data__num_lost_particles(ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=96;
  return ( int64_t*)(( char*) obj+offset);
}
 static inline int64_t ParticlesMonitorData_get_data_start_tracking_at_element(const ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=104;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void ParticlesMonitorData_set_data_start_tracking_at_element(ParticlesMonitorData  obj, int64_t value){
  int64_t offset=0;
  offset+=104;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* ParticlesMonitorData_getp_data_start_tracking_at_element(ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=104;
  return ( int64_t*)(( char*) obj+offset);
}
 static inline double ParticlesMonitorData_get_data_q0(const ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=112;
  return *( double*)(( char*) obj+offset);
}
 static inline void ParticlesMonitorData_set_data_q0(ParticlesMonitorData  obj, double value){
  int64_t offset=0;
  offset+=112;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* ParticlesMonitorData_getp_data_q0(ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=112;
  return ( double*)(( char*) obj+offset);
}
 static inline double ParticlesMonitorData_get_data_mass0(const ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=120;
  return *( double*)(( char*) obj+offset);
}
 static inline void ParticlesMonitorData_set_data_mass0(ParticlesMonitorData  obj, double value){
  int64_t offset=0;
  offset+=120;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* ParticlesMonitorData_getp_data_mass0(ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=120;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNFloat64 ParticlesMonitorData_getp_data_p0c(ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=320;
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t ParticlesMonitorData_len_data_p0c(ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=320;
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double ParticlesMonitorData_get_data_p0c(const ParticlesMonitorData  obj, int64_t i0){
  int64_t offset=0;
  offset+=320;
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void ParticlesMonitorData_set_data_p0c(ParticlesMonitorData  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=320;
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* ParticlesMonitorData_getp1_data_p0c(ParticlesMonitorData  obj, int64_t i0){
  int64_t offset=0;
  offset+=320;
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNFloat64 ParticlesMonitorData_getp_data_gamma0(ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+56);
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t ParticlesMonitorData_len_data_gamma0(ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+56);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double ParticlesMonitorData_get_data_gamma0(const ParticlesMonitorData  obj, int64_t i0){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+56);
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void ParticlesMonitorData_set_data_gamma0(ParticlesMonitorData  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+56);
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* ParticlesMonitorData_getp1_data_gamma0(ParticlesMonitorData  obj, int64_t i0){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+56);
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNFloat64 ParticlesMonitorData_getp_data_beta0(ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+64);
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t ParticlesMonitorData_len_data_beta0(ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+64);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double ParticlesMonitorData_get_data_beta0(const ParticlesMonitorData  obj, int64_t i0){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+64);
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void ParticlesMonitorData_set_data_beta0(ParticlesMonitorData  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+64);
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* ParticlesMonitorData_getp1_data_beta0(ParticlesMonitorData  obj, int64_t i0){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+64);
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNFloat64 ParticlesMonitorData_getp_data_s(ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+72);
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t ParticlesMonitorData_len_data_s(ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+72);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double ParticlesMonitorData_get_data_s(const ParticlesMonitorData  obj, int64_t i0){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+72);
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void ParticlesMonitorData_set_data_s(ParticlesMonitorData  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+72);
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* ParticlesMonitorData_getp1_data_s(ParticlesMonitorData  obj, int64_t i0){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+72);
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNFloat64 ParticlesMonitorData_getp_data_x(ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+80);
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t ParticlesMonitorData_len_data_x(ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+80);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double ParticlesMonitorData_get_data_x(const ParticlesMonitorData  obj, int64_t i0){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+80);
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void ParticlesMonitorData_set_data_x(ParticlesMonitorData  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+80);
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* ParticlesMonitorData_getp1_data_x(ParticlesMonitorData  obj, int64_t i0){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+80);
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNFloat64 ParticlesMonitorData_getp_data_y(ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+88);
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t ParticlesMonitorData_len_data_y(ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+88);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double ParticlesMonitorData_get_data_y(const ParticlesMonitorData  obj, int64_t i0){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+88);
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void ParticlesMonitorData_set_data_y(ParticlesMonitorData  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+88);
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* ParticlesMonitorData_getp1_data_y(ParticlesMonitorData  obj, int64_t i0){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+88);
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNFloat64 ParticlesMonitorData_getp_data_px(ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+96);
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t ParticlesMonitorData_len_data_px(ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+96);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double ParticlesMonitorData_get_data_px(const ParticlesMonitorData  obj, int64_t i0){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+96);
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void ParticlesMonitorData_set_data_px(ParticlesMonitorData  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+96);
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* ParticlesMonitorData_getp1_data_px(ParticlesMonitorData  obj, int64_t i0){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+96);
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNFloat64 ParticlesMonitorData_getp_data_py(ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+104);
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t ParticlesMonitorData_len_data_py(ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+104);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double ParticlesMonitorData_get_data_py(const ParticlesMonitorData  obj, int64_t i0){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+104);
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void ParticlesMonitorData_set_data_py(ParticlesMonitorData  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+104);
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* ParticlesMonitorData_getp1_data_py(ParticlesMonitorData  obj, int64_t i0){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+104);
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNFloat64 ParticlesMonitorData_getp_data_zeta(ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+112);
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t ParticlesMonitorData_len_data_zeta(ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+112);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double ParticlesMonitorData_get_data_zeta(const ParticlesMonitorData  obj, int64_t i0){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+112);
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void ParticlesMonitorData_set_data_zeta(ParticlesMonitorData  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+112);
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* ParticlesMonitorData_getp1_data_zeta(ParticlesMonitorData  obj, int64_t i0){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+112);
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNFloat64 ParticlesMonitorData_getp_data_ptau(ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+120);
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t ParticlesMonitorData_len_data_ptau(ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+120);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double ParticlesMonitorData_get_data_ptau(const ParticlesMonitorData  obj, int64_t i0){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+120);
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void ParticlesMonitorData_set_data_ptau(ParticlesMonitorData  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+120);
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* ParticlesMonitorData_getp1_data_ptau(ParticlesMonitorData  obj, int64_t i0){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+120);
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNFloat64 ParticlesMonitorData_getp_data_delta(ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+128);
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t ParticlesMonitorData_len_data_delta(ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+128);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double ParticlesMonitorData_get_data_delta(const ParticlesMonitorData  obj, int64_t i0){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+128);
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void ParticlesMonitorData_set_data_delta(ParticlesMonitorData  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+128);
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* ParticlesMonitorData_getp1_data_delta(ParticlesMonitorData  obj, int64_t i0){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+128);
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNFloat64 ParticlesMonitorData_getp_data_rpp(ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+136);
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t ParticlesMonitorData_len_data_rpp(ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+136);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double ParticlesMonitorData_get_data_rpp(const ParticlesMonitorData  obj, int64_t i0){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+136);
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void ParticlesMonitorData_set_data_rpp(ParticlesMonitorData  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+136);
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* ParticlesMonitorData_getp1_data_rpp(ParticlesMonitorData  obj, int64_t i0){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+136);
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNFloat64 ParticlesMonitorData_getp_data_rvv(ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+144);
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t ParticlesMonitorData_len_data_rvv(ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+144);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double ParticlesMonitorData_get_data_rvv(const ParticlesMonitorData  obj, int64_t i0){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+144);
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void ParticlesMonitorData_set_data_rvv(ParticlesMonitorData  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+144);
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* ParticlesMonitorData_getp1_data_rvv(ParticlesMonitorData  obj, int64_t i0){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+144);
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNFloat64 ParticlesMonitorData_getp_data_chi(ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+152);
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t ParticlesMonitorData_len_data_chi(ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+152);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double ParticlesMonitorData_get_data_chi(const ParticlesMonitorData  obj, int64_t i0){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+152);
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void ParticlesMonitorData_set_data_chi(ParticlesMonitorData  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+152);
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* ParticlesMonitorData_getp1_data_chi(ParticlesMonitorData  obj, int64_t i0){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+152);
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNFloat64 ParticlesMonitorData_getp_data_charge_ratio(ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+160);
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t ParticlesMonitorData_len_data_charge_ratio(ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+160);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double ParticlesMonitorData_get_data_charge_ratio(const ParticlesMonitorData  obj, int64_t i0){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+160);
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void ParticlesMonitorData_set_data_charge_ratio(ParticlesMonitorData  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+160);
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* ParticlesMonitorData_getp1_data_charge_ratio(ParticlesMonitorData  obj, int64_t i0){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+160);
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNFloat64 ParticlesMonitorData_getp_data_weight(ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+168);
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t ParticlesMonitorData_len_data_weight(ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+168);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double ParticlesMonitorData_get_data_weight(const ParticlesMonitorData  obj, int64_t i0){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+168);
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void ParticlesMonitorData_set_data_weight(ParticlesMonitorData  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+168);
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* ParticlesMonitorData_getp1_data_weight(ParticlesMonitorData  obj, int64_t i0){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+168);
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNInt64 ParticlesMonitorData_getp_data_particle_id(ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+176);
  return (ArrNInt64)(( char*) obj+offset);
}
 static inline int64_t ParticlesMonitorData_len_data_particle_id(ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+176);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline int64_t ParticlesMonitorData_get_data_particle_id(const ParticlesMonitorData  obj, int64_t i0){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+176);
  offset+=16+i0*8;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void ParticlesMonitorData_set_data_particle_id(ParticlesMonitorData  obj, int64_t i0, int64_t value){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+176);
  offset+=16+i0*8;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* ParticlesMonitorData_getp1_data_particle_id(ParticlesMonitorData  obj, int64_t i0){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+176);
  offset+=16+i0*8;
  return ( int64_t*)(( char*) obj+offset);
}
 static inline ArrNInt64 ParticlesMonitorData_getp_data_at_element(ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+184);
  return (ArrNInt64)(( char*) obj+offset);
}
 static inline int64_t ParticlesMonitorData_len_data_at_element(ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+184);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline int64_t ParticlesMonitorData_get_data_at_element(const ParticlesMonitorData  obj, int64_t i0){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+184);
  offset+=16+i0*8;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void ParticlesMonitorData_set_data_at_element(ParticlesMonitorData  obj, int64_t i0, int64_t value){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+184);
  offset+=16+i0*8;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* ParticlesMonitorData_getp1_data_at_element(ParticlesMonitorData  obj, int64_t i0){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+184);
  offset+=16+i0*8;
  return ( int64_t*)(( char*) obj+offset);
}
 static inline ArrNInt64 ParticlesMonitorData_getp_data_at_turn(ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+192);
  return (ArrNInt64)(( char*) obj+offset);
}
 static inline int64_t ParticlesMonitorData_len_data_at_turn(ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+192);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline int64_t ParticlesMonitorData_get_data_at_turn(const ParticlesMonitorData  obj, int64_t i0){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+192);
  offset+=16+i0*8;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void ParticlesMonitorData_set_data_at_turn(ParticlesMonitorData  obj, int64_t i0, int64_t value){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+192);
  offset+=16+i0*8;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* ParticlesMonitorData_getp1_data_at_turn(ParticlesMonitorData  obj, int64_t i0){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+192);
  offset+=16+i0*8;
  return ( int64_t*)(( char*) obj+offset);
}
 static inline ArrNInt64 ParticlesMonitorData_getp_data_state(ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+200);
  return (ArrNInt64)(( char*) obj+offset);
}
 static inline int64_t ParticlesMonitorData_len_data_state(ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+200);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline int64_t ParticlesMonitorData_get_data_state(const ParticlesMonitorData  obj, int64_t i0){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+200);
  offset+=16+i0*8;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void ParticlesMonitorData_set_data_state(ParticlesMonitorData  obj, int64_t i0, int64_t value){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+200);
  offset+=16+i0*8;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* ParticlesMonitorData_getp1_data_state(ParticlesMonitorData  obj, int64_t i0){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+200);
  offset+=16+i0*8;
  return ( int64_t*)(( char*) obj+offset);
}
 static inline ArrNInt64 ParticlesMonitorData_getp_data_parent_particle_id(ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+208);
  return (ArrNInt64)(( char*) obj+offset);
}
 static inline int64_t ParticlesMonitorData_len_data_parent_particle_id(ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+208);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline int64_t ParticlesMonitorData_get_data_parent_particle_id(const ParticlesMonitorData  obj, int64_t i0){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+208);
  offset+=16+i0*8;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void ParticlesMonitorData_set_data_parent_particle_id(ParticlesMonitorData  obj, int64_t i0, int64_t value){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+208);
  offset+=16+i0*8;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* ParticlesMonitorData_getp1_data_parent_particle_id(ParticlesMonitorData  obj, int64_t i0){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+208);
  offset+=16+i0*8;
  return ( int64_t*)(( char*) obj+offset);
}
 static inline ArrNUint32 ParticlesMonitorData_getp_data__rng_s1(ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+216);
  return (ArrNUint32)(( char*) obj+offset);
}
 static inline int64_t ParticlesMonitorData_len_data__rng_s1(ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+216);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline uint32_t ParticlesMonitorData_get_data__rng_s1(const ParticlesMonitorData  obj, int64_t i0){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+216);
  offset+=16+i0*4;
  return *( uint32_t*)(( char*) obj+offset);
}
 static inline void ParticlesMonitorData_set_data__rng_s1(ParticlesMonitorData  obj, int64_t i0, uint32_t value){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+216);
  offset+=16+i0*4;
  *( uint32_t*)(( char*) obj+offset)=value;
}
 static inline  uint32_t* ParticlesMonitorData_getp1_data__rng_s1(ParticlesMonitorData  obj, int64_t i0){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+216);
  offset+=16+i0*4;
  return ( uint32_t*)(( char*) obj+offset);
}
 static inline ArrNUint32 ParticlesMonitorData_getp_data__rng_s2(ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+224);
  return (ArrNUint32)(( char*) obj+offset);
}
 static inline int64_t ParticlesMonitorData_len_data__rng_s2(ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+224);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline uint32_t ParticlesMonitorData_get_data__rng_s2(const ParticlesMonitorData  obj, int64_t i0){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+224);
  offset+=16+i0*4;
  return *( uint32_t*)(( char*) obj+offset);
}
 static inline void ParticlesMonitorData_set_data__rng_s2(ParticlesMonitorData  obj, int64_t i0, uint32_t value){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+224);
  offset+=16+i0*4;
  *( uint32_t*)(( char*) obj+offset)=value;
}
 static inline  uint32_t* ParticlesMonitorData_getp1_data__rng_s2(ParticlesMonitorData  obj, int64_t i0){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+224);
  offset+=16+i0*4;
  return ( uint32_t*)(( char*) obj+offset);
}
 static inline ArrNUint32 ParticlesMonitorData_getp_data__rng_s3(ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+232);
  return (ArrNUint32)(( char*) obj+offset);
}
 static inline int64_t ParticlesMonitorData_len_data__rng_s3(ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+232);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline uint32_t ParticlesMonitorData_get_data__rng_s3(const ParticlesMonitorData  obj, int64_t i0){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+232);
  offset+=16+i0*4;
  return *( uint32_t*)(( char*) obj+offset);
}
 static inline void ParticlesMonitorData_set_data__rng_s3(ParticlesMonitorData  obj, int64_t i0, uint32_t value){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+232);
  offset+=16+i0*4;
  *( uint32_t*)(( char*) obj+offset)=value;
}
 static inline  uint32_t* ParticlesMonitorData_getp1_data__rng_s3(ParticlesMonitorData  obj, int64_t i0){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+232);
  offset+=16+i0*4;
  return ( uint32_t*)(( char*) obj+offset);
}
 static inline ArrNUint32 ParticlesMonitorData_getp_data__rng_s4(ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+240);
  return (ArrNUint32)(( char*) obj+offset);
}
 static inline int64_t ParticlesMonitorData_len_data__rng_s4(ParticlesMonitorData  obj){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+240);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline uint32_t ParticlesMonitorData_get_data__rng_s4(const ParticlesMonitorData  obj, int64_t i0){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+240);
  offset+=16+i0*4;
  return *( uint32_t*)(( char*) obj+offset);
}
 static inline void ParticlesMonitorData_set_data__rng_s4(ParticlesMonitorData  obj, int64_t i0, uint32_t value){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+240);
  offset+=16+i0*4;
  *( uint32_t*)(( char*) obj+offset)=value;
}
 static inline  uint32_t* ParticlesMonitorData_getp1_data__rng_s4(ParticlesMonitorData  obj, int64_t i0){
  int64_t offset=0;
  offset+=72;
  offset+=*( int64_t*)(( char*) obj+offset+240);
  offset+=16+i0*4;
  return ( uint32_t*)(( char*) obj+offset);
}
#endif
#define XTRACK_GLOBAL_POSLIMIT (1.0)
#ifndef XTRACK_CONSTANTS_H
#define XTRACK_CONSTANTS_H

#if !defined( C_LIGHT )
    #define   C_LIGHT ( 299792458.0 )
#endif /* !defined( C_LIGHT ) */

#if !defined( EPSILON_0 )
    #define   EPSILON_0 (8.854187817620e-12)
#endif /* !defined( EPSILON_0 ) */

#if !defined( PI )
    #define PI (3.1415926535897932384626433832795028841971693993751)
#endif /* !defined( PI ) */

#if !defined( MU_0 )
    #define MU_0 (PI*4.0e-7)
#endif /* !defined( MU_0 ) */

#if !defined( DEG2RAD )
    #define DEG2RAD (0.0174532925199432957692369076848861271344287188854)
#endif /* !defiend( DEG2RAD ) */

#if !defined( RAD2DEG )
    #define RAD2DEG (57.29577951308232087679815481410517033240547246656442)
#endif /* !defiend( RAD2DEG ) */

#if !defined( SQRT_PI )
    #define SQRT_PI (1.7724538509055160272981674833411451827975494561224)
#endif /* !defined( SQRT_PI ) */

#if !defined( QELEM )
    #define QELEM (1.60217662e-19)
#endif /* !defined( QELEM ) */

#endif /* XTRACK_CONSTANTS_H */

typedef struct{
                 int64_t  _capacity;
                 int64_t  _num_active_particles;
                 int64_t  _num_lost_particles;
                 int64_t  start_tracking_at_element;
                 double  q0;
                 double  mass0;
      double* p0c;
      double* gamma0;
      double* beta0;
      double* s;
      double* x;
      double* y;
      double* px;
      double* py;
      double* zeta;
      double* ptau;
      double* delta;
      double* rpp;
      double* rvv;
      double* chi;
      double* charge_ratio;
      double* weight;
      int64_t* particle_id;
      int64_t* at_element;
      int64_t* at_turn;
      int64_t* state;
      int64_t* parent_particle_id;
      uint32_t* _rng_s1;
      uint32_t* _rng_s2;
      uint32_t* _rng_s3;
      uint32_t* _rng_s4;
                 int64_t ipart;
      int8_t* io_buffer;
}LocalParticle;


     static inline
    void LocalParticle_add_to_p0c(LocalParticle* part, double value){
  part->p0c[part->ipart] += value;
}


     static inline
    void LocalParticle_add_to_gamma0(LocalParticle* part, double value){
  part->gamma0[part->ipart] += value;
}


     static inline
    void LocalParticle_add_to_beta0(LocalParticle* part, double value){
  part->beta0[part->ipart] += value;
}


     static inline
    void LocalParticle_add_to_s(LocalParticle* part, double value){
  part->s[part->ipart] += value;
}


     static inline
    void LocalParticle_add_to_x(LocalParticle* part, double value){
  part->x[part->ipart] += value;
}


     static inline
    void LocalParticle_add_to_y(LocalParticle* part, double value){
  part->y[part->ipart] += value;
}


     static inline
    void LocalParticle_add_to_px(LocalParticle* part, double value){
  part->px[part->ipart] += value;
}


     static inline
    void LocalParticle_add_to_py(LocalParticle* part, double value){
  part->py[part->ipart] += value;
}


     static inline
    void LocalParticle_add_to_zeta(LocalParticle* part, double value){
  part->zeta[part->ipart] += value;
}


     static inline
    void LocalParticle_add_to_ptau(LocalParticle* part, double value){
  part->ptau[part->ipart] += value;
}


     static inline
    void LocalParticle_add_to_delta(LocalParticle* part, double value){
  part->delta[part->ipart] += value;
}


     static inline
    void LocalParticle_add_to_rpp(LocalParticle* part, double value){
  part->rpp[part->ipart] += value;
}


     static inline
    void LocalParticle_add_to_rvv(LocalParticle* part, double value){
  part->rvv[part->ipart] += value;
}


     static inline
    void LocalParticle_add_to_chi(LocalParticle* part, double value){
  part->chi[part->ipart] += value;
}


     static inline
    void LocalParticle_add_to_charge_ratio(LocalParticle* part, double value){
  part->charge_ratio[part->ipart] += value;
}


     static inline
    void LocalParticle_add_to_weight(LocalParticle* part, double value){
  part->weight[part->ipart] += value;
}


     static inline
    void LocalParticle_add_to_particle_id(LocalParticle* part, int64_t value){
  part->particle_id[part->ipart] += value;
}


     static inline
    void LocalParticle_add_to_at_element(LocalParticle* part, int64_t value){
  part->at_element[part->ipart] += value;
}


     static inline
    void LocalParticle_add_to_at_turn(LocalParticle* part, int64_t value){
  part->at_turn[part->ipart] += value;
}


     static inline
    void LocalParticle_add_to_state(LocalParticle* part, int64_t value){
  part->state[part->ipart] += value;
}


     static inline
    void LocalParticle_add_to_parent_particle_id(LocalParticle* part, int64_t value){
  part->parent_particle_id[part->ipart] += value;
}


     static inline
    void LocalParticle_add_to__rng_s1(LocalParticle* part, uint32_t value){
  part->_rng_s1[part->ipart] += value;
}


     static inline
    void LocalParticle_add_to__rng_s2(LocalParticle* part, uint32_t value){
  part->_rng_s2[part->ipart] += value;
}


     static inline
    void LocalParticle_add_to__rng_s3(LocalParticle* part, uint32_t value){
  part->_rng_s3[part->ipart] += value;
}


     static inline
    void LocalParticle_add_to__rng_s4(LocalParticle* part, uint32_t value){
  part->_rng_s4[part->ipart] += value;
}


 static inline
int64_t LocalParticle_get__capacity(LocalParticle* part){
  return part->_capacity;
}
 static inline
int64_t LocalParticle_get__num_active_particles(LocalParticle* part){
  return part->_num_active_particles;
}
 static inline
int64_t LocalParticle_get__num_lost_particles(LocalParticle* part){
  return part->_num_lost_particles;
}
 static inline
int64_t LocalParticle_get_start_tracking_at_element(LocalParticle* part){
  return part->start_tracking_at_element;
}
 static inline
double LocalParticle_get_q0(LocalParticle* part){
  return part->q0;
}
 static inline
double LocalParticle_get_mass0(LocalParticle* part){
  return part->mass0;
}
 static inline
double LocalParticle_get_p0c(LocalParticle* part){
  return part->p0c[part->ipart];
}
 static inline
double LocalParticle_get_gamma0(LocalParticle* part){
  return part->gamma0[part->ipart];
}
 static inline
double LocalParticle_get_beta0(LocalParticle* part){
  return part->beta0[part->ipart];
}
 static inline
double LocalParticle_get_s(LocalParticle* part){
  return part->s[part->ipart];
}
 static inline
double LocalParticle_get_x(LocalParticle* part){
  return part->x[part->ipart];
}
 static inline
double LocalParticle_get_y(LocalParticle* part){
  return part->y[part->ipart];
}
 static inline
double LocalParticle_get_px(LocalParticle* part){
  return part->px[part->ipart];
}
 static inline
double LocalParticle_get_py(LocalParticle* part){
  return part->py[part->ipart];
}
 static inline
double LocalParticle_get_zeta(LocalParticle* part){
  return part->zeta[part->ipart];
}
 static inline
double LocalParticle_get_ptau(LocalParticle* part){
  return part->ptau[part->ipart];
}
 static inline
double LocalParticle_get_delta(LocalParticle* part){
  return part->delta[part->ipart];
}
 static inline
double LocalParticle_get_rpp(LocalParticle* part){
  return part->rpp[part->ipart];
}
 static inline
double LocalParticle_get_rvv(LocalParticle* part){
  return part->rvv[part->ipart];
}
 static inline
double LocalParticle_get_chi(LocalParticle* part){
  return part->chi[part->ipart];
}
 static inline
double LocalParticle_get_charge_ratio(LocalParticle* part){
  return part->charge_ratio[part->ipart];
}
 static inline
double LocalParticle_get_weight(LocalParticle* part){
  return part->weight[part->ipart];
}
 static inline
int64_t LocalParticle_get_particle_id(LocalParticle* part){
  return part->particle_id[part->ipart];
}
 static inline
int64_t LocalParticle_get_at_element(LocalParticle* part){
  return part->at_element[part->ipart];
}
 static inline
int64_t LocalParticle_get_at_turn(LocalParticle* part){
  return part->at_turn[part->ipart];
}
 static inline
int64_t LocalParticle_get_state(LocalParticle* part){
  return part->state[part->ipart];
}
 static inline
int64_t LocalParticle_get_parent_particle_id(LocalParticle* part){
  return part->parent_particle_id[part->ipart];
}
 static inline
uint32_t LocalParticle_get__rng_s1(LocalParticle* part){
  return part->_rng_s1[part->ipart];
}
 static inline
uint32_t LocalParticle_get__rng_s2(LocalParticle* part){
  return part->_rng_s2[part->ipart];
}
 static inline
uint32_t LocalParticle_get__rng_s3(LocalParticle* part){
  return part->_rng_s3[part->ipart];
}
 static inline
uint32_t LocalParticle_get__rng_s4(LocalParticle* part){
  return part->_rng_s4[part->ipart];
}


     static inline
    void LocalParticle_set_p0c(LocalParticle* part, double value){
  part->p0c[part->ipart] = value;
}

     static inline
    void LocalParticle_set_gamma0(LocalParticle* part, double value){
  part->gamma0[part->ipart] = value;
}

     static inline
    void LocalParticle_set_beta0(LocalParticle* part, double value){
  part->beta0[part->ipart] = value;
}

     static inline
    void LocalParticle_set_s(LocalParticle* part, double value){
  part->s[part->ipart] = value;
}

     static inline
    void LocalParticle_set_x(LocalParticle* part, double value){
  part->x[part->ipart] = value;
}

     static inline
    void LocalParticle_set_y(LocalParticle* part, double value){
  part->y[part->ipart] = value;
}

     static inline
    void LocalParticle_set_px(LocalParticle* part, double value){
  part->px[part->ipart] = value;
}

     static inline
    void LocalParticle_set_py(LocalParticle* part, double value){
  part->py[part->ipart] = value;
}

     static inline
    void LocalParticle_set_zeta(LocalParticle* part, double value){
  part->zeta[part->ipart] = value;
}

     static inline
    void LocalParticle_set_ptau(LocalParticle* part, double value){
  part->ptau[part->ipart] = value;
}

     static inline
    void LocalParticle_set_delta(LocalParticle* part, double value){
  part->delta[part->ipart] = value;
}

     static inline
    void LocalParticle_set_rpp(LocalParticle* part, double value){
  part->rpp[part->ipart] = value;
}

     static inline
    void LocalParticle_set_rvv(LocalParticle* part, double value){
  part->rvv[part->ipart] = value;
}

     static inline
    void LocalParticle_set_chi(LocalParticle* part, double value){
  part->chi[part->ipart] = value;
}

     static inline
    void LocalParticle_set_charge_ratio(LocalParticle* part, double value){
  part->charge_ratio[part->ipart] = value;
}

     static inline
    void LocalParticle_set_weight(LocalParticle* part, double value){
  part->weight[part->ipart] = value;
}

     static inline
    void LocalParticle_set_particle_id(LocalParticle* part, int64_t value){
  part->particle_id[part->ipart] = value;
}

     static inline
    void LocalParticle_set_at_element(LocalParticle* part, int64_t value){
  part->at_element[part->ipart] = value;
}

     static inline
    void LocalParticle_set_at_turn(LocalParticle* part, int64_t value){
  part->at_turn[part->ipart] = value;
}

     static inline
    void LocalParticle_set_state(LocalParticle* part, int64_t value){
  part->state[part->ipart] = value;
}

     static inline
    void LocalParticle_set_parent_particle_id(LocalParticle* part, int64_t value){
  part->parent_particle_id[part->ipart] = value;
}

     static inline
    void LocalParticle_set__rng_s1(LocalParticle* part, uint32_t value){
  part->_rng_s1[part->ipart] = value;
}

     static inline
    void LocalParticle_set__rng_s2(LocalParticle* part, uint32_t value){
  part->_rng_s2[part->ipart] = value;
}

     static inline
    void LocalParticle_set__rng_s3(LocalParticle* part, uint32_t value){
  part->_rng_s3[part->ipart] = value;
}

     static inline
    void LocalParticle_set__rng_s4(LocalParticle* part, uint32_t value){
  part->_rng_s4[part->ipart] = value;
}


     static inline
    void LocalParticle_scale_p0c(LocalParticle* part, double value){
  part->p0c[part->ipart] *= value;
}


     static inline
    void LocalParticle_scale_gamma0(LocalParticle* part, double value){
  part->gamma0[part->ipart] *= value;
}


     static inline
    void LocalParticle_scale_beta0(LocalParticle* part, double value){
  part->beta0[part->ipart] *= value;
}


     static inline
    void LocalParticle_scale_s(LocalParticle* part, double value){
  part->s[part->ipart] *= value;
}


     static inline
    void LocalParticle_scale_x(LocalParticle* part, double value){
  part->x[part->ipart] *= value;
}


     static inline
    void LocalParticle_scale_y(LocalParticle* part, double value){
  part->y[part->ipart] *= value;
}


     static inline
    void LocalParticle_scale_px(LocalParticle* part, double value){
  part->px[part->ipart] *= value;
}


     static inline
    void LocalParticle_scale_py(LocalParticle* part, double value){
  part->py[part->ipart] *= value;
}


     static inline
    void LocalParticle_scale_zeta(LocalParticle* part, double value){
  part->zeta[part->ipart] *= value;
}


     static inline
    void LocalParticle_scale_ptau(LocalParticle* part, double value){
  part->ptau[part->ipart] *= value;
}


     static inline
    void LocalParticle_scale_delta(LocalParticle* part, double value){
  part->delta[part->ipart] *= value;
}


     static inline
    void LocalParticle_scale_rpp(LocalParticle* part, double value){
  part->rpp[part->ipart] *= value;
}


     static inline
    void LocalParticle_scale_rvv(LocalParticle* part, double value){
  part->rvv[part->ipart] *= value;
}


     static inline
    void LocalParticle_scale_chi(LocalParticle* part, double value){
  part->chi[part->ipart] *= value;
}


     static inline
    void LocalParticle_scale_charge_ratio(LocalParticle* part, double value){
  part->charge_ratio[part->ipart] *= value;
}


     static inline
    void LocalParticle_scale_weight(LocalParticle* part, double value){
  part->weight[part->ipart] *= value;
}


     static inline
    void LocalParticle_scale_particle_id(LocalParticle* part, int64_t value){
  part->particle_id[part->ipart] *= value;
}


     static inline
    void LocalParticle_scale_at_element(LocalParticle* part, int64_t value){
  part->at_element[part->ipart] *= value;
}


     static inline
    void LocalParticle_scale_at_turn(LocalParticle* part, int64_t value){
  part->at_turn[part->ipart] *= value;
}


     static inline
    void LocalParticle_scale_state(LocalParticle* part, int64_t value){
  part->state[part->ipart] *= value;
}


     static inline
    void LocalParticle_scale_parent_particle_id(LocalParticle* part, int64_t value){
  part->parent_particle_id[part->ipart] *= value;
}


     static inline
    void LocalParticle_scale__rng_s1(LocalParticle* part, uint32_t value){
  part->_rng_s1[part->ipart] *= value;
}


     static inline
    void LocalParticle_scale__rng_s2(LocalParticle* part, uint32_t value){
  part->_rng_s2[part->ipart] *= value;
}


     static inline
    void LocalParticle_scale__rng_s3(LocalParticle* part, uint32_t value){
  part->_rng_s3[part->ipart] *= value;
}


     static inline
    void LocalParticle_scale__rng_s4(LocalParticle* part, uint32_t value){
  part->_rng_s4[part->ipart] *= value;
}



 static inline
void LocalParticle_exchange(LocalParticle* part, int64_t i1, int64_t i2){

    {
    double temp = part->p0c[i2];
    part->p0c[i2] = part->p0c[i1];
    part->p0c[i1] = temp;
     }
    {
    double temp = part->gamma0[i2];
    part->gamma0[i2] = part->gamma0[i1];
    part->gamma0[i1] = temp;
     }
    {
    double temp = part->beta0[i2];
    part->beta0[i2] = part->beta0[i1];
    part->beta0[i1] = temp;
     }
    {
    double temp = part->s[i2];
    part->s[i2] = part->s[i1];
    part->s[i1] = temp;
     }
    {
    double temp = part->x[i2];
    part->x[i2] = part->x[i1];
    part->x[i1] = temp;
     }
    {
    double temp = part->y[i2];
    part->y[i2] = part->y[i1];
    part->y[i1] = temp;
     }
    {
    double temp = part->px[i2];
    part->px[i2] = part->px[i1];
    part->px[i1] = temp;
     }
    {
    double temp = part->py[i2];
    part->py[i2] = part->py[i1];
    part->py[i1] = temp;
     }
    {
    double temp = part->zeta[i2];
    part->zeta[i2] = part->zeta[i1];
    part->zeta[i1] = temp;
     }
    {
    double temp = part->ptau[i2];
    part->ptau[i2] = part->ptau[i1];
    part->ptau[i1] = temp;
     }
    {
    double temp = part->delta[i2];
    part->delta[i2] = part->delta[i1];
    part->delta[i1] = temp;
     }
    {
    double temp = part->rpp[i2];
    part->rpp[i2] = part->rpp[i1];
    part->rpp[i1] = temp;
     }
    {
    double temp = part->rvv[i2];
    part->rvv[i2] = part->rvv[i1];
    part->rvv[i1] = temp;
     }
    {
    double temp = part->chi[i2];
    part->chi[i2] = part->chi[i1];
    part->chi[i1] = temp;
     }
    {
    double temp = part->charge_ratio[i2];
    part->charge_ratio[i2] = part->charge_ratio[i1];
    part->charge_ratio[i1] = temp;
     }
    {
    double temp = part->weight[i2];
    part->weight[i2] = part->weight[i1];
    part->weight[i1] = temp;
     }
    {
    int64_t temp = part->particle_id[i2];
    part->particle_id[i2] = part->particle_id[i1];
    part->particle_id[i1] = temp;
     }
    {
    int64_t temp = part->at_element[i2];
    part->at_element[i2] = part->at_element[i1];
    part->at_element[i1] = temp;
     }
    {
    int64_t temp = part->at_turn[i2];
    part->at_turn[i2] = part->at_turn[i1];
    part->at_turn[i1] = temp;
     }
    {
    int64_t temp = part->state[i2];
    part->state[i2] = part->state[i1];
    part->state[i1] = temp;
     }
    {
    int64_t temp = part->parent_particle_id[i2];
    part->parent_particle_id[i2] = part->parent_particle_id[i1];
    part->parent_particle_id[i1] = temp;
     }
    {
    uint32_t temp = part->_rng_s1[i2];
    part->_rng_s1[i2] = part->_rng_s1[i1];
    part->_rng_s1[i1] = temp;
     }
    {
    uint32_t temp = part->_rng_s2[i2];
    part->_rng_s2[i2] = part->_rng_s2[i1];
    part->_rng_s2[i1] = temp;
     }
    {
    uint32_t temp = part->_rng_s3[i2];
    part->_rng_s3[i2] = part->_rng_s3[i1];
    part->_rng_s3[i1] = temp;
     }
    {
    uint32_t temp = part->_rng_s4[i2];
    part->_rng_s4[i2] = part->_rng_s4[i1];
    part->_rng_s4[i1] = temp;
     }}



     static inline
      int8_t* LocalParticle_get_io_buffer(LocalParticle* part){
        return part->io_buffer;
    }

    

     static inline
    void Particles_to_LocalParticle(ParticlesData source,
                                    LocalParticle* dest,
                                    int64_t id){
  dest->_capacity = ParticlesData_get__capacity(source);
  dest->_num_active_particles = ParticlesData_get__num_active_particles(source);
  dest->_num_lost_particles = ParticlesData_get__num_lost_particles(source);
  dest->start_tracking_at_element = ParticlesData_get_start_tracking_at_element(source);
  dest->q0 = ParticlesData_get_q0(source);
  dest->mass0 = ParticlesData_get_mass0(source);
  dest->p0c = ParticlesData_getp1_p0c(source, 0);
  dest->gamma0 = ParticlesData_getp1_gamma0(source, 0);
  dest->beta0 = ParticlesData_getp1_beta0(source, 0);
  dest->s = ParticlesData_getp1_s(source, 0);
  dest->x = ParticlesData_getp1_x(source, 0);
  dest->y = ParticlesData_getp1_y(source, 0);
  dest->px = ParticlesData_getp1_px(source, 0);
  dest->py = ParticlesData_getp1_py(source, 0);
  dest->zeta = ParticlesData_getp1_zeta(source, 0);
  dest->ptau = ParticlesData_getp1_ptau(source, 0);
  dest->delta = ParticlesData_getp1_delta(source, 0);
  dest->rpp = ParticlesData_getp1_rpp(source, 0);
  dest->rvv = ParticlesData_getp1_rvv(source, 0);
  dest->chi = ParticlesData_getp1_chi(source, 0);
  dest->charge_ratio = ParticlesData_getp1_charge_ratio(source, 0);
  dest->weight = ParticlesData_getp1_weight(source, 0);
  dest->particle_id = ParticlesData_getp1_particle_id(source, 0);
  dest->at_element = ParticlesData_getp1_at_element(source, 0);
  dest->at_turn = ParticlesData_getp1_at_turn(source, 0);
  dest->state = ParticlesData_getp1_state(source, 0);
  dest->parent_particle_id = ParticlesData_getp1_parent_particle_id(source, 0);
  dest->_rng_s1 = ParticlesData_getp1__rng_s1(source, 0);
  dest->_rng_s2 = ParticlesData_getp1__rng_s2(source, 0);
  dest->_rng_s3 = ParticlesData_getp1__rng_s3(source, 0);
  dest->_rng_s4 = ParticlesData_getp1__rng_s4(source, 0);
  dest->ipart = id;
}


     static inline
    void LocalParticle_to_Particles(
                                    LocalParticle* source,
                                    ParticlesData dest,
                                    int64_t id,
                                    int64_t set_scalar){
if (set_scalar){
  ParticlesData_set__capacity(dest,      LocalParticle_get__capacity(source));
  ParticlesData_set__num_active_particles(dest,      LocalParticle_get__num_active_particles(source));
  ParticlesData_set__num_lost_particles(dest,      LocalParticle_get__num_lost_particles(source));
  ParticlesData_set_start_tracking_at_element(dest,      LocalParticle_get_start_tracking_at_element(source));
  ParticlesData_set_q0(dest,      LocalParticle_get_q0(source));
  ParticlesData_set_mass0(dest,      LocalParticle_get_mass0(source));
}
  ParticlesData_set_p0c(dest, id,       LocalParticle_get_p0c(source));
  ParticlesData_set_gamma0(dest, id,       LocalParticle_get_gamma0(source));
  ParticlesData_set_beta0(dest, id,       LocalParticle_get_beta0(source));
  ParticlesData_set_s(dest, id,       LocalParticle_get_s(source));
  ParticlesData_set_x(dest, id,       LocalParticle_get_x(source));
  ParticlesData_set_y(dest, id,       LocalParticle_get_y(source));
  ParticlesData_set_px(dest, id,       LocalParticle_get_px(source));
  ParticlesData_set_py(dest, id,       LocalParticle_get_py(source));
  ParticlesData_set_zeta(dest, id,       LocalParticle_get_zeta(source));
  ParticlesData_set_ptau(dest, id,       LocalParticle_get_ptau(source));
  ParticlesData_set_delta(dest, id,       LocalParticle_get_delta(source));
  ParticlesData_set_rpp(dest, id,       LocalParticle_get_rpp(source));
  ParticlesData_set_rvv(dest, id,       LocalParticle_get_rvv(source));
  ParticlesData_set_chi(dest, id,       LocalParticle_get_chi(source));
  ParticlesData_set_charge_ratio(dest, id,       LocalParticle_get_charge_ratio(source));
  ParticlesData_set_weight(dest, id,       LocalParticle_get_weight(source));
  ParticlesData_set_particle_id(dest, id,       LocalParticle_get_particle_id(source));
  ParticlesData_set_at_element(dest, id,       LocalParticle_get_at_element(source));
  ParticlesData_set_at_turn(dest, id,       LocalParticle_get_at_turn(source));
  ParticlesData_set_state(dest, id,       LocalParticle_get_state(source));
  ParticlesData_set_parent_particle_id(dest, id,       LocalParticle_get_parent_particle_id(source));
  ParticlesData_set__rng_s1(dest, id,       LocalParticle_get__rng_s1(source));
  ParticlesData_set__rng_s2(dest, id,       LocalParticle_get__rng_s2(source));
  ParticlesData_set__rng_s3(dest, id,       LocalParticle_get__rng_s3(source));
  ParticlesData_set__rng_s4(dest, id,       LocalParticle_get__rng_s4(source));
}


 static inline
double LocalParticle_get_energy0(LocalParticle* part){

    double const p0c = LocalParticle_get_p0c(part);
    double const m0  = LocalParticle_get_mass0(part);

    return sqrt( p0c * p0c + m0 * m0 );
}

 static inline
void LocalParticle_add_to_energy(LocalParticle* part, double delta_energy, int pz_only ){

    double ptau = LocalParticle_get_ptau(part);
    double const beta0 = LocalParticle_get_beta0(part);
    double const p0c = LocalParticle_get_p0c(part);

    ptau += delta_energy/p0c;

    double const irpp = sqrt(ptau*ptau + 2*ptau/beta0 +1);

    double const new_rpp = 1./irpp;
    LocalParticle_set_delta(part, irpp - 1.);

    double const new_rvv = irpp/(1 + beta0*ptau);
    LocalParticle_scale_zeta(part,
        new_rvv / LocalParticle_get_rvv(part));
    LocalParticle_set_rvv(part, new_rvv);
    LocalParticle_set_ptau(part, ptau);

    if (!pz_only) {
        double const old_rpp = LocalParticle_get_rpp(part);
        double const f = old_rpp / new_rpp;
        LocalParticle_scale_px(part, f);
        LocalParticle_scale_py(part, f);
    }
    LocalParticle_set_rpp(part, new_rpp );
}

 static inline
void LocalParticle_update_delta(LocalParticle* part, double new_delta_value){
    double const beta0 = LocalParticle_get_beta0(part);
    double const delta_beta0 = new_delta_value * beta0;
    double const ptau_beta0  = sqrt( delta_beta0 * delta_beta0 +
                                2. * delta_beta0 * beta0 + 1. ) - 1.;

    double const one_plus_delta = 1. + new_delta_value;
    double const rvv    = ( one_plus_delta ) / ( 1. + ptau_beta0 );
    double const rpp    = 1. / one_plus_delta;
    double const ptau = ptau_beta0 / beta0;

    LocalParticle_set_delta(part, new_delta_value);

    LocalParticle_set_rvv(part, rvv );
    LocalParticle_set_rpp(part, rpp );
    LocalParticle_set_ptau(part, ptau );

}

 static inline
void LocalParticle_update_p0c(LocalParticle* part, double new_p0c_value){

    double const mass0 = LocalParticle_get_mass0(part);
    double const old_p0c = LocalParticle_get_p0c(part);
    double const old_delta = LocalParticle_get_delta(part);

    double const ppc = old_p0c * old_delta + old_p0c;
    double const new_delta = (ppc - new_p0c_value)/new_p0c_value;

    double const new_energy0 = sqrt(new_p0c_value*new_p0c_value + mass0 * mass0);
    double const new_beta0 = new_p0c_value / new_energy0;
    double const new_gamma0 = new_energy0 / mass0;

    LocalParticle_set_p0c(part, new_p0c_value);
    LocalParticle_set_gamma0(part, new_gamma0);
    LocalParticle_set_beta0(part, new_beta0);

    LocalParticle_update_delta(part, new_delta);

    LocalParticle_scale_px(part, old_p0c/new_p0c_value);
    LocalParticle_scale_py(part, old_p0c/new_p0c_value);

}

#ifndef XTRACK_TRACKER_H
#define XTRACK_TRACKER_H

#ifdef XTRACK_GLOBAL_POSLIMIT

 static inline
void global_aperture_check(LocalParticle* part0){



   int64_t const n_part = LocalParticle_get__num_active_particles(part0); //only_for_context cpu_serial cpu_openmp
//   #pragma omp parallel for                                       //only_for_context cpu_openmp
   for (int jj=0; jj<n_part; jj+=128){                 //only_for_context cpu_serial cpu_openmp
    //#pragma omp simd
    for (int iii=0; iii<128; iii++){                   //only_for_context cpu_serial cpu_openmp
      int const ii = iii+jj;                                      //only_for_context cpu_serial cpu_openmp
      if (ii<n_part){                                             //only_for_context cpu_serial cpu_openmp

        LocalParticle lpart = *part0;//only_for_context cpu_serial cpu_openmp
        LocalParticle* part = &lpart;//only_for_context cpu_serial cpu_openmp
        part->ipart = ii;            //only_for_context cpu_serial cpu_openmp

//        LocalParticle* part = part0;//only_for_context opencl cuda

        double const x = LocalParticle_get_x(part);
        double const y = LocalParticle_get_y(part);

	int64_t const is_alive = (int64_t)(
                      (x >= -XTRACK_GLOBAL_POSLIMIT) &&
		      (x <=  XTRACK_GLOBAL_POSLIMIT) &&
		      (y >= -XTRACK_GLOBAL_POSLIMIT) &&
		      (y <=  XTRACK_GLOBAL_POSLIMIT) );

	// I assume that if I am in the function is because
    	if (!is_alive){
           LocalParticle_set_state(part, -1);
	}

     } //only_for_context cpu_serial cpu_openmp
    }  //only_for_context cpu_serial cpu_openmp
   }   //only_for_context cpu_serial cpu_openmp



}
#endif

 static inline
void increment_at_element(LocalParticle* part0){


   int64_t const n_part = LocalParticle_get__num_active_particles(part0); //only_for_context cpu_serial cpu_openmp
//   #pragma omp parallel for                                       //only_for_context cpu_openmp
   for (int jj=0; jj<n_part; jj+=128){                 //only_for_context cpu_serial cpu_openmp
    //#pragma omp simd
    for (int iii=0; iii<128; iii++){                   //only_for_context cpu_serial cpu_openmp
      int const ii = iii+jj;                                      //only_for_context cpu_serial cpu_openmp
      if (ii<n_part){                                             //only_for_context cpu_serial cpu_openmp

        LocalParticle lpart = *part0;//only_for_context cpu_serial cpu_openmp
        LocalParticle* part = &lpart;//only_for_context cpu_serial cpu_openmp
        part->ipart = ii;            //only_for_context cpu_serial cpu_openmp

//        LocalParticle* part = part0;//only_for_context opencl cuda

        LocalParticle_add_to_at_element(part, 1);

     } //only_for_context cpu_serial cpu_openmp
    }  //only_for_context cpu_serial cpu_openmp
   }   //only_for_context cpu_serial cpu_openmp



}

 static inline
void increment_at_turn(LocalParticle* part0, int flag_reset_s){


   int64_t const n_part = LocalParticle_get__num_active_particles(part0); //only_for_context cpu_serial cpu_openmp
//   #pragma omp parallel for                                       //only_for_context cpu_openmp
   for (int jj=0; jj<n_part; jj+=128){                 //only_for_context cpu_serial cpu_openmp
    //#pragma omp simd
    for (int iii=0; iii<128; iii++){                   //only_for_context cpu_serial cpu_openmp
      int const ii = iii+jj;                                      //only_for_context cpu_serial cpu_openmp
      if (ii<n_part){                                             //only_for_context cpu_serial cpu_openmp

        LocalParticle lpart = *part0;//only_for_context cpu_serial cpu_openmp
        LocalParticle* part = &lpart;//only_for_context cpu_serial cpu_openmp
        part->ipart = ii;            //only_for_context cpu_serial cpu_openmp

//        LocalParticle* part = part0;//only_for_context opencl cuda

	LocalParticle_add_to_at_turn(part, 1);
	LocalParticle_set_at_element(part, 0);
    if (flag_reset_s>0){
        LocalParticle_set_s(part, 0.);
    }

     } //only_for_context cpu_serial cpu_openmp
    }  //only_for_context cpu_serial cpu_openmp
   }   //only_for_context cpu_serial cpu_openmp

}


// check_is_active has different implementation on CPU and GPU

#define CPUIMPLEM //only_for_context cpu_serial cpu_openmp

#ifdef CPUIMPLEM

 static inline
int64_t check_is_active(LocalParticle* part) {
    int64_t ipart=0;
    while (ipart < part->_num_active_particles){
        if (part->state[ipart]<1){
            LocalParticle_exchange(
                part, ipart, part->_num_active_particles-1);
            part->_num_active_particles--;
            part->_num_lost_particles++;
        }
	else{
	    ipart++;
	}
    }

    if (part->_num_active_particles==0){
        return 0;//All particles lost
    } else {
        return 1; //Some stable particles are still present
    }
}

#else

 static inline
int64_t check_is_active(LocalParticle* part) {
    return LocalParticle_get_state(part)>0;
};

#endif

#undef CPUIMPLEM //only_for_context cpu_serial cpu_openmp

#endif
#ifndef XOBJ_TYPEDEF_RecordIdentifier
#define XOBJ_TYPEDEF_RecordIdentifier
typedef   struct RecordIdentifier_s * RecordIdentifier;
 static inline RecordIdentifier RecordIdentifier_getp(RecordIdentifier  obj){
  int64_t offset=0;
  return (RecordIdentifier)(( char*) obj+offset);
}
 static inline int64_t RecordIdentifier_get_buffer_id(const RecordIdentifier  obj){
  int64_t offset=0;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void RecordIdentifier_set_buffer_id(RecordIdentifier  obj, int64_t value){
  int64_t offset=0;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* RecordIdentifier_getp_buffer_id(RecordIdentifier  obj){
  int64_t offset=0;
  return ( int64_t*)(( char*) obj+offset);
}
 static inline int64_t RecordIdentifier_get_offset(const RecordIdentifier  obj){
  int64_t offset=0;
  offset+=8;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void RecordIdentifier_set_offset(RecordIdentifier  obj, int64_t value){
  int64_t offset=0;
  offset+=8;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* RecordIdentifier_getp_offset(RecordIdentifier  obj){
  int64_t offset=0;
  offset+=8;
  return ( int64_t*)(( char*) obj+offset);
}
#endif

 static inline
  int8_t* RecordIdentifier_getp_record(RecordIdentifier record_id, LocalParticle* part){
      int8_t* io_buffer = LocalParticle_get_io_buffer(part);
    if (io_buffer == NULL){
        return NULL;
    }

    int64_t buffer_id = RecordIdentifier_get_buffer_id(record_id);
      int64_t* found_id = (  int64_t*)io_buffer;
    if (buffer_id != (*found_id)){
        printf("Error: buffer_id mismatch!\n");
        return NULL;
    }

    int64_t offset = RecordIdentifier_get_offset(record_id);

    return io_buffer + offset;
    }


#ifndef XOBJ_TYPEDEF_RecordIndex
#define XOBJ_TYPEDEF_RecordIndex
typedef   struct RecordIndex_s * RecordIndex;
 static inline RecordIndex RecordIndex_getp(RecordIndex  obj){
  int64_t offset=0;
  return (RecordIndex)(( char*) obj+offset);
}
 static inline int64_t RecordIndex_get_capacity(const RecordIndex  obj){
  int64_t offset=0;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void RecordIndex_set_capacity(RecordIndex  obj, int64_t value){
  int64_t offset=0;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* RecordIndex_getp_capacity(RecordIndex  obj){
  int64_t offset=0;
  return ( int64_t*)(( char*) obj+offset);
}
 static inline uint32_t RecordIndex_get_num_recorded(const RecordIndex  obj){
  int64_t offset=0;
  offset+=8;
  return *( uint32_t*)(( char*) obj+offset);
}
 static inline void RecordIndex_set_num_recorded(RecordIndex  obj, uint32_t value){
  int64_t offset=0;
  offset+=8;
  *( uint32_t*)(( char*) obj+offset)=value;
}
 static inline  uint32_t* RecordIndex_getp_num_recorded(RecordIndex  obj){
  int64_t offset=0;
  offset+=8;
  return ( uint32_t*)(( char*) obj+offset);
}
 static inline uint32_t RecordIndex_get__dummy(const RecordIndex  obj){
  int64_t offset=0;
  offset+=16;
  return *( uint32_t*)(( char*) obj+offset);
}
 static inline void RecordIndex_set__dummy(RecordIndex  obj, uint32_t value){
  int64_t offset=0;
  offset+=16;
  *( uint32_t*)(( char*) obj+offset)=value;
}
 static inline  uint32_t* RecordIndex_getp__dummy(RecordIndex  obj){
  int64_t offset=0;
  offset+=16;
  return ( uint32_t*)(( char*) obj+offset);
}
 static inline int64_t RecordIndex_get_buffer_id(const RecordIndex  obj){
  int64_t offset=0;
  offset+=24;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void RecordIndex_set_buffer_id(RecordIndex  obj, int64_t value){
  int64_t offset=0;
  offset+=24;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* RecordIndex_getp_buffer_id(RecordIndex  obj){
  int64_t offset=0;
  offset+=24;
  return ( int64_t*)(( char*) obj+offset);
}
#endif


 static inline
int64_t RecordIndex_get_slot(RecordIndex record_index){

    if (record_index == NULL){
        return -2;
    }
    int64_t capacity = RecordIndex_get_capacity(record_index);
      uint32_t* num_recorded = RecordIndex_getp_num_recorded(record_index);

    if(*num_recorded >= capacity){
        return -1;}

//    uint32_t slot = atomic_add(num_recorded, 1);   //only_for_context opencl
//    uint32_t slot = atomicAdd(num_recorded, 1);    //only_for_context cuda
    uint32_t slot = *num_recorded;                 //only_for_context cpu_serial
    *num_recorded = slot + 1;                      //only_for_context cpu_serial

    if (slot >= capacity){
        *num_recorded = capacity;
        return -1;
        }

    return (int64_t) slot;
    }


#if !defined( C_LIGHT )
    #define   C_LIGHT ( 299792458.0 )
#endif

#if !defined( EPSILON_0 )
    #define   EPSILON_0 (8.854187817620e-12)
#endif

#if !defined( PI )
    #define PI (3.1415926535897932384626433832795028841971693993751)
#endif

#if !defined( DEG2RAD )
    #define DEG2RAD (0.0174532925199432957692369076848861271344287188854)
#endif

#if !defined( RAD2DEG )
    #define RAD2DEG (57.29577951308232087679815481410517033240547246656442)
#endif

#if !defined( SQRT_PI )
    #define SQRT_PI (1.7724538509055160272981674833411451827975494561224)
#endif

#if !defined( QELEM )
    #define QELEM (1.60217662e-19)
#endif

#if !defined( TWO_OVER_SQRT_PI )
    #define TWO_OVER_SQRT_PI (1.128379167095512573896158903121545171688101258657997713688171443418)
#endif

#if !defined( SQRT_TWO )
    #define SQRT_TWO (1.414213562373095048801688724209698078569671875376948073176679738)
#endif

#if !defined( REAL_EPSILON )
    #define REAL_EPSILON 2.22044604925031e-16
#endif /* !defined( REAL_EPSILON ) */

#ifndef XFIELDS_SINCOS_H__
#define XFIELDS_SINCOS_H__

#include <math.h> //only_for_context cpu_serial cpu_openmp

/* Define XSUITE_NO_SINCOS as a compiler parameter to never use the inline
 * wrapper function below (the compiler may still decide to use sincos - like
 * intrinsic, but usually enforcing that math functions have to update
 * errno should put an end to this.
 *
 * If XSUITE_NO_SINCOS is not set, then a best-effort attempt is made to
 * use it on platforms that support it (i.e. gnu compiler, no ANSI standards,
 * relaxed errno handling for math functions.
 */

#if ( !defined( XSUITE_NO_SINCOS ) ) && ( defined( __OPENCL_C_VERSION__ ) )
 static inline void xsuite_sincos( double const arg,
    double*   sin_result, double*   cos_result ) {
    *sin_result = sincos( arg, cos_result ); }

#elif ( !defined( XSUITE_NO_SINCOS ) ) && \
      ( ( defined( __CUDA_ARCH__ ) ) || \
        ( defined( __GNUC__ ) && !defined( __clang__ ) && \
         !defined( __STRICT_ANSI__ ) && !defined( __INTEL_COMPILER ) && \
         defined( __NO_MATH_ERRNO__ ) ) )
 static inline void xsuite_sincos( double const arg,
    double*   sin_result, double*   cos_result ) {
    sincos( arg, sin_result, cos_result ); }

#else
 static inline void xsuite_sincos( double const arg,
    double*   sin_result, double*   cos_result ) {
    *sin_result = sin( arg );
    *cos_result = cos( arg ); }

#endif /* XSUITE_NO_SINCOS */
#endif /* XFIELDS_SINCOS_H__ */

#ifndef XFIELDS_HEADERS_POWER_H_H__
#define XFIELDS_HEADERS_POWER_H_H__

/** \file power_n.h
 *  \note always include constants first!!! */

 static inline double power_n( double x, unsigned int n )
{
    #if defined( __OPENCL_VERSION__ )
    return pown( x, n );
    #else

    double x_n = x;

    unsigned int const n_div_16 = n >> 4u;
    unsigned int const n_mod_16 = n - ( n_div_16 << 4u );

    switch( n_mod_16 )
    {
        case  0u: { x_n = ( double )1.0; break; }
        case  1u: { break; }
        case  2u: { x_n *= x;                                       break; }
        case  3u: { x_n *= x * x;                                   break; }
        case  4u: { x_n *= x;     x_n *= x_n;                       break; }
        case  5u: { x_n *= x;     x_n *= x_n * x;                   break; }
        case  6u: { x_n *= x * x; x_n *= x_n;                       break; }
        case  7u: { x_n *= x * x; x_n *= x_n * x;                   break; }
        case  8u: { x_n *= x;     x_n *= x_n;     x_n *= x_n;       break; }
        case  9u: { x_n *= x * x; x_n *= x_n * x_n;                 break; }
        case 10u: { x_n *= x * x; x_n *= x_n * x_n * x;             break; }
        case 11u: { x_n *= x;     x_n *= x_n * x; x_n *= x_n * x;   break; }
        case 12u: { x_n *= x * x; x_n *= x_n;     x_n *= x_n;       break; }
        case 13u: { x_n *= x * x; x_n *= x_n;     x_n *= x_n * x;   break; }
        case 14u: { x_n *= x * x; x_n *= x_n * x; x_n *= x_n;       break; }
        case 15u: { x_n *= x;     x_n *= x_n * x; x_n *= x_n * x_n; break; }
        default:  { x_n = ( double )0.0; }
    };

    if( n_div_16 > 0u ){ x *= x; x *= x; x *= x; x *= x; }

    switch( n_div_16 )
    {
        case  0u: { x_n  = ( n_mod_16 != 0u ) ? x_n : ( double )1.0; break; }
        case  1u: { x_n *= x;                                           break; }
        case  2u: { x   *= x; x_n *= x;                                 break; }
        case  3u: { x_n *= x * x * x;                                   break; }
        case  4u: { x   *= x; x *= x; x_n *= x;                         break; }
        case  5u: { x_n *= x; x *= x; x *= x; x_n *= x;                 break; }
        case  6u: { x   *= x * x; x *= x; x_n *= x;                     break; }
        case  7u: { x_n *= x; x *= x * x; x *= x; x_n *= x;             break; }
        case  8u: { x *= x; x *= x; x*= x; x_n *= x;                    break; }
        case  9u: { x *= x * x; x *= x * x; x_n *= x;                   break; }
        case 10u: { x_n *= x; x *= x * x; x *= x * x; x_n *= x;         break; }
        case 11u: { x_n *= x * x; x *= x * x; x *= x * x; x_n *= x;     break; }
        case 12u: { x *= x; x *= x; x_n *= x; x *= x; x_n *= x;         break; }
        case 13u: { x_n *= x; x *= x; x *= x; x_n *= x; x *= x;
                    x_n *= x; break; }

        case 14u: { x_n *= x * x; x *= x; x *= x; x_n *= x; x *= x;
                    x_n *= x; break; }

        case 15u: { x *= x * x; x_n *= x * x; x *= x * x; x_n *= x;    break; }

        default:
        {
            unsigned int ii = 0u;
            unsigned int nn = n_div_16 % 16u;

            for( ; ii < nn ; ++ii ) x_n *= x;

            x *= x; x *= x; x *= x; x *= x;
            nn = ( n_div_16 - nn ) >> 4u;

            for( ii = 0u ; ii < nn ; ++ii ) x_n *= x;
        }
    };

    return x_n;
    #endif /* defined( __OPENCL_VERSION__ ) */
}

#endif /* XFIELDS_HEADERS_POWER_H_H__ */

#ifndef XFIELDS_COMPLEX_ERROR_FUNCTION_H
#define XFIELDS_COMPLEX_ERROR_FUNCTION_H

/** \file complex_error_function.h
  * \note always include headers/constants.h, headers/power_n.h, and
  *       headers/sincos.h first! */

#include <stdbool.h>  //only_for_context cpu_serial cpu_openmp
#include <math.h>     //only_for_context cpu_serial cpu_openmp

/* These parameters correspond to the original algorithm developed by Gautschi
 * with a target accuracy of < 0.5 x 10^{-10} in the *absolute* error. Upstream
 * cernlib had switched to more aggressive parameters targeting approx. a
 * *relative* error > 0.5 x 10^{-14} instead -> see the values in comments
 * after the defines. In order to properly use them, you also have to define
 *
 * FADDEEVA_NO_GZ_WEIGHT_FN
 *
 * as compile parameter / compiler flag, this sets g(z) = 1 for all z. */

#if !defined( FADDEEVA_X_LIMIT )
    #define FADDEEVA_X_LIMIT 5.33           /* CERNLib value: 8.3 */
#endif /* !defined( FADDEEVA_X_LIMIT ) */

#if !defined( FADDEEVA_Y_LIMIT )
    #define FADDEEVA_Y_LIMIT 4.29           /* CERNLib value: 7.4 */
#endif /* !defined( FADDEEVA_Y_LIMIT ) */

#if !defined( FADDEEVA_H0 )
    #define FADDEEVA_H0 1.6                 /* CERNLib value: 1.6, unchanged */
#endif /* !defined( FADDEEVA_H0 ) */

#if !defined( FADDEEVA_NU_0 )
    #define FADDEEVA_NU_0 10                /* CERNLib value: 10, unchanged */
#endif /* !defined( FADDEEVA_NU_0 ) */

#if !defined( FADDEEVA_NU_1 )
    #define FADDEEVA_NU_1 21                /* CERNLib value: 26 */
#endif /* !defined( FADDEEVA_NU_1 ) */

#if !defined( FADDEEVA_N0 )
    #define FADDEEVA_N0 7                   /* CERNLib value: 7, unchanged */
#endif /* !defined( FADDEEVA_N0 ) */

#if !defined( FADDEEVA_N1 )
    #define FADDEEVA_N1 23                  /* CERNLib value: 16 */
#endif /* !defined( FADDEEVA_N1 ) */

#if !defined( FADDEEVA_CONT_FRAC_K )
    #define FADDEEVA_CONT_FRAC_K 9          /* CERNLib value: 9, unchanged */
#endif /* !defined( FADDEEVA_CONT_FRAC_K ) */

/* ************************************************************************* */

/** \fn void cerrf_q1( double const, double const, double*, double* )
 *  \brief calculates the Faddeeva function w(z) for z = x + i * y in Q1
 *
 *  \param[in] x real component of argument z
 *  \param[in] y imaginary component of argument z
 *  \param[out] out_x pointer to real component of result
 *  \param[out] out_y pointer to imanginary component of result
 *
 *  \warning This function assumes that x and y are > 0 i.e., that z is
 *           from the first quadrant Q1 of the complex plane. Use cerrf if
 *           you need a more general function
 *
 *  \note    Based upon the algorithm developed by W. Gautschi 1970,
 *           "Efficient Computation of the Complex Error Function",
 *           SIAM Journal on Numerical Analysis, Vol. 7, Issue 1. 1970,
 *           pages 187-198, https://epubs.siam.org/doi/10.1137/0707012
 */

 static inline void cerrf_q1(
    double const x, double const y,
    double*   out_x,
    double*   out_y )
{
    /* This implementation corresponds closely to the previously used
     * "CERNLib C" version, translated from the FORTRAN function written at
     * CERN by K. Koelbig, Program C335, 1970. The main difference to
     * Gautschi's formulation is a split in the main loop and the introduction
     * of arrays to store the intermediate results as a consequence of this.
     * The version implemented here should perform roughly equally well or even
     * slightly better on modern out-of-order super-scalar CPUs but has
     * drastically improved performance on GPUs and GPU-like systems.
     *
     * See also M. Bassetti and G.A. Erskine,
     * "Closed expression for the electric field of a two-dimensional Gaussian
     *  charge density", CERN-ISR-TH/80-06; */

    double inv_h2   = ( double )1.0;
    double y_plus_h = y;
    double temp, Rx, Ry, Sx, Sy, Wx, Wy, h2_n, nn;

    int nu = ( int )FADDEEVA_CONT_FRAC_K;
    int N  = 0;
    int n  = 0;

    bool use_taylor_sum;
    Ry = Sx = Sy = h2_n = ( double )0.0;

    /* R_0 ... rectangle with width FADDEEVA_X_LIMIT and
     *         height FADDEEVA_Y_LIMIT. Inside R_0, w(z) is calculated using
     *         a truncated Taylor expansion. Outside, a Gauss--Hermite
     *         quadrature in the guise of a continuos fraction is used */

    use_taylor_sum = ( ( y < ( double )FADDEEVA_Y_LIMIT ) &&
                       ( x < ( double )FADDEEVA_X_LIMIT ) );

	if( use_taylor_sum )
    {
        #if !defined( FADDEEVA_NO_GZ_WEIGHT_FN )
        /* calculate g(z) = sqrt( 1 - (x/x0)^2 ) * ( 1 - y/y0 ) */
        temp  = x * ( ( double )1. / ( double )FADDEEVA_X_LIMIT );
        temp  = ( ( double )1.0 +  temp ) * ( ( double )1.0 - temp );
        temp  = sqrt( temp );
        temp *= ( double )1. - y * ( ( double )1. / ( double )FADDEEVA_Y_LIMIT );
        /*now: temp = g(z) */
        #else /* !defined( FADDEEVA_NO_GZ_WEIGHT_FN ) */
        temp = ( double )1.;
        #endif /* defined( FADDEEVA_NO_GZ_WEIGHT_FN ) */

        nu   = ( y > ( double )REAL_EPSILON )
             ? ( int )FADDEEVA_NU_0 + ( int )( ( double )FADDEEVA_NU_1 * temp )
             : ( int )0;

        N         = ( int )FADDEEVA_N0 + ( int )( ( double )FADDEEVA_N1 * temp );
        h2_n      = ( double )FADDEEVA_H0 * temp; /* h(z) = h_0 * g(z) */
        y_plus_h += h2_n; /* y_plus_h = y + h(z) */
        h2_n     *= ( double )2.; /* now: h2_n = 2 * h(z) */
        inv_h2    = ( double )1. / h2_n;
        h2_n      = power_n( h2_n, N - 1 ); /* finally: h2_n = (2*h(z))^(N-1) */
    }

    /* If h(z) is so close to 0 that it is practically 0, there is no
     * point in doing the extra work for the Taylor series -> in that
     * very unlikely case, use the continuos fraction & verify result! */
    use_taylor_sum &= ( h2_n > ( double )REAL_EPSILON );

    Rx = ( y > ( double )REAL_EPSILON )
       ? ( double )0.0 : exp( -x * x ) / ( double )TWO_OVER_SQRT_PI;

    n = nu;
    nn = ( double )n;

    /* z outside of R_0: continuos fraction / Gauss - Hermite quadrature
     * z inside  of R_0: first iterations of recursion until n == N */
    for( ; n > N ; --n, nn -= ( double )1.0 )
    {
        Wx     = y_plus_h + nn * Rx;
        Wy     = x - nn * Ry;
        temp   = ( Wx * Wx ) + ( Wy * Wy );
        Rx     = ( double )0.5 * Wx;
        Ry     = ( double )0.5 * Wy;
        temp   = ( double )1.0 / temp;
        Rx    *= temp;
        Ry    *= temp;
    }

    /* loop rejects everything if z is not in R_0 because then n == 0 already;
     * otherwise, N iterations until taylor expansion is summed up */
    for( ; n > 0 ; --n, nn -= ( double )1.0 )
    {
        Wx     = y_plus_h + nn * Rx;
        Wy     = x - nn * Ry;
        temp   = ( Wx * Wx ) + ( Wy * Wy );
        Rx     = ( double )0.5 * Wx;
        Ry     = ( double )0.5 * Wy;
        temp   = ( double )1.0 / temp;
        Rx    *= temp;
        Ry    *= temp;

        Wx     = h2_n + Sx;
        h2_n  *= inv_h2;
        Sx     = Rx * Wx - Ry * Sy;
        Sy     = Ry * Wx + Rx * Sy;
    }

    if( use_taylor_sum )
    {
        Wx = ( double )TWO_OVER_SQRT_PI * Sx;
        Wy = ( double )TWO_OVER_SQRT_PI * Sy;
    }
    else
    {
        Wx = ( double )TWO_OVER_SQRT_PI * Rx;
        Wy = ( double )TWO_OVER_SQRT_PI * Ry;
    }

    *out_x = Wx;
    *out_y = Wy;
}

/** \fn void cerrf( double const x, double const y, double* out_x, double* out_y )
 *  \brief calculates the Faddeeva function w(z) for general z = x + i * y
 *
 *   Calls cerrf_q1 internally for |x| and |y| on quadrant Q1 and
 *   transforms the result to Q2, Q3, and Q4 before returning them via
 *   out_x and out_y.
 *
 *  \param[in] x real component of argument z
 *  \param[in] y imaginary component of argument z
 *  \param[out] out_x pointer to real component of result
 *  \param[out] out_y pointer to imanginary component of result
 *
 */

 static inline void cerrf( double x, double y,
    double*   out_x, double*   out_y )
{
    double const sign_x = ( double )( ( x >= ( double )0. ) - ( x < ( double )0. ) );
    double const sign_y = ( double )( ( y >= ( double )0. ) - ( y < ( double )0. ) );
    double Wx, Wy;

    x *= sign_x;
    y *= sign_y;

    cerrf_q1( x, y, &Wx, &Wy );

    if( sign_y < ( double )0.0 )  /* Quadrants Q3 and Q4 */
    {
        double const exp_arg  = ( y - x ) * ( y + x );
        double const trig_arg = ( double )2. * x * y;
        double const exp_factor = ( double )2. * exp( exp_arg );
        double sin_arg, cos_arg;

        xsuite_sincos( trig_arg, &sin_arg, &cos_arg );
        Wx = exp_factor * cos_arg - Wx;
        Wy = exp_factor * sin_arg + Wy;
    }

    *out_x = Wx;
    *out_y = sign_x * Wy; /* Takes care of Quadrants Q2 and Q3 */
}

#endif /* XFIELDS_COMPLEX_ERROR_FUNCTION_H */


#ifndef XFIEDLS_BIGUASSIIAN_H
#define XFIEDLS_BIGUASSIIAN_H

// for quick test with gcc
//#include "constants.h" //only_for_context none
//#include "complex_error_function.h" //only_for_context none

 static inline
void get_transv_field_gauss_round(
    double sigma, double Delta_x, double Delta_y,
    double x, double y,
    double* Ex,
    double* Ey)
{
  double r2, temp;

  r2 = (x-Delta_x)*(x-Delta_x)+(y-Delta_y)*(y-Delta_y);
  if (r2<1e-20) temp = sqrt(r2)/(2.*PI*EPSILON_0*sigma); //linearised
  else          temp = (1-exp(-0.5*r2/(sigma*sigma)))/(2.*PI*EPSILON_0*r2);

  (*Ex) = temp * (x-Delta_x);
  (*Ey) = temp * (y-Delta_y);
}

 static inline
void get_transv_field_gauss_ellip(
        double sigma_x,  double sigma_y,
        double Delta_x,  double Delta_y,
        const double x,
	const double y,
        double* Ex_out,
        double* Ey_out)
{
  double sigmax = sigma_x;
  double sigmay = sigma_y;

  // I always go to the first quadrant and then apply the signs a posteriori
  // numerically more stable (see http://inspirehep.net/record/316705/files/slac-pub-5582.pdf)

  double abx = fabs(x - Delta_x);
  double aby = fabs(y - Delta_y);

  //printf("x = %.2e y = %.2e abx = %.2e aby = %.2e", xx, yy, abx, aby);

  double S, factBE, Ex, Ey;
  double etaBE_re, etaBE_im, zetaBE_re, zetaBE_im;
  double w_etaBE_re, w_etaBE_im, w_zetaBE_re, w_zetaBE_im;
  double expBE;

  if (sigmax>sigmay){
    S = sqrt(2.*(sigmax*sigmax-sigmay*sigmay));
    factBE = 1./(2.*EPSILON_0*SQRT_PI*S);

    etaBE_re = sigmay/sigmax*abx;
    etaBE_im = sigmax/sigmay*aby;

    zetaBE_re = abx;
    zetaBE_im = aby;

    //w_zetaBE_re, w_zetaBE_im = wfun(zetaBE_re/S, zetaBE_im/S)
    cerrf(zetaBE_re/S, zetaBE_im/S , &(w_zetaBE_re), &(w_zetaBE_im));
    //w_etaBE_re, w_etaBE_im = wfun(etaBE_re/S, etaBE_im/S)
    cerrf(etaBE_re/S, etaBE_im/S , &(w_etaBE_re), &(w_etaBE_im));

    expBE = exp(-abx*abx/(2*sigmax*sigmax)-aby*aby/(2*sigmay*sigmay));

    Ex = factBE*(w_zetaBE_im - w_etaBE_im*expBE);
    Ey = factBE*(w_zetaBE_re - w_etaBE_re*expBE);
  }
  else if (sigmax<sigmay){
    S = sqrt(2.*(sigmay*sigmay-sigmax*sigmax));
    factBE = 1./(2.*EPSILON_0*SQRT_PI*S);

    etaBE_re = sigmax/sigmay*aby;
    etaBE_im = sigmay/sigmax*abx;

    zetaBE_re = aby;
    zetaBE_im = abx;

    //w_zetaBE_re, w_zetaBE_im = wfun(zetaBE_re/S, zetaBE_im/S)
    cerrf(zetaBE_re/S, zetaBE_im/S , &(w_zetaBE_re), &(w_zetaBE_im));
    //w_etaBE_re, w_etaBE_im = wfun(etaBE_re/S, etaBE_im/S)
    cerrf(etaBE_re/S, etaBE_im/S , &(w_etaBE_re), &(w_etaBE_im));

    expBE = exp(-aby*aby/(2*sigmay*sigmay)-abx*abx/(2*sigmax*sigmax));

    Ey = factBE*(w_zetaBE_im - w_etaBE_im*expBE);
    Ex = factBE*(w_zetaBE_re - w_etaBE_re*expBE);
  }
  else{
    //printf("Round beam not implemented!\n");
    //exit(1);
    Ex = Ey = 0.;
  }

  if((x - Delta_x)<0) Ex=-Ex;
  if((y - Delta_y)<0) Ey=-Ey;

  (*Ex_out) = Ex;
  (*Ey_out) = Ey;
}

 static inline
void get_Ex_Ey_gauss(
             const double  x,
             const double  y,
             const double  sigma_x,
             const double  sigma_y,
             const double  min_sigma_diff,
             double* Ex_ptr,
             double* Ey_ptr){

	if (fabs(sigma_x-sigma_y)< min_sigma_diff){
	    double sigma = 0.5*(sigma_x+sigma_y);
	    	get_transv_field_gauss_round(sigma, 0., 0., x, y, Ex_ptr, Ey_ptr);
	}
	else{
	    get_transv_field_gauss_ellip(
	            sigma_x, sigma_y, 0., 0., x, y, Ex_ptr, Ey_ptr);

	}
}

#ifndef NOFIELDMAP

 static inline
void BiGaussianFieldMap_get_dphi_dx_dphi_dy(
           BiGaussianFieldMapData fmap,
                    const double  x,
                    const double  y,
                          double* dphi_dx,
                          double* dphi_dy){

    const double sigma_x = BiGaussianFieldMapData_get_sigma_x(fmap);
    const double sigma_y = BiGaussianFieldMapData_get_sigma_y(fmap);
    const double mean_x = BiGaussianFieldMapData_get_mean_x(fmap);
    const double mean_y = BiGaussianFieldMapData_get_mean_y(fmap);
    const double min_sigma_diff = BiGaussianFieldMapData_get_min_sigma_diff(fmap);

    double Ex, Ey;
    get_Ex_Ey_gauss(
             x-mean_x,
             y-mean_y,
             sigma_x,
             sigma_y,
             min_sigma_diff,
             &Ex,
             &Ey);

    *dphi_dx = -Ex;
    *dphi_dy = -Ey;
}
#endif

#endif

#ifndef XFIELDS_BEAMBEAM_H
#define XFIELDS_BEAMBEAM_H

 static inline
void BeamBeamBiGaussian2D_track_local_particle(
		BeamBeamBiGaussian2DData el, LocalParticle* part0){

    BiGaussianFieldMapData fmap = BeamBeamBiGaussian2DData_getp_fieldmap(el);
    double const bb_q0 = BeamBeamBiGaussian2DData_get_q0(el);
    double const bb_n_particles = BeamBeamBiGaussian2DData_get_n_particles(el);
    double const bb_beta0 = BeamBeamBiGaussian2DData_get_beta0(el); 
    double const bb_d_px = BeamBeamBiGaussian2DData_get_d_px(el);
    double const bb_d_py = BeamBeamBiGaussian2DData_get_d_py(el);
 

   int64_t const n_part = LocalParticle_get__num_active_particles(part0); //only_for_context cpu_serial cpu_openmp
//   #pragma omp parallel for                                       //only_for_context cpu_openmp
   for (int jj=0; jj<n_part; jj+=128){                 //only_for_context cpu_serial cpu_openmp
    //#pragma omp simd
    for (int iii=0; iii<128; iii++){                   //only_for_context cpu_serial cpu_openmp
      int const ii = iii+jj;                                      //only_for_context cpu_serial cpu_openmp
      if (ii<n_part){                                             //only_for_context cpu_serial cpu_openmp

        LocalParticle lpart = *part0;//only_for_context cpu_serial cpu_openmp
        LocalParticle* part = &lpart;//only_for_context cpu_serial cpu_openmp
        part->ipart = ii;            //only_for_context cpu_serial cpu_openmp

//        LocalParticle* part = part0;//only_for_context opencl cuda

	double const x = LocalParticle_get_x(part);
	double const y = LocalParticle_get_y(part);
	double const part_q0 = LocalParticle_get_q0(part);
	double const part_mass0 = LocalParticle_get_mass0(part);
	double const part_chi = LocalParticle_get_chi(part);
	double const part_beta0 = LocalParticle_get_beta0(part);
	double const part_gamma0 = LocalParticle_get_gamma0(part);

   	double dphi_dx, dphi_dy;

	BiGaussianFieldMap_get_dphi_dx_dphi_dy(fmap, x, y,
                          &dphi_dx, &dphi_dy);

        const double charge_mass_ratio = part_chi*QELEM*part_q0
                    /(part_mass0*QELEM/(C_LIGHT*C_LIGHT));
        const double factor = -(charge_mass_ratio*bb_n_particles*bb_q0* QELEM
                    /(part_gamma0*part_beta0*C_LIGHT*C_LIGHT)
                    *(1+bb_beta0*part_beta0)/(bb_beta0 + part_beta0));

	LocalParticle_add_to_px(part, factor*dphi_dx-bb_d_px);
	LocalParticle_add_to_py(part, factor*dphi_dy-bb_d_py);


     } //only_for_context cpu_serial cpu_openmp
    }  //only_for_context cpu_serial cpu_openmp
   }   //only_for_context cpu_serial cpu_openmp


}

#endif
#if !defined( C_LIGHT )
    #define   C_LIGHT ( 299792458.0 )
#endif

#if !defined( EPSILON_0 )
    #define   EPSILON_0 (8.854187817620e-12)
#endif

#if !defined( PI )
    #define PI (3.1415926535897932384626433832795028841971693993751)
#endif

#if !defined( DEG2RAD )
    #define DEG2RAD (0.0174532925199432957692369076848861271344287188854)
#endif

#if !defined( RAD2DEG )
    #define RAD2DEG (57.29577951308232087679815481410517033240547246656442)
#endif

#if !defined( SQRT_PI )
    #define SQRT_PI (1.7724538509055160272981674833411451827975494561224)
#endif

#if !defined( QELEM )
    #define QELEM (1.60217662e-19)
#endif

#if !defined( TWO_OVER_SQRT_PI )
    #define TWO_OVER_SQRT_PI (1.128379167095512573896158903121545171688101258657997713688171443418)
#endif

#if !defined( SQRT_TWO )
    #define SQRT_TWO (1.414213562373095048801688724209698078569671875376948073176679738)
#endif

#if !defined( REAL_EPSILON )
    #define REAL_EPSILON 2.22044604925031e-16
#endif /* !defined( REAL_EPSILON ) */

#ifndef XFIELDS_SINCOS_H__
#define XFIELDS_SINCOS_H__

#include <math.h> //only_for_context cpu_serial cpu_openmp

/* Define XSUITE_NO_SINCOS as a compiler parameter to never use the inline
 * wrapper function below (the compiler may still decide to use sincos - like
 * intrinsic, but usually enforcing that math functions have to update
 * errno should put an end to this.
 *
 * If XSUITE_NO_SINCOS is not set, then a best-effort attempt is made to
 * use it on platforms that support it (i.e. gnu compiler, no ANSI standards,
 * relaxed errno handling for math functions.
 */

#if ( !defined( XSUITE_NO_SINCOS ) ) && ( defined( __OPENCL_C_VERSION__ ) )
 static inline void xsuite_sincos( double const arg,
    double*   sin_result, double*   cos_result ) {
    *sin_result = sincos( arg, cos_result ); }

#elif ( !defined( XSUITE_NO_SINCOS ) ) && \
      ( ( defined( __CUDA_ARCH__ ) ) || \
        ( defined( __GNUC__ ) && !defined( __clang__ ) && \
         !defined( __STRICT_ANSI__ ) && !defined( __INTEL_COMPILER ) && \
         defined( __NO_MATH_ERRNO__ ) ) )
 static inline void xsuite_sincos( double const arg,
    double*   sin_result, double*   cos_result ) {
    sincos( arg, sin_result, cos_result ); }

#else
 static inline void xsuite_sincos( double const arg,
    double*   sin_result, double*   cos_result ) {
    *sin_result = sin( arg );
    *cos_result = cos( arg ); }

#endif /* XSUITE_NO_SINCOS */
#endif /* XFIELDS_SINCOS_H__ */

#ifndef XFIELDS_HEADERS_POWER_H_H__
#define XFIELDS_HEADERS_POWER_H_H__

/** \file power_n.h
 *  \note always include constants first!!! */

 static inline double power_n( double x, unsigned int n )
{
    #if defined( __OPENCL_VERSION__ )
    return pown( x, n );
    #else

    double x_n = x;

    unsigned int const n_div_16 = n >> 4u;
    unsigned int const n_mod_16 = n - ( n_div_16 << 4u );

    switch( n_mod_16 )
    {
        case  0u: { x_n = ( double )1.0; break; }
        case  1u: { break; }
        case  2u: { x_n *= x;                                       break; }
        case  3u: { x_n *= x * x;                                   break; }
        case  4u: { x_n *= x;     x_n *= x_n;                       break; }
        case  5u: { x_n *= x;     x_n *= x_n * x;                   break; }
        case  6u: { x_n *= x * x; x_n *= x_n;                       break; }
        case  7u: { x_n *= x * x; x_n *= x_n * x;                   break; }
        case  8u: { x_n *= x;     x_n *= x_n;     x_n *= x_n;       break; }
        case  9u: { x_n *= x * x; x_n *= x_n * x_n;                 break; }
        case 10u: { x_n *= x * x; x_n *= x_n * x_n * x;             break; }
        case 11u: { x_n *= x;     x_n *= x_n * x; x_n *= x_n * x;   break; }
        case 12u: { x_n *= x * x; x_n *= x_n;     x_n *= x_n;       break; }
        case 13u: { x_n *= x * x; x_n *= x_n;     x_n *= x_n * x;   break; }
        case 14u: { x_n *= x * x; x_n *= x_n * x; x_n *= x_n;       break; }
        case 15u: { x_n *= x;     x_n *= x_n * x; x_n *= x_n * x_n; break; }
        default:  { x_n = ( double )0.0; }
    };

    if( n_div_16 > 0u ){ x *= x; x *= x; x *= x; x *= x; }

    switch( n_div_16 )
    {
        case  0u: { x_n  = ( n_mod_16 != 0u ) ? x_n : ( double )1.0; break; }
        case  1u: { x_n *= x;                                           break; }
        case  2u: { x   *= x; x_n *= x;                                 break; }
        case  3u: { x_n *= x * x * x;                                   break; }
        case  4u: { x   *= x; x *= x; x_n *= x;                         break; }
        case  5u: { x_n *= x; x *= x; x *= x; x_n *= x;                 break; }
        case  6u: { x   *= x * x; x *= x; x_n *= x;                     break; }
        case  7u: { x_n *= x; x *= x * x; x *= x; x_n *= x;             break; }
        case  8u: { x *= x; x *= x; x*= x; x_n *= x;                    break; }
        case  9u: { x *= x * x; x *= x * x; x_n *= x;                   break; }
        case 10u: { x_n *= x; x *= x * x; x *= x * x; x_n *= x;         break; }
        case 11u: { x_n *= x * x; x *= x * x; x *= x * x; x_n *= x;     break; }
        case 12u: { x *= x; x *= x; x_n *= x; x *= x; x_n *= x;         break; }
        case 13u: { x_n *= x; x *= x; x *= x; x_n *= x; x *= x;
                    x_n *= x; break; }

        case 14u: { x_n *= x * x; x *= x; x *= x; x_n *= x; x *= x;
                    x_n *= x; break; }

        case 15u: { x *= x * x; x_n *= x * x; x *= x * x; x_n *= x;    break; }

        default:
        {
            unsigned int ii = 0u;
            unsigned int nn = n_div_16 % 16u;

            for( ; ii < nn ; ++ii ) x_n *= x;

            x *= x; x *= x; x *= x; x *= x;
            nn = ( n_div_16 - nn ) >> 4u;

            for( ii = 0u ; ii < nn ; ++ii ) x_n *= x;
        }
    };

    return x_n;
    #endif /* defined( __OPENCL_VERSION__ ) */
}

#endif /* XFIELDS_HEADERS_POWER_H_H__ */

#ifndef XFIELDS_COMPLEX_ERROR_FUNCTION_H
#define XFIELDS_COMPLEX_ERROR_FUNCTION_H

/** \file complex_error_function.h
  * \note always include headers/constants.h, headers/power_n.h, and
  *       headers/sincos.h first! */

#include <stdbool.h>  //only_for_context cpu_serial cpu_openmp
#include <math.h>     //only_for_context cpu_serial cpu_openmp

/* These parameters correspond to the original algorithm developed by Gautschi
 * with a target accuracy of < 0.5 x 10^{-10} in the *absolute* error. Upstream
 * cernlib had switched to more aggressive parameters targeting approx. a
 * *relative* error > 0.5 x 10^{-14} instead -> see the values in comments
 * after the defines. In order to properly use them, you also have to define
 *
 * FADDEEVA_NO_GZ_WEIGHT_FN
 *
 * as compile parameter / compiler flag, this sets g(z) = 1 for all z. */

#if !defined( FADDEEVA_X_LIMIT )
    #define FADDEEVA_X_LIMIT 5.33           /* CERNLib value: 8.3 */
#endif /* !defined( FADDEEVA_X_LIMIT ) */

#if !defined( FADDEEVA_Y_LIMIT )
    #define FADDEEVA_Y_LIMIT 4.29           /* CERNLib value: 7.4 */
#endif /* !defined( FADDEEVA_Y_LIMIT ) */

#if !defined( FADDEEVA_H0 )
    #define FADDEEVA_H0 1.6                 /* CERNLib value: 1.6, unchanged */
#endif /* !defined( FADDEEVA_H0 ) */

#if !defined( FADDEEVA_NU_0 )
    #define FADDEEVA_NU_0 10                /* CERNLib value: 10, unchanged */
#endif /* !defined( FADDEEVA_NU_0 ) */

#if !defined( FADDEEVA_NU_1 )
    #define FADDEEVA_NU_1 21                /* CERNLib value: 26 */
#endif /* !defined( FADDEEVA_NU_1 ) */

#if !defined( FADDEEVA_N0 )
    #define FADDEEVA_N0 7                   /* CERNLib value: 7, unchanged */
#endif /* !defined( FADDEEVA_N0 ) */

#if !defined( FADDEEVA_N1 )
    #define FADDEEVA_N1 23                  /* CERNLib value: 16 */
#endif /* !defined( FADDEEVA_N1 ) */

#if !defined( FADDEEVA_CONT_FRAC_K )
    #define FADDEEVA_CONT_FRAC_K 9          /* CERNLib value: 9, unchanged */
#endif /* !defined( FADDEEVA_CONT_FRAC_K ) */

/* ************************************************************************* */

/** \fn void cerrf_q1( double const, double const, double*, double* )
 *  \brief calculates the Faddeeva function w(z) for z = x + i * y in Q1
 *
 *  \param[in] x real component of argument z
 *  \param[in] y imaginary component of argument z
 *  \param[out] out_x pointer to real component of result
 *  \param[out] out_y pointer to imanginary component of result
 *
 *  \warning This function assumes that x and y are > 0 i.e., that z is
 *           from the first quadrant Q1 of the complex plane. Use cerrf if
 *           you need a more general function
 *
 *  \note    Based upon the algorithm developed by W. Gautschi 1970,
 *           "Efficient Computation of the Complex Error Function",
 *           SIAM Journal on Numerical Analysis, Vol. 7, Issue 1. 1970,
 *           pages 187-198, https://epubs.siam.org/doi/10.1137/0707012
 */

 static inline void cerrf_q1(
    double const x, double const y,
    double*   out_x,
    double*   out_y )
{
    /* This implementation corresponds closely to the previously used
     * "CERNLib C" version, translated from the FORTRAN function written at
     * CERN by K. Koelbig, Program C335, 1970. The main difference to
     * Gautschi's formulation is a split in the main loop and the introduction
     * of arrays to store the intermediate results as a consequence of this.
     * The version implemented here should perform roughly equally well or even
     * slightly better on modern out-of-order super-scalar CPUs but has
     * drastically improved performance on GPUs and GPU-like systems.
     *
     * See also M. Bassetti and G.A. Erskine,
     * "Closed expression for the electric field of a two-dimensional Gaussian
     *  charge density", CERN-ISR-TH/80-06; */

    double inv_h2   = ( double )1.0;
    double y_plus_h = y;
    double temp, Rx, Ry, Sx, Sy, Wx, Wy, h2_n, nn;

    int nu = ( int )FADDEEVA_CONT_FRAC_K;
    int N  = 0;
    int n  = 0;

    bool use_taylor_sum;
    Ry = Sx = Sy = h2_n = ( double )0.0;

    /* R_0 ... rectangle with width FADDEEVA_X_LIMIT and
     *         height FADDEEVA_Y_LIMIT. Inside R_0, w(z) is calculated using
     *         a truncated Taylor expansion. Outside, a Gauss--Hermite
     *         quadrature in the guise of a continuos fraction is used */

    use_taylor_sum = ( ( y < ( double )FADDEEVA_Y_LIMIT ) &&
                       ( x < ( double )FADDEEVA_X_LIMIT ) );

	if( use_taylor_sum )
    {
        #if !defined( FADDEEVA_NO_GZ_WEIGHT_FN )
        /* calculate g(z) = sqrt( 1 - (x/x0)^2 ) * ( 1 - y/y0 ) */
        temp  = x * ( ( double )1. / ( double )FADDEEVA_X_LIMIT );
        temp  = ( ( double )1.0 +  temp ) * ( ( double )1.0 - temp );
        temp  = sqrt( temp );
        temp *= ( double )1. - y * ( ( double )1. / ( double )FADDEEVA_Y_LIMIT );
        /*now: temp = g(z) */
        #else /* !defined( FADDEEVA_NO_GZ_WEIGHT_FN ) */
        temp = ( double )1.;
        #endif /* defined( FADDEEVA_NO_GZ_WEIGHT_FN ) */

        nu   = ( y > ( double )REAL_EPSILON )
             ? ( int )FADDEEVA_NU_0 + ( int )( ( double )FADDEEVA_NU_1 * temp )
             : ( int )0;

        N         = ( int )FADDEEVA_N0 + ( int )( ( double )FADDEEVA_N1 * temp );
        h2_n      = ( double )FADDEEVA_H0 * temp; /* h(z) = h_0 * g(z) */
        y_plus_h += h2_n; /* y_plus_h = y + h(z) */
        h2_n     *= ( double )2.; /* now: h2_n = 2 * h(z) */
        inv_h2    = ( double )1. / h2_n;
        h2_n      = power_n( h2_n, N - 1 ); /* finally: h2_n = (2*h(z))^(N-1) */
    }

    /* If h(z) is so close to 0 that it is practically 0, there is no
     * point in doing the extra work for the Taylor series -> in that
     * very unlikely case, use the continuos fraction & verify result! */
    use_taylor_sum &= ( h2_n > ( double )REAL_EPSILON );

    Rx = ( y > ( double )REAL_EPSILON )
       ? ( double )0.0 : exp( -x * x ) / ( double )TWO_OVER_SQRT_PI;

    n = nu;
    nn = ( double )n;

    /* z outside of R_0: continuos fraction / Gauss - Hermite quadrature
     * z inside  of R_0: first iterations of recursion until n == N */
    for( ; n > N ; --n, nn -= ( double )1.0 )
    {
        Wx     = y_plus_h + nn * Rx;
        Wy     = x - nn * Ry;
        temp   = ( Wx * Wx ) + ( Wy * Wy );
        Rx     = ( double )0.5 * Wx;
        Ry     = ( double )0.5 * Wy;
        temp   = ( double )1.0 / temp;
        Rx    *= temp;
        Ry    *= temp;
    }

    /* loop rejects everything if z is not in R_0 because then n == 0 already;
     * otherwise, N iterations until taylor expansion is summed up */
    for( ; n > 0 ; --n, nn -= ( double )1.0 )
    {
        Wx     = y_plus_h + nn * Rx;
        Wy     = x - nn * Ry;
        temp   = ( Wx * Wx ) + ( Wy * Wy );
        Rx     = ( double )0.5 * Wx;
        Ry     = ( double )0.5 * Wy;
        temp   = ( double )1.0 / temp;
        Rx    *= temp;
        Ry    *= temp;

        Wx     = h2_n + Sx;
        h2_n  *= inv_h2;
        Sx     = Rx * Wx - Ry * Sy;
        Sy     = Ry * Wx + Rx * Sy;
    }

    if( use_taylor_sum )
    {
        Wx = ( double )TWO_OVER_SQRT_PI * Sx;
        Wy = ( double )TWO_OVER_SQRT_PI * Sy;
    }
    else
    {
        Wx = ( double )TWO_OVER_SQRT_PI * Rx;
        Wy = ( double )TWO_OVER_SQRT_PI * Ry;
    }

    *out_x = Wx;
    *out_y = Wy;
}

/** \fn void cerrf( double const x, double const y, double* out_x, double* out_y )
 *  \brief calculates the Faddeeva function w(z) for general z = x + i * y
 *
 *   Calls cerrf_q1 internally for |x| and |y| on quadrant Q1 and
 *   transforms the result to Q2, Q3, and Q4 before returning them via
 *   out_x and out_y.
 *
 *  \param[in] x real component of argument z
 *  \param[in] y imaginary component of argument z
 *  \param[out] out_x pointer to real component of result
 *  \param[out] out_y pointer to imanginary component of result
 *
 */

 static inline void cerrf( double x, double y,
    double*   out_x, double*   out_y )
{
    double const sign_x = ( double )( ( x >= ( double )0. ) - ( x < ( double )0. ) );
    double const sign_y = ( double )( ( y >= ( double )0. ) - ( y < ( double )0. ) );
    double Wx, Wy;

    x *= sign_x;
    y *= sign_y;

    cerrf_q1( x, y, &Wx, &Wy );

    if( sign_y < ( double )0.0 )  /* Quadrants Q3 and Q4 */
    {
        double const exp_arg  = ( y - x ) * ( y + x );
        double const trig_arg = ( double )2. * x * y;
        double const exp_factor = ( double )2. * exp( exp_arg );
        double sin_arg, cos_arg;

        xsuite_sincos( trig_arg, &sin_arg, &cos_arg );
        Wx = exp_factor * cos_arg - Wx;
        Wy = exp_factor * sin_arg + Wy;
    }

    *out_x = Wx;
    *out_y = sign_x * Wy; /* Takes care of Quadrants Q2 and Q3 */
}

#endif /* XFIELDS_COMPLEX_ERROR_FUNCTION_H */


#define NOFIELDMAP
#ifndef XFIEDLS_BIGUASSIIAN_H
#define XFIEDLS_BIGUASSIIAN_H

// for quick test with gcc
//#include "constants.h" //only_for_context none
//#include "complex_error_function.h" //only_for_context none

 static inline
void get_transv_field_gauss_round(
    double sigma, double Delta_x, double Delta_y,
    double x, double y,
    double* Ex,
    double* Ey)
{
  double r2, temp;

  r2 = (x-Delta_x)*(x-Delta_x)+(y-Delta_y)*(y-Delta_y);
  if (r2<1e-20) temp = sqrt(r2)/(2.*PI*EPSILON_0*sigma); //linearised
  else          temp = (1-exp(-0.5*r2/(sigma*sigma)))/(2.*PI*EPSILON_0*r2);

  (*Ex) = temp * (x-Delta_x);
  (*Ey) = temp * (y-Delta_y);
}

 static inline
void get_transv_field_gauss_ellip(
        double sigma_x,  double sigma_y,
        double Delta_x,  double Delta_y,
        const double x,
	const double y,
        double* Ex_out,
        double* Ey_out)
{
  double sigmax = sigma_x;
  double sigmay = sigma_y;

  // I always go to the first quadrant and then apply the signs a posteriori
  // numerically more stable (see http://inspirehep.net/record/316705/files/slac-pub-5582.pdf)

  double abx = fabs(x - Delta_x);
  double aby = fabs(y - Delta_y);

  //printf("x = %.2e y = %.2e abx = %.2e aby = %.2e", xx, yy, abx, aby);

  double S, factBE, Ex, Ey;
  double etaBE_re, etaBE_im, zetaBE_re, zetaBE_im;
  double w_etaBE_re, w_etaBE_im, w_zetaBE_re, w_zetaBE_im;
  double expBE;

  if (sigmax>sigmay){
    S = sqrt(2.*(sigmax*sigmax-sigmay*sigmay));
    factBE = 1./(2.*EPSILON_0*SQRT_PI*S);

    etaBE_re = sigmay/sigmax*abx;
    etaBE_im = sigmax/sigmay*aby;

    zetaBE_re = abx;
    zetaBE_im = aby;

    //w_zetaBE_re, w_zetaBE_im = wfun(zetaBE_re/S, zetaBE_im/S)
    cerrf(zetaBE_re/S, zetaBE_im/S , &(w_zetaBE_re), &(w_zetaBE_im));
    //w_etaBE_re, w_etaBE_im = wfun(etaBE_re/S, etaBE_im/S)
    cerrf(etaBE_re/S, etaBE_im/S , &(w_etaBE_re), &(w_etaBE_im));

    expBE = exp(-abx*abx/(2*sigmax*sigmax)-aby*aby/(2*sigmay*sigmay));

    Ex = factBE*(w_zetaBE_im - w_etaBE_im*expBE);
    Ey = factBE*(w_zetaBE_re - w_etaBE_re*expBE);
  }
  else if (sigmax<sigmay){
    S = sqrt(2.*(sigmay*sigmay-sigmax*sigmax));
    factBE = 1./(2.*EPSILON_0*SQRT_PI*S);

    etaBE_re = sigmax/sigmay*aby;
    etaBE_im = sigmay/sigmax*abx;

    zetaBE_re = aby;
    zetaBE_im = abx;

    //w_zetaBE_re, w_zetaBE_im = wfun(zetaBE_re/S, zetaBE_im/S)
    cerrf(zetaBE_re/S, zetaBE_im/S , &(w_zetaBE_re), &(w_zetaBE_im));
    //w_etaBE_re, w_etaBE_im = wfun(etaBE_re/S, etaBE_im/S)
    cerrf(etaBE_re/S, etaBE_im/S , &(w_etaBE_re), &(w_etaBE_im));

    expBE = exp(-aby*aby/(2*sigmay*sigmay)-abx*abx/(2*sigmax*sigmax));

    Ey = factBE*(w_zetaBE_im - w_etaBE_im*expBE);
    Ex = factBE*(w_zetaBE_re - w_etaBE_re*expBE);
  }
  else{
    //printf("Round beam not implemented!\n");
    //exit(1);
    Ex = Ey = 0.;
  }

  if((x - Delta_x)<0) Ex=-Ex;
  if((y - Delta_y)<0) Ey=-Ey;

  (*Ex_out) = Ex;
  (*Ey_out) = Ey;
}

 static inline
void get_Ex_Ey_gauss(
             const double  x,
             const double  y,
             const double  sigma_x,
             const double  sigma_y,
             const double  min_sigma_diff,
             double* Ex_ptr,
             double* Ey_ptr){

	if (fabs(sigma_x-sigma_y)< min_sigma_diff){
	    double sigma = 0.5*(sigma_x+sigma_y);
	    	get_transv_field_gauss_round(sigma, 0., 0., x, y, Ex_ptr, Ey_ptr);
	}
	else{
	    get_transv_field_gauss_ellip(
	            sigma_x, sigma_y, 0., 0., x, y, Ex_ptr, Ey_ptr);

	}
}

#ifndef NOFIELDMAP

 static inline
void BiGaussianFieldMap_get_dphi_dx_dphi_dy(
           BiGaussianFieldMapData fmap,
                    const double  x,
                    const double  y,
                          double* dphi_dx,
                          double* dphi_dy){

    const double sigma_x = BiGaussianFieldMapData_get_sigma_x(fmap);
    const double sigma_y = BiGaussianFieldMapData_get_sigma_y(fmap);
    const double mean_x = BiGaussianFieldMapData_get_mean_x(fmap);
    const double mean_y = BiGaussianFieldMapData_get_mean_y(fmap);
    const double min_sigma_diff = BiGaussianFieldMapData_get_min_sigma_diff(fmap);

    double Ex, Ey;
    get_Ex_Ey_gauss(
             x-mean_x,
             y-mean_y,
             sigma_x,
             sigma_y,
             min_sigma_diff,
             &Ex,
             &Ey);

    *dphi_dx = -Ex;
    *dphi_dy = -Ey;
}
#endif

#endif

#ifndef XFIELDS_BEAMBEAM3D_H
#define XFIELDS_BEAMBEAM3D_H

#if !defined(mysign)
    #define mysign(a) (((a) >= 0) - ((a) < 0))
#endif

 static inline
void Sigmas_propagate(
	Sigmas sigmas_0,
        double const S,
	double const threshold_singular,
        int64_t const handle_singularities,
        double* Sig_11_hat_ptr,
        double* Sig_33_hat_ptr,
        double* costheta_ptr,
        double* sintheta_ptr,
        double* dS_Sig_11_hat_ptr,
        double* dS_Sig_33_hat_ptr,
        double* dS_costheta_ptr,
        double* dS_sintheta_ptr)
{
    double const Sig_11_0 = Sigmas_get_Sig_11(sigmas_0);
    double const Sig_12_0 = Sigmas_get_Sig_12(sigmas_0);
    double const Sig_13_0 = Sigmas_get_Sig_13(sigmas_0);
    double const Sig_14_0 = Sigmas_get_Sig_14(sigmas_0);
    double const Sig_22_0 = Sigmas_get_Sig_22(sigmas_0);
    double const Sig_23_0 = Sigmas_get_Sig_23(sigmas_0);
    double const Sig_24_0 = Sigmas_get_Sig_24(sigmas_0);
    double const Sig_33_0 = Sigmas_get_Sig_33(sigmas_0);
    double const Sig_34_0 = Sigmas_get_Sig_34(sigmas_0);
    double const Sig_44_0 = Sigmas_get_Sig_44(sigmas_0);

    // Propagate sigma matrix
    double const Sig_11 = Sig_11_0 + 2.*Sig_12_0*S+Sig_22_0*S*S;
    double const Sig_33 = Sig_33_0 + 2.*Sig_34_0*S+Sig_44_0*S*S;
    double const Sig_13 = Sig_13_0 + (Sig_14_0+Sig_23_0)*S+Sig_24_0*S*S;

    double const Sig_12 = Sig_12_0 + Sig_22_0*S;
    double const Sig_14 = Sig_14_0 + Sig_24_0*S;
    double const Sig_22 = Sig_22_0 + 0.*S;
    double const Sig_23 = Sig_23_0 + Sig_24_0*S;
    double const Sig_24 = Sig_24_0 + 0.*S;
    double const Sig_34 = Sig_34_0 + Sig_44_0*S;
    double const Sig_44 = Sig_44_0 + 0.*S;

    double const R = Sig_11-Sig_33;
    double const W = Sig_11+Sig_33;
    double const T = R*R+4*Sig_13*Sig_13;

    //evaluate derivatives
    double const dS_R = 2.*(Sig_12_0-Sig_34_0)+2*S*(Sig_22_0-Sig_44_0);
    double const dS_W = 2.*(Sig_12_0+Sig_34_0)+2*S*(Sig_22_0+Sig_44_0);
    double const dS_Sig_13 = Sig_14_0 + Sig_23_0 + 2*Sig_24_0*S;
    double const dS_T = 2*R*dS_R+8.*Sig_13*dS_Sig_13;

    double Sig_11_hat, Sig_33_hat, costheta, sintheta, dS_Sig_11_hat,
           dS_Sig_33_hat, dS_costheta, dS_sintheta, cos2theta, dS_cos2theta;

    double const signR = mysign(R);


    if (T<threshold_singular && handle_singularities){

        double const a = Sig_12-Sig_34;
        double const b = Sig_22-Sig_44;
        double const c = Sig_14+Sig_23;
        double const d = Sig_24;

        double sqrt_a2_c2 = sqrt(a*a+c*c);

        if (sqrt_a2_c2*sqrt_a2_c2*sqrt_a2_c2 < threshold_singular){
        //equivalent to: if np.abs(c)<threshold_singular and np.abs(a)<threshold_singular:

            if (fabs(d)> threshold_singular){
                cos2theta = fabs(b)/sqrt(b*b+4*d*d);
                }
            else{
                cos2theta = 1.;
                } // Decoupled beam

            costheta = sqrt(0.5*(1.+cos2theta));
            sintheta = mysign(b)*mysign(d)*sqrt(0.5*(1.-cos2theta));

            dS_costheta = 0.;
            dS_sintheta = 0.;

            Sig_11_hat = 0.5*W;
            Sig_33_hat = 0.5*W;

            dS_Sig_11_hat = 0.5*dS_W;
            dS_Sig_33_hat = 0.5*dS_W;
        }
        else{
            //~ printf("I am here\n");
            //~ printf("a=%.2e c=%.2e\n", a, c);
            sqrt_a2_c2 = sqrt(a*a+c*c); //repeated?
            cos2theta = fabs(2.*a)/(2*sqrt_a2_c2);
            costheta = sqrt(0.5*(1.+cos2theta));
            sintheta = mysign(a)*mysign(c)*sqrt(0.5*(1.-cos2theta));

            dS_cos2theta = mysign(a)*(0.5*b/sqrt_a2_c2-a*(a*b+2.*c*d)/(2.*sqrt_a2_c2*sqrt_a2_c2*sqrt_a2_c2));

            dS_costheta = 1./(4.*costheta)*dS_cos2theta;
            if (fabs(sintheta)>threshold_singular){
            //equivalent to: if np.abs(c)>threshold_singular:
                dS_sintheta = -1./(4.*sintheta)*dS_cos2theta;
            }
            else{
                dS_sintheta = d/(2.*a);
            }

            Sig_11_hat = 0.5*W;
            Sig_33_hat = 0.5*W;

            dS_Sig_11_hat = 0.5*dS_W + mysign(a)*sqrt_a2_c2;
            dS_Sig_33_hat = 0.5*dS_W - mysign(a)*sqrt_a2_c2;
        }
    }
    else{

        double const sqrtT = sqrt(T);
        cos2theta = signR*R/sqrtT;
        costheta = sqrt(0.5*(1.+cos2theta));
        sintheta = signR*mysign(Sig_13)*sqrt(0.5*(1.-cos2theta));

        //in sixtrack this line seems to be different different
        // sintheta = -mysign((Sig_11-Sig_33))*np.sqrt(0.5*(1.-cos2theta))

        Sig_11_hat = 0.5*(W+signR*sqrtT);
        Sig_33_hat = 0.5*(W-signR*sqrtT);

        dS_cos2theta = signR*(dS_R/sqrtT - R/(2*sqrtT*sqrtT*sqrtT)*dS_T);
        dS_costheta = 1./(4.*costheta)*dS_cos2theta;

        if (fabs(sintheta)<threshold_singular && handle_singularities){
        //equivalent to to np.abs(Sig_13)<threshold_singular
            dS_sintheta = (Sig_14+Sig_23)/R;
        }
        else{
            dS_sintheta = -1./(4.*sintheta)*dS_cos2theta;
        }

        dS_Sig_11_hat = 0.5*(dS_W + signR*0.5/sqrtT*dS_T);
        dS_Sig_33_hat = 0.5*(dS_W - signR*0.5/sqrtT*dS_T);
    }

    *Sig_11_hat_ptr = Sig_11_hat;
    *Sig_33_hat_ptr = Sig_33_hat;
    *costheta_ptr = costheta;
    *sintheta_ptr = sintheta;
    *dS_Sig_11_hat_ptr = dS_Sig_11_hat;
    *dS_Sig_33_hat_ptr = dS_Sig_33_hat;
    *dS_costheta_ptr = dS_costheta;
    *dS_sintheta_ptr = dS_sintheta;

}

 static inline
void BoostParameters_boost_coordinates(
    const BoostParameters bp,
    double* x_star,
    double* px_star,
    double* y_star,
    double* py_star,
    double* sigma_star,
    double* delta_star){

    double const sphi = BoostParameters_get_sphi(bp);
    double const cphi = BoostParameters_get_cphi(bp);
    double const tphi = BoostParameters_get_tphi(bp);
    double const salpha = BoostParameters_get_salpha(bp);
    double const calpha = BoostParameters_get_calpha(bp);

    double const x = *x_star;
    double const px = *px_star;
    double const y = *y_star;
    double const py = *py_star ;
    double const sigma = *sigma_star;
    double const delta = *delta_star ;

    double const h = delta + 1. - sqrt((1.+delta)*(1.+delta)-px*px-py*py);


    double const px_st = px/cphi-h*calpha*tphi/cphi;
    double const py_st = py/cphi-h*salpha*tphi/cphi;
    double const delta_st = delta -px*calpha*tphi-py*salpha*tphi+h*tphi*tphi;

    double const pz_st =
        sqrt((1.+delta_st)*(1.+delta_st)-px_st*px_st-py_st*py_st);

    double const hx_st = px_st/pz_st;
    double const hy_st = py_st/pz_st;
    double const hsigma_st = 1.-(delta_st+1)/pz_st;

    double const L11 = 1.+hx_st*calpha*sphi;
    double const L12 = hx_st*salpha*sphi;
    double const L13 = calpha*tphi;

    double const L21 = hy_st*calpha*sphi;
    double const L22 = 1.+hy_st*salpha*sphi;
    double const L23 = salpha*tphi;

    double const L31 = hsigma_st*calpha*sphi;
    double const L32 = hsigma_st*salpha*sphi;
    double const L33 = 1./cphi;

    double const x_st = L11*x + L12*y + L13*sigma;
    double const y_st = L21*x + L22*y + L23*sigma;
    double const sigma_st = L31*x + L32*y + L33*sigma;

    *x_star = x_st;
    *px_star = px_st;
    *y_star = y_st;
    *py_star = py_st;
    *sigma_star = sigma_st;
    *delta_star = delta_st;

}

 static inline
void BoostParameters_boost_coordinates_inv(
    	const BoostParameters bp,
    	double* x,
    	double* px,
    	double* y,
    	double* py,
    	double* sigma,
    	double* delta){

    double const sphi = BoostParameters_get_sphi(bp);
    double const cphi = BoostParameters_get_cphi(bp);
    double const tphi = BoostParameters_get_tphi(bp);
    double const salpha = BoostParameters_get_salpha(bp);
    double const calpha = BoostParameters_get_calpha(bp);

    double const x_st = *x;
    double const px_st = *px;
    double const y_st = *y;
    double const py_st = *py ;
    double const sigma_st = *sigma;
    double const delta_st = *delta ;

    double const pz_st = sqrt((1.+delta_st)*(1.+delta_st)-px_st*px_st-py_st*py_st);
    double const hx_st = px_st/pz_st;
    double const hy_st = py_st/pz_st;
    double const hsigma_st = 1.-(delta_st+1)/pz_st;

    double const Det_L =
        1./cphi + (hx_st*calpha + hy_st*salpha-hsigma_st*sphi)*tphi;

    double const Linv_11 =
        (1./cphi + salpha*tphi*(hy_st-hsigma_st*salpha*sphi))/Det_L;

    double const Linv_12 =
        (salpha*tphi*(hsigma_st*calpha*sphi-hx_st))/Det_L;

    double const Linv_13 =
        -tphi*(calpha - hx_st*salpha*salpha*sphi + hy_st*calpha*salpha*sphi)/Det_L;

    double const Linv_21 =
        (calpha*tphi*(-hy_st + hsigma_st*salpha*sphi))/Det_L;

    double const Linv_22 =
        (1./cphi + calpha*tphi*(hx_st-hsigma_st*calpha*sphi))/Det_L;

    double const Linv_23 =
        -tphi*(salpha - hy_st*calpha*calpha*sphi + hx_st*calpha*salpha*sphi)/Det_L;

    double const Linv_31 = -hsigma_st*calpha*sphi/Det_L;
    double const Linv_32 = -hsigma_st*salpha*sphi/Det_L;
    double const Linv_33 = (1. + hx_st*calpha*sphi + hy_st*salpha*sphi)/Det_L;

    double const x_i = Linv_11*x_st + Linv_12*y_st + Linv_13*sigma_st;
    double const y_i = Linv_21*x_st + Linv_22*y_st + Linv_23*sigma_st;
    double const sigma_i = Linv_31*x_st + Linv_32*y_st + Linv_33*sigma_st;

    double const h = (delta_st+1.-pz_st)*cphi*cphi;

    double const px_i = px_st*cphi+h*calpha*tphi;
    double const py_i = py_st*cphi+h*salpha*tphi;

    double const delta_i = delta_st + px_i*calpha*tphi + py_i*salpha*tphi - h*tphi*tphi;


    *x = x_i;
    *px = px_i;
    *y = y_i;
    *py = py_i;
    *sigma = sigma_i;
    *delta = delta_i;

}

 static inline void compute_Gx_Gy(
             const double  x, 
             const double  y,
             const double  sigma_x, 
             const double  sigma_y,
             const double  min_sigma_diff, 
	     const double  Ex,
	     const double  Ey,
                   double* Gx_ptr,
                   double* Gy_ptr){

    double Gx, Gy;

    if (fabs(sigma_x-sigma_y) < min_sigma_diff){

        const double sigma = 0.5*(sigma_x+sigma_y);
        Gx = 1/(2.*(x*x+y*y))*(y*Ey-x*Ex+1./(2*PI*EPSILON_0*sigma*sigma)
                            *x*x*exp(-(x*x+y*y)/(2.*sigma*sigma)));
        Gy = 1./(2*(x*x+y*y))*(x*Ex-y*Ey+1./(2*PI*EPSILON_0*sigma*sigma)
                            *y*y*exp(-(x*x+y*y)/(2.*sigma*sigma)));
    }
    else{

        const double Sig_11 = sigma_x*sigma_x;
        const double Sig_33 = sigma_y*sigma_y;

	//printf("Inside Sig_11=%.10e\n", Sig_11);
	//printf("Inside Sig_33=%.10e\n", Sig_33);

        Gx =-1./(2*(Sig_11-Sig_33))*(x*Ex+y*Ey+1./(2*PI*EPSILON_0)   
                   *(sigma_y/sigma_x*exp(-x*x/(2*Sig_11)-y*y/(2*Sig_33))-1.));
        Gy =1./(2*(Sig_11-Sig_33))*(x*Ex+y*Ey+1./(2*PI*EPSILON_0)*
                      (sigma_x/sigma_y*exp(-x*x/(2*Sig_11)-y*y/(2*Sig_33))-1.));

	//printf("Inside Gx=%.10e\n", Gx);
	//printf("Inside Gy=%.10e\n", Gy);
    }

    *Gx_ptr = Gx;
    *Gy_ptr = Gy;
}

 static inline
void BeamBeamBiGaussian3D_track_local_particle(BeamBeamBiGaussian3DData el, 
		 	   LocalParticle* part0){
	
    // Get data from memory
    const double q0_bb  = BeamBeamBiGaussian3DData_get_q0(el);     
    const BoostParameters bpar = BeamBeamBiGaussian3DData_getp_boost_parameters(el);
    const Sigmas Sigmas_0_star = BeamBeamBiGaussian3DData_getp_Sigmas_0_star(el);
    const double min_sigma_diff = BeamBeamBiGaussian3DData_get_min_sigma_diff(el);
    const double threshold_singular = 
	    BeamBeamBiGaussian3DData_get_threshold_singular(el);
    const int N_slices = BeamBeamBiGaussian3DData_get_num_slices(el);
    const double delta_x = BeamBeamBiGaussian3DData_get_delta_x(el);
    const double delta_y = BeamBeamBiGaussian3DData_get_delta_y(el);
    const double x_CO  = BeamBeamBiGaussian3DData_get_x_CO(el);     
    const double px_CO = BeamBeamBiGaussian3DData_get_px_CO(el);
    const double y_CO = BeamBeamBiGaussian3DData_get_y_CO(el);
    const double py_CO = BeamBeamBiGaussian3DData_get_py_CO(el);
    const double sigma_CO = BeamBeamBiGaussian3DData_get_sigma_CO(el);
    const double delta_CO = BeamBeamBiGaussian3DData_get_delta_CO(el);
    const double Dx_sub = BeamBeamBiGaussian3DData_get_Dx_sub(el); 
    const double Dpx_sub = BeamBeamBiGaussian3DData_get_Dpx_sub(el);
    const double Dy_sub =BeamBeamBiGaussian3DData_get_Dy_sub(el);
    const double Dpy_sub =BeamBeamBiGaussian3DData_get_Dpy_sub(el);
    const double Dsigma_sub =BeamBeamBiGaussian3DData_get_Dsigma_sub(el);
    const double Ddelta_sub =BeamBeamBiGaussian3DData_get_Ddelta_sub(el);
      const double* N_part_per_slice_arr = 
	    BeamBeamBiGaussian3DData_getp1_N_part_per_slice(el, 0);
      const double* x_slices_star_arr = 
	    BeamBeamBiGaussian3DData_getp1_x_slices_star(el, 0);
      const double* y_slices_star_arr = 
	    BeamBeamBiGaussian3DData_getp1_y_slices_star(el, 0);
      const double* sigma_slices_star_arr = 
	    BeamBeamBiGaussian3DData_getp1_sigma_slices_star(el, 0);


   int64_t const n_part = LocalParticle_get__num_active_particles(part0); //only_for_context cpu_serial cpu_openmp
//   #pragma omp parallel for                                       //only_for_context cpu_openmp
   for (int jj=0; jj<n_part; jj+=128){                 //only_for_context cpu_serial cpu_openmp
    //#pragma omp simd
    for (int iii=0; iii<128; iii++){                   //only_for_context cpu_serial cpu_openmp
      int const ii = iii+jj;                                      //only_for_context cpu_serial cpu_openmp
      if (ii<n_part){                                             //only_for_context cpu_serial cpu_openmp

        LocalParticle lpart = *part0;//only_for_context cpu_serial cpu_openmp
        LocalParticle* part = &lpart;//only_for_context cpu_serial cpu_openmp
        part->ipart = ii;            //only_for_context cpu_serial cpu_openmp

//        LocalParticle* part = part0;//only_for_context opencl cuda

    	double x = LocalParticle_get_x(part);
    	double px = LocalParticle_get_px(part);
    	double y = LocalParticle_get_y(part);
    	double py = LocalParticle_get_py(part);
    	double zeta = LocalParticle_get_zeta(part);
    	double delta = LocalParticle_get_delta(part);

    	const double q0 = LocalParticle_get_q0(part); 
    	const double p0c = LocalParticle_get_p0c(part); // eV

    	const double P0 = p0c/C_LIGHT*QELEM;

    	// Change reference frame
    	double x_star =     x     - x_CO    - delta_x;
    	double px_star =    px    - px_CO;
    	double y_star =     y     - y_CO    - delta_y;
    	double py_star =    py    - py_CO;
    	double sigma_star = zeta  - sigma_CO;
    	double delta_star = delta - delta_CO;

    	// Boost coordinates of the weak beam
	BoostParameters_boost_coordinates(bpar,
    	    &x_star, &px_star, &y_star, &py_star,
    	    &sigma_star, &delta_star);

    	//printf("x_star=%.10e\n", x_star);
	//printf("px_star=%.10e\n", px_star);
	//printf("y_star=%.10e\n", y_star);
	//printf("py_star=%.10e\n", py_star);
    	//printf("sigma_star=%.10e\n", sigma_star);
	//printf("delta_star=%.10e\n", delta_star);

    	// Synchro beam
    	for (int i_slice=0; i_slice<N_slices; i_slice++)
    	{
    	    const double sigma_slice_star = sigma_slices_star_arr[i_slice];
    	    const double x_slice_star = x_slices_star_arr[i_slice];
    	    const double y_slice_star = y_slices_star_arr[i_slice];

    	    //Compute force scaling factor
    	    const double Ksl = N_part_per_slice_arr[i_slice]*QELEM*q0_bb
		               *QELEM*q0/(P0 * C_LIGHT);

    	    //Identify the Collision Point (CP)
    	    const double S = 0.5*(sigma_star - sigma_slice_star);

    	    // Propagate sigma matrix
    	    double Sig_11_hat_star, Sig_33_hat_star, costheta, sintheta;
    	    double dS_Sig_11_hat_star, dS_Sig_33_hat_star, dS_costheta, dS_sintheta;

    	    // Get strong beam shape at the CP
	    Sigmas_propagate(Sigmas_0_star, S, threshold_singular, 1,
    	        &Sig_11_hat_star, &Sig_33_hat_star,
    	        &costheta, &sintheta,
    	        &dS_Sig_11_hat_star, &dS_Sig_33_hat_star,
    	        &dS_costheta, &dS_sintheta);

    	    //printf("Sig_11_hat_star=%.10e\n",Sig_11_hat_star);
	    //printf("Sig_33_hat_star=%.10e\n",Sig_33_hat_star);
    	    //printf("costheta=%.10e\n",costheta);
            //printf("sintheta=%.10e\n",sintheta);
    	    //printf("dS_Sig_11_hat_star=%.10e\n",dS_Sig_11_hat_star);
	    //printf("dS_Sig_33_hat_star=%.10e\n",dS_Sig_33_hat_star);
    	    //printf("dS_costheta=%.10e\n",dS_costheta);
            //printf("dS_sintheta=%.10e\n",dS_sintheta);

    	    // Evaluate transverse coordinates of the weake baem w.r.t. the strong beam centroid
    	    const double x_bar_star = x_star + px_star*S - x_slice_star;
    	    const double y_bar_star = y_star + py_star*S - y_slice_star;

    	    // Move to the uncoupled reference frame
    	    const double x_bar_hat_star = x_bar_star*costheta +y_bar_star*sintheta;
    	    const double y_bar_hat_star = -x_bar_star*sintheta +y_bar_star*costheta;

    	    // Compute derivatives of the transformation
    	    const double dS_x_bar_hat_star = x_bar_star*dS_costheta +y_bar_star*dS_sintheta;
    	    const double dS_y_bar_hat_star = -x_bar_star*dS_sintheta +y_bar_star*dS_costheta;

    	    // Get transverse fieds
    	    double Ex, Ey;
    	    get_Ex_Ey_gauss(x_bar_hat_star, y_bar_hat_star,
    	        sqrt(Sig_11_hat_star), sqrt(Sig_33_hat_star),
		min_sigma_diff,
    	        &Ex, &Ey);

	    //printf("Ex=%.10e\n", Ex);
	    //printf("Ey=%.10e\n", Ey);
	
	    //compute Gs
	    double Gx, Gy;
	    compute_Gx_Gy(x_bar_hat_star, y_bar_hat_star,
			  sqrt(Sig_11_hat_star), sqrt(Sig_33_hat_star), 
                          min_sigma_diff, Ex, Ey, &Gx, &Gy);
	    
	    //printf("Gx=%.10e\n", Gx);
	    //printf("Gy=%.10e\n", Gy);

    	    // Compute kicks
    	    double Fx_hat_star = Ksl*Ex;
    	    double Fy_hat_star = Ksl*Ey;
    	    double Gx_hat_star = Ksl*Gx;
    	    double Gy_hat_star = Ksl*Gy;

    	    // Move kisks to coupled reference frame
    	    double Fx_star = Fx_hat_star*costheta - Fy_hat_star*sintheta;
    	    double Fy_star = Fx_hat_star*sintheta + Fy_hat_star*costheta;

    	    // Compute longitudinal kick
    	    double Fz_star = 0.5*(Fx_hat_star*dS_x_bar_hat_star  + Fy_hat_star*dS_y_bar_hat_star+
    	                   Gx_hat_star*dS_Sig_11_hat_star + Gy_hat_star*dS_Sig_33_hat_star);

    	    // Apply the kicks (Hirata's synchro-beam)
    	    delta_star = delta_star + Fz_star+0.5*(
    	                Fx_star*(px_star+0.5*Fx_star)+
    	                Fy_star*(py_star+0.5*Fy_star));
	    //printf("delta_star=%.10f\n", delta_star);
    	    x_star = x_star - S*Fx_star;
    	    px_star = px_star + Fx_star;
    	    y_star = y_star - S*Fy_star;
    	    py_star = py_star + Fy_star;

    	}

    	// Inverse boost on the coordinates of the weak beam
	BoostParameters_boost_coordinates_inv(bpar,
    	    &x_star, &px_star, &y_star, &py_star,
    	    &sigma_star, &delta_star);

	//printf("delta_ret=%.10e\n", delta_star);

    	// Go back to original reference frame and remove dipolar effect
    	x =     x_star     + x_CO   + delta_x - Dx_sub;
    	px =    px_star    + px_CO            - Dpx_sub;
    	y =     y_star     + y_CO   + delta_y - Dy_sub;
    	py =    py_star    + py_CO            - Dpy_sub;
    	zeta =  sigma_star + sigma_CO         - Dsigma_sub;
    	delta = delta_star + delta_CO         - Ddelta_sub;


    	LocalParticle_set_x(part, x);
    	LocalParticle_set_px(part, px);
    	LocalParticle_set_y(part, y);
    	LocalParticle_set_py(part, py);
    	LocalParticle_set_zeta(part, zeta);
    	LocalParticle_update_delta(part, delta);
	

     } //only_for_context cpu_serial cpu_openmp
    }  //only_for_context cpu_serial cpu_openmp
   }   //only_for_context cpu_serial cpu_openmp


}


#endif
#ifndef XTRACK_CONSTANTS_H
#define XTRACK_CONSTANTS_H

#if !defined( C_LIGHT )
    #define   C_LIGHT ( 299792458.0 )
#endif /* !defined( C_LIGHT ) */

#if !defined( EPSILON_0 )
    #define   EPSILON_0 (8.854187817620e-12)
#endif /* !defined( EPSILON_0 ) */

#if !defined( PI )
    #define PI (3.1415926535897932384626433832795028841971693993751)
#endif /* !defined( PI ) */

#if !defined( MU_0 )
    #define MU_0 (PI*4.0e-7)
#endif /* !defined( MU_0 ) */

#if !defined( DEG2RAD )
    #define DEG2RAD (0.0174532925199432957692369076848861271344287188854)
#endif /* !defiend( DEG2RAD ) */

#if !defined( RAD2DEG )
    #define RAD2DEG (57.29577951308232087679815481410517033240547246656442)
#endif /* !defiend( RAD2DEG ) */

#if !defined( SQRT_PI )
    #define SQRT_PI (1.7724538509055160272981674833411451827975494561224)
#endif /* !defined( SQRT_PI ) */

#if !defined( QELEM )
    #define QELEM (1.60217662e-19)
#endif /* !defined( QELEM ) */

#endif /* XTRACK_CONSTANTS_H */

#ifndef XTRACK_CAVITY_H
#define XTRACK_CAVITY_H

 static inline
void Cavity_track_local_particle(CavityData el, LocalParticle* part0){


   int64_t const n_part = LocalParticle_get__num_active_particles(part0); //only_for_context cpu_serial cpu_openmp
//   #pragma omp parallel for                                       //only_for_context cpu_openmp
   for (int jj=0; jj<n_part; jj+=128){                 //only_for_context cpu_serial cpu_openmp
    //#pragma omp simd
    for (int iii=0; iii<128; iii++){                   //only_for_context cpu_serial cpu_openmp
      int const ii = iii+jj;                                      //only_for_context cpu_serial cpu_openmp
      if (ii<n_part){                                             //only_for_context cpu_serial cpu_openmp

        LocalParticle lpart = *part0;//only_for_context cpu_serial cpu_openmp
        LocalParticle* part = &lpart;//only_for_context cpu_serial cpu_openmp
        part->ipart = ii;            //only_for_context cpu_serial cpu_openmp

//        LocalParticle* part = part0;//only_for_context opencl cuda

        double const K_FACTOR = ( ( double )2.0 *PI ) / C_LIGHT;

        double const   beta0  = LocalParticle_get_beta0(part);
        double const   zeta   = LocalParticle_get_zeta(part);
        double const   q      = fabs(LocalParticle_get_q0(part))
                		    * LocalParticle_get_charge_ratio(part);
        double         rvv    = LocalParticle_get_rvv(part);
        double const   tau    = zeta / ( beta0 * rvv );

        double const   phase  = DEG2RAD  * CavityData_get_lag(el) -
                                K_FACTOR * CavityData_get_frequency(el) * tau;

        double const energy   = q * CavityData_get_voltage(el) * sin(phase);

        LocalParticle_add_to_energy(part, energy, 1);

     } //only_for_context cpu_serial cpu_openmp
    }  //only_for_context cpu_serial cpu_openmp
   }   //only_for_context cpu_serial cpu_openmp

}

#endif
#ifndef XTRACK_DIPOLEEDGE_H
#define XTRACK_DIPOLEEDGE_H

 static inline
void DipoleEdge_track_local_particle(DipoleEdgeData el, LocalParticle* part0){
    
    double const r21 = DipoleEdgeData_get_r21(el);
    double const r43 = DipoleEdgeData_get_r43(el);
	    

   int64_t const n_part = LocalParticle_get__num_active_particles(part0); //only_for_context cpu_serial cpu_openmp
//   #pragma omp parallel for                                       //only_for_context cpu_openmp
   for (int jj=0; jj<n_part; jj+=128){                 //only_for_context cpu_serial cpu_openmp
    //#pragma omp simd
    for (int iii=0; iii<128; iii++){                   //only_for_context cpu_serial cpu_openmp
      int const ii = iii+jj;                                      //only_for_context cpu_serial cpu_openmp
      if (ii<n_part){                                             //only_for_context cpu_serial cpu_openmp

        LocalParticle lpart = *part0;//only_for_context cpu_serial cpu_openmp
        LocalParticle* part = &lpart;//only_for_context cpu_serial cpu_openmp
        part->ipart = ii;            //only_for_context cpu_serial cpu_openmp

//        LocalParticle* part = part0;//only_for_context opencl cuda

	double const x = LocalParticle_get_x(part);
	double const y = LocalParticle_get_y(part);

	LocalParticle_add_to_px(part, r21*x);
	LocalParticle_add_to_py(part, r43*y);


     } //only_for_context cpu_serial cpu_openmp
    }  //only_for_context cpu_serial cpu_openmp
   }   //only_for_context cpu_serial cpu_openmp


}

#endif
#ifndef XTRACK_DRIFT_H
#define XTRACK_DRIFT_H

 static inline
void Drift_track_local_particle(DriftData el, LocalParticle* part0){

    double const length = DriftData_get_length(el);


   int64_t const n_part = LocalParticle_get__num_active_particles(part0); //only_for_context cpu_serial cpu_openmp
//   #pragma omp parallel for                                       //only_for_context cpu_openmp
   for (int jj=0; jj<n_part; jj+=128){                 //only_for_context cpu_serial cpu_openmp
    //#pragma omp simd
    for (int iii=0; iii<128; iii++){                   //only_for_context cpu_serial cpu_openmp
      int const ii = iii+jj;                                      //only_for_context cpu_serial cpu_openmp
      if (ii<n_part){                                             //only_for_context cpu_serial cpu_openmp

        LocalParticle lpart = *part0;//only_for_context cpu_serial cpu_openmp
        LocalParticle* part = &lpart;//only_for_context cpu_serial cpu_openmp
        part->ipart = ii;            //only_for_context cpu_serial cpu_openmp

//        LocalParticle* part = part0;//only_for_context opencl cuda


        double const rpp    = LocalParticle_get_rpp(part);
        double const xp     = LocalParticle_get_px(part) * rpp;
        double const yp     = LocalParticle_get_py(part) * rpp;
        double const dzeta  = LocalParticle_get_rvv(part) -
                               ( 1. + ( xp*xp + yp*yp ) / 2. );
    
        LocalParticle_add_to_x(part, xp * length );
        LocalParticle_add_to_y(part, yp * length );
        LocalParticle_add_to_s(part, length);
        LocalParticle_add_to_zeta(part, length * dzeta );

     } //only_for_context cpu_serial cpu_openmp
    }  //only_for_context cpu_serial cpu_openmp
   }   //only_for_context cpu_serial cpu_openmp


}

#endif
#ifndef XTRACK_ELENS_H
#define XTRACK_ELENS_H

 static inline
void Elens_track_local_particle(ElensData el, LocalParticle* part0){

    double const elens_length = ElensData_get_elens_length(el);
    double const inner_radius = ElensData_get_inner_radius(el);
    double const outer_radius = ElensData_get_outer_radius(el);
    double const current = ElensData_get_current(el);
    double const voltage = ElensData_get_voltage(el);
    double const residual_kick_x = ElensData_get_residual_kick_x(el);
    double const residual_kick_y = ElensData_get_residual_kick_y(el);


    // double const cos_z = SRotationData_get_cos_z(el);


   int64_t const n_part = LocalParticle_get__num_active_particles(part0); //only_for_context cpu_serial cpu_openmp
//   #pragma omp parallel for                                       //only_for_context cpu_openmp
   for (int jj=0; jj<n_part; jj+=128){                 //only_for_context cpu_serial cpu_openmp
    //#pragma omp simd
    for (int iii=0; iii<128; iii++){                   //only_for_context cpu_serial cpu_openmp
      int const ii = iii+jj;                                      //only_for_context cpu_serial cpu_openmp
      if (ii<n_part){                                             //only_for_context cpu_serial cpu_openmp

        LocalParticle lpart = *part0;//only_for_context cpu_serial cpu_openmp
        LocalParticle* part = &lpart;//only_for_context cpu_serial cpu_openmp
        part->ipart = ii;            //only_for_context cpu_serial cpu_openmp

//        LocalParticle* part = part0;//only_for_context opencl cuda


      // EPSILON_0, PI, C_LIGHT,

        // electron mass
        double const EMASS  = 510998.928;
        // speed of light

        #if !defined( C_LIGHT )
            #define   C_LIGHT ( 299792458.0 )
        #endif /* !defined( C_LIGHT ) */

        #if !defined( EPSILON_0 )
            #define   EPSILON_0 (8.854187817620e-12)
        #endif /* !defined( EPSILON_0 ) */

        #if !defined( PI )
            #define PI (3.1415926535897932384626433832795028841971693993751)
        #endif /* !defined( PI ) */

        double x      = LocalParticle_get_x(part);
        double y      = LocalParticle_get_y(part);

        // delta
        // double delta  = LocalParticle_get_delta(part);
        // charge ratio: q/q0
        // double qratio = LocalParticle_get_charge_ratio(part);
        // chi = q/q0 * m0/m
        double const chi    = LocalParticle_get_chi(part);
        // reference particle momentum
        double const p0c    = LocalParticle_get_p0c(part);
        // particle momentum
        // double pc     = (1+delta)*(chi/qratio)*(p0c);
        // reference particle charge
        double const q0     = LocalParticle_get_q0(part);

        // rpp = P0/P
        double const rpp     = LocalParticle_get_rpp(part);


        // transverse radius
        double r      = sqrt(x*x + y*y);

        double rvv    = LocalParticle_get_rvv(part);
        double beta0  = LocalParticle_get_beta0(part);

        // # magnetic rigidity
        double const Brho0  = p0c/(q0*C_LIGHT);

        // # Electron properties
        // total electron energy
        double const etot_e       = voltage + EMASS;
        // // electron momentum
        double const p_e          = sqrt(etot_e*etot_e - EMASS*EMASS);
        // // relativistic beta of electron
        double const beta_e       = p_e/etot_e;
        //
        // // # relativistic beta  of protons
        double beta_p = rvv*beta0;

        // keep the formulas more compact
        double const r1 = inner_radius;
        double const r2 = outer_radius;

        // # geometric factor frr uniform distribution
        double frr = 0.;

        //
        if( r < r1 )
        {
          frr = 0.;
        }
        else if ( r > r2 )
        {
          frr = 1.;
        }
        else
        {
          frr = ((r*r - r1*r1)/(r2*r2 - r1*r1));
        }


        // # calculate the kick at r2 (maximum kick)
        double theta_max = ((1.0/(4.0*PI*EPSILON_0)));
        theta_max = theta_max*(2*elens_length*current);

        // for the moment: e-beam in the opposite direction from proton beam
        // generalize later
        theta_max = theta_max*(1+beta_e*beta_p);

        theta_max = theta_max/(outer_radius*Brho0*beta_e*beta_p);
        theta_max = theta_max/(C_LIGHT*C_LIGHT);
        // theta max is now completed
        // theta_max = (-1)*theta_max/(rpp*chi);


        // now the actual kick the particle receives

        double theta_pxpy = 0.;
        double dpx = 0.;
        double dpy = 0.;
        //


        if ( r > r1 )
        {
          theta_pxpy = (-1)*frr*theta_max*(outer_radius/r)*(1/(rpp*chi));
          dpx        = x*theta_pxpy/r;
          dpy        = y*theta_pxpy/r;
        }
        else
        {
          // if the particle is not inside the e-beam, it will only
          // be subject to the residual kick
          dpx = residual_kick_x;
          dpy = residual_kick_y;
        }


        LocalParticle_add_to_px(part, dpx );
        LocalParticle_add_to_py(part, dpy );

        // we can update the particle properties or add to the particle properties
        // LocalParticle_add_to_px(part, dpx);
        // LocalParticle_add_to_py(part, dpy);

        // LocalParticle_set_py(part, py_hat);

     } //only_for_context cpu_serial cpu_openmp
    }  //only_for_context cpu_serial cpu_openmp
   }   //only_for_context cpu_serial cpu_openmp

}

#endif
#ifndef XTRACK_RNG_H
#define XTRACK_RNG_H

//#include <stdint.h> //only_for_context none

 static inline
double rng_get (uint32_t *s1, uint32_t *s2, uint32_t *s3 )
{
#define MASK 0xffffffffUL
#define TAUSWORTHE(s,a,b,c,d) ((((s) &c) <<d) &MASK) ^ (((((s) <<a) &MASK)^(s)) >>b)

  *s1 = TAUSWORTHE (*s1, 13, 19, 4294967294UL, 12);
  *s2 = TAUSWORTHE (*s2, 2, 25, 4294967288UL, 4);
  *s3 = TAUSWORTHE (*s3, 3, 11, 4294967280UL, 17);

  return ((*s1) ^ (*s2) ^ (*s3)) / 4294967296.0 ;
}

 static inline
void rng_set (uint32_t *s1, uint32_t *s2, uint32_t *s3, uint32_t s )
{
  if (s == 0)
    s = 1;      /* default seed is 1 */

#define LCG(n) ((69069 * (n)) & 0xffffffffUL)
  *s1 = LCG (s);
  if (*s1 < 2) *s1 += 2UL;
  *s2 = LCG (*s1);
  if (*s2 < 8) *s2 += 8UL;
  *s3 = LCG (*s2);
  if (*s3 < 16) *s3 += 16UL;

  /* "warm it up" */
  rng_get (s1, s2, s3);
  rng_get (s1, s2, s3);
  rng_get (s1, s2, s3);
  rng_get (s1, s2, s3);
  rng_get (s1, s2, s3);
  rng_get (s1, s2, s3);
  return;
}

#endif /* XTRACK_RNG_H */

#ifndef LOCALPARTICE_RNG_H
#define LOCALPARTICE_RNG_H

 static inline
double LocalParticle_generate_random_double(LocalParticle* part)
{
    uint32_t s1 = LocalParticle_get__rng_s1(part);
    uint32_t s2 = LocalParticle_get__rng_s2(part);
    uint32_t s3 = LocalParticle_get__rng_s3(part);
    
    double r = rng_get(&s1, &s2, &s3);
	    
    LocalParticle_set__rng_s1(part, s1);
    LocalParticle_set__rng_s2(part, s2);
    LocalParticle_set__rng_s3(part, s3);

    return r;
}

 static inline
double LocalParticle_generate_random_double_exp(LocalParticle* part)
{
  return -log(LocalParticle_generate_random_double(part));
}

 static inline
double LocalParticle_generate_random_double_gauss(LocalParticle* part)
{
    double x1 = LocalParticle_generate_random_double(part);
    while(x1==0.0){
        x1 = LocalParticle_generate_random_double(part);
    }
    x1 = sqrt(-2.0*log(x1));
	double x2 = LocalParticle_generate_random_double(part);
    x2 = 2.0*3.1415926535897932384626433832795028841971693993751*x2;
    double r = x1*sin(x2);
    return r;
}

#endif

#ifndef XTRACK_CONSTANTS_H
#define XTRACK_CONSTANTS_H

#if !defined( C_LIGHT )
    #define   C_LIGHT ( 299792458.0 )
#endif /* !defined( C_LIGHT ) */

#if !defined( EPSILON_0 )
    #define   EPSILON_0 (8.854187817620e-12)
#endif /* !defined( EPSILON_0 ) */

#if !defined( PI )
    #define PI (3.1415926535897932384626433832795028841971693993751)
#endif /* !defined( PI ) */

#if !defined( MU_0 )
    #define MU_0 (PI*4.0e-7)
#endif /* !defined( MU_0 ) */

#if !defined( DEG2RAD )
    #define DEG2RAD (0.0174532925199432957692369076848861271344287188854)
#endif /* !defiend( DEG2RAD ) */

#if !defined( RAD2DEG )
    #define RAD2DEG (57.29577951308232087679815481410517033240547246656442)
#endif /* !defiend( RAD2DEG ) */

#if !defined( SQRT_PI )
    #define SQRT_PI (1.7724538509055160272981674833411451827975494561224)
#endif /* !defined( SQRT_PI ) */

#if !defined( QELEM )
    #define QELEM (1.60217662e-19)
#endif /* !defined( QELEM ) */

#endif /* XTRACK_CONSTANTS_H */

#ifndef XTRACK_LINEARTRANSFERMATRIX_H
#define XTRACK_LINEARTRANSFERMATRIX_H

 static inline
void LinearTransferMatrix_track_local_particle(LinearTransferMatrixData el, LocalParticle* part0){

    int64_t const no_detuning = LinearTransferMatrixData_get_no_detuning(el);
    double const q_x = LinearTransferMatrixData_get_q_x(el);
    double const q_y = LinearTransferMatrixData_get_q_y(el);
    double const chroma_x = LinearTransferMatrixData_get_chroma_x(el);
    double const chroma_y = LinearTransferMatrixData_get_chroma_y(el);
    double const detx_x = LinearTransferMatrixData_get_detx_x(el);
    double const detx_y = LinearTransferMatrixData_get_detx_y(el);
    double const dety_y = LinearTransferMatrixData_get_dety_y(el);
    double const dety_x = LinearTransferMatrixData_get_dety_x(el);

    double const cos_s = LinearTransferMatrixData_get_cos_s(el);
    double const sin_s = LinearTransferMatrixData_get_sin_s(el);
    double const beta_s = LinearTransferMatrixData_get_beta_s(el);

    double const beta_x_0 = LinearTransferMatrixData_get_beta_x_0(el);
    double const beta_y_0 = LinearTransferMatrixData_get_beta_y_0(el);
    double const beta_ratio_x = LinearTransferMatrixData_get_beta_ratio_x(el);
    double const beta_prod_x = LinearTransferMatrixData_get_beta_prod_x(el);
    double const beta_ratio_y = LinearTransferMatrixData_get_beta_ratio_y(el);
    double const beta_prod_y = LinearTransferMatrixData_get_beta_prod_y(el);
    double const disp_x_0 = LinearTransferMatrixData_get_disp_x_0(el);
    double const disp_y_0 = LinearTransferMatrixData_get_disp_y_0(el);
    double const alpha_x_0 = LinearTransferMatrixData_get_alpha_x_0(el);
    double const alpha_y_0 = LinearTransferMatrixData_get_alpha_y_0(el);
    double const disp_x_1 = LinearTransferMatrixData_get_disp_x_1(el);
    double const disp_y_1 = LinearTransferMatrixData_get_disp_y_1(el);
    double const alpha_x_1 = LinearTransferMatrixData_get_alpha_x_1(el);
    double const alpha_y_1 = LinearTransferMatrixData_get_alpha_y_1(el);

    double const x_ref_0 = LinearTransferMatrixData_get_x_ref_0(el);
    double const x_ref_1 = LinearTransferMatrixData_get_x_ref_1(el);
    double const px_ref_0 = LinearTransferMatrixData_get_px_ref_0(el);
    double const px_ref_1 = LinearTransferMatrixData_get_px_ref_1(el);
    double const y_ref_0 = LinearTransferMatrixData_get_y_ref_0(el);
    double const y_ref_1 = LinearTransferMatrixData_get_y_ref_1(el);
    double const py_ref_0 = LinearTransferMatrixData_get_py_ref_0(el);
    double const py_ref_1 = LinearTransferMatrixData_get_py_ref_1(el);

    double const energy_ref_increment = 
        LinearTransferMatrixData_get_energy_ref_increment(el);

    int64_t const uncorrelated_rad_damping = LinearTransferMatrixData_get_uncorrelated_rad_damping(el);
    int64_t const uncorrelated_gauss_noise = LinearTransferMatrixData_get_uncorrelated_gauss_noise(el);


   int64_t const n_part = LocalParticle_get__num_active_particles(part0); //only_for_context cpu_serial cpu_openmp
//   #pragma omp parallel for                                       //only_for_context cpu_openmp
   for (int jj=0; jj<n_part; jj+=128){                 //only_for_context cpu_serial cpu_openmp
    //#pragma omp simd
    for (int iii=0; iii<128; iii++){                   //only_for_context cpu_serial cpu_openmp
      int const ii = iii+jj;                                      //only_for_context cpu_serial cpu_openmp
      if (ii<n_part){                                             //only_for_context cpu_serial cpu_openmp

        LocalParticle lpart = *part0;//only_for_context cpu_serial cpu_openmp
        LocalParticle* part = &lpart;//only_for_context cpu_serial cpu_openmp
        part->ipart = ii;            //only_for_context cpu_serial cpu_openmp

//        LocalParticle* part = part0;//only_for_context opencl cuda


    // Transverse linear uncoupled matrix
    double new_x = LocalParticle_get_x(part);
    double new_y = LocalParticle_get_y(part);
    double new_px = LocalParticle_get_px(part);
    double new_py = LocalParticle_get_py(part);
    double delta = LocalParticle_get_delta(part);

    // removing dispersion and close orbit
    new_x -= disp_x_0 * delta + x_ref_0;
    new_px -= px_ref_0;
    new_y -= disp_y_0 * delta + y_ref_0;
    new_py -= py_ref_0;

    double sin_x, cos_x, sin_y, cos_y;

    if (no_detuning){
    // I use this parameters to pass cos_x, sin_x, ...
        cos_x = chroma_x;
        sin_x = q_x;
        cos_y = chroma_y;
        sin_y = q_y;
    }
    else{
        double const J_x = 0.5 * (
            (1.0 + alpha_x_0*alpha_x_0)/beta_x_0 * new_x*new_x
            + 2*alpha_x_0 * new_x*new_px
            + beta_x_0 * new_px*new_px);
        double const J_y = 0.5 * (
            (1.0 + alpha_y_0*alpha_y_0)/beta_y_0 * new_y*new_y
            + 2*alpha_y_0 * new_y*new_py
            + beta_y_0 * new_py*new_py);
        double phase = 2*PI*(q_x+chroma_x*delta+detx_x*J_x+detx_y*J_y);
            cos_x = cos(phase);
            sin_x = sin(phase);
            phase = 2*PI*(q_y+chroma_y*delta+dety_y*J_y+dety_x*J_x);
            cos_y = cos(phase);
            sin_y = sin(phase);
    }

    double const M00_x = beta_ratio_x*(cos_x+alpha_x_0*sin_x);
    double const M01_x = beta_prod_x*sin_x;
    double const M10_x = ((alpha_x_0-alpha_x_1)*cos_x
                  -(1+alpha_x_0*alpha_x_1)*sin_x
                   )/beta_prod_x;
    double const M11_x = (cos_x-alpha_x_1*sin_x)/beta_ratio_x;
    double const M00_y = beta_ratio_y*(cos_y+alpha_y_0*sin_y);
    double const M01_y = beta_prod_y*sin_y;
    double const M10_y = ((alpha_y_0-alpha_y_1)*cos_y
                  -(1+alpha_y_0*alpha_y_1)*sin_y
                  )/beta_prod_y;
    double const M11_y = (cos_y-alpha_y_1*sin_y)/beta_ratio_y;

    double tmp = new_x;
    new_x = M00_x*tmp + M01_x*new_px;
    new_px = M10_x*tmp + M11_x*new_px;
    tmp = new_y;
    new_y = M00_y*tmp + M01_y*new_py;
    new_py = M10_y*tmp + M11_y*new_py;

    if (cos_s < 2){
        // We set cos_s = 999 if long map is to be skipped
        double new_zeta = LocalParticle_get_zeta(part);
        double new_delta = delta; 
        tmp = new_zeta;
        new_zeta = cos_s*tmp+beta_s*sin_s*new_delta;
        new_delta = -sin_s*tmp/beta_s+cos_s*new_delta;

        LocalParticle_set_zeta(part, new_zeta);
        LocalParticle_update_delta(part, new_delta);
    }
        
    // Change energy without change of reference momentume
    double const energy_increment = 
        LinearTransferMatrixData_get_energy_increment(el);
    if (energy_increment !=0){
      LocalParticle_add_to_energy(part, energy_increment, 1);
    }

    LocalParticle_set_x(part, new_x);
    LocalParticle_set_y(part, new_y);
    LocalParticle_set_px(part, new_px);
    LocalParticle_set_py(part, new_py);

    // Change energy reference
    // In the transverse plane de change is smoothed, i.e. 
    // both the position and the momentum are scaled,
    // rather than only the momentum.
    if (energy_ref_increment != 0){
        double const new_energy0 = LocalParticle_get_mass0(part)
            *LocalParticle_get_gamma0(part) + energy_ref_increment;
        double const new_p0c = sqrt(new_energy0*new_energy0
        -LocalParticle_get_mass0(part)*LocalParticle_get_mass0(part));
        double const new_beta0 = new_p0c / new_energy0;
        double const new_gamma0 = new_energy0 / LocalParticle_get_mass0(part);
        double const geo_emit_factor = sqrt(LocalParticle_get_beta0(part)
                *LocalParticle_get_gamma0(part)/new_beta0/new_gamma0);
            LocalParticle_update_p0c(part,new_p0c);
        LocalParticle_scale_x(part,geo_emit_factor);
        LocalParticle_scale_px(part,geo_emit_factor);
        LocalParticle_scale_y(part,geo_emit_factor);
        LocalParticle_scale_py(part,geo_emit_factor);
    }

    if(uncorrelated_rad_damping == 1) {
        double const damping_factor_x = LinearTransferMatrixData_get_damping_factor_x(el);
        double const damping_factor_y = LinearTransferMatrixData_get_damping_factor_y(el);
        double const damping_factor_s = LinearTransferMatrixData_get_damping_factor_s(el);

        LocalParticle_scale_x(part,damping_factor_x);
        LocalParticle_scale_px(part,damping_factor_x);
        LocalParticle_scale_y(part,damping_factor_y);
        LocalParticle_scale_py(part,damping_factor_y);
        LocalParticle_scale_zeta(part,damping_factor_s);
        double delta = LocalParticle_get_delta(part);
        delta *= damping_factor_s;
        LocalParticle_update_delta(part,delta);
    }

    if(uncorrelated_gauss_noise == 1) {
        double const gauss_noise_ampl_x = LinearTransferMatrixData_get_gauss_noise_ampl_x(el);
        double const gauss_noise_ampl_y = LinearTransferMatrixData_get_gauss_noise_ampl_y(el);
        double const gauss_noise_ampl_s = LinearTransferMatrixData_get_gauss_noise_ampl_s(el);

        double r = LocalParticle_generate_random_double_gauss(part);
        LocalParticle_add_to_px(part,r*gauss_noise_ampl_x);
        r = LocalParticle_generate_random_double_gauss(part);
        LocalParticle_add_to_py(part,r*gauss_noise_ampl_y);
        r = LocalParticle_generate_random_double_gauss(part);
        double delta = LocalParticle_get_delta(part);
        delta += r*gauss_noise_ampl_s;
        LocalParticle_update_delta(part,delta);
    }


        
    // re-adding dispersion and closed orbit
    delta = LocalParticle_get_delta(part);
    LocalParticle_add_to_x(part,disp_x_1 * delta + x_ref_1);
    LocalParticle_add_to_px(part,px_ref_1);
    LocalParticle_add_to_y(part,disp_y_1 * delta + y_ref_1);
    LocalParticle_add_to_py(part,py_ref_1);


     } //only_for_context cpu_serial cpu_openmp
    }  //only_for_context cpu_serial cpu_openmp
   }   //only_for_context cpu_serial cpu_openmp

}

#endif
#ifndef XOBJ_TYPEDEF_ArrNInt64
#define XOBJ_TYPEDEF_ArrNInt64
typedef   struct ArrNInt64_s * ArrNInt64;
 static inline ArrNInt64 ArrNInt64_getp(ArrNInt64  obj){
  int64_t offset=0;
  return (ArrNInt64)(( char*) obj+offset);
}
 static inline int64_t ArrNInt64_len(ArrNInt64  obj){
  int64_t offset=0;
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline int64_t ArrNInt64_get(const ArrNInt64  obj, int64_t i0){
  int64_t offset=0;
  offset+=16+i0*8;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void ArrNInt64_set(ArrNInt64  obj, int64_t i0, int64_t value){
  int64_t offset=0;
  offset+=16+i0*8;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* ArrNInt64_getp1(ArrNInt64  obj, int64_t i0){
  int64_t offset=0;
  offset+=16+i0*8;
  return ( int64_t*)(( char*) obj+offset);
}
#endif
#ifndef XOBJ_TYPEDEF_RecordIndex
#define XOBJ_TYPEDEF_RecordIndex
typedef   struct RecordIndex_s * RecordIndex;
 static inline RecordIndex RecordIndex_getp(RecordIndex  obj){
  int64_t offset=0;
  return (RecordIndex)(( char*) obj+offset);
}
 static inline int64_t RecordIndex_get_capacity(const RecordIndex  obj){
  int64_t offset=0;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void RecordIndex_set_capacity(RecordIndex  obj, int64_t value){
  int64_t offset=0;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* RecordIndex_getp_capacity(RecordIndex  obj){
  int64_t offset=0;
  return ( int64_t*)(( char*) obj+offset);
}
 static inline uint32_t RecordIndex_get_num_recorded(const RecordIndex  obj){
  int64_t offset=0;
  offset+=8;
  return *( uint32_t*)(( char*) obj+offset);
}
 static inline void RecordIndex_set_num_recorded(RecordIndex  obj, uint32_t value){
  int64_t offset=0;
  offset+=8;
  *( uint32_t*)(( char*) obj+offset)=value;
}
 static inline  uint32_t* RecordIndex_getp_num_recorded(RecordIndex  obj){
  int64_t offset=0;
  offset+=8;
  return ( uint32_t*)(( char*) obj+offset);
}
 static inline uint32_t RecordIndex_get__dummy(const RecordIndex  obj){
  int64_t offset=0;
  offset+=16;
  return *( uint32_t*)(( char*) obj+offset);
}
 static inline void RecordIndex_set__dummy(RecordIndex  obj, uint32_t value){
  int64_t offset=0;
  offset+=16;
  *( uint32_t*)(( char*) obj+offset)=value;
}
 static inline  uint32_t* RecordIndex_getp__dummy(RecordIndex  obj){
  int64_t offset=0;
  offset+=16;
  return ( uint32_t*)(( char*) obj+offset);
}
 static inline int64_t RecordIndex_get_buffer_id(const RecordIndex  obj){
  int64_t offset=0;
  offset+=24;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void RecordIndex_set_buffer_id(RecordIndex  obj, int64_t value){
  int64_t offset=0;
  offset+=24;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* RecordIndex_getp_buffer_id(RecordIndex  obj){
  int64_t offset=0;
  offset+=24;
  return ( int64_t*)(( char*) obj+offset);
}
#endif
#ifndef XOBJ_TYPEDEF_ArrNFloat64
#define XOBJ_TYPEDEF_ArrNFloat64
typedef   struct ArrNFloat64_s * ArrNFloat64;
 static inline ArrNFloat64 ArrNFloat64_getp(ArrNFloat64  obj){
  int64_t offset=0;
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t ArrNFloat64_len(ArrNFloat64  obj){
  int64_t offset=0;
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double ArrNFloat64_get(const ArrNFloat64  obj, int64_t i0){
  int64_t offset=0;
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void ArrNFloat64_set(ArrNFloat64  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* ArrNFloat64_getp1(ArrNFloat64  obj, int64_t i0){
  int64_t offset=0;
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
#endif
#ifndef XOBJ_TYPEDEF_SynchrotronRadiationRecordData
#define XOBJ_TYPEDEF_SynchrotronRadiationRecordData
typedef   struct SynchrotronRadiationRecordData_s * SynchrotronRadiationRecordData;
 static inline SynchrotronRadiationRecordData SynchrotronRadiationRecordData_getp(SynchrotronRadiationRecordData  obj){
  int64_t offset=0;
  return (SynchrotronRadiationRecordData)(( char*) obj+offset);
}
 static inline RecordIndex SynchrotronRadiationRecordData_getp__index(SynchrotronRadiationRecordData  obj){
  int64_t offset=0;
  offset+=8;
  return (RecordIndex)(( char*) obj+offset);
}
 static inline int64_t SynchrotronRadiationRecordData_get__index_capacity(const SynchrotronRadiationRecordData  obj){
  int64_t offset=0;
  offset+=8;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void SynchrotronRadiationRecordData_set__index_capacity(SynchrotronRadiationRecordData  obj, int64_t value){
  int64_t offset=0;
  offset+=8;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* SynchrotronRadiationRecordData_getp__index_capacity(SynchrotronRadiationRecordData  obj){
  int64_t offset=0;
  offset+=8;
  return ( int64_t*)(( char*) obj+offset);
}
 static inline uint32_t SynchrotronRadiationRecordData_get__index_num_recorded(const SynchrotronRadiationRecordData  obj){
  int64_t offset=0;
  offset+=16;
  return *( uint32_t*)(( char*) obj+offset);
}
 static inline void SynchrotronRadiationRecordData_set__index_num_recorded(SynchrotronRadiationRecordData  obj, uint32_t value){
  int64_t offset=0;
  offset+=16;
  *( uint32_t*)(( char*) obj+offset)=value;
}
 static inline  uint32_t* SynchrotronRadiationRecordData_getp__index_num_recorded(SynchrotronRadiationRecordData  obj){
  int64_t offset=0;
  offset+=16;
  return ( uint32_t*)(( char*) obj+offset);
}
 static inline uint32_t SynchrotronRadiationRecordData_get__index__dummy(const SynchrotronRadiationRecordData  obj){
  int64_t offset=0;
  offset+=24;
  return *( uint32_t*)(( char*) obj+offset);
}
 static inline void SynchrotronRadiationRecordData_set__index__dummy(SynchrotronRadiationRecordData  obj, uint32_t value){
  int64_t offset=0;
  offset+=24;
  *( uint32_t*)(( char*) obj+offset)=value;
}
 static inline  uint32_t* SynchrotronRadiationRecordData_getp__index__dummy(SynchrotronRadiationRecordData  obj){
  int64_t offset=0;
  offset+=24;
  return ( uint32_t*)(( char*) obj+offset);
}
 static inline int64_t SynchrotronRadiationRecordData_get__index_buffer_id(const SynchrotronRadiationRecordData  obj){
  int64_t offset=0;
  offset+=32;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void SynchrotronRadiationRecordData_set__index_buffer_id(SynchrotronRadiationRecordData  obj, int64_t value){
  int64_t offset=0;
  offset+=32;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* SynchrotronRadiationRecordData_getp__index_buffer_id(SynchrotronRadiationRecordData  obj){
  int64_t offset=0;
  offset+=32;
  return ( int64_t*)(( char*) obj+offset);
}
 static inline ArrNFloat64 SynchrotronRadiationRecordData_getp_photon_energy(SynchrotronRadiationRecordData  obj){
  int64_t offset=0;
  offset+=72;
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t SynchrotronRadiationRecordData_len_photon_energy(SynchrotronRadiationRecordData  obj){
  int64_t offset=0;
  offset+=72;
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double SynchrotronRadiationRecordData_get_photon_energy(const SynchrotronRadiationRecordData  obj, int64_t i0){
  int64_t offset=0;
  offset+=72;
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void SynchrotronRadiationRecordData_set_photon_energy(SynchrotronRadiationRecordData  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=72;
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* SynchrotronRadiationRecordData_getp1_photon_energy(SynchrotronRadiationRecordData  obj, int64_t i0){
  int64_t offset=0;
  offset+=72;
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
 static inline ArrNInt64 SynchrotronRadiationRecordData_getp_at_element(SynchrotronRadiationRecordData  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+40);
  return (ArrNInt64)(( char*) obj+offset);
}
 static inline int64_t SynchrotronRadiationRecordData_len_at_element(SynchrotronRadiationRecordData  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+40);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline int64_t SynchrotronRadiationRecordData_get_at_element(const SynchrotronRadiationRecordData  obj, int64_t i0){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+40);
  offset+=16+i0*8;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void SynchrotronRadiationRecordData_set_at_element(SynchrotronRadiationRecordData  obj, int64_t i0, int64_t value){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+40);
  offset+=16+i0*8;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* SynchrotronRadiationRecordData_getp1_at_element(SynchrotronRadiationRecordData  obj, int64_t i0){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+40);
  offset+=16+i0*8;
  return ( int64_t*)(( char*) obj+offset);
}
 static inline ArrNInt64 SynchrotronRadiationRecordData_getp_at_turn(SynchrotronRadiationRecordData  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+48);
  return (ArrNInt64)(( char*) obj+offset);
}
 static inline int64_t SynchrotronRadiationRecordData_len_at_turn(SynchrotronRadiationRecordData  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+48);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline int64_t SynchrotronRadiationRecordData_get_at_turn(const SynchrotronRadiationRecordData  obj, int64_t i0){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+48);
  offset+=16+i0*8;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void SynchrotronRadiationRecordData_set_at_turn(SynchrotronRadiationRecordData  obj, int64_t i0, int64_t value){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+48);
  offset+=16+i0*8;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* SynchrotronRadiationRecordData_getp1_at_turn(SynchrotronRadiationRecordData  obj, int64_t i0){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+48);
  offset+=16+i0*8;
  return ( int64_t*)(( char*) obj+offset);
}
 static inline ArrNInt64 SynchrotronRadiationRecordData_getp_particle_id(SynchrotronRadiationRecordData  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+56);
  return (ArrNInt64)(( char*) obj+offset);
}
 static inline int64_t SynchrotronRadiationRecordData_len_particle_id(SynchrotronRadiationRecordData  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+56);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline int64_t SynchrotronRadiationRecordData_get_particle_id(const SynchrotronRadiationRecordData  obj, int64_t i0){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+56);
  offset+=16+i0*8;
  return *( int64_t*)(( char*) obj+offset);
}
 static inline void SynchrotronRadiationRecordData_set_particle_id(SynchrotronRadiationRecordData  obj, int64_t i0, int64_t value){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+56);
  offset+=16+i0*8;
  *( int64_t*)(( char*) obj+offset)=value;
}
 static inline  int64_t* SynchrotronRadiationRecordData_getp1_particle_id(SynchrotronRadiationRecordData  obj, int64_t i0){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+56);
  offset+=16+i0*8;
  return ( int64_t*)(( char*) obj+offset);
}
 static inline ArrNFloat64 SynchrotronRadiationRecordData_getp_particle_delta(SynchrotronRadiationRecordData  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+64);
  return (ArrNFloat64)(( char*) obj+offset);
}
 static inline int64_t SynchrotronRadiationRecordData_len_particle_delta(SynchrotronRadiationRecordData  obj){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+64);
   int64_t* arr= ( int64_t*)(( char*) obj+offset);
  return arr[1];
}
 static inline double SynchrotronRadiationRecordData_get_particle_delta(const SynchrotronRadiationRecordData  obj, int64_t i0){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+64);
  offset+=16+i0*8;
  return *( double*)(( char*) obj+offset);
}
 static inline void SynchrotronRadiationRecordData_set_particle_delta(SynchrotronRadiationRecordData  obj, int64_t i0, double value){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+64);
  offset+=16+i0*8;
  *( double*)(( char*) obj+offset)=value;
}
 static inline  double* SynchrotronRadiationRecordData_getp1_particle_delta(SynchrotronRadiationRecordData  obj, int64_t i0){
  int64_t offset=0;
  offset+=*( int64_t*)(( char*) obj+offset+64);
  offset+=16+i0*8;
  return ( double*)(( char*) obj+offset);
}
#endif

 static inline
SynchrotronRadiationRecordData MultipoleData_getp_internal_record(MultipoleData el, LocalParticle* part){
    RecordIdentifier record_id = MultipoleData_getp__internal_record_id(el);
    if (RecordIdentifier_get_buffer_id(record_id) <= 0){
        return NULL;
    }
    else{
        return (SynchrotronRadiationRecordData) RecordIdentifier_getp_record(record_id, part);
    }
    }
    
#ifndef XTRACK_RNG_H
#define XTRACK_RNG_H

//#include <stdint.h> //only_for_context none

 static inline
double rng_get (uint32_t *s1, uint32_t *s2, uint32_t *s3 )
{
#define MASK 0xffffffffUL
#define TAUSWORTHE(s,a,b,c,d) ((((s) &c) <<d) &MASK) ^ (((((s) <<a) &MASK)^(s)) >>b)

  *s1 = TAUSWORTHE (*s1, 13, 19, 4294967294UL, 12);
  *s2 = TAUSWORTHE (*s2, 2, 25, 4294967288UL, 4);
  *s3 = TAUSWORTHE (*s3, 3, 11, 4294967280UL, 17);

  return ((*s1) ^ (*s2) ^ (*s3)) / 4294967296.0 ;
}

 static inline
void rng_set (uint32_t *s1, uint32_t *s2, uint32_t *s3, uint32_t s )
{
  if (s == 0)
    s = 1;      /* default seed is 1 */

#define LCG(n) ((69069 * (n)) & 0xffffffffUL)
  *s1 = LCG (s);
  if (*s1 < 2) *s1 += 2UL;
  *s2 = LCG (*s1);
  if (*s2 < 8) *s2 += 8UL;
  *s3 = LCG (*s2);
  if (*s3 < 16) *s3 += 16UL;

  /* "warm it up" */
  rng_get (s1, s2, s3);
  rng_get (s1, s2, s3);
  rng_get (s1, s2, s3);
  rng_get (s1, s2, s3);
  rng_get (s1, s2, s3);
  rng_get (s1, s2, s3);
  return;
}

#endif /* XTRACK_RNG_H */

#ifndef LOCALPARTICE_RNG_H
#define LOCALPARTICE_RNG_H

 static inline
double LocalParticle_generate_random_double(LocalParticle* part)
{
    uint32_t s1 = LocalParticle_get__rng_s1(part);
    uint32_t s2 = LocalParticle_get__rng_s2(part);
    uint32_t s3 = LocalParticle_get__rng_s3(part);
    
    double r = rng_get(&s1, &s2, &s3);
	    
    LocalParticle_set__rng_s1(part, s1);
    LocalParticle_set__rng_s2(part, s2);
    LocalParticle_set__rng_s3(part, s3);

    return r;
}

 static inline
double LocalParticle_generate_random_double_exp(LocalParticle* part)
{
  return -log(LocalParticle_generate_random_double(part));
}

 static inline
double LocalParticle_generate_random_double_gauss(LocalParticle* part)
{
    double x1 = LocalParticle_generate_random_double(part);
    while(x1==0.0){
        x1 = LocalParticle_generate_random_double(part);
    }
    x1 = sqrt(-2.0*log(x1));
	double x2 = LocalParticle_generate_random_double(part);
    x2 = 2.0*3.1415926535897932384626433832795028841971693993751*x2;
    double r = x1*sin(x2);
    return r;
}

#endif

#ifndef XTRACK_CONSTANTS_H
#define XTRACK_CONSTANTS_H

#if !defined( C_LIGHT )
    #define   C_LIGHT ( 299792458.0 )
#endif /* !defined( C_LIGHT ) */

#if !defined( EPSILON_0 )
    #define   EPSILON_0 (8.854187817620e-12)
#endif /* !defined( EPSILON_0 ) */

#if !defined( PI )
    #define PI (3.1415926535897932384626433832795028841971693993751)
#endif /* !defined( PI ) */

#if !defined( MU_0 )
    #define MU_0 (PI*4.0e-7)
#endif /* !defined( MU_0 ) */

#if !defined( DEG2RAD )
    #define DEG2RAD (0.0174532925199432957692369076848861271344287188854)
#endif /* !defiend( DEG2RAD ) */

#if !defined( RAD2DEG )
    #define RAD2DEG (57.29577951308232087679815481410517033240547246656442)
#endif /* !defiend( RAD2DEG ) */

#if !defined( SQRT_PI )
    #define SQRT_PI (1.7724538509055160272981674833411451827975494561224)
#endif /* !defined( SQRT_PI ) */

#if !defined( QELEM )
    #define QELEM (1.60217662e-19)
#endif /* !defined( QELEM ) */

#endif /* XTRACK_CONSTANTS_H */

#ifndef XTRACK_SYNRAD_SPECTRUM_H
#define XTRACK_SYNRAD_SPECTRUM_H

#define SQRT3 1.732050807568877
#define ALPHA_EM 0.0072973525693

 static inline
void synrad_average_kick(LocalParticle* part, double curv, double lpath){
    double const gamma0  = LocalParticle_get_gamma0(part);
    double const beta0  = LocalParticle_get_beta0(part);
    double const mass0 = LocalParticle_get_mass0(part);
    double const q0 = LocalParticle_get_q0(part);

    double const delta  = LocalParticle_get_delta(part);

    double const r = QELEM/(6*PI*EPSILON_0)
                        * q0*q0 / mass0
                        * (beta0*gamma0)*(beta0*gamma0)*(beta0*gamma0)
	                * curv*curv
                        * lpath * (1 + delta);

    double const beta = beta0 * LocalParticle_get_rvv(part);
    double const f_t = sqrt(1 + r*(r-2)/(beta*beta));

    LocalParticle_update_delta(part, (delta+1) * f_t - 1);
    LocalParticle_scale_px(part, f_t);
    LocalParticle_scale_py(part, f_t);
}

 static inline
double SynRad(double x)
{
  // x :    energy normalized to the critical energy
  // returns function value _SynRadC   photon spectrum dn/dx
  // (integral of modified 1/3 order Bessel function)
  // principal: Chebyshev series see H.H.Umstaetter CERN/PS/SM/81-13 10-3-1981
  // see also my LEP Note 632 of 12/1990
  // converted to C++, H.Burkhardt 21-4-1996    */
  double synrad = 0.;
  if(x>0. && x<800.) {	// otherwise result synrad remains 0
    if(x<6.) {
      double a,b,z;
      z=x*x/16.-2.;
      b=          .00000000000000000012;
      a=z*b  +    .00000000000000000460;
      b=z*a-b+    .00000000000000031738;
      a=z*b-a+    .00000000000002004426;
      b=z*a-b+    .00000000000111455474;
      a=z*b-a+    .00000000005407460944;
      b=z*a-b+    .00000000226722011790;
      a=z*b-a+    .00000008125130371644;
      b=z*a-b+    .00000245751373955212;
      a=z*b-a+    .00006181256113829740;
      b=z*a-b+    .00127066381953661690;
      a=z*b-a+    .02091216799114667278;
      b=z*a-b+    .26880346058164526514;
      a=z*b-a+   2.61902183794862213818;
      b=z*a-b+  18.65250896865416256398;
      a=z*b-a+  92.95232665922707542088;
      b=z*a-b+ 308.15919413131586030542;
      a=z*b-a+ 644.86979658236221700714;
      double p;
      p=.5*z*a-b+  414.56543648832546975110;
      a=          .00000000000000000004;
      b=z*a+      .00000000000000000289;
      a=z*b-a+    .00000000000000019786;
      b=z*a-b+    .00000000000001196168;
      a=z*b-a+    .00000000000063427729;
      b=z*a-b+    .00000000002923635681;
      a=z*b-a+    .00000000115951672806;
      b=z*a-b+    .00000003910314748244;
      a=z*b-a+    .00000110599584794379;
      b=z*a-b+    .00002581451439721298;
      a=z*b-a+    .00048768692916240683;
      b=z*a-b+    .00728456195503504923;
      a=z*b-a+    .08357935463720537773;
      b=z*a-b+    .71031361199218887514;
      a=z*b-a+   4.26780261265492264837;
      b=z*a-b+  17.05540785795221885751;
      a=z*b-a+  41.83903486779678800040;
      double q;
      q=.5*z*a-b+28.41787374362784178164;
      double y;
      y=pow(x,2./3.);
      synrad=(p/y-q*y-1.)*1.81379936423421784215530788143;

    } else {// 6 < x < 174

      double a,b,z;
      z=20./x-2.;
      a=      .00000000000000000001;
      b=z*a  -.00000000000000000002;
      a=z*b-a+.00000000000000000006;
      b=z*a-b-.00000000000000000020;
      a=z*b-a+.00000000000000000066;
      b=z*a-b-.00000000000000000216;
      a=z*b-a+.00000000000000000721;
      b=z*a-b-.00000000000000002443;
      a=z*b-a+.00000000000000008441;
      b=z*a-b-.00000000000000029752;
      a=z*b-a+.00000000000000107116;
      b=z*a-b-.00000000000000394564;
      a=z*b-a+.00000000000001489474;
      b=z*a-b-.00000000000005773537;
      a=z*b-a+.00000000000023030657;
      b=z*a-b-.00000000000094784973;
      a=z*b-a+.00000000000403683207;
      b=z*a-b-.00000000001785432348;
      a=z*b-a+.00000000008235329314;
      b=z*a-b-.00000000039817923621;
      a=z*b-a+.00000000203088939238;
      b=z*a-b-.00000001101482369622;
      a=z*b-a+.00000006418902302372;
      b=z*a-b-.00000040756144386809;
      a=z*b-a+.00000287536465397527;
      b=z*a-b-.00002321251614543524;
      a=z*b-a+.00022505317277986004;
      b=z*a-b-.00287636803664026799;
      a=z*b-a+.06239591359332750793;
      double p;
      p=.5*z*a-b    +1.06552390798340693166;
      synrad=p*sqrt(0.5*PI/x)/exp(x);
    }
  }
  return synrad;
}

 static inline
double synrad_gen_photon_energy_normalized(LocalParticle *part)
{
  // initialize constants used in the approximate expressions
  // for SYNRAD   (integral over the modified Bessel function K5/3)
  //  xmin = 0.;
  double const xlow = 1.;
  double const a1 = 2.149528241534391; // Synrad(1.e-38)/pow(1.e-38,-2./3.);
  double const a2 = 1.770750801624037; // Synrad(xlow)/exp(-xlow);
  double const c1 = 0.; //
  double const ratio = 0.908250405131381;
  double appr, exact, result;
  do {
    if (LocalParticle_generate_random_double(part) < ratio) { // use low energy approximation
      result=c1+(1.-c1)*LocalParticle_generate_random_double(part);
      double tmp = result*result;
      result*=tmp;  	// take to 3rd power;
      exact=SynRad(result);
      appr=a1/tmp;
    } else {				// use high energy approximation
      result=xlow-log(LocalParticle_generate_random_double(part));
      exact=SynRad(result);
      appr=a2*exp(-result);
    }
  } while (exact < appr*LocalParticle_generate_random_double(part));	// reject in proportion of approx
  return result; // result now exact spectrum with unity weight
}

 static inline
double synrad_average_number_of_photons(
                          double beta0_gamma0, double curv, double lpath){
    double const kick = curv * lpath;
    return 2.5/SQRT3*ALPHA_EM*beta0_gamma0*fabs(kick);
}

 static inline
int64_t synrad_emit_photons(LocalParticle *part, double curv /* 1/m */,
                            double lpath /* m */,
                            RecordIndex record_index,
                            SynchrotronRadiationRecordData record
                            ){

    if (fabs(curv) < 1e-15)
        return 0;

    int64_t nphot = 0;

    // TODO Introduce effect of chi and mass_ratio!!!
    double const m0 = LocalParticle_get_mass0(part); // eV
    double const gamma0  = LocalParticle_get_gamma0(part);
    double const beta0  = LocalParticle_get_beta0(part);

    double const initial_energy = LocalParticle_get_energy0(part)
	                          + LocalParticle_get_ptau(part)*LocalParticle_get_p0c(part); // eV
    double energy = initial_energy;
    double gamma = energy / m0; //
    //double beta_gamma = sqrt(gamma*gamma-1); //
    double n = LocalParticle_generate_random_double_exp(part); // path_length / mean_free_path;
    while (n < synrad_average_number_of_photons(beta0 * gamma0, curv, lpath)) {
        nphot++;
        double const c1 = 1.5 * 1.973269804593025e-07; // hbar * c = 1.973269804593025e-07 eV * m
        double const energy_critical = c1 * (gamma*gamma*gamma0) * curv; // eV
        double const energy_loss = synrad_gen_photon_energy_normalized(part) * energy_critical; // eV
        if (energy_loss >= energy) {
            energy = 0.0; // eV
            break;
        }
        energy -= energy_loss; // eV
        gamma = energy / m0; //
        // beta_gamma = sqrt(gamma*gamma-1); // that's how beta gamma is
        n += LocalParticle_generate_random_double_exp(part);
        if (record){
          int64_t i_slot = RecordIndex_get_slot(record_index);
          // The returned slot id is negative if record is NULL or if record is full

          if (i_slot>=0){
              SynchrotronRadiationRecordData_set_photon_energy(record, i_slot,
                                                               energy_loss);
              SynchrotronRadiationRecordData_set_at_element(record, i_slot,
                                          LocalParticle_get_at_element(part));
              SynchrotronRadiationRecordData_set_at_turn(record, i_slot,
                                          LocalParticle_get_at_turn(part));
              SynchrotronRadiationRecordData_set_particle_id(record, i_slot,
                                          LocalParticle_get_particle_id(part));
              SynchrotronRadiationRecordData_set_particle_delta(record, i_slot,
                                          LocalParticle_get_delta(part));
          }
        }
    }

    if (energy == 0.0)
      LocalParticle_set_state(part, -10); // used to flag this kind of loss
    else{
      LocalParticle_add_to_energy(part, energy-initial_energy, 0);
    }

    return nphot;
}

#endif /* XTRACK_SYNRAD_SPECTRUM_H */

#ifndef XTRACK_MULTIPOLE_H
#define XTRACK_MULTIPOLE_H

 static inline
void Multipole_track_local_particle(MultipoleData el, LocalParticle* part0){

    int64_t radiation_flag = MultipoleData_get_radiation_flag(el);

    // Extract record and record_index
    SynchrotronRadiationRecordData record = NULL;
    RecordIndex record_index = NULL;
    if (radiation_flag==2){
        record = (SynchrotronRadiationRecordData) MultipoleData_getp_internal_record(el, part0);
        if (record){
            record_index = SynchrotronRadiationRecordData_getp__index(record);
        }
    }


   int64_t const n_part = LocalParticle_get__num_active_particles(part0); //only_for_context cpu_serial cpu_openmp
//   #pragma omp parallel for                                       //only_for_context cpu_openmp
   for (int jj=0; jj<n_part; jj+=128){                 //only_for_context cpu_serial cpu_openmp
    //#pragma omp simd
    for (int iii=0; iii<128; iii++){                   //only_for_context cpu_serial cpu_openmp
      int const ii = iii+jj;                                      //only_for_context cpu_serial cpu_openmp
      if (ii<n_part){                                             //only_for_context cpu_serial cpu_openmp

        LocalParticle lpart = *part0;//only_for_context cpu_serial cpu_openmp
        LocalParticle* part = &lpart;//only_for_context cpu_serial cpu_openmp
        part->ipart = ii;            //only_for_context cpu_serial cpu_openmp

//        LocalParticle* part = part0;//only_for_context opencl cuda

        int64_t order = MultipoleData_get_order(el);
        int64_t index_x = 2 * order;
        int64_t index_y = index_x + 1;

        double dpx = MultipoleData_get_bal(el, index_x);
        double dpy = MultipoleData_get_bal(el, index_y);

        double const x   = LocalParticle_get_x(part);
        double const y   = LocalParticle_get_y(part);
        double const chi = LocalParticle_get_chi(part);

        double const hxl = MultipoleData_get_hxl(el);
        double const hyl = MultipoleData_get_hyl(el);

        while( index_x > 0 )
        {
            double const zre = dpx * x - dpy * y;
            double const zim = dpx * y + dpy * x;

            index_x -= 2;
            index_y -= 2;

            dpx = MultipoleData_get_bal(el, index_x) + zre;
            dpy = MultipoleData_get_bal(el, index_y) + zim;
        }


        double const length = MultipoleData_get_length(el); // m
        double const curv = sqrt(dpx*dpx + dpy*dpy) / length;

        // Radiation at entrance
        if (radiation_flag > 0 && length > 0){
            double const L_path = 0.5*length*(1 + (hxl*x - hyl*y)/length); //CHECK!!!!
            if (radiation_flag == 1){
                synrad_average_kick(part, curv, L_path);
            }
            else if (radiation_flag == 2){
                synrad_emit_photons(part, curv, L_path, record_index, record);
            }
        }

        dpx = -chi * dpx; // rad
        dpy =  chi * dpy; // rad

        if( ( hxl > 0) || ( hyl > 0) || ( hxl < 0 ) || ( hyl < 0 ) )
        {
            double const delta  = LocalParticle_get_delta(part);

            double const hxlx   = x * hxl;
            double const hyly   = y * hyl;

            LocalParticle_add_to_zeta(part, chi * ( hyly - hxlx ) );

            dpx += hxl + hxl * delta;
            dpy -= hyl + hyl * delta;

            if( length != 0)
            {
                double const b1l = chi * MultipoleData_get_bal(el, 0 );
                double const a1l = chi * MultipoleData_get_bal(el, 1 );

                dpx -= b1l * hxlx / length;
                dpy += a1l * hyly / length;
            }
        }

        LocalParticle_add_to_px(part, dpx);
        LocalParticle_add_to_py(part, dpy);

        // Radiation at exit
        if (radiation_flag > 0 && length > 0){
            double const L_path = 0.5*length*(1 + (hxl*x - hyl*y)/length); //CHECK!!!!
            if (radiation_flag == 1){
                synrad_average_kick(part, curv, L_path);
            }
            else if (radiation_flag == 2){
                synrad_emit_photons(part, curv, L_path, record_index, record);
            }
        }

     } //only_for_context cpu_serial cpu_openmp
    }  //only_for_context cpu_serial cpu_openmp
   }   //only_for_context cpu_serial cpu_openmp

}

#endif
#ifndef XTRACK_CONSTANTS_H
#define XTRACK_CONSTANTS_H

#if !defined( C_LIGHT )
    #define   C_LIGHT ( 299792458.0 )
#endif /* !defined( C_LIGHT ) */

#if !defined( EPSILON_0 )
    #define   EPSILON_0 (8.854187817620e-12)
#endif /* !defined( EPSILON_0 ) */

#if !defined( PI )
    #define PI (3.1415926535897932384626433832795028841971693993751)
#endif /* !defined( PI ) */

#if !defined( MU_0 )
    #define MU_0 (PI*4.0e-7)
#endif /* !defined( MU_0 ) */

#if !defined( DEG2RAD )
    #define DEG2RAD (0.0174532925199432957692369076848861271344287188854)
#endif /* !defiend( DEG2RAD ) */

#if !defined( RAD2DEG )
    #define RAD2DEG (57.29577951308232087679815481410517033240547246656442)
#endif /* !defiend( RAD2DEG ) */

#if !defined( SQRT_PI )
    #define SQRT_PI (1.7724538509055160272981674833411451827975494561224)
#endif /* !defined( SQRT_PI ) */

#if !defined( QELEM )
    #define QELEM (1.60217662e-19)
#endif /* !defined( QELEM ) */

#endif /* XTRACK_CONSTANTS_H */

#ifndef XTRACK_RFMULTIPOLE_H
#define XTRACK_RFMULTIPOLE_H

 static inline
void RFMultipole_track_local_particle(RFMultipoleData el, LocalParticle* part0){

      double const* bal = RFMultipoleData_getp1_bal(el, 0);
      double const* phase = RFMultipoleData_getp1_phase(el, 0);
    int64_t const order = RFMultipoleData_get_order(el);
    double const frequency = RFMultipoleData_get_frequency(el);
    double const voltage = RFMultipoleData_get_voltage(el);
    double const lag = RFMultipoleData_get_lag(el);


   int64_t const n_part = LocalParticle_get__num_active_particles(part0); //only_for_context cpu_serial cpu_openmp
//   #pragma omp parallel for                                       //only_for_context cpu_openmp
   for (int jj=0; jj<n_part; jj+=128){                 //only_for_context cpu_serial cpu_openmp
    //#pragma omp simd
    for (int iii=0; iii<128; iii++){                   //only_for_context cpu_serial cpu_openmp
      int const ii = iii+jj;                                      //only_for_context cpu_serial cpu_openmp
      if (ii<n_part){                                             //only_for_context cpu_serial cpu_openmp

        LocalParticle lpart = *part0;//only_for_context cpu_serial cpu_openmp
        LocalParticle* part = &lpart;//only_for_context cpu_serial cpu_openmp
        part->ipart = ii;            //only_for_context cpu_serial cpu_openmp

//        LocalParticle* part = part0;//only_for_context opencl cuda

        double const k = frequency * ( 2.0 * PI / C_LIGHT);

        double const x = LocalParticle_get_x(part);
        double const y = LocalParticle_get_y(part);
        double const beta0  = LocalParticle_get_beta0(part);
        double const zeta   = LocalParticle_get_zeta(part);
        double const q      = LocalParticle_get_q0(part)
                            * LocalParticle_get_charge_ratio(part);
        double const rvv    = LocalParticle_get_rvv(part);
        double const ktau   = k * zeta / ( beta0 * rvv );

        double dpx = 0.0;
        double dpy = 0.0;
        double dptr = 0.0;
        double zre = 1.0;
        double zim = 0.0;

        for (int64_t kk = 0; kk <= order; kk++)
        {
            double const pn_kk = DEG2RAD * phase[2*kk] - ktau;
            double const ps_kk = DEG2RAD * phase[2*kk+1] - ktau;

            double const bal_n_kk = bal[2*kk];
            double const bal_s_kk = bal[2*kk+1];

            double const cn = cos(pn_kk);
            double const cs = cos(ps_kk);
            double const sn = sin(pn_kk);
            double const ss = sin(ps_kk);

            dpx += cn * (bal_n_kk * zre) - cs * (bal_s_kk * zim);
            dpy += cs * (bal_s_kk * zre) + cn * (bal_n_kk * zim);

            double const zret = zre * x - zim * y;
            zim = zim * x + zre * y;
            zre = zret;

            dptr += sn * (bal_n_kk * zre) - ss * (bal_s_kk * zim);
        }

        double const cav_energy = q * voltage * sin(lag * DEG2RAD - ktau);
        double const p0c = LocalParticle_get_p0c(part);
        double const rfmultipole_energy = - q * ( (k * p0c) * dptr );

        double const chi    = LocalParticle_get_chi(part);

        double const px_kick = - chi * dpx;
        double const py_kick =   chi * dpy;
        double const energy_kick = cav_energy + rfmultipole_energy;

        LocalParticle_add_to_px(part, px_kick);
        LocalParticle_add_to_py(part, py_kick);
        LocalParticle_add_to_energy(part, energy_kick, 1);


     } //only_for_context cpu_serial cpu_openmp
    }  //only_for_context cpu_serial cpu_openmp
   }   //only_for_context cpu_serial cpu_openmp


}

#endif
#ifndef XTRACK_REFERENCEENERGYINCREASE_H
#define XTRACK_REFERENCEENERGYINCREASE_H

 static inline
void ReferenceEnergyIncrease_track_local_particle(ReferenceEnergyIncreaseData el,
		                                  LocalParticle* part0){

    double const Delta_p0c = ReferenceEnergyIncreaseData_get_Delta_p0c(el);


   int64_t const n_part = LocalParticle_get__num_active_particles(part0); //only_for_context cpu_serial cpu_openmp
//   #pragma omp parallel for                                       //only_for_context cpu_openmp
   for (int jj=0; jj<n_part; jj+=128){                 //only_for_context cpu_serial cpu_openmp
    //#pragma omp simd
    for (int iii=0; iii<128; iii++){                   //only_for_context cpu_serial cpu_openmp
      int const ii = iii+jj;                                      //only_for_context cpu_serial cpu_openmp
      if (ii<n_part){                                             //only_for_context cpu_serial cpu_openmp

        LocalParticle lpart = *part0;//only_for_context cpu_serial cpu_openmp
        LocalParticle* part = &lpart;//only_for_context cpu_serial cpu_openmp
        part->ipart = ii;            //only_for_context cpu_serial cpu_openmp

//        LocalParticle* part = part0;//only_for_context opencl cuda

	LocalParticle_update_p0c(part,
		LocalParticle_get_p0c(part) + Delta_p0c);

     } //only_for_context cpu_serial cpu_openmp
    }  //only_for_context cpu_serial cpu_openmp
   }   //only_for_context cpu_serial cpu_openmp


}
#endif
#ifndef XTRACK_SROTATION_H
#define XTRACK_SROTATION_H

 static inline
void SRotation_track_local_particle(SRotationData el, LocalParticle* part0){


   int64_t const n_part = LocalParticle_get__num_active_particles(part0); //only_for_context cpu_serial cpu_openmp
//   #pragma omp parallel for                                       //only_for_context cpu_openmp
   for (int jj=0; jj<n_part; jj+=128){                 //only_for_context cpu_serial cpu_openmp
    //#pragma omp simd
    for (int iii=0; iii<128; iii++){                   //only_for_context cpu_serial cpu_openmp
      int const ii = iii+jj;                                      //only_for_context cpu_serial cpu_openmp
      if (ii<n_part){                                             //only_for_context cpu_serial cpu_openmp

        LocalParticle lpart = *part0;//only_for_context cpu_serial cpu_openmp
        LocalParticle* part = &lpart;//only_for_context cpu_serial cpu_openmp
        part->ipart = ii;            //only_for_context cpu_serial cpu_openmp

//        LocalParticle* part = part0;//only_for_context opencl cuda

    	double const sin_z = SRotationData_get_sin_z(el);
    	double const cos_z = SRotationData_get_cos_z(el);

    	double const x  = LocalParticle_get_x(part);
    	double const y  = LocalParticle_get_y(part);
    	double const px = LocalParticle_get_px(part);
    	double const py = LocalParticle_get_py(part);

    	double const x_hat  =  cos_z * x  + sin_z * y;
    	double const y_hat  = -sin_z * x  + cos_z * y;

    	double const px_hat =  cos_z * px + sin_z * py;
    	double const py_hat = -sin_z * px + cos_z * py;


    	LocalParticle_set_x(part, x_hat);
    	LocalParticle_set_y(part, y_hat);

    	LocalParticle_set_px(part, px_hat);
    	LocalParticle_set_py(part, py_hat);

     } //only_for_context cpu_serial cpu_openmp
    }  //only_for_context cpu_serial cpu_openmp
   }   //only_for_context cpu_serial cpu_openmp


}

#endif
#if !defined( C_LIGHT )
    #define   C_LIGHT ( 299792458.0 )
#endif

#if !defined( EPSILON_0 )
    #define   EPSILON_0 (8.854187817620e-12)
#endif

#if !defined( PI )
    #define PI (3.1415926535897932384626433832795028841971693993751)
#endif

#if !defined( DEG2RAD )
    #define DEG2RAD (0.0174532925199432957692369076848861271344287188854)
#endif

#if !defined( RAD2DEG )
    #define RAD2DEG (57.29577951308232087679815481410517033240547246656442)
#endif

#if !defined( SQRT_PI )
    #define SQRT_PI (1.7724538509055160272981674833411451827975494561224)
#endif

#if !defined( QELEM )
    #define QELEM (1.60217662e-19)
#endif

#if !defined( TWO_OVER_SQRT_PI )
    #define TWO_OVER_SQRT_PI (1.128379167095512573896158903121545171688101258657997713688171443418)
#endif

#if !defined( SQRT_TWO )
    #define SQRT_TWO (1.414213562373095048801688724209698078569671875376948073176679738)
#endif

#if !defined( REAL_EPSILON )
    #define REAL_EPSILON 2.22044604925031e-16
#endif /* !defined( REAL_EPSILON ) */

#ifndef XFIELDS_SINCOS_H__
#define XFIELDS_SINCOS_H__

#include <math.h> //only_for_context cpu_serial cpu_openmp

/* Define XSUITE_NO_SINCOS as a compiler parameter to never use the inline
 * wrapper function below (the compiler may still decide to use sincos - like
 * intrinsic, but usually enforcing that math functions have to update
 * errno should put an end to this.
 *
 * If XSUITE_NO_SINCOS is not set, then a best-effort attempt is made to
 * use it on platforms that support it (i.e. gnu compiler, no ANSI standards,
 * relaxed errno handling for math functions.
 */

#if ( !defined( XSUITE_NO_SINCOS ) ) && ( defined( __OPENCL_C_VERSION__ ) )
 static inline void xsuite_sincos( double const arg,
    double*   sin_result, double*   cos_result ) {
    *sin_result = sincos( arg, cos_result ); }

#elif ( !defined( XSUITE_NO_SINCOS ) ) && \
      ( ( defined( __CUDA_ARCH__ ) ) || \
        ( defined( __GNUC__ ) && !defined( __clang__ ) && \
         !defined( __STRICT_ANSI__ ) && !defined( __INTEL_COMPILER ) && \
         defined( __NO_MATH_ERRNO__ ) ) )
 static inline void xsuite_sincos( double const arg,
    double*   sin_result, double*   cos_result ) {
    sincos( arg, sin_result, cos_result ); }

#else
 static inline void xsuite_sincos( double const arg,
    double*   sin_result, double*   cos_result ) {
    *sin_result = sin( arg );
    *cos_result = cos( arg ); }

#endif /* XSUITE_NO_SINCOS */
#endif /* XFIELDS_SINCOS_H__ */

#ifndef XFIELDS_HEADERS_POWER_H_H__
#define XFIELDS_HEADERS_POWER_H_H__

/** \file power_n.h
 *  \note always include constants first!!! */

 static inline double power_n( double x, unsigned int n )
{
    #if defined( __OPENCL_VERSION__ )
    return pown( x, n );
    #else

    double x_n = x;

    unsigned int const n_div_16 = n >> 4u;
    unsigned int const n_mod_16 = n - ( n_div_16 << 4u );

    switch( n_mod_16 )
    {
        case  0u: { x_n = ( double )1.0; break; }
        case  1u: { break; }
        case  2u: { x_n *= x;                                       break; }
        case  3u: { x_n *= x * x;                                   break; }
        case  4u: { x_n *= x;     x_n *= x_n;                       break; }
        case  5u: { x_n *= x;     x_n *= x_n * x;                   break; }
        case  6u: { x_n *= x * x; x_n *= x_n;                       break; }
        case  7u: { x_n *= x * x; x_n *= x_n * x;                   break; }
        case  8u: { x_n *= x;     x_n *= x_n;     x_n *= x_n;       break; }
        case  9u: { x_n *= x * x; x_n *= x_n * x_n;                 break; }
        case 10u: { x_n *= x * x; x_n *= x_n * x_n * x;             break; }
        case 11u: { x_n *= x;     x_n *= x_n * x; x_n *= x_n * x;   break; }
        case 12u: { x_n *= x * x; x_n *= x_n;     x_n *= x_n;       break; }
        case 13u: { x_n *= x * x; x_n *= x_n;     x_n *= x_n * x;   break; }
        case 14u: { x_n *= x * x; x_n *= x_n * x; x_n *= x_n;       break; }
        case 15u: { x_n *= x;     x_n *= x_n * x; x_n *= x_n * x_n; break; }
        default:  { x_n = ( double )0.0; }
    };

    if( n_div_16 > 0u ){ x *= x; x *= x; x *= x; x *= x; }

    switch( n_div_16 )
    {
        case  0u: { x_n  = ( n_mod_16 != 0u ) ? x_n : ( double )1.0; break; }
        case  1u: { x_n *= x;                                           break; }
        case  2u: { x   *= x; x_n *= x;                                 break; }
        case  3u: { x_n *= x * x * x;                                   break; }
        case  4u: { x   *= x; x *= x; x_n *= x;                         break; }
        case  5u: { x_n *= x; x *= x; x *= x; x_n *= x;                 break; }
        case  6u: { x   *= x * x; x *= x; x_n *= x;                     break; }
        case  7u: { x_n *= x; x *= x * x; x *= x; x_n *= x;             break; }
        case  8u: { x *= x; x *= x; x*= x; x_n *= x;                    break; }
        case  9u: { x *= x * x; x *= x * x; x_n *= x;                   break; }
        case 10u: { x_n *= x; x *= x * x; x *= x * x; x_n *= x;         break; }
        case 11u: { x_n *= x * x; x *= x * x; x *= x * x; x_n *= x;     break; }
        case 12u: { x *= x; x *= x; x_n *= x; x *= x; x_n *= x;         break; }
        case 13u: { x_n *= x; x *= x; x *= x; x_n *= x; x *= x;
                    x_n *= x; break; }

        case 14u: { x_n *= x * x; x *= x; x *= x; x_n *= x; x *= x;
                    x_n *= x; break; }

        case 15u: { x *= x * x; x_n *= x * x; x *= x * x; x_n *= x;    break; }

        default:
        {
            unsigned int ii = 0u;
            unsigned int nn = n_div_16 % 16u;

            for( ; ii < nn ; ++ii ) x_n *= x;

            x *= x; x *= x; x *= x; x *= x;
            nn = ( n_div_16 - nn ) >> 4u;

            for( ii = 0u ; ii < nn ; ++ii ) x_n *= x;
        }
    };

    return x_n;
    #endif /* defined( __OPENCL_VERSION__ ) */
}

#endif /* XFIELDS_HEADERS_POWER_H_H__ */

#ifndef XFIELDS_COMPLEX_ERROR_FUNCTION_H
#define XFIELDS_COMPLEX_ERROR_FUNCTION_H

/** \file complex_error_function.h
  * \note always include headers/constants.h, headers/power_n.h, and
  *       headers/sincos.h first! */

#include <stdbool.h>  //only_for_context cpu_serial cpu_openmp
#include <math.h>     //only_for_context cpu_serial cpu_openmp

/* These parameters correspond to the original algorithm developed by Gautschi
 * with a target accuracy of < 0.5 x 10^{-10} in the *absolute* error. Upstream
 * cernlib had switched to more aggressive parameters targeting approx. a
 * *relative* error > 0.5 x 10^{-14} instead -> see the values in comments
 * after the defines. In order to properly use them, you also have to define
 *
 * FADDEEVA_NO_GZ_WEIGHT_FN
 *
 * as compile parameter / compiler flag, this sets g(z) = 1 for all z. */

#if !defined( FADDEEVA_X_LIMIT )
    #define FADDEEVA_X_LIMIT 5.33           /* CERNLib value: 8.3 */
#endif /* !defined( FADDEEVA_X_LIMIT ) */

#if !defined( FADDEEVA_Y_LIMIT )
    #define FADDEEVA_Y_LIMIT 4.29           /* CERNLib value: 7.4 */
#endif /* !defined( FADDEEVA_Y_LIMIT ) */

#if !defined( FADDEEVA_H0 )
    #define FADDEEVA_H0 1.6                 /* CERNLib value: 1.6, unchanged */
#endif /* !defined( FADDEEVA_H0 ) */

#if !defined( FADDEEVA_NU_0 )
    #define FADDEEVA_NU_0 10                /* CERNLib value: 10, unchanged */
#endif /* !defined( FADDEEVA_NU_0 ) */

#if !defined( FADDEEVA_NU_1 )
    #define FADDEEVA_NU_1 21                /* CERNLib value: 26 */
#endif /* !defined( FADDEEVA_NU_1 ) */

#if !defined( FADDEEVA_N0 )
    #define FADDEEVA_N0 7                   /* CERNLib value: 7, unchanged */
#endif /* !defined( FADDEEVA_N0 ) */

#if !defined( FADDEEVA_N1 )
    #define FADDEEVA_N1 23                  /* CERNLib value: 16 */
#endif /* !defined( FADDEEVA_N1 ) */

#if !defined( FADDEEVA_CONT_FRAC_K )
    #define FADDEEVA_CONT_FRAC_K 9          /* CERNLib value: 9, unchanged */
#endif /* !defined( FADDEEVA_CONT_FRAC_K ) */

/* ************************************************************************* */

/** \fn void cerrf_q1( double const, double const, double*, double* )
 *  \brief calculates the Faddeeva function w(z) for z = x + i * y in Q1
 *
 *  \param[in] x real component of argument z
 *  \param[in] y imaginary component of argument z
 *  \param[out] out_x pointer to real component of result
 *  \param[out] out_y pointer to imanginary component of result
 *
 *  \warning This function assumes that x and y are > 0 i.e., that z is
 *           from the first quadrant Q1 of the complex plane. Use cerrf if
 *           you need a more general function
 *
 *  \note    Based upon the algorithm developed by W. Gautschi 1970,
 *           "Efficient Computation of the Complex Error Function",
 *           SIAM Journal on Numerical Analysis, Vol. 7, Issue 1. 1970,
 *           pages 187-198, https://epubs.siam.org/doi/10.1137/0707012
 */

 static inline void cerrf_q1(
    double const x, double const y,
    double*   out_x,
    double*   out_y )
{
    /* This implementation corresponds closely to the previously used
     * "CERNLib C" version, translated from the FORTRAN function written at
     * CERN by K. Koelbig, Program C335, 1970. The main difference to
     * Gautschi's formulation is a split in the main loop and the introduction
     * of arrays to store the intermediate results as a consequence of this.
     * The version implemented here should perform roughly equally well or even
     * slightly better on modern out-of-order super-scalar CPUs but has
     * drastically improved performance on GPUs and GPU-like systems.
     *
     * See also M. Bassetti and G.A. Erskine,
     * "Closed expression for the electric field of a two-dimensional Gaussian
     *  charge density", CERN-ISR-TH/80-06; */

    double inv_h2   = ( double )1.0;
    double y_plus_h = y;
    double temp, Rx, Ry, Sx, Sy, Wx, Wy, h2_n, nn;

    int nu = ( int )FADDEEVA_CONT_FRAC_K;
    int N  = 0;
    int n  = 0;

    bool use_taylor_sum;
    Ry = Sx = Sy = h2_n = ( double )0.0;

    /* R_0 ... rectangle with width FADDEEVA_X_LIMIT and
     *         height FADDEEVA_Y_LIMIT. Inside R_0, w(z) is calculated using
     *         a truncated Taylor expansion. Outside, a Gauss--Hermite
     *         quadrature in the guise of a continuos fraction is used */

    use_taylor_sum = ( ( y < ( double )FADDEEVA_Y_LIMIT ) &&
                       ( x < ( double )FADDEEVA_X_LIMIT ) );

	if( use_taylor_sum )
    {
        #if !defined( FADDEEVA_NO_GZ_WEIGHT_FN )
        /* calculate g(z) = sqrt( 1 - (x/x0)^2 ) * ( 1 - y/y0 ) */
        temp  = x * ( ( double )1. / ( double )FADDEEVA_X_LIMIT );
        temp  = ( ( double )1.0 +  temp ) * ( ( double )1.0 - temp );
        temp  = sqrt( temp );
        temp *= ( double )1. - y * ( ( double )1. / ( double )FADDEEVA_Y_LIMIT );
        /*now: temp = g(z) */
        #else /* !defined( FADDEEVA_NO_GZ_WEIGHT_FN ) */
        temp = ( double )1.;
        #endif /* defined( FADDEEVA_NO_GZ_WEIGHT_FN ) */

        nu   = ( y > ( double )REAL_EPSILON )
             ? ( int )FADDEEVA_NU_0 + ( int )( ( double )FADDEEVA_NU_1 * temp )
             : ( int )0;

        N         = ( int )FADDEEVA_N0 + ( int )( ( double )FADDEEVA_N1 * temp );
        h2_n      = ( double )FADDEEVA_H0 * temp; /* h(z) = h_0 * g(z) */
        y_plus_h += h2_n; /* y_plus_h = y + h(z) */
        h2_n     *= ( double )2.; /* now: h2_n = 2 * h(z) */
        inv_h2    = ( double )1. / h2_n;
        h2_n      = power_n( h2_n, N - 1 ); /* finally: h2_n = (2*h(z))^(N-1) */
    }

    /* If h(z) is so close to 0 that it is practically 0, there is no
     * point in doing the extra work for the Taylor series -> in that
     * very unlikely case, use the continuos fraction & verify result! */
    use_taylor_sum &= ( h2_n > ( double )REAL_EPSILON );

    Rx = ( y > ( double )REAL_EPSILON )
       ? ( double )0.0 : exp( -x * x ) / ( double )TWO_OVER_SQRT_PI;

    n = nu;
    nn = ( double )n;

    /* z outside of R_0: continuos fraction / Gauss - Hermite quadrature
     * z inside  of R_0: first iterations of recursion until n == N */
    for( ; n > N ; --n, nn -= ( double )1.0 )
    {
        Wx     = y_plus_h + nn * Rx;
        Wy     = x - nn * Ry;
        temp   = ( Wx * Wx ) + ( Wy * Wy );
        Rx     = ( double )0.5 * Wx;
        Ry     = ( double )0.5 * Wy;
        temp   = ( double )1.0 / temp;
        Rx    *= temp;
        Ry    *= temp;
    }

    /* loop rejects everything if z is not in R_0 because then n == 0 already;
     * otherwise, N iterations until taylor expansion is summed up */
    for( ; n > 0 ; --n, nn -= ( double )1.0 )
    {
        Wx     = y_plus_h + nn * Rx;
        Wy     = x - nn * Ry;
        temp   = ( Wx * Wx ) + ( Wy * Wy );
        Rx     = ( double )0.5 * Wx;
        Ry     = ( double )0.5 * Wy;
        temp   = ( double )1.0 / temp;
        Rx    *= temp;
        Ry    *= temp;

        Wx     = h2_n + Sx;
        h2_n  *= inv_h2;
        Sx     = Rx * Wx - Ry * Sy;
        Sy     = Ry * Wx + Rx * Sy;
    }

    if( use_taylor_sum )
    {
        Wx = ( double )TWO_OVER_SQRT_PI * Sx;
        Wy = ( double )TWO_OVER_SQRT_PI * Sy;
    }
    else
    {
        Wx = ( double )TWO_OVER_SQRT_PI * Rx;
        Wy = ( double )TWO_OVER_SQRT_PI * Ry;
    }

    *out_x = Wx;
    *out_y = Wy;
}

/** \fn void cerrf( double const x, double const y, double* out_x, double* out_y )
 *  \brief calculates the Faddeeva function w(z) for general z = x + i * y
 *
 *   Calls cerrf_q1 internally for |x| and |y| on quadrant Q1 and
 *   transforms the result to Q2, Q3, and Q4 before returning them via
 *   out_x and out_y.
 *
 *  \param[in] x real component of argument z
 *  \param[in] y imaginary component of argument z
 *  \param[out] out_x pointer to real component of result
 *  \param[out] out_y pointer to imanginary component of result
 *
 */

 static inline void cerrf( double x, double y,
    double*   out_x, double*   out_y )
{
    double const sign_x = ( double )( ( x >= ( double )0. ) - ( x < ( double )0. ) );
    double const sign_y = ( double )( ( y >= ( double )0. ) - ( y < ( double )0. ) );
    double Wx, Wy;

    x *= sign_x;
    y *= sign_y;

    cerrf_q1( x, y, &Wx, &Wy );

    if( sign_y < ( double )0.0 )  /* Quadrants Q3 and Q4 */
    {
        double const exp_arg  = ( y - x ) * ( y + x );
        double const trig_arg = ( double )2. * x * y;
        double const exp_factor = ( double )2. * exp( exp_arg );
        double sin_arg, cos_arg;

        xsuite_sincos( trig_arg, &sin_arg, &cos_arg );
        Wx = exp_factor * cos_arg - Wx;
        Wy = exp_factor * sin_arg + Wy;
    }

    *out_x = Wx;
    *out_y = sign_x * Wy; /* Takes care of Quadrants Q2 and Q3 */
}

#endif /* XFIELDS_COMPLEX_ERROR_FUNCTION_H */


#ifndef XFIEDLS_BIGUASSIIAN_H
#define XFIEDLS_BIGUASSIIAN_H

// for quick test with gcc
//#include "constants.h" //only_for_context none
//#include "complex_error_function.h" //only_for_context none

 static inline
void get_transv_field_gauss_round(
    double sigma, double Delta_x, double Delta_y,
    double x, double y,
    double* Ex,
    double* Ey)
{
  double r2, temp;

  r2 = (x-Delta_x)*(x-Delta_x)+(y-Delta_y)*(y-Delta_y);
  if (r2<1e-20) temp = sqrt(r2)/(2.*PI*EPSILON_0*sigma); //linearised
  else          temp = (1-exp(-0.5*r2/(sigma*sigma)))/(2.*PI*EPSILON_0*r2);

  (*Ex) = temp * (x-Delta_x);
  (*Ey) = temp * (y-Delta_y);
}

 static inline
void get_transv_field_gauss_ellip(
        double sigma_x,  double sigma_y,
        double Delta_x,  double Delta_y,
        const double x,
	const double y,
        double* Ex_out,
        double* Ey_out)
{
  double sigmax = sigma_x;
  double sigmay = sigma_y;

  // I always go to the first quadrant and then apply the signs a posteriori
  // numerically more stable (see http://inspirehep.net/record/316705/files/slac-pub-5582.pdf)

  double abx = fabs(x - Delta_x);
  double aby = fabs(y - Delta_y);

  //printf("x = %.2e y = %.2e abx = %.2e aby = %.2e", xx, yy, abx, aby);

  double S, factBE, Ex, Ey;
  double etaBE_re, etaBE_im, zetaBE_re, zetaBE_im;
  double w_etaBE_re, w_etaBE_im, w_zetaBE_re, w_zetaBE_im;
  double expBE;

  if (sigmax>sigmay){
    S = sqrt(2.*(sigmax*sigmax-sigmay*sigmay));
    factBE = 1./(2.*EPSILON_0*SQRT_PI*S);

    etaBE_re = sigmay/sigmax*abx;
    etaBE_im = sigmax/sigmay*aby;

    zetaBE_re = abx;
    zetaBE_im = aby;

    //w_zetaBE_re, w_zetaBE_im = wfun(zetaBE_re/S, zetaBE_im/S)
    cerrf(zetaBE_re/S, zetaBE_im/S , &(w_zetaBE_re), &(w_zetaBE_im));
    //w_etaBE_re, w_etaBE_im = wfun(etaBE_re/S, etaBE_im/S)
    cerrf(etaBE_re/S, etaBE_im/S , &(w_etaBE_re), &(w_etaBE_im));

    expBE = exp(-abx*abx/(2*sigmax*sigmax)-aby*aby/(2*sigmay*sigmay));

    Ex = factBE*(w_zetaBE_im - w_etaBE_im*expBE);
    Ey = factBE*(w_zetaBE_re - w_etaBE_re*expBE);
  }
  else if (sigmax<sigmay){
    S = sqrt(2.*(sigmay*sigmay-sigmax*sigmax));
    factBE = 1./(2.*EPSILON_0*SQRT_PI*S);

    etaBE_re = sigmax/sigmay*aby;
    etaBE_im = sigmay/sigmax*abx;

    zetaBE_re = aby;
    zetaBE_im = abx;

    //w_zetaBE_re, w_zetaBE_im = wfun(zetaBE_re/S, zetaBE_im/S)
    cerrf(zetaBE_re/S, zetaBE_im/S , &(w_zetaBE_re), &(w_zetaBE_im));
    //w_etaBE_re, w_etaBE_im = wfun(etaBE_re/S, etaBE_im/S)
    cerrf(etaBE_re/S, etaBE_im/S , &(w_etaBE_re), &(w_etaBE_im));

    expBE = exp(-aby*aby/(2*sigmay*sigmay)-abx*abx/(2*sigmax*sigmax));

    Ey = factBE*(w_zetaBE_im - w_etaBE_im*expBE);
    Ex = factBE*(w_zetaBE_re - w_etaBE_re*expBE);
  }
  else{
    //printf("Round beam not implemented!\n");
    //exit(1);
    Ex = Ey = 0.;
  }

  if((x - Delta_x)<0) Ex=-Ex;
  if((y - Delta_y)<0) Ey=-Ey;

  (*Ex_out) = Ex;
  (*Ey_out) = Ey;
}

 static inline
void get_Ex_Ey_gauss(
             const double  x,
             const double  y,
             const double  sigma_x,
             const double  sigma_y,
             const double  min_sigma_diff,
             double* Ex_ptr,
             double* Ey_ptr){

	if (fabs(sigma_x-sigma_y)< min_sigma_diff){
	    double sigma = 0.5*(sigma_x+sigma_y);
	    	get_transv_field_gauss_round(sigma, 0., 0., x, y, Ex_ptr, Ey_ptr);
	}
	else{
	    get_transv_field_gauss_ellip(
	            sigma_x, sigma_y, 0., 0., x, y, Ex_ptr, Ey_ptr);

	}
}

#ifndef NOFIELDMAP

 static inline
void BiGaussianFieldMap_get_dphi_dx_dphi_dy(
           BiGaussianFieldMapData fmap,
                    const double  x,
                    const double  y,
                          double* dphi_dx,
                          double* dphi_dy){

    const double sigma_x = BiGaussianFieldMapData_get_sigma_x(fmap);
    const double sigma_y = BiGaussianFieldMapData_get_sigma_y(fmap);
    const double mean_x = BiGaussianFieldMapData_get_mean_x(fmap);
    const double mean_y = BiGaussianFieldMapData_get_mean_y(fmap);
    const double min_sigma_diff = BiGaussianFieldMapData_get_min_sigma_diff(fmap);

    double Ex, Ey;
    get_Ex_Ey_gauss(
             x-mean_x,
             y-mean_y,
             sigma_x,
             sigma_y,
             min_sigma_diff,
             &Ex,
             &Ey);

    *dphi_dx = -Ex;
    *dphi_dy = -Ey;
}
#endif

#endif

#ifndef XFIELDS_QGAUSSIAN 
#define XFIELDS_QGAUSSIAN 

 static inline
double LongitudinalProfileQGaussian_line_density_scalar(
		LongitudinalProfileQGaussianData prof, double z){

    const double number_of_particles = 
	    LongitudinalProfileQGaussianData_get_number_of_particles(prof);
    const double q = LongitudinalProfileQGaussianData_get__q_param(prof);
    const double cq = LongitudinalProfileQGaussianData_get__cq_param(prof);
    const double q_tol = LongitudinalProfileQGaussianData_get__q_tol(prof);
    const double z0 = LongitudinalProfileQGaussianData_get__z0(prof);
    const double beta_param = LongitudinalProfileQGaussianData_get__beta_param(prof);
    const double sqrt_beta_param = 
	    LongitudinalProfileQGaussianData_get__sqrt_beta_param(prof);
    const double z_min = LongitudinalProfileQGaussianData_get__support_min(prof);
    const double z_max = LongitudinalProfileQGaussianData_get__support_max(prof);

    const double factor = number_of_particles*sqrt_beta_param/cq; 


    if (fabs(q-1.) < q_tol){
	if (z<z_max && z>z_min){
	    double z_m_z0 = z - z0;
		return factor*exp(-beta_param*z_m_z0*z_m_z0 );
	}
	else{
		return 0; 
	}
    }
    else{
    	double exponent = 1./(1.-q);
	if (z<z_max && z>z_min){
	    double z_m_z0 = z - z0;
    		double q_exp_arg =  -(beta_param*z_m_z0*z_m_z0 );
    		double q_exp_res = pow(
	    	 (1.+(1.-q)*q_exp_arg), exponent );
    		return factor*q_exp_res;
	}
	else{
		return 0; 
	}
    }
}



 
void line_density_qgauss(LongitudinalProfileQGaussianData prof,
		               const int64_t n,
		    const double* z, 
		          double* res){

//   #pragma omp parallel for //only_for_context cpu_openmp 
for (int ii=0; ii<n; ii++){ //autovectorized


       res[ii] = LongitudinalProfileQGaussian_line_density_scalar(prof, z[ii]);
  
}//end autovectorized

}

#endif

#ifndef XFIELDS_SPACECHARGEBIGAUSSIAN_H
#define XFIELDS_SPACECHARGEBIGAUSSIAN_H

 static inline
void SpaceChargeBiGaussian_track_local_particle(
		 SpaceChargeBiGaussianData el, LocalParticle* part0){

    const double length = SpaceChargeBiGaussianData_get_length(el);
    BiGaussianFieldMapData fmap = SpaceChargeBiGaussianData_getp_fieldmap(el);
    LongitudinalProfileQGaussianData prof = 
	    SpaceChargeBiGaussianData_getp_longitudinal_profile(el);


   int64_t const n_part = LocalParticle_get__num_active_particles(part0); //only_for_context cpu_serial cpu_openmp
//   #pragma omp parallel for                                       //only_for_context cpu_openmp
   for (int jj=0; jj<n_part; jj+=128){                 //only_for_context cpu_serial cpu_openmp
    //#pragma omp simd
    for (int iii=0; iii<128; iii++){                   //only_for_context cpu_serial cpu_openmp
      int const ii = iii+jj;                                      //only_for_context cpu_serial cpu_openmp
      if (ii<n_part){                                             //only_for_context cpu_serial cpu_openmp

        LocalParticle lpart = *part0;//only_for_context cpu_serial cpu_openmp
        LocalParticle* part = &lpart;//only_for_context cpu_serial cpu_openmp
        part->ipart = ii;            //only_for_context cpu_serial cpu_openmp

//        LocalParticle* part = part0;//only_for_context opencl cuda

	double const x = LocalParticle_get_x(part);
	double const y = LocalParticle_get_y(part);
	double const z = LocalParticle_get_zeta(part);

	double const q0 = LocalParticle_get_q0(part);
	double const mass0 = LocalParticle_get_mass0(part);
	double const chi = LocalParticle_get_chi(part);
	double const beta0 = LocalParticle_get_beta0(part);
	double const gamma0 = LocalParticle_get_gamma0(part);
	
   	double dphi_dx, dphi_dy;
	BiGaussianFieldMap_get_dphi_dx_dphi_dy(fmap, x, y,
                          &dphi_dx, &dphi_dy);

	const double lambda_z = 
		LongitudinalProfileQGaussian_line_density_scalar(prof, z);

        const double charge_mass_ratio = 
		             chi*QELEM*q0/(mass0*QELEM/(C_LIGHT*C_LIGHT));
        const double factor = -(charge_mass_ratio*q0*QELEM
                                *length*(1.-beta0*beta0)
                                /(gamma0*beta0*beta0*C_LIGHT*C_LIGHT));

	LocalParticle_add_to_px(part, factor*lambda_z*dphi_dx);
	LocalParticle_add_to_py(part, factor*lambda_z*dphi_dy);


     } //only_for_context cpu_serial cpu_openmp
    }  //only_for_context cpu_serial cpu_openmp
   }   //only_for_context cpu_serial cpu_openmp

}


#endif
#ifndef XTRACK_CONSTANTS_H
#define XTRACK_CONSTANTS_H

#if !defined( C_LIGHT )
    #define   C_LIGHT ( 299792458.0 )
#endif /* !defined( C_LIGHT ) */

#if !defined( EPSILON_0 )
    #define   EPSILON_0 (8.854187817620e-12)
#endif /* !defined( EPSILON_0 ) */

#if !defined( PI )
    #define PI (3.1415926535897932384626433832795028841971693993751)
#endif /* !defined( PI ) */

#if !defined( MU_0 )
    #define MU_0 (PI*4.0e-7)
#endif /* !defined( MU_0 ) */

#if !defined( DEG2RAD )
    #define DEG2RAD (0.0174532925199432957692369076848861271344287188854)
#endif /* !defiend( DEG2RAD ) */

#if !defined( RAD2DEG )
    #define RAD2DEG (57.29577951308232087679815481410517033240547246656442)
#endif /* !defiend( RAD2DEG ) */

#if !defined( SQRT_PI )
    #define SQRT_PI (1.7724538509055160272981674833411451827975494561224)
#endif /* !defined( SQRT_PI ) */

#if !defined( QELEM )
    #define QELEM (1.60217662e-19)
#endif /* !defined( QELEM ) */

#endif /* XTRACK_CONSTANTS_H */

#ifndef XTRACK_WIRE_H
#define XTRACK_WIRE_H

 static inline
void Wire_track_local_particle(WireData el, LocalParticle* part0){

    // Data from wire
    double const L_phy = WireData_get_L_phy(el);
    double const L_int = WireData_get_L_int(el);
    double const current = WireData_get_current(el);
    
    double const xma = WireData_get_xma(el);
    double const yma = WireData_get_yma(el);




   int64_t const n_part = LocalParticle_get__num_active_particles(part0); //only_for_context cpu_serial cpu_openmp
//   #pragma omp parallel for                                       //only_for_context cpu_openmp
   for (int jj=0; jj<n_part; jj+=128){                 //only_for_context cpu_serial cpu_openmp
    //#pragma omp simd
    for (int iii=0; iii<128; iii++){                   //only_for_context cpu_serial cpu_openmp
      int const ii = iii+jj;                                      //only_for_context cpu_serial cpu_openmp
      if (ii<n_part){                                             //only_for_context cpu_serial cpu_openmp

        LocalParticle lpart = *part0;//only_for_context cpu_serial cpu_openmp
        LocalParticle* part = &lpart;//only_for_context cpu_serial cpu_openmp
        part->ipart = ii;            //only_for_context cpu_serial cpu_openmp

//        LocalParticle* part = part0;//only_for_context opencl cuda


        // constants : EPSILON_0, MU_0, PI, C_LIGHT,
    
    
        // Data from particle 
        double x      = LocalParticle_get_x(part);
        double y      = LocalParticle_get_y(part);
        double D_x    = x-xma;
        double D_y    = y-yma;
        double R2     = D_x*D_x + D_y*D_y;

        
        // chi = q/q0 * m0/m
        // p0c : reference particle momentum
        // q0  : reference particle charge
        //double const chi    = LocalParticle_get_chi(part);
        double const p0c    = LocalParticle_get_p0c(part);
        double const q0     = LocalParticle_get_q0(part);

    
        // Computing the kick
        double const L1   = L_int + L_phy;
        double const L2   = L_int - L_phy;
        double const N    = MU_0*current*q0/(4*PI*p0c/C_LIGHT);
            
        double dpx  =  -N*D_x*(sqrt(L1*L1 + 4.0*R2) - sqrt(L2*L2 + 4.0*R2))/R2;
        double dpy  =  -N*D_y*(sqrt(L1*L1 + 4.0*R2) - sqrt(L2*L2 + 4.0*R2))/R2;
    
    
        // Update the particle properties
        LocalParticle_add_to_px(part, dpx );
        LocalParticle_add_to_py(part, dpy );



     } //only_for_context cpu_serial cpu_openmp
    }  //only_for_context cpu_serial cpu_openmp
   }   //only_for_context cpu_serial cpu_openmp

}

#endif
#ifndef XTRACK_XYSHIFT_H
#define XTRACK_XYSHIFT_H

 static inline
void XYShift_track_local_particle(XYShiftData el, LocalParticle* part0){

    double const minus_dx = -(XYShiftData_get_dx(el));
    double const minus_dy = -(XYShiftData_get_dy(el));


   int64_t const n_part = LocalParticle_get__num_active_particles(part0); //only_for_context cpu_serial cpu_openmp
//   #pragma omp parallel for                                       //only_for_context cpu_openmp
   for (int jj=0; jj<n_part; jj+=128){                 //only_for_context cpu_serial cpu_openmp
    //#pragma omp simd
    for (int iii=0; iii<128; iii++){                   //only_for_context cpu_serial cpu_openmp
      int const ii = iii+jj;                                      //only_for_context cpu_serial cpu_openmp
      if (ii<n_part){                                             //only_for_context cpu_serial cpu_openmp

        LocalParticle lpart = *part0;//only_for_context cpu_serial cpu_openmp
        LocalParticle* part = &lpart;//only_for_context cpu_serial cpu_openmp
        part->ipart = ii;            //only_for_context cpu_serial cpu_openmp

//        LocalParticle* part = part0;//only_for_context opencl cuda

    	LocalParticle_add_to_x(part, minus_dx );
    	LocalParticle_add_to_y(part, minus_dy );

     } //only_for_context cpu_serial cpu_openmp
    }  //only_for_context cpu_serial cpu_openmp
   }   //only_for_context cpu_serial cpu_openmp

}

#endif
#ifndef XTRACK_MONITORS_H
#define XTRACK_MONITORS_H

 static inline
void ParticlesMonitor_track_local_particle(ParticlesMonitorData el,
                       LocalParticle* part0){

    int64_t const start_at_turn = ParticlesMonitorData_get_start_at_turn(el);
    int64_t const stop_at_turn = ParticlesMonitorData_get_stop_at_turn(el);
    int64_t const part_id_start = ParticlesMonitorData_get_part_id_start(el);
    int64_t const part_id_end= ParticlesMonitorData_get_part_id_end(el);
    int64_t const ebe_mode = ParticlesMonitorData_get_ebe_mode(el);
    int64_t const n_repetitions = ParticlesMonitorData_get_n_repetitions(el);
    int64_t const repetition_period = ParticlesMonitorData_get_repetition_period(el);
    ParticlesData data = ParticlesMonitorData_getp_data(el);

    int64_t n_turns_record = stop_at_turn - start_at_turn;


   int64_t const n_part = LocalParticle_get__num_active_particles(part0); //only_for_context cpu_serial cpu_openmp
//   #pragma omp parallel for                                       //only_for_context cpu_openmp
   for (int jj=0; jj<n_part; jj+=128){                 //only_for_context cpu_serial cpu_openmp
    //#pragma omp simd
    for (int iii=0; iii<128; iii++){                   //only_for_context cpu_serial cpu_openmp
      int const ii = iii+jj;                                      //only_for_context cpu_serial cpu_openmp
      if (ii<n_part){                                             //only_for_context cpu_serial cpu_openmp

        LocalParticle lpart = *part0;//only_for_context cpu_serial cpu_openmp
        LocalParticle* part = &lpart;//only_for_context cpu_serial cpu_openmp
        part->ipart = ii;            //only_for_context cpu_serial cpu_openmp

//        LocalParticle* part = part0;//only_for_context opencl cuda

    int64_t at_turn;
    if (ebe_mode){
        at_turn = LocalParticle_get_at_element(part);
    }
    else{
        at_turn = LocalParticle_get_at_turn(part);
    }
    if (n_repetitions == 1){
        if (at_turn>=start_at_turn && at_turn<stop_at_turn){
            int64_t const particle_id = LocalParticle_get_particle_id(part);
            if (particle_id<part_id_end && particle_id>=part_id_start){
                int64_t const store_at =
                    n_turns_record * (particle_id - part_id_start)
                    + at_turn - start_at_turn;
                LocalParticle_to_Particles(part, data, store_at, 0);
            }
        }
    }
    else if (n_repetitions > 1){
        int64_t const i_frame = (at_turn - start_at_turn) / repetition_period;
        if (i_frame < n_repetitions
                && at_turn >= start_at_turn + i_frame*repetition_period
                && at_turn < stop_at_turn + i_frame*repetition_period
            ){
            int64_t const particle_id = LocalParticle_get_particle_id(part);
            if (particle_id<part_id_end && particle_id>=part_id_start){
                int64_t const store_at =
                    n_turns_record * (part_id_end  - part_id_start) * i_frame
                    + n_turns_record * (particle_id - part_id_start)
                    + (at_turn - i_frame * repetition_period) - start_at_turn;
                LocalParticle_to_Particles(part, data, store_at, 0);
            }
        }
    }


     } //only_for_context cpu_serial cpu_openmp
    }  //only_for_context cpu_serial cpu_openmp
   }   //only_for_context cpu_serial cpu_openmp



}

#endif

             
            void track_line(
                  int8_t* buffer,
                  int64_t* ele_offsets,
                  int64_t* ele_typeids,
                             ParticlesData particles,
                             int num_turns,
                             int ele_start,
                             int num_ele_track,
                             int flag_end_turn_actions,
                             int flag_reset_s_at_end_turn,
                             int flag_monitor,
                  int8_t* buffer_tbt_monitor,
                             int64_t offset_tbt_monitor,
                  int8_t* io_buffer){


            LocalParticle lpart;
            lpart.io_buffer = io_buffer;

            int64_t part_id = 0;                    //only_for_context cpu_serial cpu_openmp
//            int64_t part_id = blockDim.x * blockIdx.x + threadIdx.x; //only_for_context cuda
//            int64_t part_id = get_global_id(0);                    //only_for_context opencl


              int8_t* tbt_mon_pointer =
                            buffer_tbt_monitor + offset_tbt_monitor;
            ParticlesMonitorData tbt_monitor =
                            (ParticlesMonitorData) tbt_mon_pointer;

            int64_t part_capacity = ParticlesData_get__capacity(particles);
            if (part_id<part_capacity){
            Particles_to_LocalParticle(particles, &lpart, part_id);

            int64_t isactive = check_is_active(&lpart);

            for (int64_t iturn=0; iturn<num_turns; iturn++){

                if (!isactive){
                    break;
                }

                if (flag_monitor==1){
                    ParticlesMonitor_track_local_particle(tbt_monitor, &lpart);
                }

                for (int64_t ee=ele_start; ee<ele_start+num_ele_track; ee++){

                        if (flag_monitor==2){
                            ParticlesMonitor_track_local_particle(tbt_monitor, &lpart);
                        }

                          int8_t* el = buffer + ele_offsets[ee];
                        int64_t ee_type = ele_typeids[ee];

                        switch(ee_type){
        

                        case 0:


                            BeamBeamBiGaussian2D_track_local_particle((BeamBeamBiGaussian2DData) el, &lpart);
                            break;

                        case 1:


                            BeamBeamBiGaussian3D_track_local_particle((BeamBeamBiGaussian3DData) el, &lpart);
                            break;

                        case 2:


                            Cavity_track_local_particle((CavityData) el, &lpart);
                            break;

                        case 3:


                            DipoleEdge_track_local_particle((DipoleEdgeData) el, &lpart);
                            break;

                        case 4:


                            #ifdef XTRACK_GLOBAL_POSLIMIT
                            global_aperture_check(&lpart);
                            #endif

                            

                            Drift_track_local_particle((DriftData) el, &lpart);
                            break;

                        case 5:


                            Elens_track_local_particle((ElensData) el, &lpart);
                            break;

                        case 6:


                            LinearTransferMatrix_track_local_particle((LinearTransferMatrixData) el, &lpart);
                            break;

                        case 7:


                            Multipole_track_local_particle((MultipoleData) el, &lpart);
                            break;

                        case 8:


                            RFMultipole_track_local_particle((RFMultipoleData) el, &lpart);
                            break;

                        case 9:


                            ReferenceEnergyIncrease_track_local_particle((ReferenceEnergyIncreaseData) el, &lpart);
                            break;

                        case 10:


                            SRotation_track_local_particle((SRotationData) el, &lpart);
                            break;

                        case 11:


                            SpaceChargeBiGaussian_track_local_particle((SpaceChargeBiGaussianData) el, &lpart);
                            break;

                        case 12:


                            Wire_track_local_particle((WireData) el, &lpart);
                            break;

                        case 13:


                            XYShift_track_local_particle((XYShiftData) el, &lpart);
                            break;

                        case 14:


                            ParticlesMonitor_track_local_particle((ParticlesMonitorData) el, &lpart);
                            break;

                        } //switch
                    isactive = check_is_active(&lpart);
                    if (!isactive){
                        break;
                    }
                    increment_at_element(&lpart);
                } // for elements
                if (flag_end_turn_actions>0){
                    if (isactive){
                        increment_at_turn(&lpart, flag_reset_s_at_end_turn);
                    }
                }
            } // for turns

            LocalParticle_to_Particles(&lpart, particles, part_id, 1);

            }// if partid
        }//kernel
        
#ifndef XTRACK_RNG_H
#define XTRACK_RNG_H

//#include <stdint.h> //only_for_context none

 static inline
double rng_get (uint32_t *s1, uint32_t *s2, uint32_t *s3 )
{
#define MASK 0xffffffffUL
#define TAUSWORTHE(s,a,b,c,d) ((((s) &c) <<d) &MASK) ^ (((((s) <<a) &MASK)^(s)) >>b)

  *s1 = TAUSWORTHE (*s1, 13, 19, 4294967294UL, 12);
  *s2 = TAUSWORTHE (*s2, 2, 25, 4294967288UL, 4);
  *s3 = TAUSWORTHE (*s3, 3, 11, 4294967280UL, 17);

  return ((*s1) ^ (*s2) ^ (*s3)) / 4294967296.0 ;
}

 static inline
void rng_set (uint32_t *s1, uint32_t *s2, uint32_t *s3, uint32_t s )
{
  if (s == 0)
    s = 1;      /* default seed is 1 */

#define LCG(n) ((69069 * (n)) & 0xffffffffUL)
  *s1 = LCG (s);
  if (*s1 < 2) *s1 += 2UL;
  *s2 = LCG (*s1);
  if (*s2 < 8) *s2 += 8UL;
  *s3 = LCG (*s2);
  if (*s3 < 16) *s3 += 16UL;

  /* "warm it up" */
  rng_get (s1, s2, s3);
  rng_get (s1, s2, s3);
  rng_get (s1, s2, s3);
  rng_get (s1, s2, s3);
  rng_get (s1, s2, s3);
  rng_get (s1, s2, s3);
  return;
}

#endif /* XTRACK_RNG_H */

#ifndef XTRACK_PARTICLES_RNG_H
#define XTRACK_PARTICLES_RNG_H

 
void Particles_initialize_rand_gen(ParticlesData particles,
	  uint32_t* seeds, int n_init){

for (int ii=0; ii<n_init; ii++){ //autovectorized


	 uint32_t s1, s2, s3, s;
	 s = seeds[ii];

	 rng_set(&s1, &s2, &s3, s);

	 ParticlesData_set__rng_s1(particles, ii, s1);
	 ParticlesData_set__rng_s2(particles, ii, s2);
	 ParticlesData_set__rng_s3(particles, ii, s3);

}//end autovectorized


}

#endif
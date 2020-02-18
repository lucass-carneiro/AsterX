/*
Set up the initial data at all points on the numerical grid.
 */
void initial_data(const paramstruct *restrict params,REAL *restrict xx[3], REAL *restrict in_gfs) {
#include "set_Cparameters.h"

#pragma omp parallel for
    for(int i2=0; i2<Nxx_plus_2NGHOSTS2; i2++) {
        const REAL xx2 = xx[2][i2];
        for(int i1=0; i1<Nxx_plus_2NGHOSTS1; i1++) {
            const REAL xx1 = xx[1][i1];
            for(int i0=0; i0<Nxx_plus_2NGHOSTS0; i0++) {
                const REAL xx0 = xx[0][i0];
                   {
                         const double tmp0 = r0 + xx0;
                         const double tmp1 = M*tmp0;
                         const double tmp2 = 2*tmp1;
                         const double tmp3 = 2*r0;
                         const double tmp4 = 2*xx0;
                         const double tmp5 = tmp3 + tmp4;
                         const double tmp6 = tmp0*tmp5;
                         const double tmp7 = ((a)*(a));
                         const double tmp8 = 2*xx1;
                         const double tmp9 = tmp7*cos(tmp8);
                         const double tmp10 = tmp7 + tmp9;
                         const double tmp11 = tmp10 + tmp6;
                         const double tmp12 = 4*tmp1;
                         const double tmp13 = (1.0/(tmp11 + tmp12));
                         const double tmp14 = ((tmp0)*(tmp0));
                         const double tmp15 = cos(xx1);
                         const double tmp16 = ((tmp15)*(tmp15))*tmp7;
                         const double tmp17 = tmp14 + tmp16;
                         const double tmp18 = (1.0/(tmp17));
                         const double tmp19 = tmp18*tmp2;
                         const double tmp20 = tmp19 + 1;
                         const double tmp21 = sqrt(tmp20);
                         const double tmp22 = M*tmp21;
                         const double tmp23 = tmp13*tmp22;
                         const double tmp24 = (1.0/((tmp11)*(tmp11)));
                         const double tmp25 = tmp24*(tmp10 - tmp6);
                         const double tmp26 = 4*tmp25;
                         const double tmp27 = tmp23*tmp26*(tmp11 + tmp2);
                         const double tmp28 = tmp1*tmp18;
                         const double tmp29 = sin(xx1);
                         const double tmp30 = ((tmp29)*(tmp29)*(tmp29)*(tmp29));
                         const double tmp31 = tmp30*tmp7;
                         const double tmp32 = ((tmp20)*(tmp20));
                         const double tmp33 = tmp31*tmp32;
                         const double tmp34 = ((tmp29)*(tmp29));
                         const double tmp35 = tmp34*tmp7;
                         const double tmp36 = tmp14 + tmp19*tmp35 + tmp7;
                         const double tmp37 = tmp34*tmp36;
                         const double tmp38 = tmp20*tmp37;
                         const double tmp39 = -tmp17*tmp33 + tmp17*tmp38;
                         const double tmp40 = (1.0/(tmp39));
                         const double tmp41 = tmp17*pow(tmp20, 3.0/2.0)*tmp40;
                         const double tmp42 = 4*tmp14;
                         const double tmp43 = tmp23*tmp42;
                         const double tmp44 = ((a)*(a)*(a)*(a));
                         const double tmp45 = -M;
                         const double tmp46 = tmp2*tmp24*(8*((tmp0)*(tmp0)*(tmp0)*(tmp0)*(tmp0)) + 4*tmp0*tmp9*(tmp0*(M + tmp5) + tmp7) + tmp42*tmp7*(tmp45 + tmp5) + tmp44*(tmp0 + tmp45)*cos(4*xx1) + tmp44*(M + 3*r0 + 3*xx0));
                         const double tmp47 = tmp17*tmp37;
                         const double tmp48 = -M*tmp26*tmp31*tmp41 + tmp13*tmp34*tmp41*tmp46 + tmp27*tmp40*tmp47 + tmp40*tmp43*(-tmp33 + tmp38);
                         const double tmp49 = fabs(xx0);
                         const double tmp50 = pow(tmp49, 4.0/3.0);
                         const double tmp51 = cbrt(tmp40);
                         const double tmp52 = fabs(tmp29);
                         const double tmp53 = tmp51*pow(tmp52, 2.0/3.0);
                         const double tmp54 = tmp50*tmp53;
                         const double tmp55 = (1.0/(xx0));
                         const double tmp56 = tmp54*tmp55;
                         const double tmp57 = tmp29*tmp7;
                         const double tmp58 = tmp13*tmp21;
                         const double tmp59 = 8*tmp15;
                         const double tmp60 = tmp1*tmp59/tmp11;
                         const double tmp61 = a*tmp34;
                         const double tmp62 = 2*tmp61;
                         const double tmp63 = (1.0/3.0)*tmp48;
                         const double tmp64 = tmp20*tmp34;
                         const double tmp65 = a*tmp64;
                         const double tmp66 = ((xx0)*(xx0));
                         const double tmp67 = (1.0/(tmp66));
                         const double tmp68 = tmp54*tmp67;
                         const double tmp69 = ((a)*(a)*(a));
                         const double tmp70 = tmp34*tmp58;
                         const double tmp71 = tmp67/tmp34;
                         const double tmp72 = tmp40*((xx0)*(xx0)*(xx0)*(xx0));
                         const double tmp73 = tmp17*tmp32*tmp7;
                         const double tmp74 = tmp17*tmp20;
                         const double tmp75 = tmp36*tmp74;
                         const double tmp76 = -pow(tmp29, 6)*tmp72*tmp73 + tmp30*tmp72*tmp75;
                         const double tmp77 = (1.0/(tmp76));
                         const double tmp78 = tmp20*tmp54;
                         const double tmp79 = a*tmp78;
                         const double tmp80 = tmp17*tmp54;
                         const double tmp81 = tmp37*tmp54;
                         const double tmp82 = (1.0/((tmp76)*(tmp76)));
                         const double tmp83 = cbrt(tmp49)*tmp53*(((xx0) > 0) - ((xx0) < 0));
                         const double tmp84 = (4.0/3.0)*tmp83;
                         const double tmp85 = tmp37*tmp84;
                         const double tmp86 = M*tmp18;
                         const double tmp87 = 2*tmp86;
                         const double tmp88 = ((tmp17)*(tmp17));
                         const double tmp89 = (1.0/(tmp88));
                         const double tmp90 = tmp89*(-tmp3 - tmp4);
                         const double tmp91 = tmp2*tmp90;
                         const double tmp92 = tmp35*tmp87 + tmp35*tmp91 + tmp5;
                         const double tmp93 = tmp34*tmp54;
                         const double tmp94 = tmp92*tmp93;
                         const double tmp95 = tmp87 + tmp91;
                         const double tmp96 = tmp17*tmp64;
                         const double tmp97 = tmp31*tmp74*(tmp12*tmp90 + 4*tmp86) + tmp33*tmp5 - tmp38*tmp5 - tmp47*tmp95 - tmp92*tmp96;
                         const double tmp98 = (1.0/3.0)*tmp40;
                         const double tmp99 = tmp97*tmp98;
                         const double tmp100 = tmp81*tmp99;
                         const double tmp101 = tmp100 + tmp85 + tmp94;
                         const double tmp102 = pow(tmp40, 4.0/3.0)*pow(tmp49, 16.0/3.0)*pow(tmp52, 8.0/3.0)*tmp88;
                         const double tmp103 = -tmp100 - tmp85 - tmp94;
                         const double tmp104 = pow(tmp40, 2.0/3.0)*pow(tmp49, 8.0/3.0)*pow(tmp52, 4.0/3.0);
                         const double tmp105 = tmp104*tmp77;
                         const double tmp106 = tmp105*tmp47;
                         const double tmp107 = (1.0/2.0)*tmp106;
                         const double tmp108 = tmp105*tmp74;
                         const double tmp109 = -tmp17*tmp84 - tmp5*tmp54 - tmp80*tmp99;
                         const double tmp110 = -tmp104*tmp33 + tmp104*tmp38;
                         const double tmp111 = tmp110*tmp77;
                         const double tmp112 = tmp54*tmp95;
                         const double tmp113 = tmp112 + tmp20*tmp84 + tmp78*tmp99;
                         const double tmp114 = -tmp112*tmp62 - 2.0/3.0*tmp40*tmp61*tmp78*tmp97 - 8.0/3.0*tmp65*tmp83;
                         const double tmp115 = a*tmp96;
                         const double tmp116 = tmp105*tmp115;
                         const double tmp117 = (1.0/2.0)*tmp116;
                         const double tmp118 = 2*tmp15;
                         const double tmp119 = tmp118*tmp29;
                         const double tmp120 = tmp119*tmp54;
                         const double tmp121 = (2.0/3.0)*tmp15*tmp50*tmp51*(((tmp29) > 0) - ((tmp29) < 0))/cbrt(tmp52);
                         const double tmp122 = ((tmp29)*(tmp29)*(tmp29)*(tmp29)*(tmp29))*tmp44;
                         const double tmp123 = ((tmp29)*(tmp29)*(tmp29));
                         const double tmp124 = tmp123*tmp15;
                         const double tmp125 = tmp123*tmp36*tmp7;
                         const double tmp126 = tmp12*tmp15*tmp18;
                         const double tmp127 = tmp12*tmp89;
                         const double tmp128 = tmp124*tmp127;
                         const double tmp129 = tmp126*tmp57 + tmp128*tmp44;
                         const double tmp130 = tmp98*(-tmp118*tmp122*tmp32 + tmp118*tmp125*tmp20 - tmp119*tmp75 + tmp122*tmp20*tmp28*tmp59 + 4*tmp124*tmp73 - tmp125*tmp126 - tmp129*tmp96);
                         const double tmp131 = (1.0/2.0)*tmp82;
                         const double tmp132 = tmp130*tmp78;
                         const double tmp133 = tmp104*tmp110;
                         const double tmp134 = tmp131*tmp133;
                         const double tmp135 = (1.0/2.0)*tmp108;
                         in_gfs[IDX4S(ADD00GF,i0,i1,i2)] = tmp54*(tmp27 - tmp48*((2.0/3.0)*tmp28 + 1.0/3.0));
                         in_gfs[IDX4S(ADD01GF,i0,i1,i2)] = tmp56*tmp57*tmp58*tmp60;
                         in_gfs[IDX4S(ADD02GF,i0,i1,i2)] = tmp56*(-tmp22*tmp25*tmp62 + tmp63*tmp65)/tmp29;
                         in_gfs[IDX4S(ADD11GF,i0,i1,i2)] = tmp68*(tmp43 - tmp48*((1.0/3.0)*tmp14 + (1.0/3.0)*tmp16));
                         in_gfs[IDX4S(ADD12GF,i0,i1,i2)] = -tmp60*tmp68*tmp69*tmp70;
                         in_gfs[IDX4S(ADD22GF,i0,i1,i2)] = tmp54*tmp71*(-tmp37*tmp63 + tmp46*tmp70);
                         in_gfs[IDX4S(ALPHAGF,i0,i1,i2)] = (1.0/(tmp21));
                         in_gfs[IDX4S(BETU0GF,i0,i1,i2)] = 0;
                         in_gfs[IDX4S(BETU1GF,i0,i1,i2)] = 0;
                         in_gfs[IDX4S(BETU2GF,i0,i1,i2)] = 0;
                         in_gfs[IDX4S(CFGF,i0,i1,i2)] = pow(tmp39*tmp77, -1.0/6.0);
                         in_gfs[IDX4S(HDD00GF,i0,i1,i2)] = tmp78 - 1;
                         in_gfs[IDX4S(HDD01GF,i0,i1,i2)] = 0;
                         in_gfs[IDX4S(HDD02GF,i0,i1,i2)] = -tmp29*tmp55*tmp79;
                         in_gfs[IDX4S(HDD11GF,i0,i1,i2)] = tmp67*(-tmp66 + tmp80);
                         in_gfs[IDX4S(HDD12GF,i0,i1,i2)] = 0;
                         in_gfs[IDX4S(HDD22GF,i0,i1,i2)] = tmp71*(-tmp34*tmp66 + tmp81);
                         in_gfs[IDX4S(LAMBDAU0GF,i0,i1,i2)] = tmp101*tmp102*tmp33*tmp82 + tmp106*(tmp107*tmp113 + tmp114*tmp117) + tmp108*(tmp103*tmp107 + tmp34*xx0) + tmp111*(tmp107*tmp109 + xx0);
                         in_gfs[IDX4S(LAMBDAU1GF,i0,i1,i2)] = xx0*(tmp108*((1.0/2.0)*tmp111*(-tmp120*tmp36 - tmp121*tmp37 - tmp129*tmp93 - tmp130*tmp81) + (1.0/2.0)*sin(tmp8)) + ((tmp110)*(tmp110))*tmp131*(-tmp120*tmp7 + tmp121*tmp17 + tmp130*tmp80) + tmp115*tmp133*tmp82*(tmp119*tmp79 + tmp121*tmp65 + tmp128*tmp54*tmp69 + tmp132*tmp61) + tmp134*tmp47*(-tmp121*tmp20 - tmp127*tmp15*tmp54*tmp57 - tmp132));
                         in_gfs[IDX4S(LAMBDAU2GF,i0,i1,i2)] = tmp29*xx0*(tmp102*tmp103*tmp131*tmp32*tmp61 + tmp106*(tmp113*tmp117 + tmp114*tmp135) + tmp109*tmp115*tmp134 + 2*tmp116*(tmp101*tmp135 - tmp55));
                         in_gfs[IDX4S(TRKGF,i0,i1,i2)] = tmp48;
                         in_gfs[IDX4S(VETU0GF,i0,i1,i2)] = tmp19/tmp20;
                         in_gfs[IDX4S(VETU1GF,i0,i1,i2)] = 0;
                         in_gfs[IDX4S(VETU2GF,i0,i1,i2)] = 0;
                   }
                
            } // END LOOP: for(int i0=0; i0<Nxx_plus_2NGHOSTS0; i0++)
        } // END LOOP: for(int i1=0; i1<Nxx_plus_2NGHOSTS1; i1++)
    } // END LOOP: for(int i2=0; i2<Nxx_plus_2NGHOSTS2; i2++)
}

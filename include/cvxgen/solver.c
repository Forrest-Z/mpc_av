/* Produced by CVXGEN, 2019-12-04 04:23:13 -0500.  */
/* CVXGEN is Copyright (C) 2006-2017 Jacob Mattingley, jem@cvxgen.com. */
/* The code in this file is Copyright (C) 2006-2017 Jacob Mattingley. */
/* CVXGEN, or solvers produced by CVXGEN, cannot be used for commercial */
/* applications without prior written permission from Jacob Mattingley. */

/* Filename: solver.c. */
/* Description: Main solver file. */
#include "solver.h"
double eval_gap(void) {
  int i;
  double gap;
  gap = 0;
  for (i = 0; i < 306; i++)
    gap += work.z[i]*work.s[i];
  return gap;
}
void set_defaults(void) {
  settings.resid_tol = 1e-6;
  settings.eps = 1e-4;
  settings.max_iters = 25;
  settings.refine_steps = 1;
  settings.s_init = 1;
  settings.z_init = 1;
  settings.debug = 0;
  settings.verbose = 1;
  settings.verbose_refinement = 0;
  settings.better_start = 1;
  settings.kkt_reg = 1e-7;
}
void setup_pointers(void) {
  work.y = work.x + 306;
  work.s = work.x + 408;
  work.z = work.x + 714;
  vars.u_0 = work.x + 102;
  vars.u_1 = work.x + 104;
  vars.u_2 = work.x + 106;
  vars.u_3 = work.x + 108;
  vars.u_4 = work.x + 110;
  vars.u_5 = work.x + 112;
  vars.u_6 = work.x + 114;
  vars.u_7 = work.x + 116;
  vars.u_8 = work.x + 118;
  vars.u_9 = work.x + 120;
  vars.u_10 = work.x + 122;
  vars.u_11 = work.x + 124;
  vars.u_12 = work.x + 126;
  vars.u_13 = work.x + 128;
  vars.u_14 = work.x + 130;
  vars.u_15 = work.x + 132;
  vars.u_16 = work.x + 134;
  vars.u_17 = work.x + 136;
  vars.u_18 = work.x + 138;
  vars.u_19 = work.x + 140;
  vars.u_20 = work.x + 142;
  vars.u_21 = work.x + 144;
  vars.u_22 = work.x + 146;
  vars.u_23 = work.x + 148;
  vars.u_24 = work.x + 150;
  vars.u_25 = work.x + 152;
  vars.u_26 = work.x + 154;
  vars.u_27 = work.x + 156;
  vars.u_28 = work.x + 158;
  vars.u_29 = work.x + 160;
  vars.u_30 = work.x + 162;
  vars.u_31 = work.x + 164;
  vars.u_32 = work.x + 166;
  vars.u_33 = work.x + 168;
  vars.u_34 = work.x + 170;
  vars.u_35 = work.x + 172;
  vars.u_36 = work.x + 174;
  vars.u_37 = work.x + 176;
  vars.u_38 = work.x + 178;
  vars.u_39 = work.x + 180;
  vars.u_40 = work.x + 182;
  vars.u_41 = work.x + 184;
  vars.u_42 = work.x + 186;
  vars.u_43 = work.x + 188;
  vars.u_44 = work.x + 190;
  vars.u_45 = work.x + 192;
  vars.u_46 = work.x + 194;
  vars.u_47 = work.x + 196;
  vars.u_48 = work.x + 198;
  vars.u_49 = work.x + 200;
  vars.u_50 = work.x + 202;
  vars.x_1 = work.x + 204;
  vars.x_2 = work.x + 206;
  vars.x_3 = work.x + 208;
  vars.x_4 = work.x + 210;
  vars.x_5 = work.x + 212;
  vars.x_6 = work.x + 214;
  vars.x_7 = work.x + 216;
  vars.x_8 = work.x + 218;
  vars.x_9 = work.x + 220;
  vars.x_10 = work.x + 222;
  vars.x_11 = work.x + 224;
  vars.x_12 = work.x + 226;
  vars.x_13 = work.x + 228;
  vars.x_14 = work.x + 230;
  vars.x_15 = work.x + 232;
  vars.x_16 = work.x + 234;
  vars.x_17 = work.x + 236;
  vars.x_18 = work.x + 238;
  vars.x_19 = work.x + 240;
  vars.x_20 = work.x + 242;
  vars.x_21 = work.x + 244;
  vars.x_22 = work.x + 246;
  vars.x_23 = work.x + 248;
  vars.x_24 = work.x + 250;
  vars.x_25 = work.x + 252;
  vars.x_26 = work.x + 254;
  vars.x_27 = work.x + 256;
  vars.x_28 = work.x + 258;
  vars.x_29 = work.x + 260;
  vars.x_30 = work.x + 262;
  vars.x_31 = work.x + 264;
  vars.x_32 = work.x + 266;
  vars.x_33 = work.x + 268;
  vars.x_34 = work.x + 270;
  vars.x_35 = work.x + 272;
  vars.x_36 = work.x + 274;
  vars.x_37 = work.x + 276;
  vars.x_38 = work.x + 278;
  vars.x_39 = work.x + 280;
  vars.x_40 = work.x + 282;
  vars.x_41 = work.x + 284;
  vars.x_42 = work.x + 286;
  vars.x_43 = work.x + 288;
  vars.x_44 = work.x + 290;
  vars.x_45 = work.x + 292;
  vars.x_46 = work.x + 294;
  vars.x_47 = work.x + 296;
  vars.x_48 = work.x + 298;
  vars.x_49 = work.x + 300;
  vars.x_50 = work.x + 302;
  vars.x_51 = work.x + 304;
}
void setup_indexed_params(void) {
  /* In CVXGEN, you can say */
  /*   parameters */
  /*     A[i] (5,3), i=1..4 */
  /*   end */
  /* This function sets up A[2] to be a pointer to A_2, which is a length-15 */
  /* vector of doubles. */
  /* If you access parameters that you haven't defined in CVXGEN, the result */
  /* is undefined. */
  params.x[0] = params.x_0;
}
void setup_indexed_optvars(void) {
  /* In CVXGEN, you can say */
  /*   variables */
  /*     x[i] (5), i=2..4 */
  /*   end */
  /* This function sets up x[3] to be a pointer to x_3, which is a length-5 */
  /* vector of doubles. */
  /* If you access variables that you haven't defined in CVXGEN, the result */
  /* is undefined. */
  vars.u[0] = vars.u_0;
  vars.x[1] = vars.x_1;
  vars.u[1] = vars.u_1;
  vars.x[2] = vars.x_2;
  vars.u[2] = vars.u_2;
  vars.x[3] = vars.x_3;
  vars.u[3] = vars.u_3;
  vars.x[4] = vars.x_4;
  vars.u[4] = vars.u_4;
  vars.x[5] = vars.x_5;
  vars.u[5] = vars.u_5;
  vars.x[6] = vars.x_6;
  vars.u[6] = vars.u_6;
  vars.x[7] = vars.x_7;
  vars.u[7] = vars.u_7;
  vars.x[8] = vars.x_8;
  vars.u[8] = vars.u_8;
  vars.x[9] = vars.x_9;
  vars.u[9] = vars.u_9;
  vars.x[10] = vars.x_10;
  vars.u[10] = vars.u_10;
  vars.x[11] = vars.x_11;
  vars.u[11] = vars.u_11;
  vars.x[12] = vars.x_12;
  vars.u[12] = vars.u_12;
  vars.x[13] = vars.x_13;
  vars.u[13] = vars.u_13;
  vars.x[14] = vars.x_14;
  vars.u[14] = vars.u_14;
  vars.x[15] = vars.x_15;
  vars.u[15] = vars.u_15;
  vars.x[16] = vars.x_16;
  vars.u[16] = vars.u_16;
  vars.x[17] = vars.x_17;
  vars.u[17] = vars.u_17;
  vars.x[18] = vars.x_18;
  vars.u[18] = vars.u_18;
  vars.x[19] = vars.x_19;
  vars.u[19] = vars.u_19;
  vars.x[20] = vars.x_20;
  vars.u[20] = vars.u_20;
  vars.x[21] = vars.x_21;
  vars.u[21] = vars.u_21;
  vars.x[22] = vars.x_22;
  vars.u[22] = vars.u_22;
  vars.x[23] = vars.x_23;
  vars.u[23] = vars.u_23;
  vars.x[24] = vars.x_24;
  vars.u[24] = vars.u_24;
  vars.x[25] = vars.x_25;
  vars.u[25] = vars.u_25;
  vars.x[26] = vars.x_26;
  vars.u[26] = vars.u_26;
  vars.x[27] = vars.x_27;
  vars.u[27] = vars.u_27;
  vars.x[28] = vars.x_28;
  vars.u[28] = vars.u_28;
  vars.x[29] = vars.x_29;
  vars.u[29] = vars.u_29;
  vars.x[30] = vars.x_30;
  vars.u[30] = vars.u_30;
  vars.x[31] = vars.x_31;
  vars.u[31] = vars.u_31;
  vars.x[32] = vars.x_32;
  vars.u[32] = vars.u_32;
  vars.x[33] = vars.x_33;
  vars.u[33] = vars.u_33;
  vars.x[34] = vars.x_34;
  vars.u[34] = vars.u_34;
  vars.x[35] = vars.x_35;
  vars.u[35] = vars.u_35;
  vars.x[36] = vars.x_36;
  vars.u[36] = vars.u_36;
  vars.x[37] = vars.x_37;
  vars.u[37] = vars.u_37;
  vars.x[38] = vars.x_38;
  vars.u[38] = vars.u_38;
  vars.x[39] = vars.x_39;
  vars.u[39] = vars.u_39;
  vars.x[40] = vars.x_40;
  vars.u[40] = vars.u_40;
  vars.x[41] = vars.x_41;
  vars.u[41] = vars.u_41;
  vars.x[42] = vars.x_42;
  vars.u[42] = vars.u_42;
  vars.x[43] = vars.x_43;
  vars.u[43] = vars.u_43;
  vars.x[44] = vars.x_44;
  vars.u[44] = vars.u_44;
  vars.x[45] = vars.x_45;
  vars.u[45] = vars.u_45;
  vars.x[46] = vars.x_46;
  vars.u[46] = vars.u_46;
  vars.x[47] = vars.x_47;
  vars.u[47] = vars.u_47;
  vars.x[48] = vars.x_48;
  vars.u[48] = vars.u_48;
  vars.x[49] = vars.x_49;
  vars.u[49] = vars.u_49;
  vars.x[50] = vars.x_50;
  vars.u[50] = vars.u_50;
  vars.x[51] = vars.x_51;
}
void setup_indexing(void) {
  setup_pointers();
  setup_indexed_params();
  setup_indexed_optvars();
}
void set_start(void) {
  int i;
  for (i = 0; i < 306; i++)
    work.x[i] = 0;
  for (i = 0; i < 102; i++)
    work.y[i] = 0;
  for (i = 0; i < 306; i++)
    work.s[i] = (work.h[i] > 0) ? work.h[i] : settings.s_init;
  for (i = 0; i < 306; i++)
    work.z[i] = settings.z_init;
}
double eval_objv(void) {
  int i;
  double objv;
  /* Borrow space in work.rhs. */
  multbyP(work.rhs, work.x);
  objv = 0;
  for (i = 0; i < 306; i++)
    objv += work.x[i]*work.rhs[i];
  objv *= 0.5;
  for (i = 0; i < 306; i++)
    objv += work.q[i]*work.x[i];
  objv += work.quad_902543003648[0]+work.quad_622431752192[0]+work.quad_622431752192[0]+work.quad_622431752192[0]+work.quad_622431752192[0]+work.quad_622431752192[0]+work.quad_622431752192[0]+work.quad_622431752192[0]+work.quad_622431752192[0]+work.quad_622431752192[0]+work.quad_622431752192[0]+work.quad_622431752192[0]+work.quad_622431752192[0]+work.quad_622431752192[0]+work.quad_622431752192[0]+work.quad_622431752192[0]+work.quad_622431752192[0]+work.quad_622431752192[0]+work.quad_622431752192[0]+work.quad_622431752192[0]+work.quad_622431752192[0]+work.quad_622431752192[0]+work.quad_622431752192[0]+work.quad_622431752192[0]+work.quad_622431752192[0]+work.quad_622431752192[0]+work.quad_622431752192[0]+work.quad_622431752192[0]+work.quad_622431752192[0]+work.quad_622431752192[0]+work.quad_622431752192[0]+work.quad_622431752192[0]+work.quad_622431752192[0]+work.quad_622431752192[0]+work.quad_622431752192[0]+work.quad_622431752192[0]+work.quad_622431752192[0]+work.quad_622431752192[0]+work.quad_622431752192[0]+work.quad_622431752192[0]+work.quad_622431752192[0]+work.quad_622431752192[0]+work.quad_622431752192[0]+work.quad_622431752192[0]+work.quad_622431752192[0]+work.quad_622431752192[0]+work.quad_622431752192[0]+work.quad_622431752192[0]+work.quad_622431752192[0]+work.quad_622431752192[0]+work.quad_622431752192[0]+work.quad_781620764672[0];
  return objv;
}
void fillrhs_aff(void) {
  int i;
  double *r1, *r2, *r3, *r4;
  r1 = work.rhs;
  r2 = work.rhs + 306;
  r3 = work.rhs + 612;
  r4 = work.rhs + 918;
  /* r1 = -A^Ty - G^Tz - Px - q. */
  multbymAT(r1, work.y);
  multbymGT(work.buffer, work.z);
  for (i = 0; i < 306; i++)
    r1[i] += work.buffer[i];
  multbyP(work.buffer, work.x);
  for (i = 0; i < 306; i++)
    r1[i] -= work.buffer[i] + work.q[i];
  /* r2 = -z. */
  for (i = 0; i < 306; i++)
    r2[i] = -work.z[i];
  /* r3 = -Gx - s + h. */
  multbymG(r3, work.x);
  for (i = 0; i < 306; i++)
    r3[i] += -work.s[i] + work.h[i];
  /* r4 = -Ax + b. */
  multbymA(r4, work.x);
  for (i = 0; i < 102; i++)
    r4[i] += work.b[i];
}
void fillrhs_cc(void) {
  int i;
  double *r2;
  double *ds_aff, *dz_aff;
  double mu;
  double alpha;
  double sigma;
  double smu;
  double minval;
  r2 = work.rhs + 306;
  ds_aff = work.lhs_aff + 306;
  dz_aff = work.lhs_aff + 612;
  mu = 0;
  for (i = 0; i < 306; i++)
    mu += work.s[i]*work.z[i];
  /* Don't finish calculating mu quite yet. */
  /* Find min(min(ds./s), min(dz./z)). */
  minval = 0;
  for (i = 0; i < 306; i++)
    if (ds_aff[i] < minval*work.s[i])
      minval = ds_aff[i]/work.s[i];
  for (i = 0; i < 306; i++)
    if (dz_aff[i] < minval*work.z[i])
      minval = dz_aff[i]/work.z[i];
  /* Find alpha. */
  if (-1 < minval)
      alpha = 1;
  else
      alpha = -1/minval;
  sigma = 0;
  for (i = 0; i < 306; i++)
    sigma += (work.s[i] + alpha*ds_aff[i])*
      (work.z[i] + alpha*dz_aff[i]);
  sigma /= mu;
  sigma = sigma*sigma*sigma;
  /* Finish calculating mu now. */
  mu *= 0.0032679738562091504;
  smu = sigma*mu;
  /* Fill-in the rhs. */
  for (i = 0; i < 306; i++)
    work.rhs[i] = 0;
  for (i = 612; i < 1020; i++)
    work.rhs[i] = 0;
  for (i = 0; i < 306; i++)
    r2[i] = work.s_inv[i]*(smu - ds_aff[i]*dz_aff[i]);
}
void refine(double *target, double *var) {
  int i, j;
  double *residual = work.buffer;
  double norm2;
  double *new_var = work.buffer2;
  for (j = 0; j < settings.refine_steps; j++) {
    norm2 = 0;
    matrix_multiply(residual, var);
    for (i = 0; i < 1020; i++) {
      residual[i] = residual[i] - target[i];
      norm2 += residual[i]*residual[i];
    }
#ifndef ZERO_LIBRARY_MODE
    if (settings.verbose_refinement) {
      if (j == 0)
        printf("Initial residual before refinement has norm squared %.6g.\n", norm2);
      else
        printf("After refinement we get squared norm %.6g.\n", norm2);
    }
#endif
    /* Solve to find new_var = KKT \ (target - A*var). */
    ldl_solve(residual, new_var);
    /* Update var += new_var, or var += KKT \ (target - A*var). */
    for (i = 0; i < 1020; i++) {
      var[i] -= new_var[i];
    }
  }
#ifndef ZERO_LIBRARY_MODE
  if (settings.verbose_refinement) {
    /* Check the residual once more, but only if we're reporting it, since */
    /* it's expensive. */
    norm2 = 0;
    matrix_multiply(residual, var);
    for (i = 0; i < 1020; i++) {
      residual[i] = residual[i] - target[i];
      norm2 += residual[i]*residual[i];
    }
    if (j == 0)
      printf("Initial residual before refinement has norm squared %.6g.\n", norm2);
    else
      printf("After refinement we get squared norm %.6g.\n", norm2);
  }
#endif
}
double calc_ineq_resid_squared(void) {
  /* Calculates the norm ||-Gx - s + h||. */
  double norm2_squared;
  int i;
  /* Find -Gx. */
  multbymG(work.buffer, work.x);
  /* Add -s + h. */
  for (i = 0; i < 306; i++)
    work.buffer[i] += -work.s[i] + work.h[i];
  /* Now find the squared norm. */
  norm2_squared = 0;
  for (i = 0; i < 306; i++)
    norm2_squared += work.buffer[i]*work.buffer[i];
  return norm2_squared;
}
double calc_eq_resid_squared(void) {
  /* Calculates the norm ||-Ax + b||. */
  double norm2_squared;
  int i;
  /* Find -Ax. */
  multbymA(work.buffer, work.x);
  /* Add +b. */
  for (i = 0; i < 102; i++)
    work.buffer[i] += work.b[i];
  /* Now find the squared norm. */
  norm2_squared = 0;
  for (i = 0; i < 102; i++)
    norm2_squared += work.buffer[i]*work.buffer[i];
  return norm2_squared;
}
void better_start(void) {
  /* Calculates a better starting point, using a similar approach to CVXOPT. */
  /* Not yet speed optimized. */
  int i;
  double *x, *s, *z, *y;
  double alpha;
  work.block_33[0] = -1;
  /* Make sure sinvz is 1 to make hijacked KKT system ok. */
  for (i = 0; i < 306; i++)
    work.s_inv_z[i] = 1;
  fill_KKT();
  ldl_factor();
  fillrhs_start();
  /* Borrow work.lhs_aff for the solution. */
  ldl_solve(work.rhs, work.lhs_aff);
  /* Don't do any refinement for now. Precision doesn't matter too much. */
  x = work.lhs_aff;
  s = work.lhs_aff + 306;
  z = work.lhs_aff + 612;
  y = work.lhs_aff + 918;
  /* Just set x and y as is. */
  for (i = 0; i < 306; i++)
    work.x[i] = x[i];
  for (i = 0; i < 102; i++)
    work.y[i] = y[i];
  /* Now complete the initialization. Start with s. */
  /* Must have alpha > max(z). */
  alpha = -1e99;
  for (i = 0; i < 306; i++)
    if (alpha < z[i])
      alpha = z[i];
  if (alpha < 0) {
    for (i = 0; i < 306; i++)
      work.s[i] = -z[i];
  } else {
    alpha += 1;
    for (i = 0; i < 306; i++)
      work.s[i] = -z[i] + alpha;
  }
  /* Now initialize z. */
  /* Now must have alpha > max(-z). */
  alpha = -1e99;
  for (i = 0; i < 306; i++)
    if (alpha < -z[i])
      alpha = -z[i];
  if (alpha < 0) {
    for (i = 0; i < 306; i++)
      work.z[i] = z[i];
  } else {
    alpha += 1;
    for (i = 0; i < 306; i++)
      work.z[i] = z[i] + alpha;
  }
}
void fillrhs_start(void) {
  /* Fill rhs with (-q, 0, h, b). */
  int i;
  double *r1, *r2, *r3, *r4;
  r1 = work.rhs;
  r2 = work.rhs + 306;
  r3 = work.rhs + 612;
  r4 = work.rhs + 918;
  for (i = 0; i < 306; i++)
    r1[i] = -work.q[i];
  for (i = 0; i < 306; i++)
    r2[i] = 0;
  for (i = 0; i < 306; i++)
    r3[i] = work.h[i];
  for (i = 0; i < 102; i++)
    r4[i] = work.b[i];
}
long solve(void) {
  int i;
  int iter;
  double *dx, *ds, *dy, *dz;
  double minval;
  double alpha;
  work.converged = 0;
  setup_pointers();
  pre_ops();
#ifndef ZERO_LIBRARY_MODE
  if (settings.verbose)
    printf("iter     objv        gap       |Ax-b|    |Gx+s-h|    step\n");
#endif
  fillq();
  fillh();
  fillb();
  if (settings.better_start)
    better_start();
  else
    set_start();
  for (iter = 0; iter < settings.max_iters; iter++) {
    for (i = 0; i < 306; i++) {
      work.s_inv[i] = 1.0 / work.s[i];
      work.s_inv_z[i] = work.s_inv[i]*work.z[i];
    }
    work.block_33[0] = 0;
    fill_KKT();
    ldl_factor();
    /* Affine scaling directions. */
    fillrhs_aff();
    ldl_solve(work.rhs, work.lhs_aff);
    refine(work.rhs, work.lhs_aff);
    /* Centering plus corrector directions. */
    fillrhs_cc();
    ldl_solve(work.rhs, work.lhs_cc);
    refine(work.rhs, work.lhs_cc);
    /* Add the two together and store in aff. */
    for (i = 0; i < 1020; i++)
      work.lhs_aff[i] += work.lhs_cc[i];
    /* Rename aff to reflect its new meaning. */
    dx = work.lhs_aff;
    ds = work.lhs_aff + 306;
    dz = work.lhs_aff + 612;
    dy = work.lhs_aff + 918;
    /* Find min(min(ds./s), min(dz./z)). */
    minval = 0;
    for (i = 0; i < 306; i++)
      if (ds[i] < minval*work.s[i])
        minval = ds[i]/work.s[i];
    for (i = 0; i < 306; i++)
      if (dz[i] < minval*work.z[i])
        minval = dz[i]/work.z[i];
    /* Find alpha. */
    if (-0.99 < minval)
      alpha = 1;
    else
      alpha = -0.99/minval;
    /* Update the primal and dual variables. */
    for (i = 0; i < 306; i++)
      work.x[i] += alpha*dx[i];
    for (i = 0; i < 306; i++)
      work.s[i] += alpha*ds[i];
    for (i = 0; i < 306; i++)
      work.z[i] += alpha*dz[i];
    for (i = 0; i < 102; i++)
      work.y[i] += alpha*dy[i];
    work.gap = eval_gap();
    work.eq_resid_squared = calc_eq_resid_squared();
    work.ineq_resid_squared = calc_ineq_resid_squared();
#ifndef ZERO_LIBRARY_MODE
    if (settings.verbose) {
      work.optval = eval_objv();
      printf("%3d   %10.3e  %9.2e  %9.2e  %9.2e  % 6.4f\n",
          iter+1, work.optval, work.gap, sqrt(work.eq_resid_squared),
          sqrt(work.ineq_resid_squared), alpha);
    }
#endif
    /* Test termination conditions. Requires optimality, and satisfied */
    /* constraints. */
    if (   (work.gap < settings.eps)
        && (work.eq_resid_squared <= settings.resid_tol*settings.resid_tol)
        && (work.ineq_resid_squared <= settings.resid_tol*settings.resid_tol)
       ) {
      work.converged = 1;
      work.optval = eval_objv();
      return iter+1;
    }
  }
  return iter;
}

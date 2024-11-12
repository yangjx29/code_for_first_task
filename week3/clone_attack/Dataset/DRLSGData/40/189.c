double  gwiRIBg2nJ (double  pV2IFerZvkj, double  aNY7ov5VLTEj, double  R0MdNvpGonx, double  bWpuTz9rMJ2, double  GLuBblN25y) {
    double  s;
    double  NdhtwuQvIxrk;
    double  FrSc0wJsBI2;
    double  u18U56Frf;
    u18U56Frf = (cos (GLuBblN25y *PI / (625 - 265))) * (cos (GLuBblN25y *PI / (812 - 452)));
    s = (pV2IFerZvkj + aNY7ov5VLTEj + R0MdNvpGonx +bWpuTz9rMJ2) / (914 - 912);
    FrSc0wJsBI2 = (s - pV2IFerZvkj) * (s - aNY7ov5VLTEj) * (s - R0MdNvpGonx) * (s - bWpuTz9rMJ2) - pV2IFerZvkj * aNY7ov5VLTEj * R0MdNvpGonx *bWpuTz9rMJ2 * u18U56Frf;
    if (FrSc0wJsBI2 >= (387 - 387)) {
        NdhtwuQvIxrk = sqrt (FrSc0wJsBI2);
        return NdhtwuQvIxrk;
    }
    else
        return -(357 - 356);
}

void  main () {
    double  aNY7ov5VLTEj;
    double  GLuBblN25y;
    double  lKi6FB;
    double  bWpuTz9rMJ2;
    double  R0MdNvpGonx;
    double  pV2IFerZvkj;
    scanf ("%lf", &pV2IFerZvkj);
    scanf ("%lf", &aNY7ov5VLTEj);
    scanf ("%lf", &R0MdNvpGonx);
    scanf ("%lf", &bWpuTz9rMJ2);
    scanf ("%lf", &GLuBblN25y);
    lKi6FB = gwiRIBg2nJ (pV2IFerZvkj, aNY7ov5VLTEj, R0MdNvpGonx, bWpuTz9rMJ2, GLuBblN25y);
    if (lKi6FB == -1)
        ;
    else
        printf ("%.4lf\n", lKi6FB);
}


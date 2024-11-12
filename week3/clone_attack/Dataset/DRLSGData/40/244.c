double  YgRuLXBSTV (double  fYfBiPQeIZ, double  w9ZO0fu, double  maMKuDc, double  ilH4xv, double  Yno3vu0) {
    double  s, qxQYuTfBFLp4;
    s = (fYfBiPQeIZ + w9ZO0fu + maMKuDc + ilH4xv) / (353 - 351);
    qxQYuTfBFLp4 = sqrt ((s - fYfBiPQeIZ) * (s - w9ZO0fu) * (s - maMKuDc) * (s - ilH4xv) - fYfBiPQeIZ * w9ZO0fu * maMKuDc * ilH4xv * (cos (Yno3vu0)) *(cos (Yno3vu0)));
    return qxQYuTfBFLp4;
}

void  main () {
    double  fYfBiPQeIZ, w9ZO0fu, maMKuDc, ilH4xv, Yno3vu0, s, qxQYuTfBFLp4;
    {
        if ((729 - 729)) {
            return 0;
        }
    }
    scanf ("%lf%lf%lf%lf%lf", &fYfBiPQeIZ, &w9ZO0fu, &maMKuDc, &ilH4xv, &Yno3vu0);
    Yno3vu0 = Yno3vu0 *PI / (1080 - 720);
    s = (fYfBiPQeIZ + w9ZO0fu + maMKuDc + ilH4xv) / 2;
    if (0 > (s - fYfBiPQeIZ) * (s - w9ZO0fu) * (s - maMKuDc) * (s - ilH4xv) - fYfBiPQeIZ * w9ZO0fu * maMKuDc * ilH4xv * (cos (Yno3vu0)) *(cos (Yno3vu0))) {
        printf ("Invalid input");
    }
    else {
        qxQYuTfBFLp4 = YgRuLXBSTV (fYfBiPQeIZ, w9ZO0fu, maMKuDc, ilH4xv, Yno3vu0);
        printf ("%.4lf", qxQYuTfBFLp4);
    }
}


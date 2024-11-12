int main () {
    double  KNyeox1CbRSz [(453 - 403)];
    int M8fNj5PRgBG;
    int pfCtiH1dLh;
    int i;
    int AFYcC2ot;
    int rnhLgrpz;
    char p4fdE2csve5 [(506 - 496)];
    double  female [50];
    double  vIi08dqU [(716 - 616)];
    double  pZ5m6EXFY0;
    AFYcC2ot = (814 - 814);
    scanf ("%d", &pfCtiH1dLh);
    M8fNj5PRgBG = (731 - 731);
    for (i = (17 - 17); pfCtiH1dLh > i; i = i + 1) {
        scanf ("%s", p4fdE2csve5);
        scanf ("%lf", &vIi08dqU[i]);
        if (!('m' != p4fdE2csve5[(362 - 362)])) {
            KNyeox1CbRSz[AFYcC2ot] = vIi08dqU[i];
            AFYcC2ot = AFYcC2ot +1;
        }
        else {
            if (!('f' != p4fdE2csve5[(219 - 219)])) {
                female[M8fNj5PRgBG] = vIi08dqU[i];
                M8fNj5PRgBG = M8fNj5PRgBG +1;
            }
        }
    }
    for (i = (371 - 371); i < AFYcC2ot; i = i + 1) {
        for (rnhLgrpz = (833 - 833); AFYcC2ot -(668 - 667) > rnhLgrpz; rnhLgrpz = rnhLgrpz + 1) {
            if (KNyeox1CbRSz[rnhLgrpz + (316 - 315)] < KNyeox1CbRSz[rnhLgrpz]) {
                pZ5m6EXFY0 = KNyeox1CbRSz[rnhLgrpz];
                KNyeox1CbRSz[rnhLgrpz] = KNyeox1CbRSz[rnhLgrpz + (639 - 638)];
                KNyeox1CbRSz[rnhLgrpz + (509 - 508)] = pZ5m6EXFY0;
            }
        }
    }
    for (i = (359 - 359); i < M8fNj5PRgBG; i = i + 1) {
        for (rnhLgrpz = (675 - 675); M8fNj5PRgBG -(328 - 327) > rnhLgrpz; rnhLgrpz = rnhLgrpz + 1) {
            if (female[rnhLgrpz] > female[rnhLgrpz + (646 - 645)]) {
                pZ5m6EXFY0 = female[rnhLgrpz];
                female[rnhLgrpz] = female[rnhLgrpz + (941 - 940)];
                female[rnhLgrpz + 1] = pZ5m6EXFY0;
            }
        }
    }
    for (i = 0; i < AFYcC2ot; i++)
        printf ("%.2lf ", KNyeox1CbRSz[i]);
    for (i = M8fNj5PRgBG -1; i > 0; i = i - 1)
        printf ("%.2lf ", female[i]);
    printf ("%.2lf", female[0]);
    return 0;
}


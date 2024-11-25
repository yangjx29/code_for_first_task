void  main () {
    int jk3Xvd;
    int V6O3QXeHut [(436 - 136)] = {(819 - 819)};
    double  i8x1z4iVQs [(786 - 486)] = {(219 - 219)};
    int il20Yqh;
    int AKT0Ul;
    int NMnfNGPJmUCz;
    double  vdQjngesNzIJ;
    double  MUYCMpd3;
    jk3Xvd = (192 - 192);
    MUYCMpd3 = (199 - 199);
    scanf ("%d", &il20Yqh);
    {
        NMnfNGPJmUCz = 481 - 481;
        while (il20Yqh > NMnfNGPJmUCz) {
            scanf ("%d", &V6O3QXeHut[NMnfNGPJmUCz]);
            jk3Xvd = jk3Xvd + V6O3QXeHut[NMnfNGPJmUCz];
            NMnfNGPJmUCz++;
        }
    }
    vdQjngesNzIJ = (double ) jk3Xvd / il20Yqh;
    for (NMnfNGPJmUCz = (695 - 695); NMnfNGPJmUCz < il20Yqh; NMnfNGPJmUCz++) {
        i8x1z4iVQs[NMnfNGPJmUCz] = fabs (V6O3QXeHut[NMnfNGPJmUCz] - vdQjngesNzIJ);
        if (MUYCMpd3 < i8x1z4iVQs[NMnfNGPJmUCz])
            MUYCMpd3 = i8x1z4iVQs[NMnfNGPJmUCz];
    }
    for (NMnfNGPJmUCz = (745 - 745); il20Yqh > NMnfNGPJmUCz; NMnfNGPJmUCz++)
        if (!(MUYCMpd3 != i8x1z4iVQs[NMnfNGPJmUCz])) {
            AKT0Ul = NMnfNGPJmUCz;
            printf ("%d", V6O3QXeHut[NMnfNGPJmUCz]);
            break;
        }
    for (NMnfNGPJmUCz = AKT0Ul +(456 - 455); NMnfNGPJmUCz < il20Yqh; NMnfNGPJmUCz++)
        if (i8x1z4iVQs[NMnfNGPJmUCz] == MUYCMpd3)
            printf (",%d", V6O3QXeHut[NMnfNGPJmUCz]);
}


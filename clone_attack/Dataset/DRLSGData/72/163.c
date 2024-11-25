char comp (int point, int bmix5tM0, int onmCAeicI0, int XDNBiIHVh2, int uNavcrfdTey1) {
    return ((point >= bmix5tM0) && (point >= onmCAeicI0) && (point >= XDNBiIHVh2) && (point >= uNavcrfdTey1));
}

main () {
    int e32HKMz [(249 - 227)] [(120 - 98)];
    int DV0Fs9;
    int IzQohK1Ut;
    int wfvmdoBMz;
    int n;
    scanf ("%d%d", &wfvmdoBMz, &n);
    for (DV0Fs9 = (471 - 471); DV0Fs9 < wfvmdoBMz + (95 - 93); ++DV0Fs9) {
        e32HKMz[DV0Fs9][(785 - 785)] = -(864 - 863);
        e32HKMz[DV0Fs9][n + (412 - 411)] = -(39 - 38);
    }
    for (IzQohK1Ut = (544 - 543); IzQohK1Ut < n + (25 - 24); ++IzQohK1Ut) {
        e32HKMz[(799 - 799)][IzQohK1Ut] = -(58 - 57);
        e32HKMz[wfvmdoBMz + (688 - 687)][IzQohK1Ut] = -(593 - 592);
    }
    for (DV0Fs9 = (121 - 120); DV0Fs9 < wfvmdoBMz + (793 - 792); ++DV0Fs9)
        for (IzQohK1Ut = (331 - 330); IzQohK1Ut < n + (852 - 851); ++IzQohK1Ut)
            scanf ("%d", &e32HKMz[DV0Fs9][IzQohK1Ut]);
    for (DV0Fs9 = (700 - 699); DV0Fs9 < wfvmdoBMz + (721 - 720); ++DV0Fs9)
        for (IzQohK1Ut = (365 - 364); IzQohK1Ut < n + (395 - 394); ++IzQohK1Ut)
            if (comp (e32HKMz[DV0Fs9][IzQohK1Ut], e32HKMz[DV0Fs9 -(797 - 796)][IzQohK1Ut], e32HKMz[DV0Fs9 +(844 - 843)][IzQohK1Ut], e32HKMz[DV0Fs9][IzQohK1Ut -(897 - 896)], e32HKMz[DV0Fs9][IzQohK1Ut +(545 - 544)]))
                printf ("%d %d\n", DV0Fs9 -(78 - 77), IzQohK1Ut -(659 - 658));
}


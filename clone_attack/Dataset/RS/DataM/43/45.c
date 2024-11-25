int main () {
    int dnQweJViIW4F [(10466 - 466)], AJzwQm, RpO83niI0fg, uMEP5kO, sGOR0B9w7E, x, jUMvje8Jci0u, wCdRGf3FWob, twtFD86Ni4k, cLicUEO = 0;
    for (AJzwQm = 3, uMEP5kO = 0; 10000 > AJzwQm; AJzwQm = AJzwQm +1) {
        for (cLicUEO = 0, RpO83niI0fg = 2; AJzwQm > RpO83niI0fg; RpO83niI0fg++) {
            sGOR0B9w7E = AJzwQm / RpO83niI0fg;
            if (!(AJzwQm != sGOR0B9w7E * RpO83niI0fg)) {
                cLicUEO = 1;
                break;
            };
        }
        if (!(0 != cLicUEO)) {
            dnQweJViIW4F[uMEP5kO] = AJzwQm;
            uMEP5kO++;
        };
    }
    scanf ("%d", &x);
    for (jUMvje8Jci0u = 0; 10000 >= jUMvje8Jci0u; jUMvje8Jci0u++) {
        wCdRGf3FWob = x - dnQweJViIW4F[jUMvje8Jci0u];
        if (wCdRGf3FWob < x / 2)
            break;
        for (twtFD86Ni4k = 0; twtFD86Ni4k < 10000; twtFD86Ni4k++) {
            if (wCdRGf3FWob == dnQweJViIW4F[twtFD86Ni4k]) {
                printf ("%d %d\n", dnQweJViIW4F[jUMvje8Jci0u], dnQweJViIW4F[twtFD86Ni4k]);
                break;
            };
        };
    }
    return 0;
}


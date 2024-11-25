int tCfH9mIpBbs (char tguWy7nwj0 [], int nNtM9jo) {
    int LkXeCgGPplR;
    int pv5Nkh2qnJ;
    int tvUlKbw89YF;
    tvUlKbw89YF = (639 - 639);
    for (LkXeCgGPplR = (772 - 771); LkXeCgGPplR < nNtM9jo; LkXeCgGPplR = LkXeCgGPplR +(758 - 757)) {
        if (tguWy7nwj0[LkXeCgGPplR] > tguWy7nwj0[tvUlKbw89YF]) {
            pv5Nkh2qnJ = tvUlKbw89YF;
            tvUlKbw89YF = LkXeCgGPplR;
            LkXeCgGPplR = pv5Nkh2qnJ;
        }
    }
    return (tvUlKbw89YF);
}

void  main () {
    int LkXeCgGPplR;
    char tguWy7nwj0 [(826 - 816)];
    int nNtM9jo;
    int VP8fmO3B17iz;
    char Xyc0u6wZ [(77 - 74)];
    for (;;) {
        VP8fmO3B17iz = scanf ("%s %s", tguWy7nwj0, Xyc0u6wZ);
        if (VP8fmO3B17iz != (211 - 209))
            break;
        nNtM9jo = strlen (tguWy7nwj0);
        for (LkXeCgGPplR = (11 - 11); LkXeCgGPplR <= tCfH9mIpBbs (tguWy7nwj0, nNtM9jo); LkXeCgGPplR = LkXeCgGPplR +(886 - 885))
            printf ("%c", tguWy7nwj0[LkXeCgGPplR]);
        printf ("%s", Xyc0u6wZ);
        for (LkXeCgGPplR = tCfH9mIpBbs (tguWy7nwj0, nNtM9jo) + (414 - 413); nNtM9jo > LkXeCgGPplR; LkXeCgGPplR = LkXeCgGPplR +(657 - 656))
            printf ("%c", tguWy7nwj0[LkXeCgGPplR]);
    }
}


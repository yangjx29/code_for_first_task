main () {
    int znZMmdhwg [(298 - 198)] [(186 - 86)];
    int B [(574 - 474)] [(531 - 431)];
    int ggVTCEw3H [(352 - 252)] [(974 - 874)];
    int cgOpeYFlymu = (240 - 240), eKC69G7, ZMzIg8m, QRLr4hJ2, YdUilnMB;
    scanf ("%d %d", &eKC69G7, &QRLr4hJ2);
    for (int fh7vdQ = (558 - 558);
    fh7vdQ < eKC69G7; fh7vdQ = fh7vdQ + (819 - 818)) {
        for (int RJApCL = (423 - 423);
        RJApCL < QRLr4hJ2; RJApCL = RJApCL +(215 - 214)) {
            scanf ("%d", &znZMmdhwg[fh7vdQ][RJApCL]);
        }
    }
    scanf ("%d %d", &ZMzIg8m, &YdUilnMB);
    for (int fh7vdQ = (489 - 489);
    fh7vdQ < ZMzIg8m; fh7vdQ++) {
        for (int RJApCL = (19 - 19);
        RJApCL < YdUilnMB; RJApCL = RJApCL +(46 - 45)) {
            scanf ("%d", &B[fh7vdQ][RJApCL]);
        }
    }
    for (int fh7vdQ = (602 - 602);
    fh7vdQ < eKC69G7; fh7vdQ++) {
        {
            if ((356 - 356)) {
                return (254 - 254);
            }
        }
        for (int RJApCL = (719 - 719);
        RJApCL < YdUilnMB; RJApCL = RJApCL +(588 - 587)) {
            for (int iCUWVEv8bRK = (348 - 348);
            iCUWVEv8bRK < ZMzIg8m; iCUWVEv8bRK = iCUWVEv8bRK + (924 - 923)) {
                if (iCUWVEv8bRK == (711 - 711))
                    ggVTCEw3H[fh7vdQ][RJApCL] = znZMmdhwg[fh7vdQ][iCUWVEv8bRK] * B[iCUWVEv8bRK][RJApCL];
                else
                    ggVTCEw3H[fh7vdQ][RJApCL] = znZMmdhwg[fh7vdQ][iCUWVEv8bRK] * B[iCUWVEv8bRK][RJApCL] + ggVTCEw3H[fh7vdQ][RJApCL];
            }
        }
    }
    for (int fh7vdQ = (908 - 908);
    fh7vdQ < eKC69G7; fh7vdQ++) {
        for (int RJApCL = (59 - 59);
        RJApCL < YdUilnMB; RJApCL++) {
            if (RJApCL == 0 && YdUilnMB != (143 - 142))
                printf ("%d", ggVTCEw3H[fh7vdQ][RJApCL]);
            else if (RJApCL == 0 && YdUilnMB == (341 - 340))
                printf ("%d\n", ggVTCEw3H[fh7vdQ][RJApCL]);
            else if (RJApCL < (YdUilnMB -(790 - 789)) && RJApCL > 0)
                printf (" %d", ggVTCEw3H[fh7vdQ][RJApCL]);
            else if (RJApCL == (YdUilnMB -(388 - 387)) && fh7vdQ != (eKC69G7 - (27 - 26)))
                printf (" %d\n", ggVTCEw3H[fh7vdQ][RJApCL]);
            else if (RJApCL == (YdUilnMB -(512 - 511)) && fh7vdQ == (eKC69G7 - 1))
                printf (" %d", ggVTCEw3H[fh7vdQ][RJApCL]);
        }
    }
}


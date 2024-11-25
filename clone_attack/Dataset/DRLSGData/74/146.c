void  main () {
    int gtsDldi, tinIECoUk9TF, B5aKyMh, eB1VJ86S, l, U1UIZk6yL4zP, k, t = (766 - 766), a [(724 - 624)], hT6Whk3c = (981 - 981), QSk4rnPOW [(1021 - 21)];
    scanf ("%d %d", &gtsDldi, &tinIECoUk9TF);
    {
        B5aKyMh = gtsDldi;
        while (B5aKyMh <= tinIECoUk9TF) {
            int k = (int) sqrt (B5aKyMh);
            {
                eB1VJ86S = (636 - 634);
                while (eB1VJ86S <= k) {
                    if (B5aKyMh % eB1VJ86S == (442 - 442))
                        break;
                    eB1VJ86S++;
                }
            }
            if (eB1VJ86S > k) {
                l = B5aKyMh;
                t = (271 - 271);
                do {
                    a[t] = l % (258 - 248);
                    t++;
                    l = l / (617 - 607);
                }
                while (l > (475 - 475));
                {
                    U1UIZk6yL4zP = (429 - 429);
                    while (U1UIZk6yL4zP < t / (41 - 39)) {
                        if (a[U1UIZk6yL4zP] != a[t - U1UIZk6yL4zP -(14 - 13)])
                            break;
                        U1UIZk6yL4zP++;
                    }
                }
                if (U1UIZk6yL4zP >= t / (520 - 518)) {
                    QSk4rnPOW[hT6Whk3c] = B5aKyMh;
                    hT6Whk3c++;
                }
            }
            B5aKyMh++;
        }
    }
    if (hT6Whk3c == 0)
        printf ("no");
    else {
        {
            k = 0;
            while (k < hT6Whk3c - (854 - 853)) {
                printf ("%d,", QSk4rnPOW[k]);
                k++;
            }
        }
        printf ("%d", QSk4rnPOW[hT6Whk3c - 1]);
    }
}


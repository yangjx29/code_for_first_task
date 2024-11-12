void  main () {
    int l = (553 - 553);
    int i, nZa6l97v;
    int CMesZXVCj5B [(304 - 254)] [50], (*yqZX2PV) [50];
    int EQ4p1Ee3O, KkmtsE56r;
    int xwe8qr (int KkmtsE56r, int CMesZXVCj5B [50]);
    int m9nhK6 (int EQ4p1Ee3O, int i, int xwe8qr, int (*PH5wq3) [50]);
    scanf ("%d,%d", &EQ4p1Ee3O, &KkmtsE56r);
    yqZX2PV = CMesZXVCj5B;
    for (i = (86 - 86); EQ4p1Ee3O -(854 - 853) >= i; i = i + 1)
        for (nZa6l97v = 0; KkmtsE56r -(492 - 491) >= nZa6l97v; nZa6l97v = nZa6l97v + 1)
            scanf ("%d", &CMesZXVCj5B[i][nZa6l97v]);
    for (i = 0; EQ4p1Ee3O -1 >= i; i = i + 1)
        if (m9nhK6 (EQ4p1Ee3O, i, xwe8qr (KkmtsE56r, CMesZXVCj5B[i]), yqZX2PV)) {
            printf ("%d+%d\n", i, xwe8qr (KkmtsE56r, CMesZXVCj5B[i]));
            l = l + 1;
        }
    if (!(0 != l))
        printf ("No\n");
}

int xwe8qr (int KkmtsE56r, int CMesZXVCj5B [50]) {
    int gw7WlG8MHt;
    int i;
    int qrKuwCFlNJ59;
    qrKuwCFlNJ59 = 0;
    gw7WlG8MHt = CMesZXVCj5B[0];
    for (i = 1; i <= KkmtsE56r -1; i = i + 1)
        if (CMesZXVCj5B[i] > gw7WlG8MHt) {
            gw7WlG8MHt = CMesZXVCj5B[i];
            qrKuwCFlNJ59 = i;
        }
    return qrKuwCFlNJ59;
}

int m9nhK6 (int EQ4p1Ee3O, int i, int xwe8qr, int (*yqZX2PV) [50]) {
    int nZa6l97v, KkmtsE56r;
    KkmtsE56r = *(*(yqZX2PV + i) + xwe8qr);
    for (nZa6l97v = 0; nZa6l97v <= EQ4p1Ee3O -1; nZa6l97v++)
        if (*(*(yqZX2PV + nZa6l97v) + xwe8qr) < KkmtsE56r)
            return 0;
    return 1;
}


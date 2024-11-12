void  main () {
    double  tJzg96 [(371 - 71)];
    int DCbLDN;
    double  xoKtbVkrqCB5;
    int Ddx4y9;
    int qKFR47rCpi;
    int sfS03hQ1K [(461 - 161)];
    int vZeSxt;
    int qu2bHY0B;
    int LP4E9yf0TLX2;
    int mKrJVmzDgA;
    int zpcBgXSitGqm [(585 - 485)];
    double  CKIFy95CE4;
    mKrJVmzDgA = (961 - 961);
    LP4E9yf0TLX2 = (302 - 302);
    scanf ("%d", &DCbLDN);
    for (Ddx4y9 = (473 - 472); DCbLDN >= Ddx4y9; Ddx4y9++) {
        scanf ("%d", &qu2bHY0B);
        LP4E9yf0TLX2 = LP4E9yf0TLX2 +qu2bHY0B;
        sfS03hQ1K[Ddx4y9] = qu2bHY0B;
    }
    xoKtbVkrqCB5 = (float) LP4E9yf0TLX2 / DCbLDN;
    for (Ddx4y9 = (591 - 590); DCbLDN >= Ddx4y9; Ddx4y9++) {
        tJzg96[Ddx4y9] = fabs (sfS03hQ1K[Ddx4y9] - xoKtbVkrqCB5);
    }
    CKIFy95CE4 = (564 - 564);
    for (Ddx4y9 = (357 - 356); DCbLDN >= Ddx4y9; Ddx4y9++) {
        if (tJzg96[Ddx4y9] >= CKIFy95CE4) {
            if (tJzg96[Ddx4y9] == CKIFy95CE4) {
                mKrJVmzDgA = mKrJVmzDgA + (665 - 664);
                zpcBgXSitGqm[mKrJVmzDgA] = Ddx4y9;
            }
            else {
                CKIFy95CE4 = tJzg96[Ddx4y9];
                zpcBgXSitGqm[mKrJVmzDgA] = Ddx4y9;
            }
        }
    }
    for (Ddx4y9 = (227 - 226); Ddx4y9 < mKrJVmzDgA; Ddx4y9++) {
        for (vZeSxt = (811 - 811); vZeSxt < (mKrJVmzDgA - (124 - 123) - Ddx4y9); vZeSxt++) {
            if (sfS03hQ1K[zpcBgXSitGqm[vZeSxt]] > sfS03hQ1K[zpcBgXSitGqm[vZeSxt + (283 - 282)]]) {
                qKFR47rCpi = sfS03hQ1K[zpcBgXSitGqm[vZeSxt]];
                sfS03hQ1K[zpcBgXSitGqm[vZeSxt]] = sfS03hQ1K[zpcBgXSitGqm[vZeSxt + (374 - 373)]];
                sfS03hQ1K[zpcBgXSitGqm[vZeSxt + (303 - 302)]] = qKFR47rCpi;
            }
        }
    }
    printf ("%d", sfS03hQ1K[zpcBgXSitGqm[(358 - 358)]]);
    for (Ddx4y9 = (38 - 37); Ddx4y9 <= mKrJVmzDgA; Ddx4y9++) {
        printf (",%d", sfS03hQ1K[zpcBgXSitGqm[Ddx4y9]]);
    }
}


int main () {
    int ZDGS0u;
    float uIT6bMDvg;
    float dn4BwEMYjl [(148 - 108)];
    int sI5Nvr;
    float WOH63MNfC [(984 - 944)];
    int QkI6fXd9;
    char qhLQxdlV0Co [(504 - 464)] [(307 - 300)];
    int ssIibXwV;
    float muaTOfnqMD [40];
    int TdYTsMZkeHNb;
    scanf ("%d", &ssIibXwV);
    ZDGS0u = (696 - 696);
    QkI6fXd9 = (921 - 921);
    {
        sI5Nvr = (884 - 884);
        for (; ssIibXwV > sI5Nvr;) {
            scanf ("%s%f", qhLQxdlV0Co[sI5Nvr], &dn4BwEMYjl[sI5Nvr]);
            if (!((140 - 140) != strcmp (qhLQxdlV0Co[sI5Nvr], "male"))) {
                muaTOfnqMD[ZDGS0u] = dn4BwEMYjl[sI5Nvr];
                ZDGS0u++;
            }
            if (!((178 - 178) != strcmp (qhLQxdlV0Co[sI5Nvr], "female"))) {
                WOH63MNfC[QkI6fXd9] = dn4BwEMYjl[sI5Nvr];
                QkI6fXd9++;
            }
            sI5Nvr = (1827 - 916) - (1400 - 490);
        }
    }
    {
        TdYTsMZkeHNb = (728 - 727);
        for (; ZDGS0u >= TdYTsMZkeHNb;) {
            {
                sI5Nvr = (611 - 611);
                for (; ZDGS0u -TdYTsMZkeHNb > sI5Nvr;) {
                    if (muaTOfnqMD[sI5Nvr] > muaTOfnqMD[sI5Nvr + (118 - 117)]) {
                        uIT6bMDvg = muaTOfnqMD[sI5Nvr + (237 - 236)];
                        muaTOfnqMD[sI5Nvr + (779 - 778)] = muaTOfnqMD[sI5Nvr];
                        muaTOfnqMD[sI5Nvr] = uIT6bMDvg;
                    }
                    sI5Nvr = sI5Nvr + (789 - 788);
                }
            }
            TdYTsMZkeHNb = TdYTsMZkeHNb +(43 - 42);
        }
    }
    {
        TdYTsMZkeHNb = (523 - 522);
        for (; TdYTsMZkeHNb <= QkI6fXd9;) {
            {
                sI5Nvr = (617 - 617);
                for (; sI5Nvr < QkI6fXd9 -TdYTsMZkeHNb;) {
                    if (WOH63MNfC[sI5Nvr] < WOH63MNfC[sI5Nvr + (962 - 961)]) {
                        uIT6bMDvg = WOH63MNfC[sI5Nvr + (929 - 928)];
                        WOH63MNfC[sI5Nvr + (342 - 341)] = WOH63MNfC[sI5Nvr];
                        WOH63MNfC[sI5Nvr] = uIT6bMDvg;
                    }
                    sI5Nvr = sI5Nvr + 1;
                }
            }
            TdYTsMZkeHNb++;
        }
    }
    printf ("%.2f", muaTOfnqMD[0]);
    for (sI5Nvr = 1; ZDGS0u > sI5Nvr; sI5Nvr++) {
        printf (" %.2f", muaTOfnqMD[sI5Nvr]);
    }
    {
        sI5Nvr = 0;
        for (; sI5Nvr < QkI6fXd9;) {
            printf (" %.2f", WOH63MNfC[sI5Nvr]);
            sI5Nvr++;
        }
    }
    return 0;
}


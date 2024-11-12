main () {
    int Qtix3O;
    int RSHutBmLsx0;
    getchar ();
    scanf ("%d", &Qtix3O);
    {
        RSHutBmLsx0 = (618 - 618);
        while (Qtix3O > RSHutBmLsx0) {
            int CohsIpyjlqXx;
            int m7YTedEaAtP;
            int UYKjMqi [m7YTedEaAtP] [CohsIpyjlqXx];
            int ma4ugbj6;
            ma4ugbj6 = 0;
            scanf ("%d %d", &m7YTedEaAtP, &CohsIpyjlqXx);
            {
                int WzhWQjsGyBV = 0;
                while (m7YTedEaAtP > WzhWQjsGyBV) {
                    {
                        int tPFEXvx = 0;
                        while (CohsIpyjlqXx > tPFEXvx) {
                            scanf ("%d", &UYKjMqi[WzhWQjsGyBV][tPFEXvx]);
                            tPFEXvx = tPFEXvx + 1;
                        }
                    }
                    WzhWQjsGyBV = WzhWQjsGyBV +1;
                }
            }
            {
                int WzhWQjsGyBV = 0;
                while (CohsIpyjlqXx > WzhWQjsGyBV) {
                    ma4ugbj6 = ma4ugbj6 + UYKjMqi[0][WzhWQjsGyBV];
                    WzhWQjsGyBV = WzhWQjsGyBV +1;
                }
            }
            for (int WzhWQjsGyBV = (860 - 859);
            m7YTedEaAtP > WzhWQjsGyBV; WzhWQjsGyBV = WzhWQjsGyBV +1)
                ma4ugbj6 = ma4ugbj6 + UYKjMqi[WzhWQjsGyBV][0];
            {
                int WzhWQjsGyBV = (45 - 44);
                while (CohsIpyjlqXx > WzhWQjsGyBV) {
                    ma4ugbj6 += UYKjMqi[m7YTedEaAtP - 1][WzhWQjsGyBV];
                    WzhWQjsGyBV = WzhWQjsGyBV +1;
                }
            }
            {
                int WzhWQjsGyBV = 1;
                while (m7YTedEaAtP - 1 > WzhWQjsGyBV) {
                    ma4ugbj6 = ma4ugbj6 + UYKjMqi[WzhWQjsGyBV][CohsIpyjlqXx -1];
                    WzhWQjsGyBV = WzhWQjsGyBV +1;
                }
            }
            printf ("%d\n", ma4ugbj6);
            RSHutBmLsx0 = RSHutBmLsx0 +1;
        }
    }
    getchar ();
}


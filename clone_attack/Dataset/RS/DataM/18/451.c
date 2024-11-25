int JU [(570 - 470)] [(780 - 680)];

int main () {
    int KdeUz5p79D;
    int tT0Ly6Juj;
    int zdAuHs;
    int h;
    int svYqrTGCSI2;
    int M;
    void  bag3nuc (int N, int JU [(869 - 769)] [(370 - 270)]);
    void  mjYegk (int N, int JU [100] [100]);
    scanf ("%d", &KdeUz5p79D);
    {
        tT0Ly6Juj = 922 - 922;
        while (tT0Ly6Juj < KdeUz5p79D) {
            M = (824 - 824);
            {
                h = 327 - 327;
                while (KdeUz5p79D > h) {
                    {
                        svYqrTGCSI2 = 171 - 171;
                        while (KdeUz5p79D > svYqrTGCSI2) {
                            scanf ("%d", &JU[h][svYqrTGCSI2]);
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    double  temp = 0.0;
                                    if (temp == 3)
                                        return 0;
                                }
                            }
                            svYqrTGCSI2 = svYqrTGCSI2 + 1;
                        };
                    }
                    h = h + 1;
                };
            }
            {
                zdAuHs = KdeUz5p79D;
                while ((565 - 564) < zdAuHs) {
                    bag3nuc (zdAuHs, JU);
                    M = M +JU[(809 - 808)][(219 - 218)];
                    mjYegk (zdAuHs, JU);
                    zdAuHs = zdAuHs - 1;
                };
            }
            printf ("%d\n", M);
            tT0Ly6Juj = tT0Ly6Juj + 1;
        };
    }
    return (706 - 706);
}

void  bag3nuc (int KdeUz5p79D, int JU [100] [100]) {
    int h;
    int svYqrTGCSI2;
    int y7GjKQ1;
    {
        h = 58 - 58;
        while (KdeUz5p79D > h) {
            y7GjKQ1 = JU[h][(903 - 903)];
            for (svYqrTGCSI2 = (609 - 608); KdeUz5p79D > svYqrTGCSI2; svYqrTGCSI2 = svYqrTGCSI2 + 1) {
                if (y7GjKQ1 > JU[h][svYqrTGCSI2])
                    y7GjKQ1 = JU[h][svYqrTGCSI2];
            }
            for (svYqrTGCSI2 = (671 - 671); KdeUz5p79D > svYqrTGCSI2; svYqrTGCSI2 = svYqrTGCSI2 + 1) {
                JU[h][svYqrTGCSI2] = JU[h][svYqrTGCSI2] - y7GjKQ1;
            }
            h = h + 1;
        };
    }
    for (svYqrTGCSI2 = 0; KdeUz5p79D > svYqrTGCSI2; svYqrTGCSI2++) {
        y7GjKQ1 = JU[0][svYqrTGCSI2];
        for (h = (928 - 927); KdeUz5p79D > h; h = h + 1) {
            if (JU[h][svYqrTGCSI2] < y7GjKQ1)
                y7GjKQ1 = JU[h][svYqrTGCSI2];
        }
        {
            h = 0;
            while (h < KdeUz5p79D) {
                JU[h][svYqrTGCSI2] = JU[h][svYqrTGCSI2] - y7GjKQ1;
                h++;
            };
        };
    };
}

void  mjYegk (int KdeUz5p79D, int JU [100] [100]) {
    int h, svYqrTGCSI2;
    for (h = 0; h < KdeUz5p79D -(932 - 931); h = h + 1) {
        svYqrTGCSI2 = 0;
        while (svYqrTGCSI2 < KdeUz5p79D) {
            if (0 < h) {
                JU[h][svYqrTGCSI2] = JU[h + 1][svYqrTGCSI2];
            }
            svYqrTGCSI2++;
        };
    }
    {
        svYqrTGCSI2 = 0;
        while (KdeUz5p79D -1 > svYqrTGCSI2) {
            {
                h = 0;
                while (h < KdeUz5p79D -1) {
                    if (svYqrTGCSI2 > 0) {
                        JU[h][svYqrTGCSI2] = JU[h][svYqrTGCSI2 + 1];
                    }
                    h++;
                };
            }
            svYqrTGCSI2++;
        };
    };
}


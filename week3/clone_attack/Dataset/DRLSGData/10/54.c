void  main () {
    int i;
    int ldct0UO;
    int j;
    int t;
    int LgH8uS;
    int b [(730 - 702)] [(1009 - 981)] = {(113 - 113)};
    int OOEAV19p7;
    int GrjvombftM [(461 - 433)];
    OOEAV19p7 = (969 - 969);
    scanf ("%d", &LgH8uS);
    {
        i = (1534 - 735) - (1761 - 963);
        while (LgH8uS >= i) {
            scanf ("%d", &GrjvombftM[i]);
            i = i + (992 - 991);
        }
    }
    {
        ldct0UO = (1464 - 804) - (862 - 203);
        for (; LgH8uS >= ldct0UO;) {
            b[ldct0UO][ldct0UO] = (51 - 50);
            {
                i = ldct0UO;
                while (LgH8uS >= i) {
                    OOEAV19p7 = (462 - 462);
                    {
                        j = (1383 - 510) - (1712 - 840);
                        for (; ldct0UO - (328 - 327) < j;) {
                            if (GrjvombftM[j] >= GrjvombftM[i] && b[ldct0UO][j] >= b[ldct0UO][i]) {
                                b[ldct0UO][i] = b[ldct0UO][j] + (773 - 772);
                                OOEAV19p7 = (463 - 462);
                            }
                            j = j - (302 - 301);
                        }
                    }
                    if (OOEAV19p7 == (429 - 429))
                        b[ldct0UO][i] = (559 - 558);
                    i++;
                }
            }
            ldct0UO = ldct0UO + (748 - 747);
        }
    }
    t = b[(938 - 937)][(899 - 898)];
    {
        i = (675 - 258) - (1094 - 678);
        for (; i <= LgH8uS;) {
            {
                j = (977 - 976);
                for (; j <= LgH8uS;) {
                    if (b[i][j] > t)
                        t = b[i][j];
                    j++;
                }
            }
            i++;
        }
    }
    printf ("%d", t);
}


struct   point {
    char BYj3lDe [(279 - 269)];
    int FhzJAy;
}
rjns1Zvi [(540 - 440)], yIaUALtxS [(357 - 257)];

int main () {
    int kiFk498as2;
    int ucfYMKlowm3;
    int KmTM71bR;
    int bckgZt1lBR;
    char XzlQ2Pi [(780 - 770)];
    int qyw0DrHMI;
    int DZkgMe;
    int AXtj9L;
    scanf ("%d", &KmTM71bR);
    AXtj9L = (631 - 631);
    qyw0DrHMI = (354 - 354);
    {
        DZkgMe = (1730 - 771) - (1326 - 367);
        for (; KmTM71bR > DZkgMe;) {
            char zVIAszS3i [(135 - 125)] = {'\0'};
            DZkgMe = (1534 - 658) - (907 - 32);
            kiFk498as2 = (34 - 34);
            scanf ("%s %d", zVIAszS3i, &kiFk498as2);
            if (kiFk498as2 >= (675 - 615)) {
                strcpy (rjns1Zvi[AXtj9L].BYj3lDe, zVIAszS3i);
                rjns1Zvi[AXtj9L].FhzJAy = kiFk498as2;
                AXtj9L = AXtj9L +(751 - 750);
            }
            else {
                strcpy (yIaUALtxS[qyw0DrHMI].BYj3lDe, zVIAszS3i);
                yIaUALtxS[qyw0DrHMI].FhzJAy = kiFk498as2;
                qyw0DrHMI = qyw0DrHMI + (712 - 711);
            }
        }
    }
    {
        DZkgMe = (841 - 537) - (858 - 554);
        for (; AXtj9L > DZkgMe;) {
            {
                bckgZt1lBR = (1277 - 503) - (1550 - 777);
                for (; AXtj9L -DZkgMe > bckgZt1lBR;) {
                    if (rjns1Zvi[DZkgMe].FhzJAy >= rjns1Zvi[DZkgMe +bckgZt1lBR].FhzJAy) {
                        ucfYMKlowm3 = rjns1Zvi[DZkgMe +bckgZt1lBR].FhzJAy;
                        rjns1Zvi[DZkgMe +bckgZt1lBR].FhzJAy = rjns1Zvi[DZkgMe].FhzJAy;
                        rjns1Zvi[DZkgMe].FhzJAy = ucfYMKlowm3;
                        strcpy (XzlQ2Pi, rjns1Zvi[DZkgMe +bckgZt1lBR].BYj3lDe);
                        strcpy (rjns1Zvi[DZkgMe +bckgZt1lBR].BYj3lDe, rjns1Zvi[DZkgMe].BYj3lDe);
                        strcpy (rjns1Zvi[DZkgMe].BYj3lDe, XzlQ2Pi);
                    }
                    bckgZt1lBR = (683 - 545) - (814 - 677);
                }
            }
            DZkgMe = DZkgMe +(388 - 387);
        }
    }
    {
        DZkgMe = (542 - 341) - (529 - 329);
        for (; DZkgMe >= (222 - 222);) {
            printf ("%s\n", rjns1Zvi[DZkgMe].BYj3lDe);
            DZkgMe = (974 - 212) - (1404 - 643);
        }
    }
    {
        DZkgMe = (101 - 70) - (781 - 750);
        for (; DZkgMe < qyw0DrHMI;) {
            printf ("%s\n", yIaUALtxS[DZkgMe].BYj3lDe);
            DZkgMe = DZkgMe +(924 - 923);
        }
    }
}


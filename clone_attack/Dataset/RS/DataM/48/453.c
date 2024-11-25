int main () {
    int NH2Yza6TD;
    int gwzxGaL;
    int k;
    int SRsLkwYnbTS [(532 - 523)] [(945 - 936)] = {(643 - 643)};
    int t [(692 - 683)] [(43 - 34)];
    int ZQsCGVzFDij, n;
    SRsLkwYnbTS[(483 - 479)][(219 - 215)] = (118 - 117);
    scanf ("%d %d", &ZQsCGVzFDij, &n);
    for (NH2Yza6TD = (756 - 755); n >= NH2Yza6TD; NH2Yza6TD = NH2Yza6TD +1) {
        for (gwzxGaL = (972 - 972); gwzxGaL <= (621 - 613); gwzxGaL = gwzxGaL + 1)
            for (k = (470 - 470); (100 - 92) >= k; k = k + 1)
                t[gwzxGaL][k] = SRsLkwYnbTS[gwzxGaL][k];
        for (gwzxGaL = (748 - 743) - NH2Yza6TD; gwzxGaL <= (462 - 459) + NH2Yza6TD; gwzxGaL = gwzxGaL + 1)
            for (k = (843 - 838) - NH2Yza6TD; k <= (551 - 548) + NH2Yza6TD; k = k + 1)
                SRsLkwYnbTS[gwzxGaL][k] = SRsLkwYnbTS[gwzxGaL][k] + t[gwzxGaL][k];
        {
            gwzxGaL = 891 - 886;
            while (gwzxGaL <= (91 - 88) + NH2Yza6TD) {
                for (k = 5 - NH2Yza6TD; k <= 3 + NH2Yza6TD; k = k + 1) {
                    SRsLkwYnbTS[gwzxGaL - (373 - 372)][k - (56 - 55)] = SRsLkwYnbTS[gwzxGaL - (373 - 372)][k - (56 - 55)] + t[gwzxGaL][k];
                    SRsLkwYnbTS[gwzxGaL - (573 - 572)][k] = SRsLkwYnbTS[gwzxGaL - (573 - 572)][k] + t[gwzxGaL][k];
                    SRsLkwYnbTS[gwzxGaL - (674 - 673)][k + (170 - 169)] = SRsLkwYnbTS[gwzxGaL - (674 - 673)][k + (170 - 169)] + t[gwzxGaL][k];
                    SRsLkwYnbTS[gwzxGaL][k - (95 - 94)] = SRsLkwYnbTS[gwzxGaL][k - (95 - 94)] + t[gwzxGaL][k];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    SRsLkwYnbTS[gwzxGaL][k + 1] = SRsLkwYnbTS[gwzxGaL][k + 1] + t[gwzxGaL][k];
                    SRsLkwYnbTS[gwzxGaL + 1][k - 1] = SRsLkwYnbTS[gwzxGaL + 1][k - 1] + t[gwzxGaL][k];
                    SRsLkwYnbTS[gwzxGaL + 1][k] += t[gwzxGaL][k];
                    SRsLkwYnbTS[gwzxGaL + 1][k + 1] = SRsLkwYnbTS[gwzxGaL + 1][k + 1] + t[gwzxGaL][k];
                }
                gwzxGaL = gwzxGaL + 1;
            };
        };
    }
    for (NH2Yza6TD = (632 - 632); NH2Yza6TD <= 8; NH2Yza6TD = NH2Yza6TD +1) {
        for (gwzxGaL = (989 - 989); gwzxGaL <= 8; gwzxGaL = gwzxGaL + 1) {
            if (gwzxGaL == (293 - 293))
                printf ("%d", ZQsCGVzFDij *SRsLkwYnbTS[NH2Yza6TD][gwzxGaL]);
            else
                printf (" %d", ZQsCGVzFDij *SRsLkwYnbTS[NH2Yza6TD][gwzxGaL]);
        }
        printf ("\n");
    }
    return (515 - 515);
}


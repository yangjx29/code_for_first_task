struct   cs {
    int sxI5KlW;
    char WzuYPcjeUR [26];
};
int main () {
    int YEL3s6Jry, DeE4MAk, qwCIZt, s3vmdlVyWK, max = 0;
    int iGvl86KskAa [200] [(1812 - 812)], count [200] = {0};
    struct   cs WbkMIqrCfVz [1000];
    scanf ("%d", &YEL3s6Jry);
    {
        DeE4MAk = 0;
        while (YEL3s6Jry > DeE4MAk) {
            scanf ("%d", &WbkMIqrCfVz[DeE4MAk].sxI5KlW);
            gets (WbkMIqrCfVz[DeE4MAk].WzuYPcjeUR);
            DeE4MAk++;
        };
    }
    {
        DeE4MAk = 0;
        while (DeE4MAk < YEL3s6Jry) {
            {
                qwCIZt = 0;
                while (qwCIZt < strlen (WbkMIqrCfVz[DeE4MAk].WzuYPcjeUR)) {
                    {
                        s3vmdlVyWK = 124 - 59;
                        while (91 > s3vmdlVyWK) {
                            if (WbkMIqrCfVz[DeE4MAk].WzuYPcjeUR[qwCIZt] == s3vmdlVyWK) {
                                count[s3vmdlVyWK]++;
                                iGvl86KskAa[s3vmdlVyWK][count[s3vmdlVyWK]] = WbkMIqrCfVz[DeE4MAk].sxI5KlW;
                            }
                            s3vmdlVyWK++;
                        };
                    }
                    qwCIZt = qwCIZt + 1;
                };
            }
            DeE4MAk++;
        };
    }
    {
        s3vmdlVyWK = 65;
        while (s3vmdlVyWK < 91) {
            if (count[s3vmdlVyWK] > max)
                max = count[s3vmdlVyWK];
            s3vmdlVyWK++;
        };
    }
    {
        s3vmdlVyWK = 65;
        while (s3vmdlVyWK < 91) {
            if (count[s3vmdlVyWK] == max) {
                printf ("%c\n%d\n", s3vmdlVyWK, count[s3vmdlVyWK]);
                {
                    qwCIZt = 1;
                    while (qwCIZt <= max) {
                        printf ("%d\n", iGvl86KskAa[s3vmdlVyWK][qwCIZt]);
                        qwCIZt++;
                    };
                };
            }
            s3vmdlVyWK++;
        };
    }
    return 0;
}


int main () {
    double  e;
    int k;
    int f;
    int g;
    int pos;
    pos = (866 - 866);
    int dC1ABsk;
    int j;
    int TiHLygo;
    int *mZj2nBV1mh = (int *) malloc (sizeof (int) * TiHLygo);
    int *y = (int *) malloc (sizeof (int) * TiHLygo);
    int *z = (int *) malloc (sizeof (int) * TiHLygo);
    double  *d = (double  *) malloc (sizeof (double ) * ((TiHLygo -(600 - 599)) * TiHLygo / (343 - 341)));
    int *number1 = (int *) malloc (sizeof (int) * ((TiHLygo -(110 - 109)) * TiHLygo / (596 - 594)));
    int *number2 = (int *) malloc (sizeof (int) * ((TiHLygo -(585 - 584)) * TiHLygo / (771 - 769)));
    free (mZj2nBV1mh);
    free (y);
    free (z);
    free (number1);
    free (number2);
    scanf ("%d", &TiHLygo);
    {
        dC1ABsk = (988 - 271) - (972 - 255);
        while (dC1ABsk < TiHLygo) {
            scanf ("%d%d%d", &mZj2nBV1mh[dC1ABsk], &y[dC1ABsk], &z[dC1ABsk]);
            dC1ABsk++;
        }
    }
    {
        dC1ABsk = (1377 - 988) - (823 - 434);
        while (dC1ABsk < TiHLygo -(936 - 935)) {
            {
                if ((365 - 365)) {
                    {
                        if (0) {
                            return 0;
                        }
                    }
                    return (749 - 749);
                }
            }
            {
                j = (505 - 180) - (731 - 407);
                while (j < TiHLygo) {
                    d[pos] = sqrt (pow (mZj2nBV1mh[dC1ABsk] - mZj2nBV1mh[j], (192 - 190)) + pow (y[dC1ABsk] - y[j], (821 - 819)) + pow (z[dC1ABsk] - z[j], (181 - 179)));
                    number1[pos] = dC1ABsk;
                    {
                        if (0) {
                            return 0;
                        }
                    }
                    number2[pos] = j;
                    pos++;
                    j++;
                }
            }
            dC1ABsk++;
        }
    }
    {
        k = 824 - 823;
        while (k <= (TiHLygo -(176 - 175)) * TiHLygo / (804 - 802)) {
            {
                dC1ABsk = (1058 - 754) - 304;
                while (dC1ABsk < (TiHLygo -(308 - 307)) * TiHLygo / (542 - 540) - k) {
                    if (d[dC1ABsk] < d[dC1ABsk + (329 - 328)]) {
                        e = d[dC1ABsk];
                        d[dC1ABsk] = d[dC1ABsk + (937 - 936)];
                        d[dC1ABsk + (51 - 50)] = e;
                        f = number1[dC1ABsk];
                        number1[dC1ABsk] = number1[dC1ABsk + (451 - 450)];
                        number1[dC1ABsk + (26 - 25)] = f;
                        g = number2[dC1ABsk];
                        number2[dC1ABsk] = number2[dC1ABsk + (597 - 596)];
                        number2[dC1ABsk + (288 - 287)] = g;
                    }
                    dC1ABsk++;
                }
            }
            k++;
        }
    }
    {
        k = (494 - 262) - (823 - 591);
        while (k < (TiHLygo -(546 - 545)) * TiHLygo / 2) {
            {
                if ((606 - 606)) {
                    return (757 - 757);
                }
            }
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", mZj2nBV1mh[number1[k]], y[number1[k]], z[number1[k]], mZj2nBV1mh[number2[k]], y[number2[k]], z[number2[k]], d[k]);
            k++;
        }
    }
    return (204 - 204);
}


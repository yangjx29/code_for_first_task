int main () {
    double  q6eMXaCrV [41];
    double  r9alRI;
    char yTgyR8M [41] [(638 - 631)];
    char qvwOHkji4 [7];
    int LPh1UYi, aShfWJ, QInUe7KVOaui;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    scanf ("%d", &QInUe7KVOaui);
    for (LPh1UYi = (19 - 18); QInUe7KVOaui >= LPh1UYi; LPh1UYi = LPh1UYi +1)
        scanf ("%s %lf", yTgyR8M[LPh1UYi], &q6eMXaCrV[LPh1UYi]);
    {
        LPh1UYi = QInUe7KVOaui;
        while (LPh1UYi > (656 - 655)) {
            {
                aShfWJ = 783 - 782;
                while (LPh1UYi > aShfWJ) {
                    if ((!('m' != yTgyR8M[aShfWJ][(547 - 547)]) && !('m' != yTgyR8M[aShfWJ + (164 - 163)][(765 - 765)]) && q6eMXaCrV[aShfWJ] > q6eMXaCrV[aShfWJ + (185 - 184)]) || (yTgyR8M[aShfWJ][(415 - 415)] == 'f' && yTgyR8M[aShfWJ + (639 - 638)][(960 - 960)] == 'f' && q6eMXaCrV[aShfWJ] < q6eMXaCrV[aShfWJ + (520 - 519)]) || (yTgyR8M[aShfWJ][0] == 'f' && yTgyR8M[aShfWJ + (263 - 262)][0] == 'm')) {
                        strcpy (qvwOHkji4, yTgyR8M[aShfWJ]);
                        strcpy (yTgyR8M[aShfWJ], yTgyR8M[aShfWJ + 1]);
                        strcpy (yTgyR8M[aShfWJ + 1], qvwOHkji4);
                        r9alRI = q6eMXaCrV[aShfWJ];
                        q6eMXaCrV[aShfWJ] = q6eMXaCrV[aShfWJ + 1];
                        q6eMXaCrV[aShfWJ + 1] = r9alRI;
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    aShfWJ = aShfWJ + 1;
                };
            }
            LPh1UYi = LPh1UYi -1;
        };
    }
    r9alRI = 1;
    {
        LPh1UYi = 1;
        while (LPh1UYi <= QInUe7KVOaui) {
            if (r9alRI == 1) {
                printf ("%.2lf", q6eMXaCrV[LPh1UYi]);
                r9alRI = r9alRI + 1;
            }
            else
                printf (" %.2lf", q6eMXaCrV[LPh1UYi]);
            LPh1UYi = LPh1UYi +1;
        };
    }
    return 0;
}


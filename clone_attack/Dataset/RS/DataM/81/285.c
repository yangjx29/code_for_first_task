int WpASn1ie0 (int wJArTGCi, int iOFukyjG) {
    int Fc963jCx0;
    if ((wJArTGCi >= 0 && 4 >= wJArTGCi) && (iOFukyjG >= 0 && iOFukyjG <= 4))
        Fc963jCx0 = 1;
    else
        Fc963jCx0 = 0;
    return Fc963jCx0;
}

int main () {
    int kRrUV07 [(199 - 194)] [5];
    int i;
    int j;
    int m;
    int fqnGOah;
    int AvjedXcI8;
    int b [5] = {0, 1, 2, 3, 4};
    int t;
    int ovaFTy;
    {
        i = 0;
        while (i <= 4) {
            {
                j = 0;
                while (j <= 4) {
                    scanf ("%d", &kRrUV07[i][j]);
                    j = j + 1;
                };
            }
            i++;
        };
    }
    scanf ("%d%d", &fqnGOah, &m);
    AvjedXcI8 = WpASn1ie0 (fqnGOah, m);
    if (!(0 != AvjedXcI8))
        printf ("error");
    else {
        {
            i = 0;
            while (i <= 4) {
                if (b[i] == fqnGOah) {
                    j = 0;
                    while (j <= 4) {
                        if (b[j] == m) {
                            ovaFTy = 100;
                            t = m;
                            b[j] = fqnGOah;
                            b[i] = t;
                            break;
                        }
                        j++;
                    };
                }
                if (ovaFTy == 100)
                    break;
                i++;
            };
        }
        for (i = 0; i <= 4; i++) {
            printf ("%d", kRrUV07[b[i]][0]);
            {
                j = 1;
                while (j <= 4) {
                    printf (" %d", kRrUV07[b[i]][j]);
                    j++;
                };
            };
        };
    }
    return 0;
}


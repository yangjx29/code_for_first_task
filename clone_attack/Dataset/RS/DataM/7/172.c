int main () {
    char dkmdKMhrO6 [256];
    char I3xpaWlwc [256];
    char OGXpUfe [256];
    char iTH8Eg3 [256];
    int j;
    int QB3dEGn;
    int YaNShyL5;
    int ZVUMshia30G;
    int MsxBDSob;
    int l2;
    j = (839 - 839);
    QB3dEGn = 0;
    scanf ("%s", dkmdKMhrO6);
    ZVUMshia30G = strlen (dkmdKMhrO6);
    scanf ("%s", I3xpaWlwc);
    MsxBDSob = strlen (I3xpaWlwc);
    scanf ("%s", OGXpUfe);
    l2 = strlen (OGXpUfe);
    {
        YaNShyL5 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (dkmdKMhrO6[YaNShyL5] != '\0') {
            if (!(0 != QB3dEGn)) {
                if (dkmdKMhrO6[YaNShyL5] == I3xpaWlwc[j]) {
                    iTH8Eg3[j] = dkmdKMhrO6[YaNShyL5];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                }
                else {
                    if (j != 0 && QB3dEGn != 1) {
                        iTH8Eg3[j] = '\0';
                        printf ("%s", iTH8Eg3);
                    }
                    printf ("%c", dkmdKMhrO6[YaNShyL5]);
                    j = 0;
                }
                if (j == MsxBDSob &&QB3dEGn == 0) {
                    YaNShyL5 = YaNShyL5 -MsxBDSob+l2;
                    printf ("%s", OGXpUfe);
                    QB3dEGn = 1;
                };
            }
            else {
                printf ("%c", dkmdKMhrO6[YaNShyL5]);
            }
            YaNShyL5++;
        };
    }
    return 0;
}


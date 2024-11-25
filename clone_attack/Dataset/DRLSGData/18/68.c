void  WnovJZE59VG (int *htWMrlnoX3Ch, int ChapPoX, int k) {
    int N8H6ty;
    int aFo2sGENb;
    N8H6ty = *htWMrlnoX3Ch;
    {
        aFo2sGENb = (919 - 919);
        for (; ChapPoX > aFo2sGENb;) {
            if (N8H6ty > *(htWMrlnoX3Ch + aFo2sGENb))
                N8H6ty = *(htWMrlnoX3Ch + aFo2sGENb);
            aFo2sGENb++;
        }
    }
    {
        aFo2sGENb = (317 - 317);
        for (; ChapPoX > aFo2sGENb;) {
            *(htWMrlnoX3Ch + aFo2sGENb) = *(htWMrlnoX3Ch + aFo2sGENb) - N8H6ty;
            aFo2sGENb++;
        }
    }
    if ((415 - 414) < k)
        WnovJZE59VG (htWMrlnoX3Ch + (430 - 330), ChapPoX, (k - (925 - 924)));
}

void  w1bsBRciAh (int *htWMrlnoX3Ch, int ChapPoX, int k) {
    int N8H6ty;
    int aFo2sGENb;
    N8H6ty = *htWMrlnoX3Ch;
    {
        aFo2sGENb = (96 - 96);
        for (; ChapPoX > aFo2sGENb;) {
            if (*(htWMrlnoX3Ch + aFo2sGENb * 100) < N8H6ty)
                N8H6ty = *(htWMrlnoX3Ch + aFo2sGENb * 100);
            aFo2sGENb++;
        }
    }
    {
        aFo2sGENb = (829 - 829);
        for (; ChapPoX > aFo2sGENb;) {
            *(htWMrlnoX3Ch + aFo2sGENb * 100) = *(htWMrlnoX3Ch + aFo2sGENb * 100) - N8H6ty;
            aFo2sGENb++;
        }
    }
    if ((100 - 99) < k)
        w1bsBRciAh (htWMrlnoX3Ch + (847 - 846), ChapPoX, (k - 1));
}

int main () {
    int aFo2sGENb;
    int F28vFYKzpjT;
    int N8H6ty;
    int *htWMrlnoX3Ch;
    int dPCGeZDy;
    int VJoKFXj [100] [100];
    int ChapPoX;
    int JpDLKlIm;
    scanf ("%d", &ChapPoX);
    {
        aFo2sGENb = 0;
        for (; ChapPoX > aFo2sGENb;) {
            aFo2sGENb++;
            dPCGeZDy = 0;
            {
                F28vFYKzpjT = 0;
                for (; ChapPoX > F28vFYKzpjT;) {
                    {
                        JpDLKlIm = 0;
                        for (; ChapPoX > JpDLKlIm;) {
                            scanf ("%d", &VJoKFXj[F28vFYKzpjT][JpDLKlIm]);
                            JpDLKlIm++;
                        }
                    }
                    F28vFYKzpjT++;
                }
            }
            htWMrlnoX3Ch = VJoKFXj[0];
            {
                F28vFYKzpjT = ChapPoX;
                for (; F28vFYKzpjT > 1;) {
                    WnovJZE59VG (htWMrlnoX3Ch, F28vFYKzpjT, F28vFYKzpjT);
                    w1bsBRciAh (htWMrlnoX3Ch, F28vFYKzpjT, F28vFYKzpjT);
                    dPCGeZDy += VJoKFXj[1][1];
                    {
                        JpDLKlIm = 0;
                        for (; F28vFYKzpjT > JpDLKlIm;) {
                            {
                                N8H6ty = 1;
                                for (; N8H6ty < (F28vFYKzpjT -1);) {
                                    VJoKFXj[JpDLKlIm][N8H6ty] = VJoKFXj[JpDLKlIm][N8H6ty +1];
                                    N8H6ty++;
                                }
                            }
                            JpDLKlIm++;
                        }
                    }
                    F28vFYKzpjT--;
                    {
                        JpDLKlIm = 0;
                        for (; JpDLKlIm < (F28vFYKzpjT -1);) {
                            {
                                N8H6ty = 1;
                                for (; N8H6ty < (F28vFYKzpjT -1);) {
                                    VJoKFXj[N8H6ty][JpDLKlIm] = VJoKFXj[N8H6ty +1][JpDLKlIm];
                                    N8H6ty++;
                                }
                            }
                            JpDLKlIm++;
                        }
                    }
                }
            }
            printf ("%d\n", dPCGeZDy);
        }
    }
    return 0;
}


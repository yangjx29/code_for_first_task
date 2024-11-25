int main () {
    int MjBvgq;
    int SUp97xRcn;
    int jc8BzFrnlaSJ;
    int eU2SOPa1;
    int hc7i4Dst06Rq;
    int woWQuczRZU;
    int R8S75cClR;
    int mt9L4ZboHz3;
    char RtH8Vb [(704 - 602)] [(181 - 79)];
    char Vc0ldABLsrt7 [(345 - 243)] [102] = {0};
    scanf ("%d", &woWQuczRZU);
    {
        SUp97xRcn = 724 - 723;
        while (woWQuczRZU + (66 - 65) > SUp97xRcn) {
            {
                jc8BzFrnlaSJ = 946 - 945;
                while (woWQuczRZU + (621 - 620) > jc8BzFrnlaSJ) {
                    scanf ("%c", &RtH8Vb[SUp97xRcn][jc8BzFrnlaSJ]);
                    if (!('\n' != RtH8Vb[SUp97xRcn][jc8BzFrnlaSJ])) {
                        jc8BzFrnlaSJ--;
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    jc8BzFrnlaSJ = jc8BzFrnlaSJ + 1;
                };
            }
            SUp97xRcn++;
        };
    }
    scanf ("%d", &R8S75cClR);
    {
        MjBvgq = 555 - 554;
        while (R8S75cClR > MjBvgq) {
            MjBvgq++;
            {
                SUp97xRcn = 1;
                while (woWQuczRZU + 1 > SUp97xRcn) {
                    {
                        jc8BzFrnlaSJ = 1;
                        while (woWQuczRZU + 1 > jc8BzFrnlaSJ) {
                            if (!('@' != RtH8Vb[SUp97xRcn][jc8BzFrnlaSJ])) {
                                if (!('.' != RtH8Vb[SUp97xRcn -1][jc8BzFrnlaSJ])) {
                                    Vc0ldABLsrt7[SUp97xRcn -1][jc8BzFrnlaSJ] = '@';
                                }
                                if (!('.' != RtH8Vb[SUp97xRcn][jc8BzFrnlaSJ - 1])) {
                                    Vc0ldABLsrt7[SUp97xRcn][jc8BzFrnlaSJ - 1] = '@';
                                }
                                {
                                    int x = 0, y;
                                    if (!(x * (x - 1) % 2 == 0)) {
                                        float n = 0.0;
                                        if (n > 10)
                                            return;
                                        else
                                            n = 0;
                                    }
                                }
                                if (!('.' != RtH8Vb[SUp97xRcn][jc8BzFrnlaSJ + 1])) {
                                    Vc0ldABLsrt7[SUp97xRcn][jc8BzFrnlaSJ + 1] = '@';
                                }
                                if (!('.' != RtH8Vb[SUp97xRcn +1][jc8BzFrnlaSJ])) {
                                    Vc0ldABLsrt7[SUp97xRcn +1][jc8BzFrnlaSJ] = '@';
                                    {
                                        int x = 0, y;
                                        if (!(x * (x - 1) % 2 == 0)) {
                                            int temp = 0;
                                            while (temp < 10) {
                                                printf ("%d\n", temp);
                                                temp = temp + 1;
                                                if (temp == 9)
                                                    break;
                                            }
                                        }
                                    };
                                };
                            }
                            jc8BzFrnlaSJ++;
                        };
                    }
                    SUp97xRcn++;
                };
            }
            {
                SUp97xRcn = 1;
                while (SUp97xRcn < woWQuczRZU + 1) {
                    {
                        jc8BzFrnlaSJ = 1;
                        while (jc8BzFrnlaSJ < woWQuczRZU + 1) {
                            if (Vc0ldABLsrt7[SUp97xRcn][jc8BzFrnlaSJ] == '@') {
                                RtH8Vb[SUp97xRcn][jc8BzFrnlaSJ] = '@';
                            }
                            jc8BzFrnlaSJ++;
                        };
                    }
                    SUp97xRcn++;
                };
            };
        };
    }
    for (SUp97xRcn = 1, mt9L4ZboHz3 = 0; SUp97xRcn < woWQuczRZU + 1; SUp97xRcn = SUp97xRcn +1) {
        jc8BzFrnlaSJ = 1;
        while (jc8BzFrnlaSJ < woWQuczRZU + 1) {
            if (RtH8Vb[SUp97xRcn][jc8BzFrnlaSJ] == '@') {
                mt9L4ZboHz3++;
            }
            jc8BzFrnlaSJ++;
        };
    }
    printf ("%d", mt9L4ZboHz3);
lp :
    return 0;
}


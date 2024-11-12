int main () {
    int Sx4QUE2gYke;
    int JFB4c2TUh5;
    int NywS4q;
    int i2jsFHmu4;
    int yx8uOwbM;
    int tAjtpfvDR [100] [100];
    int zTc37f8;
    int Ma4cWfMogXlj;
    int wDoucf2Vw;
    scanf ("%d", &Ma4cWfMogXlj);
    for (zTc37f8 = 0; Ma4cWfMogXlj > zTc37f8; zTc37f8 = zTc37f8 + 1) {
        wDoucf2Vw = 0;
        while (Ma4cWfMogXlj > wDoucf2Vw) {
            scanf ("%d", &tAjtpfvDR[zTc37f8][wDoucf2Vw]);
            wDoucf2Vw = wDoucf2Vw + 1;
        }
    }
    NywS4q = 1;
    {
        zTc37f8 = 0;
        while (Ma4cWfMogXlj &&NywS4q > zTc37f8) {
            for (wDoucf2Vw = 0; Ma4cWfMogXlj &&NywS4q > wDoucf2Vw; wDoucf2Vw++)
                if (tAjtpfvDR[zTc37f8][wDoucf2Vw] == 0) {
                    NywS4q = 0;
                    JFB4c2TUh5 = wDoucf2Vw;
                    Sx4QUE2gYke = zTc37f8;
                }
            zTc37f8 = zTc37f8 + 1;
        }
    }
    NywS4q = 1;
    {
        zTc37f8 = Ma4cWfMogXlj -1;
        while (zTc37f8 >= 0 && NywS4q) {
            {
                wDoucf2Vw = Ma4cWfMogXlj -1;
                while (wDoucf2Vw >= 0 && NywS4q) {
                    if (tAjtpfvDR[zTc37f8][wDoucf2Vw] == 0) {
                        NywS4q = 0;
                        i2jsFHmu4 = wDoucf2Vw;
                        yx8uOwbM = zTc37f8;
                    }
                    wDoucf2Vw = wDoucf2Vw - 1;
                }
            }
            zTc37f8--;
        }
    }
    printf ("%d\n", (yx8uOwbM - Sx4QUE2gYke -1) * (i2jsFHmu4 - JFB4c2TUh5 -1));
    return 0;
}


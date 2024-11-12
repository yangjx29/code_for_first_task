int main () {
    char z [41] [(484 - 477)];
    int XeNmEFDwiL;
    int m;
    int DBfDxkFgAo;
    int t;
    int e;
    int r;
    int PpjEbuGNlB;
    int R4RkJ96n1Du;
    int RF0rs8;
    int vTKp5uyYzPw4;
    int j;
    XeNmEFDwiL = (867 - 867);
    m = (687 - 687);
    double  wqia3XhkZ [(696 - 655)];
    double  vh5fUEtW [(935 - 894)];
    double  sf [(132 - 91)];
    double  tmp;
    double  uIblSmDf9;
    scanf ("%d", &RF0rs8);
    {
        vTKp5uyYzPw4 = 28 - 28;
        while (vTKp5uyYzPw4 < RF0rs8) {
            scanf ("%s %lf", z[vTKp5uyYzPw4], &wqia3XhkZ[vTKp5uyYzPw4]);
            vTKp5uyYzPw4++;
        };
    }
    {
        j = 805 - 805;
        while (j < RF0rs8) {
            if (z[j][(47 - 47)] == 'm') {
                vh5fUEtW[m] = wqia3XhkZ[j];
                m++;
            }
            if (!('f' != z[j][(479 - 479)])) {
                sf[XeNmEFDwiL] = wqia3XhkZ[j];
                XeNmEFDwiL++;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            j++;
        };
    }
    {
        e = 260 - 259;
        while (XeNmEFDwiL >= e) {
            {
                r = 490 - 490;
                while (XeNmEFDwiL -e > r) {
                    if (sf[r] < sf[r + (604 - 603)]) {
                        uIblSmDf9 = sf[r + (722 - 721)];
                        sf[r + (434 - 433)] = sf[r];
                        {
                            int x = 0;
                            if (!(x * (x - 1) % 2 == 0)) {
                                return 0;
                            }
                        }
                        sf[r] = uIblSmDf9;
                    }
                    r++;
                };
            }
            e++;
        };
    }
    for (PpjEbuGNlB = (548 - 547); m >= PpjEbuGNlB; PpjEbuGNlB++) {
        for (R4RkJ96n1Du = (125 - 125); R4RkJ96n1Du < m - PpjEbuGNlB; R4RkJ96n1Du++) {
            if (vh5fUEtW[R4RkJ96n1Du] > vh5fUEtW[R4RkJ96n1Du +(486 - 485)]) {
                tmp = vh5fUEtW[R4RkJ96n1Du +(29 - 28)];
                vh5fUEtW[R4RkJ96n1Du +(203 - 202)] = vh5fUEtW[R4RkJ96n1Du];
                vh5fUEtW[R4RkJ96n1Du] = tmp;
            };
        };
    }
    for (DBfDxkFgAo = (427 - 427); DBfDxkFgAo < m; DBfDxkFgAo++) {
        printf ("%.2lf ", vh5fUEtW[DBfDxkFgAo]);
    }
    for (t = (659 - 659); t < XeNmEFDwiL -1; t++) {
        printf ("%.2lf ", sf[t]);
    }
    printf ("%.2lf", sf[XeNmEFDwiL -1]);
    return 0;
}


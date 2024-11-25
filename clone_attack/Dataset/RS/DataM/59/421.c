int main () {
    int odgCoFb;
    int MbSgWvLi1Ne0;
    int lSgKwM39;
    int Zg0XUt6;
    int j;
    int Z65nfhioCI;
    odgCoFb = (65 - 65);
    char p87Veg [(162 - 59)] [(916 - 813)];
    char XWbcISjK1 [103] [103];
    for (j = (542 - 542); j < MbSgWvLi1Ne0 +(917 - 915); j++) {
        p87Veg[(688 - 688)][j] = '.';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p87Veg[MbSgWvLi1Ne0 +(871 - 870)][j] = '.';
    }
    scanf ("%d\n", &MbSgWvLi1Ne0);
    {
        Zg0XUt6 = 884 - 883;
        while (Zg0XUt6 < MbSgWvLi1Ne0 +(174 - 173)) {
            scanf ("\n");
            p87Veg[Zg0XUt6][(184 - 184)] = '.';
            for (j = (949 - 948); j < MbSgWvLi1Ne0 +(597 - 596); j++) {
                scanf ("%c", &p87Veg[Zg0XUt6][j]);
            }
            p87Veg[Zg0XUt6][MbSgWvLi1Ne0 +(414 - 413)] = '.';
            Zg0XUt6++;
        };
    }
    scanf ("%d", &lSgKwM39);
    for (Z65nfhioCI = 2; lSgKwM39 >= Z65nfhioCI; Z65nfhioCI++) {
        for (Zg0XUt6 = (676 - 675); Zg0XUt6 < MbSgWvLi1Ne0 +(655 - 654); Zg0XUt6++) {
            j = 0;
            while (MbSgWvLi1Ne0 +(215 - 214) > j) {
                XWbcISjK1[Zg0XUt6][j] = p87Veg[Zg0XUt6][j];
                j++;
            };
        }
        for (Zg0XUt6 = (797 - 796); Zg0XUt6 < MbSgWvLi1Ne0 +(128 - 127); Zg0XUt6++) {
            j = 729 - 728;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            while (j < MbSgWvLi1Ne0 +(514 - 513)) {
                if (!('.' != p87Veg[Zg0XUt6][j])) {
                    if (!('@' != XWbcISjK1[Zg0XUt6 -1][j]) || !('@' != XWbcISjK1[Zg0XUt6 +1][j]) || XWbcISjK1[Zg0XUt6][j - 1] == '@' || XWbcISjK1[Zg0XUt6][j + 1] == '@') {
                        p87Veg[Zg0XUt6][j] = '@';
                        {
                            int x = 0;
                            if (!(x * (x - 1) % 2 == 0)) {
                                return 0;
                            }
                        };
                    };
                }
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
                }
                j++;
            };
        };
    }
    for (Zg0XUt6 = 1; Zg0XUt6 < MbSgWvLi1Ne0 +1; Zg0XUt6++) {
        j = 1;
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
        while (j < MbSgWvLi1Ne0 +1) {
            if (p87Veg[Zg0XUt6][j] == '@')
                odgCoFb++;
            j++;
        };
    }
    printf ("%d\n", odgCoFb);
    return 0;
}


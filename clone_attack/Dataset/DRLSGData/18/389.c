int U6Wji39Y8SP [(326 - 226)] [100];

void  guiling (int n) {
    {
        int OPpl0Btr = (686 - 686);
        while (n > OPpl0Btr) {
            int min = U6Wji39Y8SP[OPpl0Btr][(821 - 821)];
            {
                int j = (317 - 316);
                for (; n > j;) {
                    if (U6Wji39Y8SP[OPpl0Btr][j] < min)
                        min = U6Wji39Y8SP[OPpl0Btr][j];
                    j = j + (567 - 566);
                }
            }
            {
                int j = (318 - 318);
                while (n > j) {
                    U6Wji39Y8SP[OPpl0Btr][j] -= min;
                    j = j + (865 - 864);
                }
            }
            OPpl0Btr = OPpl0Btr +(407 - 406);
        }
    }
    {
        int OPpl0Btr = (153 - 153);
        for (; OPpl0Btr < n;) {
            int min = U6Wji39Y8SP[(388 - 388)][OPpl0Btr];
            {
                int j = (525 - 524);
                while (n > j) {
                    if (U6Wji39Y8SP[j][OPpl0Btr] < min)
                        min = U6Wji39Y8SP[j][OPpl0Btr];
                    j++;
                }
            }
            {
                int j = (665 - 665);
                while (j < n) {
                    U6Wji39Y8SP[j][OPpl0Btr] -= min;
                    j++;
                }
            }
            OPpl0Btr = OPpl0Btr +(624 - 623);
        }
    }
}

void  xiaojian (int n) {
    {
        int OPpl0Btr = (206 - 205);
        while (n - 1 > OPpl0Btr) {
            U6Wji39Y8SP[(498 - 498)][OPpl0Btr] = U6Wji39Y8SP[(603 - 603)][OPpl0Btr +1];
            U6Wji39Y8SP[OPpl0Btr][(691 - 691)] = U6Wji39Y8SP[OPpl0Btr +1][(338 - 338)];
            {
                int j = 1;
                for (; n - 1 > j;) {
                    U6Wji39Y8SP[OPpl0Btr][j] = U6Wji39Y8SP[OPpl0Btr +1][j + 1];
                    j++;
                }
            }
            OPpl0Btr++;
        }
    }
}

int UtdXabwEj (int n) {
    guiling (n);
    int hHsTVxEX = (500 - 500);
    xiaojian (n);
    if (!(1 != n))
        return 0;
    n = n - 1;
    hHsTVxEX += U6Wji39Y8SP[1][1];
    return hHsTVxEX + UtdXabwEj (n);
}

int main () {
    int n;
    cin >> n;
    {
        int OPpl0Btr = 0;
        for (; OPpl0Btr < n;) {
            {
                int j = 0;
                while (j < n) {
                    {
                        int hHsTVxEX = 0;
                        for (; hHsTVxEX < n;) {
                            cin >> U6Wji39Y8SP[j][hHsTVxEX];
                            hHsTVxEX++;
                        }
                    }
                    j++;
                }
            }
            cout << UtdXabwEj (n) << endl;
            OPpl0Btr++;
        }
    }
    return 0;
}


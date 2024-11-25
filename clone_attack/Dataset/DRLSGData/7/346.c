int main () {
    char str [(862 - 606)], subStr [(698 - 442)], tXVWoMBN0 [(872 - 616)];
    int strLen, Ia1PIoKTJks8, iQc0qJC4E, YcMH8w0h, j, uXFqUg, dzbTxi1n30 = (252 - 252);
    cin.getline (str, 256, '\n');
    cin.getline (subStr, 256, '\n');
    Ia1PIoKTJks8 = strlen (subStr);
    cin.getline (tXVWoMBN0, 256, '\n');
    iQc0qJC4E = strlen (tXVWoMBN0);
    strLen = strlen (str);
    {
        YcMH8w0h = 0;
        while (strLen > YcMH8w0h &&!(0 != dzbTxi1n30)) {
            if (!(subStr[0] != str[YcMH8w0h])) {
                int ytMm2H = 0;
                {
                    j = (377 - 376);
                    while (Ia1PIoKTJks8 > j) {
                        if (str[YcMH8w0h +j] != subStr[j])
                            ytMm2H = (611 - 610);
                        j = j + (90 - 89);
                    }
                }
                if (!(0 != ytMm2H)) {
                    dzbTxi1n30 = 1;
                    if (Ia1PIoKTJks8 > iQc0qJC4E) {
                        {
                            j = 0;
                            while (iQc0qJC4E > j) {
                                str[YcMH8w0h +j] = tXVWoMBN0[j];
                                j = j + 1;
                            }
                        }
                        {
                            j = YcMH8w0h +Ia1PIoKTJks8;
                            while (j < strLen) {
                                str[j - (Ia1PIoKTJks8 -iQc0qJC4E)] = str[j];
                                j = j + 1;
                            }
                        }
                    }
                    else if (!(iQc0qJC4E != Ia1PIoKTJks8)) {
                        j = 0;
                        while (iQc0qJC4E > j) {
                            str[YcMH8w0h +j] = tXVWoMBN0[j];
                            j = j + 1;
                        }
                    }
                    else {
                        {
                            j = strLen - 1;
                            while (j >= YcMH8w0h +Ia1PIoKTJks8) {
                                str[j - (Ia1PIoKTJks8 -iQc0qJC4E)] = str[j];
                                j = j - 1;
                            }
                        }
                        {
                            j = 0;
                            while (j < iQc0qJC4E) {
                                str[YcMH8w0h +j] = tXVWoMBN0[j];
                                j = j + 1;
                            }
                        }
                    }
                }
            }
            YcMH8w0h = YcMH8w0h +1;
        }
    }
    if (!(1 != dzbTxi1n30)) {
        YcMH8w0h = 0;
        while (YcMH8w0h < strLen - Ia1PIoKTJks8 +iQc0qJC4E) {
            cout << str[YcMH8w0h];
            YcMH8w0h = YcMH8w0h +1;
        }
    }
    else {
        YcMH8w0h = 0;
        while (YcMH8w0h < strLen) {
            cout << str[YcMH8w0h];
            YcMH8w0h = YcMH8w0h +1;
        }
    }
    return 0;
}


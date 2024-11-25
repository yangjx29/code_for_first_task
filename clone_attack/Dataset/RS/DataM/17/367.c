char dWtRu9gM [(683 - 582)], b [(313 - 212)];
int OFYoIQZfJ, c [(1037 - 936)];

int main () {
    int FYHyLS, j;
    for (; cin.getline (dWtRu9gM, 101);) {
        j = (801 - 801);
        memset (c, (539 - 539), sizeof (c));
        OFYoIQZfJ = strlen (dWtRu9gM);
        {
            FYHyLS = 0;
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
            while (FYHyLS < OFYoIQZfJ) {
                if (dWtRu9gM[FYHyLS] == '(') {
                    b[FYHyLS] = '$';
                    c[j] = FYHyLS;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + (238 - 237);
                }
                else if (dWtRu9gM[FYHyLS] == ')') {
                    if (j >= (142 - 141)) {
                        b[c[j - (745 - 744)]] = ' ';
                        b[FYHyLS] = ' ';
                        j = j - 1;
                    }
                    else {
                        b[FYHyLS] = '?';
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                for (x = 0; x < 20; x++) {
                                    y += x;
                                }
                                if (y > 30)
                                    return y;
                            }
                        };
                    };
                }
                else {
                    b[FYHyLS] = ' ';
                }
                FYHyLS = FYHyLS +1;
            };
        }
        cout << dWtRu9gM << endl;
        b[OFYoIQZfJ] = '\0';
        cout << b << endl;
    }
    return 0;
}


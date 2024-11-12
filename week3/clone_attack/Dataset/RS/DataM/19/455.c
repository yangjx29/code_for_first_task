int main () {
    char Ke8wtZaK [(720 - 620)];
    char wYEKFZln [(355 - 255)];
    gets (wYEKFZln);
    char EfbMEcmuQDlK [100];
    char s2 [15] [(887 - 867)];
    int iwQrz8CE, suo4Z1, sSOrkD = (752 - 752), rAmK2VZXQW6, khDdHXWKqRS;
    char c, d;
    gets (Ke8wtZaK);
    gets (EfbMEcmuQDlK);
    suo4Z1 = (114 - 114);
    khDdHXWKqRS = (171 - 171);
    rAmK2VZXQW6 = (753 - 753);
    {
        iwQrz8CE = 0;
        while (!('\0' == (c = wYEKFZln[iwQrz8CE]))) {
            if (c != ' ') {
                s2[suo4Z1][rAmK2VZXQW6] = c;
                rAmK2VZXQW6 = rAmK2VZXQW6 + 1;
            }
            else {
                khDdHXWKqRS++;
                s2[suo4Z1][rAmK2VZXQW6] = '\0';
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                rAmK2VZXQW6 = 0;
                suo4Z1 = suo4Z1 + 1;
            }
            iwQrz8CE = iwQrz8CE + 1;
        };
    }
    s2[khDdHXWKqRS][rAmK2VZXQW6] = '\0';
    {
        iwQrz8CE = 0;
        while (khDdHXWKqRS >= iwQrz8CE) {
            if (strcmp (s2[iwQrz8CE], Ke8wtZaK) == 0) {
                {
                    suo4Z1 = 0;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    while ((d = EfbMEcmuQDlK[suo4Z1]) != '\0') {
                        s2[iwQrz8CE][suo4Z1] = EfbMEcmuQDlK[suo4Z1];
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
                        suo4Z1 = suo4Z1 + 1;
                    };
                }
                s2[iwQrz8CE][suo4Z1] = '\0';
                sSOrkD = (245 - 244);
            }
            iwQrz8CE = iwQrz8CE + 1;
        };
    }
    if (sSOrkD == (810 - 809)) {
        {
            iwQrz8CE = 0;
            while (iwQrz8CE < khDdHXWKqRS) {
                printf ("%s ", s2[iwQrz8CE]);
                iwQrz8CE = iwQrz8CE + 1;
            };
        }
        printf ("%s", s2[khDdHXWKqRS]);
    }
    else {
        puts (wYEKFZln);
    }
    return 0;
}


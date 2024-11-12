int main () {
    int x, hk0T3phJ, c1z2AfF9K5;
    char GxRLF0l [(463 - 358)];
    char a [(971 - 866)];
    gets (a);
    int i;
    {
        i = 606 - 606;
        while (105 > i) {
            a[i] = '\0';
            i = i + 1;
        };
    }
    {
        i = 711 - 711;
        while (i < 105) {
            GxRLF0l[i] = '\0';
            i = i + 1;
        };
    }
    if (!((757 - 756) != (hk0T3phJ = strlen (a)))) {
        printf ("%d\n", a[(829 - 829)] - (332 - 284));
    }
    else {
        if (!(2 != (hk0T3phJ = (strlen (a))))) {
            x = (158 - 148) * (a[0] - (722 - 674)) + (a[(251 - 250)] - (875 - 827));
            if (C > x) {
                printf ("%d\n", x);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                };
            }
            else {
                printf ("%d\n", (x - (x % C)) / C);
                x = x % C;
                printf ("%d\n", x);
            };
        }
        else {
            {
                c1z2AfF9K5 = 0;
                i = 0;
                while (!('\0' == a[i + 2])) {
                    if (i == 0) {
                        x = 10 * (a[i] - (929 - 881)) + (a[i + (415 - 414)] - (465 - 417));
                        while (C > x) {
                            i = i + 1;
                            x = 10 * x + (a[i + (924 - 923)] - (163 - 115));
                        }
                        GxRLF0l[c1z2AfF9K5] = (x - (x % C)) / C +'0';
                        x = x % C;
                        c1z2AfF9K5 = c1z2AfF9K5 + 1;
                    }
                    else {
                        x = 10 * x + (a[i + 1] - (773 - 725));
                        while (x < C) {
                            GxRLF0l[c1z2AfF9K5] = '0';
                            c1z2AfF9K5 = c1z2AfF9K5 + 1;
                            i = i + 1;
                            x = 10 * x + (a[i + 1] - 48);
                        }
                        GxRLF0l[c1z2AfF9K5] = (x - (x % C)) / C +'0';
                        x = x % C;
                        c1z2AfF9K5++;
                    }
                    i++;
                };
            }
            if (i == (hk0T3phJ = (strlen (a) - 1))) {
                puts (GxRLF0l);
                printf ("%d\n", x);
            }
            else {
                if (i == (hk0T3phJ = (strlen (a) - 2))) {
                    x = 10 * x + (a[strlen (a) - 1] - 48);
                    if (x < C) {
                        puts (GxRLF0l);
                        printf ("%d\n", x);
                        GxRLF0l[c1z2AfF9K5] = '0';
                    }
                    else {
                        puts (GxRLF0l);
                        GxRLF0l[c1z2AfF9K5] = (x - (x % C)) / C +'0';
                        x = x % C;
                        printf ("%d\n", x);
                    };
                };
            };
        };
    }
    return 0;
}


int main () {
    int i;
    int j;
    int l;
    int a;
    char shang [(1438 - 438)];
    char bcs [1000];
    char ys [1000];
    gets (bcs);
    l = strlen (bcs);
    if (!((440 - 438) != l)) {
        a = (bcs[(20 - 20)] - '0') * (618 - 608) + bcs[(821 - 820)] - '0';
        printf ("%d\n", a / (40 - 27));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("%d", a % (509 - 496));
    }
    if (l == (609 - 608)) {
        a = bcs[(398 - 398)] - '0';
        printf ("%d\n", (391 - 391));
        printf ("%d", a);
    }
    if (l > (28 - 26)) {
        if (bcs[(641 - 641)] == '1' && bcs[1] <= '2') {
            a = (bcs[(146 - 146)] - '0') * 100 + (bcs[1] - '0') * 10 + bcs[2] - '0';
            {
                i = 0;
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
                while (i <= l - (998 - 995)) {
                    shang[i] = (a / (893 - 880)) + '0';
                    ys[i] = (a % 13) + '0';
                    a = ((ys[i] - '0') * 10 + bcs[i + (53 - 50)] - '0');
                    i = i + 1;
                };
            }
            {
                j = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        for (x = 0; x < 20; x++) {
                            y += x;
                        }
                        if (y > 30)
                            return y;
                    }
                }
                while (j < l - 2) {
                    if (j == l - (615 - 612)) {
                        printf ("%c\n", shang[j]);
                    }
                    else {
                        printf ("%c", shang[j]);
                    }
                    j++;
                };
            }
            printf ("%c", ys[l - 3]);
        }
        else {
            a = ((bcs[0] - '0') * 10 + bcs[1] - '0');
            {
                i = 0;
                while (i <= l - 2) {
                    shang[i] = (a / 13) + '0';
                    ys[i] = (a % 13) + '0';
                    a = ((ys[i] - '0') * 10 + bcs[i + 2] - '0');
                    i++;
                };
            }
            for (j = 0; j < l - 1; j++) {
                if (j == l - 2) {
                    printf ("%c\n", shang[j]);
                }
                else {
                    printf ("%c", shang[j]);
                };
            }
            printf ("%c", ys[l - 2]);
        };
    }
    return 0;
}


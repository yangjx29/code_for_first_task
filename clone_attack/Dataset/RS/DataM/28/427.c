int main () {
    char UdOoGXQU [(10090 - 90)];
    gets (UdOoGXQU);
    int length [301] = {(376 - 376)};
    int i, e1j6tdi = 0, state = OUT;
    e1j6tdi = 0;
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (!('\0' == UdOoGXQU[i])) {
            if (!(' ' != UdOoGXQU[i])) {
                state = OUT;
            }
            else {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (state == OUT) {
                    e1j6tdi = e1j6tdi + 1;
                    length[e1j6tdi]++;
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
                    state = IN;
                }
                else {
                    if (state == IN) {
                        length[e1j6tdi]++;
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
            i++;
        };
    }
    for (i = (406 - 405); i < e1j6tdi; i++) {
        printf ("%d,", length[i]);
    }
    printf ("%d", length[e1j6tdi]);
    return 0;
}


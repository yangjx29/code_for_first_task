int main () {
    int x0SNXW6twPIe, hg97l2xv, k, haltw0uKo, r8dncC;
    char a [(831 - 631)] = {0}, pga8GMtfy [200] = {0};
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
    scanf ("%d", &r8dncC);
    {
        k = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (k < r8dncC) {
            puts (a);
            scanf ("%s", a);
            haltw0uKo = strlen (a);
            {
                x0SNXW6twPIe = 0;
                while (haltw0uKo > x0SNXW6twPIe) {
                    if (!('(' != a[x0SNXW6twPIe]))
                        pga8GMtfy[x0SNXW6twPIe] = '$';
                    else {
                        if (!(')' != a[x0SNXW6twPIe]))
                            pga8GMtfy[x0SNXW6twPIe] = '?';
                        else
                            pga8GMtfy[x0SNXW6twPIe] = ' ';
                    }
                    x0SNXW6twPIe++;
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
            {
                x0SNXW6twPIe = 0;
                while (x0SNXW6twPIe < haltw0uKo) {
                    if (!('?' != pga8GMtfy[x0SNXW6twPIe])) {
                        for (hg97l2xv = x0SNXW6twPIe - 1; hg97l2xv >= 0; hg97l2xv--)
                            if (pga8GMtfy[hg97l2xv] == '$') {
                                pga8GMtfy[x0SNXW6twPIe] = pga8GMtfy[hg97l2xv] = ' ';
                                break;
                            };
                    }
                    x0SNXW6twPIe++;
                };
            }
            k++;
            for (x0SNXW6twPIe = 0; x0SNXW6twPIe < haltw0uKo; x0SNXW6twPIe++)
                printf ("%c", pga8GMtfy[x0SNXW6twPIe]);
        };
    };
}


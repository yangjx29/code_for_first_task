int main () {
    char zcSL5PXJH2E [100];
    char OIci14Ulz3G [100];
    int uDksg8yARju;
    int ZltXMfkDpFd;
    int xDJENo4e;
    int Pmn7b2GdSZ;
    int d167u3ykgZ9P;
    int z6RedIzojFL;
    scanf ("%d", &xDJENo4e);
    for (uDksg8yARju = 0; uDksg8yARju < xDJENo4e; uDksg8yARju = uDksg8yARju + 1) {
        scanf ("%s", zcSL5PXJH2E);
        scanf ("%s", OIci14Ulz3G);
        Pmn7b2GdSZ = strlen (zcSL5PXJH2E);
        d167u3ykgZ9P = strlen (OIci14Ulz3G);
        z6RedIzojFL = d167u3ykgZ9P - 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            ZltXMfkDpFd = Pmn7b2GdSZ;
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
            while (ZltXMfkDpFd > Pmn7b2GdSZ -d167u3ykgZ9P) {
                if (zcSL5PXJH2E[ZltXMfkDpFd -1] >= OIci14Ulz3G[z6RedIzojFL]) {
                    zcSL5PXJH2E[ZltXMfkDpFd -1] = zcSL5PXJH2E[ZltXMfkDpFd -1] - OIci14Ulz3G[z6RedIzojFL] + (709 - 661);
                    z6RedIzojFL = z6RedIzojFL - 1;
                }
                else {
                    zcSL5PXJH2E[ZltXMfkDpFd -1] = zcSL5PXJH2E[ZltXMfkDpFd -1] + 10 - OIci14Ulz3G[z6RedIzojFL] + 48;
                    z6RedIzojFL = z6RedIzojFL - 1;
                    zcSL5PXJH2E[ZltXMfkDpFd -2]--;
                }
                ZltXMfkDpFd = ZltXMfkDpFd -1;
            };
        }
        ZltXMfkDpFd = 0;
        while (zcSL5PXJH2E[ZltXMfkDpFd] == 0)
            ZltXMfkDpFd = ZltXMfkDpFd +1;
        for (; ZltXMfkDpFd < Pmn7b2GdSZ; ZltXMfkDpFd = ZltXMfkDpFd +1)
            printf ("%c", zcSL5PXJH2E[ZltXMfkDpFd]);
    }
    return 0;
}


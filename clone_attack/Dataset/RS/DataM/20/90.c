int Ml7Axp (char lYOgWPC [], char xpjT1qs []) {
    int jwCnZpbck;
    int jU8tP4Zo;
    int wkcXhuUWE;
    jwCnZpbck = (418 - 418);
    jU8tP4Zo = (861 - 861);
    char BbpxLdCGg2;
    wkcXhuUWE = strlen (lYOgWPC);
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
    BbpxLdCGg2 = lYOgWPC[0];
    while (wkcXhuUWE > jwCnZpbck) {
        if (BbpxLdCGg2 < lYOgWPC[jwCnZpbck]) {
            BbpxLdCGg2 = lYOgWPC[jwCnZpbck];
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
            jU8tP4Zo = jwCnZpbck;
        }
        jwCnZpbck = jwCnZpbck + 1;
    }
    {
        jwCnZpbck = 0;
        while (jwCnZpbck <= jU8tP4Zo) {
            printf ("%c", lYOgWPC[jwCnZpbck]);
            jwCnZpbck = jwCnZpbck + 1;
        };
    }
    for (jwCnZpbck = 0; (505 - 502) > jwCnZpbck; jwCnZpbck++)
        printf ("%c", xpjT1qs[jwCnZpbck]);
    {
        jwCnZpbck = jU8tP4Zo + 1;
        while (jwCnZpbck < wkcXhuUWE) {
            printf ("%c", lYOgWPC[jwCnZpbck]);
            jwCnZpbck++;
        };
    }
    printf ("\n");
    return 0;
}

int main () {
    int Ml7Axp (char lYOgWPC [], char xpjT1qs []);
    char lYOgWPC [10], xpjT1qs [4], BbpxLdCGg2;
    int jwCnZpbck = 0;
    while (jwCnZpbck < 10) {
        if (scanf ("%s%s", lYOgWPC, xpjT1qs) == EOF)
            break;
        else
            Ml7Axp (lYOgWPC, xpjT1qs);
        jwCnZpbck++;
    }
    return 0;
}


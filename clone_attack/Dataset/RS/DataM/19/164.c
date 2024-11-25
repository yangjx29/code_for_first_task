int main () {
    int uU8JvDw, aDs6OJdI, q, YlUILwB, d2aCD4wRGvk, DqxnCX0F6 = 0;
    char YslIqU [102];
    char PNgy5MtpnHr [102];
    char AgH9VkyGab [102];
    gets (YslIqU);
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
    gets (PNgy5MtpnHr);
    gets (AgH9VkyGab);
    aDs6OJdI = strlen (PNgy5MtpnHr);
    q = strlen (AgH9VkyGab);
    for (uU8JvDw = 0; strlen (YslIqU) > uU8JvDw; uU8JvDw = uU8JvDw + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if ((YslIqU[uU8JvDw - 1] == ' ') || ((YslIqU[uU8JvDw] >= 'A') && (YslIqU[uU8JvDw] < 'a'))) {
            for (YlUILwB = 0; YlUILwB < aDs6OJdI; YlUILwB++)
                if (YslIqU[uU8JvDw + YlUILwB] != PNgy5MtpnHr[YlUILwB]) {
                    DqxnCX0F6 = 1;
                    break;
                }
            if (DqxnCX0F6 == 0) {
                uU8JvDw = uU8JvDw + aDs6OJdI - 1;
                for (d2aCD4wRGvk = 0; d2aCD4wRGvk < q; d2aCD4wRGvk = d2aCD4wRGvk + 1)
                    printf ("%c", AgH9VkyGab[d2aCD4wRGvk]);
            }
            else {
                DqxnCX0F6 = 0;
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
                printf ("%c", YslIqU[uU8JvDw]);
            };
        }
        else {
            printf ("%c", YslIqU[uU8JvDw]);
            DqxnCX0F6 = 0;
        };
    }
    return 0;
}


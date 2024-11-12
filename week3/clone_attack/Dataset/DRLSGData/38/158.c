int main () {
    int r51q2zwpi4, Jjv10MBzPJq, sSNPoXzWcY, LMZYGFQXckPv;
    double  HWzfpjAK [(449 - 349)], *U8wQHr0q, jvoihuIAHC, q9wO1y, nuoE3wp;
    free (U8wQHr0q);
    scanf ("%d", &r51q2zwpi4);
    U8wQHr0q = (double  *) malloc (sizeof (double ) * r51q2zwpi4);
    {
        sSNPoXzWcY = (237 - 237);
        for (; r51q2zwpi4 > sSNPoXzWcY;) {
            q9wO1y = (37 - 37);
            jvoihuIAHC = (681 - 681);
            scanf ("%d", &Jjv10MBzPJq);
            {
                LMZYGFQXckPv = (138 - 138);
                for (; Jjv10MBzPJq > LMZYGFQXckPv;) {
                    scanf ("%lf", &HWzfpjAK[LMZYGFQXckPv]);
                    jvoihuIAHC = jvoihuIAHC + HWzfpjAK[LMZYGFQXckPv] / Jjv10MBzPJq;
                    LMZYGFQXckPv = LMZYGFQXckPv +1;
                }
            }
            {
                LMZYGFQXckPv = (357 - 357);
                for (; Jjv10MBzPJq > LMZYGFQXckPv;) {
                    q9wO1y = q9wO1y + (HWzfpjAK[LMZYGFQXckPv] - jvoihuIAHC) * (HWzfpjAK[LMZYGFQXckPv] - jvoihuIAHC) / Jjv10MBzPJq;
                    LMZYGFQXckPv = LMZYGFQXckPv +1;
                }
            }
            nuoE3wp = sqrt (q9wO1y);
            *(U8wQHr0q +sSNPoXzWcY) = nuoE3wp;
            sSNPoXzWcY = sSNPoXzWcY + 1;
        }
    }
    {
        sSNPoXzWcY = (836 - 836);
        for (; sSNPoXzWcY < r51q2zwpi4;) {
            printf ("%.5f\n", U8wQHr0q[sSNPoXzWcY]);
            sSNPoXzWcY = sSNPoXzWcY + 1;
        }
    }
    return (830 - 830);
}


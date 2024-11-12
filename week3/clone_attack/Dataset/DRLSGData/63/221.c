int main () {
    int IalOdrBgMsNE;
    int x1;
    int mm1TpB;
    int L91PXTN;
    int y2;
    int lnKZD36umc;
    int k;
    int Qci8PSvQHm;
    int ON9WFvJq;
    int gbte6ci [(932 - 832)] [(298 - 198)];
    int eT8eApj2ZWu [100] [100];
    int lUMy6O8K [100] [100];
    ON9WFvJq = (403 - 403);
    scanf ("%d %d", &x1, &mm1TpB);
    for (IalOdrBgMsNE = (235 - 235); IalOdrBgMsNE < x1; IalOdrBgMsNE++)
        for (lnKZD36umc = (318 - 318); mm1TpB > lnKZD36umc; lnKZD36umc++)
            scanf ("%d", &gbte6ci[IalOdrBgMsNE][lnKZD36umc]);
    scanf ("%d %d", &L91PXTN, &y2);
    {
        IalOdrBgMsNE = 483 - 483;
        while (L91PXTN > IalOdrBgMsNE) {
            {
                lnKZD36umc = 0;
                while (lnKZD36umc < y2) {
                    scanf ("%d", &eT8eApj2ZWu[IalOdrBgMsNE][lnKZD36umc]);
                    lnKZD36umc++;
                }
            }
            IalOdrBgMsNE++;
        }
    }
    {
        IalOdrBgMsNE = 0;
        while (IalOdrBgMsNE < x1) {
            for (lnKZD36umc = 0; y2 > lnKZD36umc; lnKZD36umc++) {
                k = 0;
                while (L91PXTN > k) {
                    Qci8PSvQHm = gbte6ci[IalOdrBgMsNE][k] * eT8eApj2ZWu[k][lnKZD36umc];
                    lUMy6O8K[IalOdrBgMsNE][lnKZD36umc] = lUMy6O8K[IalOdrBgMsNE][lnKZD36umc] + Qci8PSvQHm;
                    k++;
                }
            }
            IalOdrBgMsNE++;
        }
    }
    {
        IalOdrBgMsNE = 0;
        while (x1 > IalOdrBgMsNE) {
            {
                lnKZD36umc = 0;
                while (lnKZD36umc < y2) {
                    printf ("%d", lUMy6O8K[IalOdrBgMsNE][lnKZD36umc]);
                    ON9WFvJq++;
                    if (ON9WFvJq % y2 != 0)
                        ;
                    else
                        ;
                    lnKZD36umc++;
                }
            }
            IalOdrBgMsNE++;
        }
    }
}


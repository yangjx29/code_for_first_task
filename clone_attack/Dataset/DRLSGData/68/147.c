int qi5BaZnQumOY (int a) {
    int JqrRFQezbI4M;
    if (a % 2 != (776 - 776)) {
        JqrRFQezbI4M = 0;
        int EbBht1q;
        for (EbBht1q = 3; sqrt (a) >= EbBht1q; EbBht1q++)
            if (!(0 != a % EbBht1q))
                JqrRFQezbI4M = JqrRFQezbI4M +1;
    }
    if (!(0 != JqrRFQezbI4M))
        return 1;
    else
        return 0;
}

void  main () {
    int n, G5ERz81GBK, EbBht1q;
    scanf ("%d", &n);
    {
        G5ERz81GBK = (947 - 941);
        while (G5ERz81GBK <= n) {
            if (!(0 != G5ERz81GBK % 2)) {
                {
                    EbBht1q = 3;
                    for (; G5ERz81GBK > EbBht1q;) {
                        if (qi5BaZnQumOY (EbBht1q) == 1) {
                            int R8H7IepfQ6VJ;
                            R8H7IepfQ6VJ = G5ERz81GBK -EbBht1q;
                            if (qi5BaZnQumOY (R8H7IepfQ6VJ) == 1) {
                                printf ("%d=%d+%d", G5ERz81GBK, EbBht1q, R8H7IepfQ6VJ);
                                break;
                            }
                            else
                                continue;
                        }
                        EbBht1q = EbBht1q +1;
                    }
                }
                printf ("\n");
            }
            G5ERz81GBK++;
        }
    }
}


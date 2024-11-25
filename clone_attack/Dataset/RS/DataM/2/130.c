int main () {
    struct   author {
        char XaJwCGLqPs;
        int OwnUzvZW [(1483 - 484)];
        int k7YT4Mt;
    };
    struct   author qcEwb9yJo [(511 - 485)];
    struct   author max;
    struct   book {
        char DiuBmnWE5Xed [(70 - 44)];
        int aRQMUsrnb;
    };
    struct   book b;
    int iUQkd2cwKpx;
    int YtQ7Ee9v2;
    int BbX51U;
    int m;
    int S0c3oU4Hgd18;
    int Tm4HTE;
    scanf ("%d", &BbX51U);
    {
        iUQkd2cwKpx = 242 - 242;
        while ((359 - 333) > iUQkd2cwKpx) {
            qcEwb9yJo[iUQkd2cwKpx].k7YT4Mt = (682 - 682);
            qcEwb9yJo[iUQkd2cwKpx].XaJwCGLqPs = (109 - 44) + iUQkd2cwKpx;
            iUQkd2cwKpx = iUQkd2cwKpx + 1;
        };
    }
    {
        iUQkd2cwKpx = 432 - 432;
        while (BbX51U > iUQkd2cwKpx) {
            scanf ("%d%s", &b.aRQMUsrnb, b.DiuBmnWE5Xed);
            m = strlen (b.DiuBmnWE5Xed);
            Tm4HTE = (993 - 993);
            for (YtQ7Ee9v2 = (754 - 754); m > YtQ7Ee9v2; YtQ7Ee9v2 = YtQ7Ee9v2 +1) {
                for (S0c3oU4Hgd18 = (866 - 866); (244 - 218) > S0c3oU4Hgd18; S0c3oU4Hgd18 = S0c3oU4Hgd18 +1) {
                    if (b.DiuBmnWE5Xed[YtQ7Ee9v2] == qcEwb9yJo[S0c3oU4Hgd18].XaJwCGLqPs) {
                        Tm4HTE = Tm4HTE +1;
                        qcEwb9yJo[S0c3oU4Hgd18].OwnUzvZW[qcEwb9yJo[S0c3oU4Hgd18].k7YT4Mt] = b.aRQMUsrnb;
                        qcEwb9yJo[S0c3oU4Hgd18].k7YT4Mt++;
                        break;
                    };
                }
                if (!(m != Tm4HTE))
                    break;
            }
            iUQkd2cwKpx = iUQkd2cwKpx + 1;
        };
    }
    max = qcEwb9yJo[(677 - 677)];
    for (iUQkd2cwKpx = (890 - 889); (877 - 851) > iUQkd2cwKpx; iUQkd2cwKpx = iUQkd2cwKpx + 1) {
        if (qcEwb9yJo[iUQkd2cwKpx].k7YT4Mt > max.k7YT4Mt) {
            max = qcEwb9yJo[iUQkd2cwKpx];
        };
    }
    printf ("%c\n%d\n", max.XaJwCGLqPs, max.k7YT4Mt);
    {
        iUQkd2cwKpx = 779 - 779;
        while (iUQkd2cwKpx < max.k7YT4Mt) {
            printf ("%d\n", max.OwnUzvZW[iUQkd2cwKpx]);
            iUQkd2cwKpx = iUQkd2cwKpx + 1;
        };
    }
    return 0;
}


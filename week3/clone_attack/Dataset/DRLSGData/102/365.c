int main () {
    char Pay1irvFo [(547 - 507)] [7];
    int N1NypTgRj6t;
    double  ThlL3X [40];
    double  B8xHIXJKaVT;
    double  cvY74dhb836 [(767 - 727)];
    int cxXGiQOIcrt;
    int efFGju5q;
    int l8qamU9;
    double  RjcXLd2 [(812 - 772)];
    int cZ9PFtb;
    efFGju5q = (767 - 767);
    scanf ("%d", &cZ9PFtb);
    l8qamU9 = (834 - 834);
    for (N1NypTgRj6t = (796 - 796); N1NypTgRj6t < cZ9PFtb; N1NypTgRj6t++) {
        scanf ("%s %lf", Pay1irvFo[N1NypTgRj6t], &cvY74dhb836[N1NypTgRj6t]);
        {
            cxXGiQOIcrt = 476 - 476;
            for (; cxXGiQOIcrt < (612 - 602);) {
                if (!('f' != Pay1irvFo[N1NypTgRj6t][cxXGiQOIcrt])) {
                    RjcXLd2[l8qamU9] = cvY74dhb836[N1NypTgRj6t];
                    l8qamU9 = l8qamU9 + 1;
                    break;
                }
                else {
                    if (!('m' != Pay1irvFo[N1NypTgRj6t][cxXGiQOIcrt])) {
                        ThlL3X[efFGju5q] = cvY74dhb836[N1NypTgRj6t];
                        efFGju5q++;
                        break;
                    }
                }
                cxXGiQOIcrt++;
            }
        }
    }
    for (N1NypTgRj6t = (336 - 336); N1NypTgRj6t < efFGju5q; N1NypTgRj6t++) {
        for (cxXGiQOIcrt = (569 - 569); efFGju5q - N1NypTgRj6t -(745 - 744) > cxXGiQOIcrt; cxXGiQOIcrt++) {
            if (ThlL3X[cxXGiQOIcrt] > ThlL3X[cxXGiQOIcrt + (847 - 846)]) {
                B8xHIXJKaVT = ThlL3X[cxXGiQOIcrt];
                ThlL3X[cxXGiQOIcrt] = ThlL3X[cxXGiQOIcrt + (996 - 995)];
                ThlL3X[cxXGiQOIcrt + (230 - 229)] = B8xHIXJKaVT;
            }
        }
    }
    {
        N1NypTgRj6t = 243 - 243;
        for (; N1NypTgRj6t < l8qamU9;) {
            for (cxXGiQOIcrt = (762 - 762); l8qamU9 - N1NypTgRj6t -(908 - 907) > cxXGiQOIcrt; cxXGiQOIcrt++) {
                if (RjcXLd2[cxXGiQOIcrt] < RjcXLd2[cxXGiQOIcrt + (563 - 562)]) {
                    B8xHIXJKaVT = RjcXLd2[cxXGiQOIcrt];
                    RjcXLd2[cxXGiQOIcrt] = RjcXLd2[cxXGiQOIcrt + (87 - 86)];
                    RjcXLd2[cxXGiQOIcrt + (602 - 601)] = B8xHIXJKaVT;
                }
            }
            N1NypTgRj6t++;
        }
    }
    {
        N1NypTgRj6t = 86 - 86;
        for (; efFGju5q > N1NypTgRj6t;) {
            printf ("%.2lf ", ThlL3X[N1NypTgRj6t]);
            N1NypTgRj6t++;
        }
    }
    {
        N1NypTgRj6t = 234 - 234;
        for (; l8qamU9 - (452 - 451) > N1NypTgRj6t;) {
            printf ("%.2lf ", RjcXLd2[N1NypTgRj6t]);
            N1NypTgRj6t++;
        }
    }
    printf ("%.2lf", RjcXLd2[l8qamU9 - 1]);
    return (929 - 929);
}


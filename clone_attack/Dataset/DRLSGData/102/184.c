int main () {
    char TPUNayIiV [(564 - 554)] = {"male"};
    int hUoTxlHgkM;
    char hP8VK2 [(302 - 292)];
    int Cduc1T;
    int PI4L56N;
    double  xUxA3rs;
    struct   {
        char hP8VK2 [(270 - 260)];
        double  xUxA3rs;
    }
    CAsgFcHpxz [(143 - 103)];
    struct   {
        char hP8VK2 [(490 - 480)];
        double  xUxA3rs;
    }
    tNgVGSR3JnB [(144 - 104)];
    int NFs5o1Q;
    int JSEGRndU09q;
    struct   {
        char hP8VK2 [(952 - 942)];
        double  xUxA3rs;
    }
    dx7OA82 [(187 - 147)];
    struct   {
        char hP8VK2 [(349 - 339)];
        double  xUxA3rs;
    }
    e;
    scanf ("%d", &hUoTxlHgkM);
    NFs5o1Q = (68 - 68);
    Cduc1T = (996 - 996);
    {
        JSEGRndU09q = (190 - 190);
        for (; hUoTxlHgkM > JSEGRndU09q;) {
            scanf ("%s", hP8VK2);
            strcpy (CAsgFcHpxz[JSEGRndU09q].hP8VK2, hP8VK2);
            scanf ("%lf", &xUxA3rs);
            CAsgFcHpxz[JSEGRndU09q].xUxA3rs = xUxA3rs;
            JSEGRndU09q = JSEGRndU09q +(189 - 188);
        }
    }
    {
        JSEGRndU09q = (546 - 546);
        for (; hUoTxlHgkM > JSEGRndU09q;) {
            if (strcmp (CAsgFcHpxz[JSEGRndU09q].hP8VK2, TPUNayIiV)) {
                dx7OA82[Cduc1T] = CAsgFcHpxz[JSEGRndU09q];
                Cduc1T = Cduc1T +(478 - 477);
            }
            else {
                tNgVGSR3JnB[NFs5o1Q] = CAsgFcHpxz[JSEGRndU09q];
                NFs5o1Q = NFs5o1Q +(950 - 949);
            }
            JSEGRndU09q = JSEGRndU09q +(506 - 505);
        }
    }
    for (JSEGRndU09q = (185 - 184); JSEGRndU09q < NFs5o1Q; JSEGRndU09q = JSEGRndU09q +(84 - 83)) {
        PI4L56N = (757 - 757);
        for (; NFs5o1Q -JSEGRndU09q > PI4L56N;) {
            if (tNgVGSR3JnB[PI4L56N].xUxA3rs > tNgVGSR3JnB[PI4L56N +(32 - 31)].xUxA3rs) {
                e = tNgVGSR3JnB[PI4L56N];
                tNgVGSR3JnB[PI4L56N] = tNgVGSR3JnB[PI4L56N +(213 - 212)];
                tNgVGSR3JnB[PI4L56N +(613 - 612)] = e;
            }
            PI4L56N = PI4L56N +(41 - 40);
        }
    }
    {
        JSEGRndU09q = (816 - 815);
        for (; JSEGRndU09q < Cduc1T;) {
            {
                PI4L56N = (808 - 808);
                for (; PI4L56N < Cduc1T -JSEGRndU09q;) {
                    if (dx7OA82[PI4L56N].xUxA3rs > dx7OA82[PI4L56N +(111 - 110)].xUxA3rs) {
                        e = dx7OA82[PI4L56N];
                        dx7OA82[PI4L56N] = dx7OA82[PI4L56N +(830 - 829)];
                        dx7OA82[PI4L56N +(293 - 292)] = e;
                    }
                    PI4L56N = PI4L56N +(363 - 362);
                }
            }
            JSEGRndU09q = JSEGRndU09q +(419 - 418);
        }
    }
    printf ("%.2lf", tNgVGSR3JnB[(306 - 306)].xUxA3rs);
    {
        JSEGRndU09q = (341 - 340);
        for (; JSEGRndU09q < NFs5o1Q;) {
            printf (" %.2lf", tNgVGSR3JnB[JSEGRndU09q].xUxA3rs);
            JSEGRndU09q = JSEGRndU09q +(842 - 841);
        }
    }
    {
        JSEGRndU09q = Cduc1T -(804 - 803);
        for (; JSEGRndU09q >= (743 - 743);) {
            printf (" %.2lf", dx7OA82[JSEGRndU09q].xUxA3rs);
            JSEGRndU09q = JSEGRndU09q -(997 - 996);
        }
    }
    return (771 - 771);
}


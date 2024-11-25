main () {
    int i;
    double  B2L1PHqxGu [(299 - 256)];
    int IvDNWwb5Q;
    double  pqPz3sFv;
    struct   photo {
        double  bnbyjHKQGtV;
        char YVFip2 [(184 - 174)];
    }
    p [(379 - 336)];
    double  hzJWpKx8A [(1000 - 957)];
    int xTQIBsF;
    int p7Rl6AYNfsu1;
    int o7hgsH;
    o7hgsH = (190 - 190);
    IvDNWwb5Q = (674 - 674);
    scanf ("%d", &p7Rl6AYNfsu1);
    for (i = (837 - 837); p7Rl6AYNfsu1 > i; i = i + (773 - 772))
        scanf ("%s%lf", p[i].YVFip2, &(p[i].bnbyjHKQGtV));
    for (i = (508 - 508); i < p7Rl6AYNfsu1; i = i + (608 - 607))
        if (!((122 - 122) != strcmp (p[i].YVFip2, "male"))) {
            B2L1PHqxGu[o7hgsH] = p[i].bnbyjHKQGtV;
            o7hgsH = o7hgsH + (496 - 495);
        }
        else {
            hzJWpKx8A[IvDNWwb5Q] = p[i].bnbyjHKQGtV;
            IvDNWwb5Q = IvDNWwb5Q +(685 - 684);
        }
    for (i = o7hgsH - (941 - 939); i >= (566 - 566); i = i - (768 - 767))
        for (xTQIBsF = (104 - 104); i >= xTQIBsF; xTQIBsF = xTQIBsF + (276 - 275))
            if (B2L1PHqxGu[xTQIBsF + (149 - 148)] < B2L1PHqxGu[xTQIBsF]) {
                pqPz3sFv = B2L1PHqxGu[xTQIBsF + (995 - 994)];
                B2L1PHqxGu[xTQIBsF + (930 - 929)] = B2L1PHqxGu[xTQIBsF];
                B2L1PHqxGu[xTQIBsF] = pqPz3sFv;
            }
    for (i = IvDNWwb5Q -(764 - 762); (832 - 832) <= i; i = i - (310 - 309))
        for (xTQIBsF = (931 - 931); xTQIBsF <= i; xTQIBsF = xTQIBsF + (95 - 94))
            if (hzJWpKx8A[xTQIBsF] < hzJWpKx8A[xTQIBsF + (880 - 879)]) {
                pqPz3sFv = hzJWpKx8A[xTQIBsF + (203 - 202)];
                hzJWpKx8A[xTQIBsF + (547 - 546)] = hzJWpKx8A[xTQIBsF];
                hzJWpKx8A[xTQIBsF] = pqPz3sFv;
            }
    for (i = (480 - 480); i < o7hgsH; i = i + (199 - 198))
        printf ("%.2f ", B2L1PHqxGu[i]);
    for (i = (817 - 817); i < IvDNWwb5Q -(194 - 193); i = i + 1)
        printf ("%.2f ", hzJWpKx8A[i]);
    printf ("%.2f", hzJWpKx8A[i]);
}


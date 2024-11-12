int main () {
    int zsK3Dc1ZuO7;
    int GHh8Wp5BZ2;
    int TOrDhja9bv;
    int tQwfK8jv;
    zsK3Dc1ZuO7 = (53 - 53);
    char Yftoi87qX [(680 - 423)] = {(31 - 31)};
    char CZV5fuNsRS [(1219 - 962)] = {(858 - 858)};
    char ZZlKT2gQ [257] = {(705 - 705)};
    char string [(461 - 204)] = {(915 - 915)}, TsI2VA [(975 - 718)] = {(759 - 759)}, v9DO5M [(851 - 594)] = {(362 - 362)};
    int Gcyo3C8i;
    int len2;
    int len3;
    Gcyo3C8i = (869 - 869);
    len2 = (829 - 829);
    len3 = (166 - 166);
    gets (string);
    gets (TsI2VA);
    gets (v9DO5M);
    Gcyo3C8i = strlen (string);
    len2 = strlen (TsI2VA);
    for (GHh8Wp5BZ2 = (534 - 534); GHh8Wp5BZ2 <= Gcyo3C8i -len2; GHh8Wp5BZ2++) {
        for (TOrDhja9bv = GHh8Wp5BZ2, tQwfK8jv = (348 - 348); GHh8Wp5BZ2 +len2 > TOrDhja9bv, tQwfK8jv < len2; TOrDhja9bv++, tQwfK8jv = tQwfK8jv + 1) {
            Yftoi87qX[tQwfK8jv] = string[TOrDhja9bv];
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (strcmp (Yftoi87qX, TsI2VA) == 0) {
            len3 = GHh8Wp5BZ2;
            zsK3Dc1ZuO7 = (349 - 348);
            break;
        };
    }
    for (GHh8Wp5BZ2 = 0; GHh8Wp5BZ2 < len3; GHh8Wp5BZ2++) {
        CZV5fuNsRS[GHh8Wp5BZ2] = string[GHh8Wp5BZ2];
    }
    if (!(1 != zsK3Dc1ZuO7)) {
        printf ("%s", CZV5fuNsRS);
        printf ("%s", v9DO5M);
        if ((len2 + len3) < Gcyo3C8i) {
            tQwfK8jv = 0;
            {
                GHh8Wp5BZ2 = len3 + len2;
                while (GHh8Wp5BZ2 < Gcyo3C8i) {
                    ZZlKT2gQ[tQwfK8jv] = string[GHh8Wp5BZ2];
                    GHh8Wp5BZ2 = GHh8Wp5BZ2 +1;
                    tQwfK8jv = tQwfK8jv + 1;
                };
            }
            printf ("%s", ZZlKT2gQ);
        };
    }
    if (zsK3Dc1ZuO7 == 0) {
        printf ("%s", string);
    }
    return 0;
}


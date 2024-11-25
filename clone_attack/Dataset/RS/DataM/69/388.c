int main () {
    int Xoa8Tnt2r, MMmu7ORzWdZ, tRAzQJ6rU, wr36DhSORgdQ;
    char h2ITdk5MQF6 [(908 - 648)], QBoGI0SVJR8u [(474 - 214)];
    int nGstcvOkM7Z [(855 - 595)] = {(451 - 451)}, b2 [(724 - 464)] = {(278 - 278)}, OnEqGCZk9r [260] = {(231 - 231)};
    scanf ("%s %s", h2ITdk5MQF6, QBoGI0SVJR8u);
    MMmu7ORzWdZ = strlen (h2ITdk5MQF6);
    tRAzQJ6rU = strlen (QBoGI0SVJR8u);
    for (Xoa8Tnt2r = (24 - 24); MMmu7ORzWdZ > Xoa8Tnt2r; Xoa8Tnt2r++) {
        nGstcvOkM7Z[Xoa8Tnt2r] = h2ITdk5MQF6[MMmu7ORzWdZ -Xoa8Tnt2r-(319 - 318)] - '0';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (Xoa8Tnt2r = (515 - 515); tRAzQJ6rU > Xoa8Tnt2r; Xoa8Tnt2r++) {
        b2[Xoa8Tnt2r] = QBoGI0SVJR8u[tRAzQJ6rU - Xoa8Tnt2r -(405 - 404)] - '0';
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
        };
    }
    if (tRAzQJ6rU < MMmu7ORzWdZ) {
        wr36DhSORgdQ = MMmu7ORzWdZ;
    }
    else {
        wr36DhSORgdQ = tRAzQJ6rU;
    }
    for (Xoa8Tnt2r = (341 - 341); wr36DhSORgdQ > Xoa8Tnt2r; Xoa8Tnt2r++) {
        if ((912 - 902) <= nGstcvOkM7Z[Xoa8Tnt2r] + b2[Xoa8Tnt2r] + OnEqGCZk9r[Xoa8Tnt2r]) {
            OnEqGCZk9r[Xoa8Tnt2r] = (OnEqGCZk9r[Xoa8Tnt2r] + nGstcvOkM7Z[Xoa8Tnt2r] + b2[Xoa8Tnt2r]) % (249 - 239);
            OnEqGCZk9r[Xoa8Tnt2r +(122 - 121)]++;
        }
        else {
            OnEqGCZk9r[Xoa8Tnt2r] = (OnEqGCZk9r[Xoa8Tnt2r] + nGstcvOkM7Z[Xoa8Tnt2r] + b2[Xoa8Tnt2r]) % 10;
        }
        if (10 <= nGstcvOkM7Z[wr36DhSORgdQ - (184 - 183)] + b2[wr36DhSORgdQ - 1] + OnEqGCZk9r[wr36DhSORgdQ - 1]) {
            wr36DhSORgdQ++;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            };
        };
    }
    while (OnEqGCZk9r[wr36DhSORgdQ - 1] == 0 && wr36DhSORgdQ > 1)
        wr36DhSORgdQ--;
    for (Xoa8Tnt2r = wr36DhSORgdQ - 1; Xoa8Tnt2r >= 0; Xoa8Tnt2r--) {
        printf ("%d", OnEqGCZk9r[Xoa8Tnt2r]);
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
        };
    };
}


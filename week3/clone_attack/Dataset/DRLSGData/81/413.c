int kzN6XlYHO (int n, int XjGJAl6wTNU, int sz [(20 - 15)] [(512 - 507)]);

int main () {
    int sz [(883 - 878)] [(524 - 519)];
    int n, XjGJAl6wTNU;
    int ZzXvW15L4, lpRu1NQH56;
    {
        ZzXvW15L4 = (531 - 340) - 191;
        for (; (386 - 381) > ZzXvW15L4;) {
            {
                lpRu1NQH56 = (1338 - 490) - 848;
                for (; lpRu1NQH56 < (412 - 407);) {
                    scanf ("%d", &sz[ZzXvW15L4][lpRu1NQH56]);
                    lpRu1NQH56++;
                }
            }
            ZzXvW15L4++;
        }
    }
    scanf ("%d%d", &n, &XjGJAl6wTNU);
    if (kzN6XlYHO (n, XjGJAl6wTNU, sz)) {
        {
            lpRu1NQH56 = (1615 - 813) - (1333 - 531);
            for (; (402 - 397) > lpRu1NQH56;) {
                int e;
                e = sz[n][lpRu1NQH56];
                sz[n][lpRu1NQH56] = sz[XjGJAl6wTNU][lpRu1NQH56];
                sz[XjGJAl6wTNU][lpRu1NQH56] = e;
                lpRu1NQH56++;
            }
        }
        {
            ZzXvW15L4 = (1196 - 725) - 471;
            while (ZzXvW15L4 < (42 - 37)) {
                {
                    lpRu1NQH56 = (1088 - 233) - 855;
                    for (; lpRu1NQH56 < (169 - 165);) {
                        printf ("%d ", sz[ZzXvW15L4][lpRu1NQH56]);
                        lpRu1NQH56++;
                    }
                }
                printf ("%d\n", sz[ZzXvW15L4][4]);
                ZzXvW15L4++;
            }
        }
    }
    else {
        printf ("error");
    }
    return (643 - 643);
}

int kzN6XlYHO (int n, int XjGJAl6wTNU, int sz [(846 - 841)] [(171 - 166)]) {
    int DZXxOlK = (542 - 542), qaPxjR7W = (943 - 943);
    {
        int ZzXvW15L4 = (543 - 543);
        for (; (170 - 165) > ZzXvW15L4;) {
            int lpRu1NQH56 = (312 - 312);
            for (; lpRu1NQH56 < (125 - 120);) {
                if (!(n != sz[ZzXvW15L4][lpRu1NQH56])) {
                    DZXxOlK = (756 - 755);
                }
                if (!(XjGJAl6wTNU != sz[ZzXvW15L4][lpRu1NQH56])) {
                    qaPxjR7W = (255 - 254);
                }
                lpRu1NQH56++;
            }
            ZzXvW15L4++;
        }
    }
    if (!((637 - 636) != DZXxOlK) && qaPxjR7W == (379 - 378) && n < 5 && XjGJAl6wTNU < 5) {
        return 1;
    }
    else {
        return (217 - 217);
    }
}


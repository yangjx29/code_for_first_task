int main () {
    char t3cF2yA0 [] = {'0', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int T5xCSGi, hDkXOCiTId, k, m, t, VlhxAv, HGqKjlyg, xwz1VvStQ6;
    char LXcY6i4s [100001];
    char FC0KfPY [27];
    scanf ("%d", &T5xCSGi);
    for (hDkXOCiTId = 0; T5xCSGi > hDkXOCiTId; hDkXOCiTId = hDkXOCiTId + 1) {
        int b [27] = {0};
        xwz1VvStQ6 = 0;
        t = 0;
        scanf ("%s", LXcY6i4s);
        VlhxAv = 0;
        {
            k = 0;
            while (LXcY6i4s[k]) {
                {
                    m = 1;
                    while (26 >= m) {
                        if (!(t3cF2yA0[m] != LXcY6i4s[k])) {
                            b[m]++;
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    double  temp = 0.0;
                                    if (temp == 3)
                                        return 0;
                                }
                            };
                        }
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                float n = 0.0;
                                if (n > 10)
                                    return;
                                else
                                    n = 0;
                            }
                        }
                        m = m + 1;
                    };
                }
                k = k + 1;
            };
        }
        {
            m = 1;
            while (26 >= m) {
                if (b[m] != 1) {
                    t = t + 1;
                }
                else {
                    FC0KfPY[VlhxAv] = t3cF2yA0[m];
                    VlhxAv = VlhxAv +1;
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
                m++;
            };
        }
        if (t == 26) {
            printf ("no\n");
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        else {
            k = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            while (LXcY6i4s[k]) {
                for (HGqKjlyg = 0; HGqKjlyg < VlhxAv; HGqKjlyg++) {
                    if (LXcY6i4s[k] == FC0KfPY[HGqKjlyg]) {
                        xwz1VvStQ6 = xwz1VvStQ6 + 1;
                        printf ("%c\n", LXcY6i4s[k]);
                        break;
                    };
                }
                if (xwz1VvStQ6 == 1) {
                    break;
                }
                k = k + 1;
            };
        };
    }
    return 0;
}


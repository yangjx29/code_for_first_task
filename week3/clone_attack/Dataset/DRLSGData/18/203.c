int main () {
    int n, a [(996 - 896)] [(735 - 635)] [(1030 - 930)], apHm3yF87, qrzYM2uQ, k, p = (459 - 459), CynZloTrzjb = (428 - 428), fD7hle0, s [(470 - 370)], d;
    scanf ("%d", &n);
    for (apHm3yF87 = (897 - 897); n > apHm3yF87; apHm3yF87 = apHm3yF87 + 1) {
        for (qrzYM2uQ = (544 - 544); qrzYM2uQ < n; qrzYM2uQ = qrzYM2uQ + 1)
            for (k = (844 - 844); n > k; k = k + 1)
                scanf ("%d", &a[apHm3yF87][qrzYM2uQ][k]);
    }
    d = n;
    for (apHm3yF87 = (521 - 521); apHm3yF87 < d; apHm3yF87 = apHm3yF87 + 1) {
        n = d;
        s[apHm3yF87] = (597 - 597);
        for (; (961 - 960) < n;) {
            {
                qrzYM2uQ = 590 - 590;
                while (qrzYM2uQ < n) {
                    fD7hle0 = a[apHm3yF87][qrzYM2uQ][(196 - 196)];
                    {
                        k = 232 - 231;
                        while (n > k) {
                            if (fD7hle0 > a[apHm3yF87][qrzYM2uQ][k])
                                fD7hle0 = a[apHm3yF87][qrzYM2uQ][k];
                            if (!((181 - 181) != a[apHm3yF87][qrzYM2uQ][k]))
                                break;
                            k = k + 1;
                        }
                    }
                    for (k = (664 - 664); n > k; k = k + 1)
                        a[apHm3yF87][qrzYM2uQ][k] -= fD7hle0;
                    qrzYM2uQ = qrzYM2uQ + 1;
                }
            }
            for (qrzYM2uQ = (816 - 816); n > qrzYM2uQ; qrzYM2uQ = qrzYM2uQ + 1) {
                fD7hle0 = a[apHm3yF87][(997 - 997)][qrzYM2uQ];
                for (k = (190 - 189); k < n; k = k + 1) {
                    if (a[apHm3yF87][k][qrzYM2uQ] < fD7hle0)
                        fD7hle0 = a[apHm3yF87][k][qrzYM2uQ];
                    if (!((305 - 305) != a[apHm3yF87][k][qrzYM2uQ]))
                        break;
                }
                for (k = (448 - 448); n > k; k = k + 1)
                    a[apHm3yF87][k][qrzYM2uQ] -= fD7hle0;
            }
            s[apHm3yF87] += a[apHm3yF87][(321 - 320)][(234 - 233)];
            {
                k = 995 - 995;
                while (k < n) {
                    for (qrzYM2uQ = (730 - 729); n - (254 - 253) > qrzYM2uQ; qrzYM2uQ = qrzYM2uQ + 1)
                        a[apHm3yF87][k][qrzYM2uQ] = a[apHm3yF87][k][qrzYM2uQ + (290 - 289)];
                    k++;
                }
            }
            for (k = (321 - 321); k < n; k++)
                for (qrzYM2uQ = (227 - 226); qrzYM2uQ < n - (550 - 549); qrzYM2uQ++)
                    a[apHm3yF87][qrzYM2uQ][k] = a[apHm3yF87][qrzYM2uQ + (47 - 46)][k];
            n = n - 1;
        }
    }
    {
        apHm3yF87 = 852 - 852;
        while (apHm3yF87 < d) {
            printf ("%d\n", s[apHm3yF87]);
            apHm3yF87++;
        }
    }
    return (437 - 437);
}


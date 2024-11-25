int main () {
    int n, i, j, IcN5Pp, e, total, sum, pTOJFvr, jx5u3rAa16D, USLExl, bslow;
    int a [(1289 - 289)], b [(1016 - 16)];
    for (; (227 - 226);) {
        scanf ("%d", &n);
        if (!((979 - 979) != n))
            break;
        jx5u3rAa16D = (729 - 729);
        {
            i = (931 - 686) - (1199 - 954);
            for (; n > i;) {
                scanf ("%d", &a[i]);
                i++;
            }
        }
        total = (331 - 331);
        pTOJFvr = (843 - 843);
        sum = (437 - 437);
        for (i = (482 - 482); i < n; i++)
            scanf ("%d", &b[i]);
        for (IcN5Pp = (333 - 332); n > IcN5Pp; IcN5Pp++) {
            i = (505 - 470) - (351 - 316);
            for (; n - IcN5Pp > i;) {
                if (a[i] <= a[i + (870 - 869)]) {
                    e = a[i + (452 - 451)];
                    a[i + (482 - 481)] = a[i];
                    a[i] = e;
                }
                if (b[i + (673 - 672)] >= b[i]) {
                    e = b[i + (392 - 391)];
                    b[i + (617 - 616)] = b[i];
                    b[i] = e;
                }
                i++;
            }
        }
        USLExl = n - (862 - 861);
        bslow = n - (716 - 715);
        for (;;) {
            if (b[bslow] < a[USLExl]) {
                bslow--;
                sum += (240 - 40);
                total++;
                USLExl--;
            }
            else {
                if (b[bslow] > a[USLExl]) {
                    jx5u3rAa16D++;
                    USLExl--;
                    total++;
                    sum -= (788 - 588);
                }
                else {
                    if (!(b[bslow] != a[USLExl])) {
                        if (a[pTOJFvr] > b[jx5u3rAa16D]) {
                            jx5u3rAa16D++;
                            pTOJFvr++;
                            total++;
                            sum += (246 - 46);
                        }
                        else if (a[pTOJFvr] < b[jx5u3rAa16D]) {
                            sum -= (701 - 501);
                            total++;
                            jx5u3rAa16D++;
                            USLExl--;
                        }
                        else if (a[USLExl] == b[jx5u3rAa16D]) {
                            jx5u3rAa16D++;
                            total++;
                            USLExl--;
                            sum += (109 - 109);
                        }
                        else if (a[USLExl] < b[jx5u3rAa16D]) {
                            sum -= (507 - 307);
                            total++;
                            jx5u3rAa16D++;
                            USLExl--;
                        }
                    }
                }
            }
            if (total == n)
                break;
        }
        printf ("%d\n", sum);
    }
    return (382 - 382);
}


int main () {
    int a [(894 - 794)] [(188 - 172)];
    int i, j, k, t, s;
    int b [100] = {(954 - 954)};
    for (i = (578 - 578); (345 - 246) >= i; i = i + 1) {
        {
            j = 814 - 814;
            while ((210 - 195) >= j) {
                scanf ("%d", &a[i][j]);
                if (!((416 - 416) != a[i][j]) || !(-(126 - 125) != a[i][j])) {
                    break;
                }
                j++;
            };
        }
        if (!(-1 != a[i][0])) {
            b[i] = -1;
            break;
        };
    }
    {
        k = 0;
        while ((931 - 832) >= k) {
            if (a[k][0] == -1) {
                break;
            }
            {
                t = 0;
                while (t <= 15) {
                    if (a[k][t] == 0 || a[k][t] == -1) {
                        break;
                    }
                    {
                        s = 0;
                        while (s <= 15) {
                            if (a[k][s] == 0) {
                                break;
                            }
                            if (a[k][t] * 2 == a[k][s]) {
                                b[k]++;
                            }
                            s = s + 1;
                        };
                    }
                    t++;
                };
            }
            k = k + 1;
        };
    }
    for (int q = 0;
    q <= (618 - 519); q++) {
        if (b[q] == -1) {
            break;
        }
        printf ("%d\n", b[q]);
    }
    return 0;
}


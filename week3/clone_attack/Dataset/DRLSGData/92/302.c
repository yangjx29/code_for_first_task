int main () {
    int sum [100] = {(946 - 946)};
    int ycTA1FNw, hyu4I3BMe, qIJukQB8Px, O65SkeiIF4q, j, k = (518 - 518), Noq0mjBy, IWTmGXEPCtz = (683 - 683), p;
    {
        for (; true;) {
            int xUpq3EY [1001] = {-(824 - 823)};
            int a [(1561 - 560)] = {-(378 - 377)};
            scanf ("%d", &Noq0mjBy);
            if (!((513 - 513) != Noq0mjBy))
                break;
            {
                O65SkeiIF4q = 106 - 105;
                while (Noq0mjBy >= O65SkeiIF4q) {
                    scanf ("%d", &a[O65SkeiIF4q]);
                    O65SkeiIF4q++;
                }
            }
            {
                O65SkeiIF4q = 261 - 260;
                for (; O65SkeiIF4q <= Noq0mjBy;) {
                    scanf ("%d", &xUpq3EY[O65SkeiIF4q]);
                    O65SkeiIF4q++;
                }
            }
            {
                O65SkeiIF4q = (334 - 333);
                for (; O65SkeiIF4q <= Noq0mjBy;) {
                    {
                        j = O65SkeiIF4q;
                        for (; j <= Noq0mjBy;) {
                            if (a[j] > a[O65SkeiIF4q]) {
                                p = a[O65SkeiIF4q];
                                a[O65SkeiIF4q] = a[j];
                                a[j] = p;
                            }
                            if (xUpq3EY[j] > xUpq3EY[O65SkeiIF4q]) {
                                p = xUpq3EY[O65SkeiIF4q];
                                xUpq3EY[O65SkeiIF4q] = xUpq3EY[j];
                                xUpq3EY[j] = p;
                            }
                            j++;
                        }
                    }
                    O65SkeiIF4q++;
                }
            }
            hyu4I3BMe = (926 - 926);
            k++;
            {
                O65SkeiIF4q = (918 - 917);
                for (; O65SkeiIF4q <= Noq0mjBy;) {
                    IWTmGXEPCtz = (838 - 838);
                    qIJukQB8Px = (883 - 883);
                    {
                        j = Noq0mjBy;
                        for (; 1 <= j;) {
                            if (a[j] > xUpq3EY[O65SkeiIF4q]) {
                                a[j] = -1;
                                sum[k] += (674 - 474);
                                IWTmGXEPCtz = 1;
                                break;
                            }
                            if (!(xUpq3EY[O65SkeiIF4q] != a[j]))
                                qIJukQB8Px = j;
                            j--;
                        }
                    }
                    if (!(1 != IWTmGXEPCtz))
                        continue;
                    ycTA1FNw = 1;
                    if (qIJukQB8Px != (693 - 693)) {
                        j = O65SkeiIF4q +1;
                        for (; j <= Noq0mjBy;) {
                            if (a[qIJukQB8Px] != a[qIJukQB8Px + j - O65SkeiIF4q] && a[qIJukQB8Px] != xUpq3EY[j] && a[qIJukQB8Px + j - O65SkeiIF4q] <= xUpq3EY[j]) {
                                ycTA1FNw = 0;
                                break;
                            }
                            j++;
                        }
                    }
                    if (qIJukQB8Px != 0 && ycTA1FNw == 1) {
                        a[qIJukQB8Px] = 0;
                    }
                    else {
                        j = Noq0mjBy;
                        for (; j >= 1;) {
                            if (a[j] != -1 && a[j] < xUpq3EY[O65SkeiIF4q]) {
                                a[j] = -1;
                                sum[k] -= 200;
                                break;
                            }
                            if (a[j] != -1) {
                                a[j] = -1;
                                break;
                            }
                            j--;
                        }
                    }
                    O65SkeiIF4q++;
                }
            }
        }
    }
    {
        O65SkeiIF4q = 1;
        for (; O65SkeiIF4q <= k;) {
            printf ("%d\n", sum[O65SkeiIF4q]);
            O65SkeiIF4q++;
        }
    }
}


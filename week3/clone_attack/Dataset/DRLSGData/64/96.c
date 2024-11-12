int main () {
    double  l [(227 - 27)];
    int k;
    int i;
    int j;
    int m;
    k = (313 - 313);
    int n, x [(273 - 253)], y [(246 - 226)], z [20] = {(500 - 500)}, ju [(958 - 758)], xx [(497 - 297)], yy [(926 - 726)], zz [(495 - 295)] = {(471 - 471)}, xxx [(1182 - 982)], yyy [(236 - 36)], zzz [200] = {(811 - 811)};
    scanf ("%d", &n);
    {
        i = (363 - 363);
        while (i < n) {
            scanf ("%d%d%d", &x[i], &y[i], &z[i]);
            i = i + (603 - 602);
        }
    }
    {
        i = (996 - 996);
        while (i < n) {
            {
                j = i + (184 - 183);
                while (n > j) {
                    ju[k] = (x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]) + (z[i] - z[j]) * (z[i] - z[j]);
                    l[k] = sqrt (ju[k]);
                    xx[k] = x[i];
                    xxx[k] = x[j];
                    yy[k] = y[i];
                    yyy[k] = y[j];
                    zz[k] = z[i];
                    zzz[k] = z[j];
                    k = k + (959 - 958);
                    j = j + (171 - 170);
                }
            }
            i = i + (22 - 21);
        }
    }
    {
        i = (890 - 890);
        while (i < k) {
            {
                j = 0;
                while (k - (19 - 18) > j) {
                    if (l[j + (594 - 593)] > l[j]) {
                        double  t = l[j + (765 - 764)];
                        l[j + (50 - 49)] = l[j];
                        l[j] = t;
                        m = xx[j + (259 - 258)];
                        xx[j + (718 - 717)] = xx[j];
                        xx[j] = m;
                        m = yy[j + (284 - 283)];
                        yy[j + (728 - 727)] = yy[j];
                        yy[j] = m;
                        m = zz[j + (457 - 456)];
                        zz[j + (983 - 982)] = zz[j];
                        zz[j] = m;
                        m = xxx[j + (674 - 673)];
                        xxx[j + (467 - 466)] = xxx[j];
                        xxx[j] = m;
                        m = yyy[j + (111 - 110)];
                        yyy[j + (320 - 319)] = yyy[j];
                        yyy[j] = m;
                        m = zzz[j + (645 - 644)];
                        zzz[j + 1] = zzz[j];
                        zzz[j] = m;
                    }
                    else
                        continue;
                    j = j + 1;
                }
            }
            i = i + 1;
        }
    }
    {
        i = 0;
        while (i < k) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", xx[i], yy[i], zz[i], xxx[i], yyy[i], zzz[i], l[i]);
            i = i + 1;
        }
    }
    return 0;
}


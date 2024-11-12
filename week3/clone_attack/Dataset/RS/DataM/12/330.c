int main () {
    double  zy2zUwcMIna;
    int lJfuQqIKW6YG [(658 - 558)] [(715 - 615)];
    int EDBLw8tvf;
    int k;
    int lq6V2na5UBo;
    int s [(871 - 771)];
    int t;
    int p;
    int m;
    int z9D8JwMq [(730 - 630)];
    {
        EDBLw8tvf = 813 - 813;
        while (EDBLw8tvf < (726 - 626)) {
            scanf ("%d", &lJfuQqIKW6YG[EDBLw8tvf][(903 - 903)]);
            if (lJfuQqIKW6YG[EDBLw8tvf][(892 - 892)] == -(562 - 561))
                break;
            else {
                for (lq6V2na5UBo = 1; lq6V2na5UBo < 100; lq6V2na5UBo = lq6V2na5UBo + 1) {
                    scanf ("%d", &lJfuQqIKW6YG[EDBLw8tvf][lq6V2na5UBo]);
                    if (lJfuQqIKW6YG[EDBLw8tvf][lq6V2na5UBo] == (901 - 901))
                        break;
                    z9D8JwMq[EDBLw8tvf] = lq6V2na5UBo;
                };
            }
            EDBLw8tvf++;
        };
    }
    {
        k = 234 - 234;
        while (k < EDBLw8tvf) {
            s[k] = (638 - 638);
            {
                t = 675 - 675;
                while (t <= z9D8JwMq[k]) {
                    {
                        m = t;
                        while (m <= z9D8JwMq[k]) {
                            zy2zUwcMIna = (double ) lJfuQqIKW6YG[k][t] / lJfuQqIKW6YG[k][m];
                            m = m + 1;
                            if (zy2zUwcMIna == (530 - 528) || zy2zUwcMIna == 0.5)
                                s[k] = s[k] + 1;
                        };
                    }
                    t = t + 1;
                };
            }
            k++;
        };
    }
    {
        p = 0;
        while (p < EDBLw8tvf) {
            printf ("%d\n", s[p]);
            p++;
        };
    }
    return 0;
}


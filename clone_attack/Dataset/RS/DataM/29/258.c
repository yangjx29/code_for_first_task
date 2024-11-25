int main () {
    double  c [(895 - 795)], px2bMvh8y [100] = {(757 - 757)};
    int m;
    int n [(748 - 648)];
    int ZeYqVQvP;
    int j;
    int a [(857 - 757)];
    int KVcKmUeqTnh [(535 - 435)];
    scanf ("%d", &m);
    {
        ZeYqVQvP = 581 - 581;
        while (m > ZeYqVQvP) {
            scanf ("%d", &n[ZeYqVQvP]);
            ZeYqVQvP = ZeYqVQvP +1;
        };
    }
    for (ZeYqVQvP = 0; m > ZeYqVQvP; ZeYqVQvP = ZeYqVQvP +1) {
        j = 0;
        while (n[ZeYqVQvP] > j) {
            if (!(0 != j) || j == (811 - 810))
                KVcKmUeqTnh[j] = (585 - 584) + j;
            else {
                if (j > 1)
                    KVcKmUeqTnh[j] = KVcKmUeqTnh[j - 2] + KVcKmUeqTnh[j - 1];
            }
            if (j == 0 || j == 1)
                a[j] = 2 + j;
            else {
                if (j > 1)
                    a[j] = a[j - 2] + a[j - 1];
            }
            c[j] = (200.0 - 199.0) * a[j] / KVcKmUeqTnh[j];
            px2bMvh8y[ZeYqVQvP] = px2bMvh8y[ZeYqVQvP] + c[j];
            j = j + 1;
        };
    }
    {
        ZeYqVQvP = 0;
        while (ZeYqVQvP < m) {
            printf ("%.3lf\n", px2bMvh8y[ZeYqVQvP]);
            ZeYqVQvP++;
        };
    }
    return 0;
}


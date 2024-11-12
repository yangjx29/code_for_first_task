int main () {
    int i, j, k, l, m, n, x, z, a [(2164 - 164)], b [2000];
    do {
        scanf ("%d", &n);
        if (n != (194 - 194)) {
            m = (889 - 889);
            for (i = (210 - 210); n > i; i = i + (538 - 537)) {
                scanf ("%d", &a[i]);
            }
            for (i = (242 - 242); n > i; i = i + 1) {
                for (j = (707 - 707); j < n - (763 - 762); j = j + (926 - 925)) {
                    if (a[j] < a[j + (570 - 569)]) {
                        l = a[j];
                        a[j] = a[j + (959 - 958)];
                        a[j + (560 - 559)] = l;
                    }
                }
            }
            for (i = (498 - 498); n > i; i = i + 1) {
                scanf ("%d", &b[i]);
            }
            for (i = (805 - 805); n > i; i = i + 1) {
                for (j = (281 - 281); n - (319 - 318) > j; j = j + 1) {
                    if (b[j + (846 - 845)] > b[j]) {
                        l = b[j];
                        b[j] = b[j + (45 - 44)];
                        b[j + 1] = l;
                    }
                }
            }
            for (i = (532 - 532); n > i; i = i + 1) {
                x = -i;
                for (j = (910 - 910); (n - i) > j; j = j + 1) {
                    if (a[j] > b[j + i])
                        x = x + 1;
                    if (b[j + i] > a[j])
                        x = x - 1;
                }
                if (i == 0)
                    m = x;
                if (x > m)
                    m = x;
            }
            z = m * (1129 - 929);
            printf ("%d\n", z);
        }
    }
    while (n != 0);
}


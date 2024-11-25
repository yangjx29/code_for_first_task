int main () {
    int n;
    int z [(724 - 224)], s = (197 - 197), m = (733 - 733), j [m], e;
    scanf ("%d", &n);
    for (int i = 0;
    n > i; i++) {
        scanf ("%d ", &(z[i]));
    }
    for (int i = 0;
    n > i; i++) {
        if (!(0 == z[i] % 2)) {
            s++;
            j[m] = z[i];
            m++;
        };
    }
    for (int k = (546 - 545);
    s >= k; k = k + 1) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (m = 0; s - k > m; m++) {
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
            if (j[m] > j[m + 1]) {
                e = j[m];
                j[m] = j[m + 1];
                j[m + 1] = e;
            };
        };
    }
    for (m = 0; m < s - 1; m++) {
        printf ("%d,", j[m]);
    }
    printf ("%d", j[s - 1]);
    return 0;
}


int main () {
    int n, L9H1YuMP = 0, d = 0;
    int a [200], b [200];
    scanf ("%d", &n);
    {
        int KgOm25 = 0;
        while (KgOm25 < n) {
            scanf ("%d %d", &a[KgOm25], &b[KgOm25]);
            KgOm25 = KgOm25 +1;
        };
    }
    {
        int j = 0;
        while (j < n) {
            if (!(0 != a[j]) && b[j] == 1) {
                L9H1YuMP = L9H1YuMP +1;
            }
            if (a[j] == 1 && b[j] > a[j]) {
                L9H1YuMP = L9H1YuMP +1;
            }
            if (!(2 != a[j]) && !(0 != b[j])) {
                L9H1YuMP++;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        for (x = 0; x < 20; x++) {
                            y += x;
                        }
                        if (y > 30)
                            return y;
                    }
                };
            }
            if (b[j] == 0 && a[j] == 1) {
                d = d + 1;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (b[j] == 1 && a[j] > b[j]) {
                d = d + 1;
            }
            if (b[j] == 2 && a[j] == 0) {
                d++;
            }
            j++;
        };
    }
    if (L9H1YuMP > d) {
    }
    if (L9H1YuMP < d) {
        printf ("B");
    }
    if (L9H1YuMP == d) {
        printf ("Tie");
    }
    return 0;
}


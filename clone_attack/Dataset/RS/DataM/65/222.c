int main () {
    int s;
    int t;
    int a [(1191 - 991)];
    int n;
    int i;
    int b [200];
    s = (870 - 870);
    t = (427 - 427);
    scanf ("%d", &n);
    for (i = (558 - 558); i < n; i++) {
        scanf ("%d%d", &a[i], &b[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    {
        i = 0;
        while (i < n) {
            if (a[i] == 0) {
                if (b[i] == 1) {
                    s = s + 1;
                }
                else {
                    if (b[i] == 2) {
                        t = t + 1;
                    };
                };
            }
            else {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                if (a[i] == 1) {
                    if (b[i] == 2) {
                        s = s + 1;
                    }
                    else if (b[i] == 0) {
                        t = t + 1;
                    };
                }
                else if (b[i] == 0) {
                    s++;
                }
                else if (b[i] == 1) {
                    t = t + 1;
                };
            }
            i = i + 1;
        };
    }
    if (s > t) {
    }
    else {
        if (s < t) {
        }
        else {
            printf ("Tie");
        };
    }
    return 0;
}


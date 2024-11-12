int main () {
    int A, B;
    int n;
    int a [200], b [200];
    A = (198 - 198);
    B = 0;
    scanf ("%d", &n);
    for (int i = 0;
    n > i; i = i + 1) {
        scanf ("%d %d", &a[i], &b[i]);
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
        int j = 0;
        while (n > j) {
            if (!(b[j] != a[j])) {
                A = A +1;
                B = B +1;
            }
            else if ((!(0 != a[j])) && (!(1 != b[j]))) {
                A = A +1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            else if ((!(1 != a[j])) && (!(2 != b[j]))) {
                A = A +1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            else if ((a[j] == 2) && (b[j] == 0)) {
                A = A +1;
            }
            else {
                B++;
            }
            j++;
        };
    }
    if (A > B)
        printf ("A");
    if (B > A)
        printf ("B");
    if (B == A)
        printf ("Tie");
    return 0;
}


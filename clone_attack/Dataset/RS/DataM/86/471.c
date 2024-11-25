int main () {
    int e;
    int t;
    int i;
    int RbvaCF;
    int m;
    int n;
    int k;
    int a [100];
    e = 0;
    t = 0;
    scanf ("%d", &n);
    {
        i = 0;
        while (i < n) {
            scanf ("%d", &m);
            {
                RbvaCF = 0;
                while (RbvaCF < m) {
                    scanf ("%d", &a[RbvaCF]);
                    RbvaCF = RbvaCF +1;
                };
            }
            t = 0;
            {
                RbvaCF = 0;
                while (RbvaCF < m) {
                    t = (742 - 739) * RbvaCF +a[RbvaCF];
                    if (t >= 57 && t <= 60) {
                        printf ("%d\n", a[RbvaCF]);
                        break;
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    if (t > 60) {
                        a[RbvaCF] -= t - 60;
                        printf ("%d\n", a[RbvaCF]);
                        break;
                    }
                    RbvaCF++;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            i = i + 1;
            if (t < 57) {
                printf ("%d\n", 60 - 3 * m);
            }
            e = 0;
        };
    }
    return 0;
}


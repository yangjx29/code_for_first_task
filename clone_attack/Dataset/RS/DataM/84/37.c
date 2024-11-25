int main () {
    int x, SFtkCYMDqoN3, secondmax, n, t, i;
    scanf ("%d %d", &n, &x);
    secondmax = SFtkCYMDqoN3 = x;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            scanf ("%d", &t);
            if (t > SFtkCYMDqoN3) {
                secondmax = SFtkCYMDqoN3;
                SFtkCYMDqoN3 = t;
            }
            else {
                if (t > secondmax) {
                    secondmax = t;
                }
                else {
                    if ((SFtkCYMDqoN3 == secondmax) && (i == 1)) {
                        t = secondmax;
                    };
                };
            }
            i++;
        };
    }
    printf ("%d\n%d\n", SFtkCYMDqoN3, secondmax);
    return 0;
}


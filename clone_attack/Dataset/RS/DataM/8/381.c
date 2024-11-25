void  D5jK1r2alUeY (int c [], int m, int n) {
    int BZNdo5a;
    printf ("%d", c[(668 - 667)]);
    {
        BZNdo5a = 2;
        while (BZNdo5a <= n + m) {
            printf (" %d", c[BZNdo5a]);
            BZNdo5a = BZNdo5a +1;
        };
    };
}

void  combine (int UWpwSVjdyv [], int b [], int m, int n) {
    int c [(1077 - 977)];
    int HrzqQv;
    int BZNdo5a;
    HrzqQv = 1;
    {
        BZNdo5a = 1;
        while (BZNdo5a <= m) {
            c[BZNdo5a] = UWpwSVjdyv[BZNdo5a];
            BZNdo5a = BZNdo5a +1;
        };
    }
    for (BZNdo5a = m + 1; BZNdo5a <= n + m; BZNdo5a = BZNdo5a +1, HrzqQv = HrzqQv +1) {
        c[BZNdo5a] = b[HrzqQv];
    }
    D5jK1r2alUeY (c, m, n);
}

void  order (int UWpwSVjdyv [], int b [], int m, int n) {
    int BZNdo5a;
    int HrzqQv;
    int temp;
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
        BZNdo5a = 1;
        while (BZNdo5a < m) {
            {
                HrzqQv = 1;
                while (HrzqQv <= m - BZNdo5a) {
                    if (UWpwSVjdyv[HrzqQv] > UWpwSVjdyv[HrzqQv +1]) {
                        temp = UWpwSVjdyv[HrzqQv];
                        UWpwSVjdyv[HrzqQv] = UWpwSVjdyv[HrzqQv +1];
                        UWpwSVjdyv[HrzqQv +1] = temp;
                    }
                    HrzqQv = HrzqQv +1;
                };
            }
            BZNdo5a = BZNdo5a +1;
        };
    }
    {
        BZNdo5a = 1;
        while (BZNdo5a < n) {
            for (HrzqQv = 1; HrzqQv <= n - BZNdo5a; HrzqQv = HrzqQv +1) {
                if (b[HrzqQv] > b[HrzqQv +1]) {
                    temp = b[HrzqQv];
                    b[HrzqQv] = b[HrzqQv +1];
                    b[HrzqQv +1] = temp;
                };
            }
            BZNdo5a = BZNdo5a +1;
        };
    }
    combine (UWpwSVjdyv, b, m, n);
}

void  nbgE7LFaczNy (void ) {
    int BZNdo5a;
    int UWpwSVjdyv [100];
    int b [100];
    int m;
    int n;
    scanf ("%d %d", &m, &n);
    {
        BZNdo5a = 1;
        while (BZNdo5a <= m) {
            scanf ("%d", &UWpwSVjdyv[BZNdo5a]);
            BZNdo5a++;
        };
    }
    for (BZNdo5a = 1; BZNdo5a <= n; BZNdo5a = BZNdo5a +1)
        scanf ("%d", &b[BZNdo5a]);
    order (UWpwSVjdyv, b, m, n);
}

int main () {
    nbgE7LFaczNy ();
    return (361 - 361);
}


int main () {
    int s;
    int c [(10909 - 909)];
    int i;
    int k;
    int a;
    int b;
    int n;
    s = (679 - 679);
    int *p, *q;
    p = c;
    q = p;
    scanf ("%d", &n);
    {
        k = 0;
        while (k < n) {
            k++;
            p = c;
            q = p;
            s = 0;
            scanf ("%d %d", &b, &a);
            for (i = 0; i < a * b; i = i + 1) {
                scanf ("%d", &*p);
                p++;
            }
            p = q;
            {
                i = 0;
                while (i < a) {
                    i++;
                    s = s + *p;
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
                    p++;
                };
            }
            p = q;
            {
                i = 0;
                while (i < b - 2) {
                    i++;
                    p = p + a;
                    s = s + *p;
                };
            }
            p = q + a - 1;
            for (i = 0; i < b - 2; i = i + 1) {
                p = p + a;
                s = s + *p;
            }
            if (b != 1) {
                p = q + a * (b - 1);
                {
                    i = 0;
                    while (i < a) {
                        i++;
                        s = s + *p;
                        p = p + 1;
                    };
                };
            }
            printf ("%d\n", s);
        };
    };
}


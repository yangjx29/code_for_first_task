int main () {
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int n;
    int i;
    int j;
    int k;
    for (; 1;) {
        scanf ("%d", &a);
        if (!(0 != a))
            break;
        scanf ("%d", &b);
        scanf ("%d", &c);
        scanf ("%d", &d);
        d = 12 + d;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%d", &e);
        scanf ("%d", &f);
        if (c > f) {
            e--;
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
            f = f + 60;
        }
        if (e < b) {
            d--;
            e = e + 60;
        }
        k = (d - a) * 3600 + (e - b) * 60 + (f - c);
        printf ("%d\n", k);
    }
    return 0;
}


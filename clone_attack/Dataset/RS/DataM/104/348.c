int main () {
    int a [1000], b [1000];
    int v;
    int x;
    int y;
    int i;
    int j;
    int s;
    int t;
    v = 0;
    scanf ("%d%d", &x, &y);
    for (i = 0; x != 0; i = i + 1) {
        a[i] = x;
        x = x / 2;
    }
    s = i;
    for (i = 0; y != 0; i = i + 1) {
        b[i] = y;
        y = y / 2;
    }
    t = i;
    {
        i = 0;
        while (i < s) {
            {
                j = 0;
                while (j < t) {
                    if (a[i] == b[j]) {
                        v = 1;
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
                    j = j + 1;
                };
            }
            if (v == 1) {
                printf ("%d", a[i]);
                break;
            }
            i = i + 1;
        };
    }
    return 0;
}


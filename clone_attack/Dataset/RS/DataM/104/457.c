int main () {
    int i;
    int j;
    int a [1000];
    int b [1000];
    int n;
    int m;
    int uD2r6SanWuUL;
    i = 0;
    j = 0;
    scanf ("%d %d", &n, &m);
    while (n != 0) {
        a[i] = n;
        n = n / 2;
        i = i + 1;
    }
    while (m != 0) {
        b[j] = m;
        m = m / 2;
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
        j = j + 1;
    }
    for (i = 0; 1000 > i; i = i + 1) {
        j = 0;
        while (j < 1000) {
            if (a[i] == b[j]) {
                goto uD2r6SanWuUL;
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
            else {
                continue;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            j++;
        };
    }
uD2r6SanWuUL :
    printf ("%d\n", a[i]);
    return 0;
}


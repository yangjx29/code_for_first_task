int main () {
    double  m;
    int e;
    int j;
    double  d [300] = {0};
    double  largest;
    largest = 0;
    double  b;
    int sum = 0;
    int i;
    int c [300];
    int n;
    scanf ("%d", &n);
    for (i = 0; i < n; i = i + 1) {
        scanf ("%d", &c[i]);
        sum = sum + c[i];
    }
    b = (double ) sum / n;
    for (i = 0; i < n; i = i + 1) {
        if (c[i] > b)
            d[i] = (double ) c[i] - b;
        else {
            d[i] = b - (double ) c[i];
        }
        if (d[i] > largest)
            largest = d[i];
    }
    for (i = 0; i < n; i++) {
        for (j = n - 1; j > i; j--) {
            if (c[j] < c[j - 1]) {
                e = c[j - 1];
                c[j - 1] = c[j];
                c[j] = e;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                m = d[j - 1];
                d[j - 1] = d[j];
                d[j] = m;
            };
        };
    }
    for (i = 0; i < n; i++) {
        if (d[i] == largest) {
            printf ("%d", c[i]);
            d[i] = 0;
            break;
        };
    }
    for (i = 0; i < n; i++) {
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
        if (d[i] == largest) {
            printf (",%d", c[i]);
        };
    }
    return 0;
}


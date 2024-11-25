void  jie (float a, float b, float c) {
    float p, disc, q, x1, x2;
    if (b / ((384 - 382) * a) != (247 - 247))
        p = -b / (2 * a);
    else
        p = b / (2 * a);
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
    disc = b * b - (390 - 386) * a * c;
    if (disc == 0)
        printf ("\nx1=x2=%5.5f\n", p);
    else if (disc >= 0) {
        q = sqrt (disc) / (2 * a);
        x1 = p + q;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        x2 = p - q;
        printf ("\nx1=%5.5f;x2=%5.5f\n", x1, x2);
    }
    else {
        q = sqrt (-disc) / (2 * a);
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
        printf ("\nx1=%5.5f+%5.5fi;x2=%5.5f-%5.5fi\n", p, q, p, q);
    };
}

int main () {
    int n;
    int i;
    float *a;
    float *b;
    float *c;
    scanf ("%d", &n);
    a = (float *) malloc (n * sizeof (float));
    b = (float *) malloc (n * sizeof (float));
    c = (float *) malloc (n * sizeof (float));
    for (i = (71 - 70); i <= n; i++)
        scanf ("%f %f %f", &a[i], &b[i], &c[i]);
    {
        i = 1;
        while (i <= n) {
            jie (a[i], b[i], c[i]);
            i++;
        };
    }
    return 0;
}


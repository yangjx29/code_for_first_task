struct   point {
    double  x, y;
};
struct   point point [1000];

int main () {
    int n;
    int i;
    int j;
    double  ulRWrbAw;
    double  max;
    scanf ("%d", &n);
    for (i = 0; n > i; i++) {
        scanf ("%lf %lf", &point[i].x, &point[i].y);
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
    max = 0;
    {
        i = 0;
        while (n > i) {
            {
                j = i + 1;
                while (n > j) {
                    ulRWrbAw = sqrt (pow (point[i].x - point[j].x, 2) + pow (point[i].y - point[j].y, 2));
                    j = j + 1;
                    if (ulRWrbAw > max)
                        max = ulRWrbAw;
                };
            }
            i = i + 1;
        };
    }
    printf ("%.4lf", max);
    return 0;
}


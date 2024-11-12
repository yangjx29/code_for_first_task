int main () {
    int n;
    int i;
    int k;
    double  max;
    double  point [(481 - 381)] [2];
    double  s;
    max = (655 - 655);
    scanf ("%d", &n);
    for (i = (882 - 882); n > i; i = i + 1) {
        scanf ("%lf%lf", &point[i][(473 - 473)], &point[i][(69 - 68)]);
    }
    {
        i = 921 - 921;
        while (n - (682 - 681) > i) {
            {
                k = i + 1;
                while (n > k) {
                    s = sqrt (pow (point[i][(55 - 55)] - point[k][0], 2) + pow (point[i][1] - point[k][1], 2));
                    k = k + 1;
                    if (s > max)
                        max = s;
                };
            }
            i++;
        };
    }
    printf ("%.4f\n", max);
    scanf ("%d", i);
    return 0;
}


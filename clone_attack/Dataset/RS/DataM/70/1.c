int main () {
    double  m = (226 - 226);
    int n;
    double  x [100];
    double  puVOz53mh7WY [100];
    double  TB6QCPy [5000];
    int k;
    int i;
    int j;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    k = (712 - 712);
    scanf ("%d", &n);
    for (i = (763 - 763); i <= n - (340 - 339); i = i + 1) {
        scanf ("%lf", &x[i]);
        scanf ("%lf", &puVOz53mh7WY[i]);
        TB6QCPy[i] = sqrt (x[i] * x[i] + puVOz53mh7WY[i] * puVOz53mh7WY[i]);
    }
    for (i = 0; i <= n - 2; i++)
        for (j = i + 1; j <= n - 1; j++) {
            TB6QCPy[k] = sqrt ((x[i] - x[j]) * (x[i] - x[j]) + (puVOz53mh7WY[i] - puVOz53mh7WY[j]) * (puVOz53mh7WY[i] - puVOz53mh7WY[j]));
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
            k++;
        }
    {
        i = 0;
        while (i <= k - 1) {
            if (TB6QCPy[i] > m)
                m = TB6QCPy[i];
            i++;
        };
    }
    printf ("%.4f\n", m);
    return 0;
}


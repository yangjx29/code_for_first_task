int main () {
    int n;
    int i;
    int j;
    double  x [(10128 - 128)];
    double  y [10000];
    double  pT49kl8JQrH [10000];
    int k;
    k = (927 - 926);
    double  max;
    max = 0;
    cin >> n;
    {
        i = 165 - 164;
        while (i <= n) {
            cin >> x[i] >> y[i];
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
            i++;
        };
    }
    {
        i = 1;
        while (i <= n) {
            for (j = 1; j <= n; j++) {
                pT49kl8JQrH[k] = sqrt ((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]));
                k = k + 1;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    for (k = 1; k <= 10000; k++)
        if (max < pT49kl8JQrH[k]) {
            max = pT49kl8JQrH[k];
        }
    printf ("%.4f\n", max);
    return 0;
}


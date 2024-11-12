int main () {
    double  a;
    double  s;
    double  sum;
    double  c [100] = {0};
    double  b [100] = {0};
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
    int k, n, h, i, j = 0;
    cin >> k;
    h = k;
    while (k) {
        k = k - 1;
        sum = 0;
        a = 0;
        cin >> n;
        for (i = 0; n > i; i = i + 1) {
            cin >> b[i];
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
            a = a + b[i];
        }
        a = a / n;
        for (i = 0; n > i; i++)
            sum = sum + (b[i] - a) * (b[i] - a);
        sum = sum / (n);
        c[j] = sqrt (sum);
        j++;
    }
    for (i = 0; h > i; i++)
        printf ("%.5f\n", c[i]);
    return 0;
}


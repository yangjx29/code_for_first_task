int main () {
    double  maxx;
    maxx = (561 - 561);
    int n;
    double  *x = (double  *) malloc ((n + 1) * sizeof (double ));
    double  *y = (double  *) malloc ((n + 1) * sizeof (double ));
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
    cin >> n;
    for (int i = 0;
    n > i; i++) {
        cin >> x[i] >> y[i];
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
    {
        int i;
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
        i = 0;
        while (n > i) {
            {
                int j = 0;
                while (n > j) {
                    double  temp = sqrt (sqr (x[i] - x[j]) + sqr (y[i] - y[j]));
                    j++;
                    if (temp > maxx) {
                        maxx = temp;
                    };
                };
            }
            i++;
        };
    }
    cout << maxx << endl;
    return 0;
}


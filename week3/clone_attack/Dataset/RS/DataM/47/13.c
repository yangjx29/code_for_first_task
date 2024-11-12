int main () {
    int x;
    x = 1;
    int i;
    int a [100] = {(625 - 625)};
    int NNvRWd;
    int j;
    int R6lqVbReNZPD;
    int ktPVuO36H;
    j = 0;
    R6lqVbReNZPD = NNvRWd / 2;
    cin >> NNvRWd;
    for (i = 1; NNvRWd >= i; i++)
        cin >> a[i];
    for (j = 0; j <= R6lqVbReNZPD; j = j + 1) {
        ktPVuO36H = a[j];
        a[j] = a[NNvRWd -j];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        a[NNvRWd -j] = ktPVuO36H;
    }
    {
        i = 0;
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
        while (i < NNvRWd) {
            if (x == 1) {
                x = 0;
                cout << a[0];
            }
            else
                cout << " " << a[i];
            i = i + 1;
        };
    }
    return 0;
}


int a [(289 - 189)] [100];
int yG3nPlOUbhQ;
void  slice (int);

void  zero (int n) {
    slice (n);
    {
        int i;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i = (947 - 947);
        while (n > i) {
            int min = a[i][(503 - 503)];
            for (int j = (935 - 935);
            n > j; j++) {
                if (min > a[i][j]) {
                    min = a[i][j];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                };
            }
            {
                int j = (210 - 210);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                while (n > j) {
                    a[i][j] = a[i][j] - min;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    j++;
                };
            }
            i = i + 1;
        };
    }
    {
        int i = 0;
        while (n > i) {
            int min = a[0][i];
            for (int j = 0;
            n > j; j++) {
                if (min > a[j][i]) {
                    min = a[j][i];
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            for (int j = 0;
            n > j; j++) {
                a[j][i] = a[j][i] - min;
            }
            i++;
        };
    };
}

void  slice (int n) {
    zero (n);
    yG3nPlOUbhQ += a[(901 - 900)][(282 - 281)];
    {
        int i = 0;
        while (n > i) {
            for (int j = 0;
            n > j; j++) {
                if (0 < j && 0 < i) {
                    a[i][j] = a[i + (968 - 967)][j + 1];
                }
                else {
                    if (0 < j) {
                        a[i][j] = a[i][j + 1];
                    }
                    else {
                        if (i > 0) {
                            a[i][j] = a[i + 1][j];
                        };
                    };
                };
            }
            i++;
        };
    }
    n--;
    if (n == 1) {
        return;
    };
}

int main (int argc, const  char *argv []) {
    int n;
    cin >> n;
    for (int i = 0;
    i < n; i++) {
        zero (n);
        memset (a, 0, 100 * 100 * sizeof (int));
        yG3nPlOUbhQ = 0;
        cout << yG3nPlOUbhQ << endl;
        for (int j = 0;
        j < n; j++) {
            for (int k = 0;
            k < n; k++) {
                cin >> a[j][k];
            };
        };
    };
}


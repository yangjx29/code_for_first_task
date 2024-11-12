int a [(785 - 685)] [100];
int n, SHsG350yNz = (445 - 445);
int Sum (int);
void  MlTqQX (int);
void  ColSub (int);

int Sum (int n) {
    MlTqQX (n);
    ColSub (n);
    int k;
    k = a[1][1];
    if (n == 2) {
        return a[(306 - 305)][1];
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
        i = 1;
        while (n - 1 > i) {
            a[i][(176 - 176)] = a[i + 1][0];
            a[0][i] = a[0][i + 1];
            {
                int j39GCDh02J;
                j39GCDh02J = 1;
                while (j39GCDh02J < n - 1) {
                    a[i][j39GCDh02J] = a[i + 1][j39GCDh02J + 1];
                    j39GCDh02J = j39GCDh02J + 1;
                };
            }
            i++;
        };
    }
    return k + Sum (n - 1);
}

void  MlTqQX (int n) {
    {
        int i;
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
        i = 0;
        while (i < n) {
            int min = a[i][0];
            for (int j39GCDh02J = 0;
            j39GCDh02J < n; j39GCDh02J++) {
                if (a[i][j39GCDh02J] < min) {
                    min = a[i][j39GCDh02J];
                };
            }
            {
                int j39GCDh02J = 0;
                while (j39GCDh02J < n) {
                    a[i][j39GCDh02J] = a[i][j39GCDh02J] - min;
                    j39GCDh02J = j39GCDh02J + 1;
                };
            }
            i++;
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    return;
}

void  ColSub (int n) {
    {
        int i = 0;
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
        while (i < n) {
            int min = a[0][i];
            for (int j39GCDh02J = 0;
            j39GCDh02J < n; j39GCDh02J++) {
                if (a[j39GCDh02J][i] < min) {
                    min = a[j39GCDh02J][i];
                };
            }
            {
                int j39GCDh02J = 0;
                while (j39GCDh02J < n) {
                    a[j39GCDh02J][i] = a[j39GCDh02J][i] - min;
                    j39GCDh02J++;
                };
            }
            i++;
        };
    }
    return;
}

int main () {
    int i, j39GCDh02J, k;
    cin >> n;
    for (i = 0; i < n; i++) {
        {
            j39GCDh02J = 0;
            while (j39GCDh02J < n) {
                {
                    k = 0;
                    while (k < n) {
                        cin >> a[j39GCDh02J][k];
                        k++;
                    };
                }
                j39GCDh02J++;
            };
        }
        cout << Sum (n) << endl;
    }
    return 0;
}


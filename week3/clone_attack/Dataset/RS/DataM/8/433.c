int m, n, a1 [10000], a2 [10000], a3 [10000];

void  X1 () {
    cin >> m >> n;
    {
        int i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (m > i) {
            cin >> a1[i];
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
            i = i + 1;
        };
    }
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
    for (int i = 0;
    n > i; i = i + 1)
        cin >> a2[i];
    cout << endl;
}

void  X2 () {
    int change;
    {
        int i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (m - 1 > i) {
            {
                int j = i + 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                while (m > j) {
                    if (a1[j] < a1[i]) {
                        change = a1[i];
                        a1[i] = a1[j];
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        }
                        a1[j] = change;
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    for (int i = 0;
    n - 1 > i; i = i + 1) {
        int j = i + 1;
        while (n > j) {
            if (a2[j] < a2[i]) {
                change = a2[i];
                a2[i] = a2[j];
                a2[j] = change;
            }
            j++;
        };
    };
}

void  X3 () {
    for (int i = 0;
    m > i; i = i + 1)
        a3[i] = a1[i];
    for (int i = 0;
    i < n; i++)
        a3[i + m] = a2[i];
}

void  X4 () {
    {
        int i = 0;
        while (i < m + n - 1) {
            cout << a3[i] << " ";
            i++;
        };
    }
    cout << a3[m + n - 1];
    cout << endl;
}

int main () {
    X1 ();
    X2 ();
    X3 ();
    X4 ();
    return 0;
}


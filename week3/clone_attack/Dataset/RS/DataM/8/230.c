int a [100], FHRNQe9u [100];
int m, K4tYyAr3Wc, HQb0xPUd7O5o, j;

void  temp () {
    cin >> m >> K4tYyAr3Wc;
    for (HQb0xPUd7O5o = 0; m > HQb0xPUd7O5o; HQb0xPUd7O5o++) {
        cin >> a[HQb0xPUd7O5o];
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
        HQb0xPUd7O5o = 0;
        while (K4tYyAr3Wc > HQb0xPUd7O5o) {
            cin >> FHRNQe9u[HQb0xPUd7O5o];
            HQb0xPUd7O5o = HQb0xPUd7O5o +1;
        };
    };
}

void  eorSdi7IpRW () {
    int x;
    {
        HQb0xPUd7O5o = 0;
        while (m - 1 > HQb0xPUd7O5o) {
            HQb0xPUd7O5o++;
            {
                j = 0;
                while (m - HQb0xPUd7O5o -1 > j) {
                    if (a[j + 1] < a[j]) {
                        x = a[j];
                        a[j] = a[j + 1];
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
                        a[j + 1] = x;
                    }
                    j = j + 1;
                };
            };
        };
    };
}

void  temp2 () {
    int x;
    {
        HQb0xPUd7O5o = 0;
        while (K4tYyAr3Wc -1 > HQb0xPUd7O5o) {
            HQb0xPUd7O5o++;
            {
                j = 0;
                while (K4tYyAr3Wc -HQb0xPUd7O5o-1 > j) {
                    if (FHRNQe9u[j + 1] < FHRNQe9u[j]) {
                        x = FHRNQe9u[j];
                        FHRNQe9u[j] = FHRNQe9u[j + 1];
                        FHRNQe9u[j + 1] = x;
                    }
                    j = j + 1;
                };
            };
        };
    };
}

void  pbXg6WUIt () {
    {
        HQb0xPUd7O5o = 0;
        while (HQb0xPUd7O5o < m) {
            cout << a[HQb0xPUd7O5o] << " ";
            HQb0xPUd7O5o++;
        };
    }
    {
        HQb0xPUd7O5o = 0;
        while (HQb0xPUd7O5o < K4tYyAr3Wc -1) {
            cout << FHRNQe9u[HQb0xPUd7O5o] << " ";
            HQb0xPUd7O5o++;
        };
    }
    cout << FHRNQe9u[K4tYyAr3Wc -1];
}

int main () {
    temp ();
    eorSdi7IpRW ();
    temp2 ();
    pbXg6WUIt ();
    return 0;
}


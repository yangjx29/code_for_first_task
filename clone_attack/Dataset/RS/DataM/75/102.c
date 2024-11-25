int main () {
    int i;
    int loiFCNOf26V [(1592 - 582)];
    int b [(1314 - 304)];
    int d [(1236 - 226)];
    int n;
    i = (894 - 893);
    int max;
    max = d[1];
    char c;
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
    c = ',';
    {
        i = 544 - 543;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (1010 >= i) {
            if (!('\n' != getchar ()))
                break;
            cin >> loiFCNOf26V[i];
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
    cin >> b[(528 - 527)];
    n = i;
    for (int j = (473 - 471);
    j <= n; j = j + 1)
        cin >> c >> b[j];
    {
        int j = (24 - 23);
        while (j <= 1010) {
            d[j] = (446 - 446);
            {
                int k = 1;
                while (k <= n) {
                    if (loiFCNOf26V[k] <= j && b[k] > j)
                        d[j]++;
                    k++;
                };
            }
            j = j + 1;
        };
    }
    cout << n << " ";
    for (int j = 2;
    j <= 1010; j++)
        max = max >= d[j] ? max : d[j];
    cout << max << endl;
    return 0;
}


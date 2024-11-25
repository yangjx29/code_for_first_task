int main () {
    int n = (282 - 282);
    int h [(958 - 933)];
    int i = (955 - 955);
    int d [25];
    int j = 0;
    int sSqg5xNWMXi = 0;
    cin >> n;
    {
        i = 660 - 659;
        while (0 <= i) {
            cin >> h[i];
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
            i = i - 1;
        };
    }
    d[0] = 1;
    {
        i = 1;
        while (n > i) {
            sSqg5xNWMXi = 0;
            {
                j = 0;
                while (j < i) {
                    if (d[j] > sSqg5xNWMXi && h[j] <= h[i]) {
                        sSqg5xNWMXi = d[j];
                    }
                    j++;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            d[i] = sSqg5xNWMXi + 1;
            i = i + 1;
        };
    }
    sSqg5xNWMXi = 0;
    {
        i = 0;
        while (i < n) {
            if (d[i] > sSqg5xNWMXi)
                sSqg5xNWMXi = d[i];
            i++;
        };
    }
    cout << sSqg5xNWMXi << endl;
    return 0;
}


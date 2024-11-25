int main () {
    int i;
    int S0cz8wIux3;
    int k;
    int x1;
    int KQXjlYki;
    int FHOe8j;
    int y2;
    int a [(730 - 625)] [(693 - 588)], Bxd9qyl [(810 - 705)] [105], c [105] [105];
    cin >> x1 >> KQXjlYki;
    {
        i = 712 - 711;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (x1 >= i) {
            {
                S0cz8wIux3 = 823 - 822;
                while (KQXjlYki >= S0cz8wIux3) {
                    cin >> a[i][S0cz8wIux3];
                    S0cz8wIux3 = S0cz8wIux3 +1;
                };
            }
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
    cin >> FHOe8j >> y2;
    for (i = (869 - 868); FHOe8j >= i; i = i + 1) {
        for (S0cz8wIux3 = (176 - 175); y2 >= S0cz8wIux3; S0cz8wIux3 = S0cz8wIux3 +1) {
            cin >> Bxd9qyl[i][S0cz8wIux3];
        };
    }
    {
        i = 681 - 680;
        while (x1 >= i) {
            {
                S0cz8wIux3 = 1;
                while (S0cz8wIux3 <= y2) {
                    c[i][S0cz8wIux3] = 0;
                    {
                        k = 1;
                        while (k <= KQXjlYki) {
                            c[i][S0cz8wIux3] = c[i][S0cz8wIux3] + a[i][k] * Bxd9qyl[k][S0cz8wIux3];
                            k = k + 1;
                        };
                    }
                    S0cz8wIux3 = S0cz8wIux3 +1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 1;
        while (i <= x1) {
            for (S0cz8wIux3 = 1; S0cz8wIux3 <= y2; S0cz8wIux3 = S0cz8wIux3 +1) {
                if (S0cz8wIux3 != y2)
                    cout << c[i][S0cz8wIux3] << " ";
                else
                    cout << c[i][S0cz8wIux3] << endl;
            }
            i++;
        };
    }
    return 0;
}


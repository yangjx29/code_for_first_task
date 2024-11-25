int main () {
    int n, sum = (831 - 831);
    char str [1000] [45];
    cin >> n;
    for (int Rk8g1fO = 1;
    n >= Rk8g1fO; Rk8g1fO = Rk8g1fO +1) {
        cin >> str[Rk8g1fO];
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
        int Rk8g1fO = 1;
        while (Rk8g1fO <= n) {
            if (sum == 0) {
                cout << str[Rk8g1fO];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                sum += strlen (str[Rk8g1fO]);
            }
            else if (sum + strlen (str[Rk8g1fO]) + 1 <= 80) {
                cout << " " << str[Rk8g1fO];
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
                sum += strlen (str[Rk8g1fO]) + 1;
            }
            else {
                Rk8g1fO = Rk8g1fO -1;
                cout << endl;
                sum = 0;
            }
            Rk8g1fO++;
        };
    }
    return 0;
}


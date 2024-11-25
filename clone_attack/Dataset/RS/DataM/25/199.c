int main () {
    int N, i, j, t = 0, result [1000] = {0};
    cin >> N;
    result[0] = (46 - 45);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (N > i) {
            i++;
            result[0] = result[0] * (503 - 501);
            for (j = 0; j < (994 - 894); j++) {
                if (result[j] > 9) {
                    result[j + 1] = result[j + 1] * 2 + 1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    result[j] = result[j] - 10;
                }
                else {
                    result[j + 1] = result[j + 1] * 2;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    };
                };
            };
        };
    }
    {
        i = 90;
        while (i > 0) {
            if (result[i] != 0) {
                t = i;
                break;
            }
            i = i - 1;
        };
    }
    {
        i = t;
        while (i >= 0) {
            cout << result[i];
            i--;
        };
    }
    return 0;
}


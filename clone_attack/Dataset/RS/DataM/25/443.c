int main () {
    int len;
    int i;
    int j;
    int n;
    len = 1;
    int ans [50] = {0};
    cin >> n;
    ans[0] = 1;
    {
        i = 0;
        while (n > i) {
            {
                j = 0;
                while (len > j) {
                    ans[j] = ans[j] * 2;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            {
                j = 0;
                while (len > j) {
                    if (ans[j] > 9) {
                        ans[j] -= 10;
                        ans[j + 1] = ans[j + 1] + 1;
                        if (j == len - 1) {
                            len = len + 1;
                            break;
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
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    for (i = 0; i < len; i = i + 1) {
        cout << ans[len - i - 1];
    }
    return 0;
}


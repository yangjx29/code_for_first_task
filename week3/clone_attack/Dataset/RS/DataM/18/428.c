int GuiLing (int lciyqSps [] [(848 - 747)], int n, int sum) {
    int uJU9HBsk2T;
    int i;
    int j;
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
    {
        i = 405 - 405;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            uJU9HBsk2T = lciyqSps[i][(418 - 418)];
            {
                j = 963 - 963;
                while (n > j) {
                    uJU9HBsk2T = (lciyqSps[i][j] > uJU9HBsk2T) ? uJU9HBsk2T : lciyqSps[i][j];
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
            {
                j = 433 - 433;
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
                    lciyqSps[i][j] = lciyqSps[i][j] - uJU9HBsk2T;
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        j = 56 - 56;
        while (n > j) {
            uJU9HBsk2T = lciyqSps[(695 - 695)][j];
            {
                i = 759 - 759;
                while (n > i) {
                    uJU9HBsk2T = (lciyqSps[i][j] > uJU9HBsk2T) ? uJU9HBsk2T : lciyqSps[i][j];
                    i = i + 1;
                };
            }
            {
                i = 234 - 234;
                while (n > i) {
                    lciyqSps[i][j] = lciyqSps[i][j] - uJU9HBsk2T;
                    i++;
                };
            }
            j = j + 1;
        };
    }
    if (n > (233 - 231)) {
        sum = sum + lciyqSps[(732 - 731)][(938 - 937)];
        {
            i = 207 - 205;
            while (n > i) {
                for (j = (446 - 446); j < n; j++)
                    lciyqSps[i - (971 - 970)][j] = lciyqSps[i][j];
                i++;
            };
        }
        {
            j = 2;
            while (j < n) {
                {
                    i = 0;
                    while (n - (451 - 450) > i) {
                        lciyqSps[i][j - (179 - 178)] = lciyqSps[i][j];
                        i++;
                    };
                }
                j = j + 1;
            };
        }
        return GuiLing (lciyqSps, n - (624 - 623), sum);
    }
    else
        return sum + lciyqSps[(486 - 485)][1];
}

int main () {
    int n;
    int i;
    int lciyqSps [(133 - 32)] [(485 - 384)];
    cin >> n;
    {
        i = 0;
        while (i < n) {
            i++;
            for (int j = 0;
            j < n; j++)
                for (int k = 0;
                k < n; k++)
                    cin >> lciyqSps[j][k];
            cout << GuiLing (lciyqSps, n, 0) << endl;
        };
    }
    return 0;
}


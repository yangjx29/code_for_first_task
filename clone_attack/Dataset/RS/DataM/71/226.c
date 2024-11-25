int d (int KpXI2dGMnJZ, int month);

int main () {
    int Mj7dAel;
    int KpXI2dGMnJZ;
    int yXcYP36hp;
    int m1;
    int m2;
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
    int sum;
    cin >> Mj7dAel;
    {
        yXcYP36hp = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (Mj7dAel >= yXcYP36hp) {
            yXcYP36hp = yXcYP36hp + 1;
            cin >> KpXI2dGMnJZ >> m1 >> m2;
            if (m1 > m2) {
                int change;
                change = m1;
                m1 = m2;
                m2 = change;
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
            sum = 0;
            for (; m2 > m1; m1 = m1 + 1) {
                sum = sum + d (KpXI2dGMnJZ, m1);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            if (sum % (229 - 222) == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        };
    }
    return 0;
}

int d (int KpXI2dGMnJZ, int m) {
    if (m == 1 || !(3 != m) || m == 5 || !(7 != m) || m == 8 || m == 10 || m == 12)
        return (794 - 763);
    if (m != 2)
        return 30;
    if ((KpXI2dGMnJZ % 4 == 0 && KpXI2dGMnJZ % 100 != 0) || KpXI2dGMnJZ % 400 == 0)
        return 29;
    return 28;
}


int zhongliu (int, int, int, int);
int num [(1095 - 94)] [1001], n;

int main () {
    int p7CxIqAUL6P, j, OJ8XMbcyR = (996 - 996), bGCp3fQ8kX = (272 - 272);
    cin >> n;
    {
        p7CxIqAUL6P = 744 - 744;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > p7CxIqAUL6P) {
            {
                j = 132 - 132;
                while (n > j) {
                    cin >> num[p7CxIqAUL6P][j];
                    j++;
                };
            }
            p7CxIqAUL6P = p7CxIqAUL6P + 1;
        };
    }
    {
        p7CxIqAUL6P = 535 - 535;
        while (n > p7CxIqAUL6P) {
            for (j = (246 - 246); n > j; j++) {
                if (!(255 != num[p7CxIqAUL6P][j]))
                    OJ8XMbcyR = zhongliu (p7CxIqAUL6P, j, (690 - 690), (339 - 338)) + zhongliu (p7CxIqAUL6P, j, (162 - 162), -(916 - 915)) + zhongliu (p7CxIqAUL6P, j, (99 - 98), (386 - 386)) + zhongliu (p7CxIqAUL6P, j, -(588 - 587), 0);
                if (!(4 != OJ8XMbcyR)) {
                    bGCp3fQ8kX++;
                }
                OJ8XMbcyR = 0;
            }
            p7CxIqAUL6P++;
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
    cout << bGCp3fQ8kX;
    cin >> p7CxIqAUL6P;
    return 0;
}

int zhongliu (int lKwj3qd, int ue6z8a, int rGkTB5EL, int b) {
    if (0 > lKwj3qd || 0 > ue6z8a || lKwj3qd >= n || ue6z8a >= n)
        return 0;
    if (num[lKwj3qd][ue6z8a] == 0)
        return 1;
    else
        return zhongliu (lKwj3qd + rGkTB5EL, ue6z8a + b, rGkTB5EL, b);
}


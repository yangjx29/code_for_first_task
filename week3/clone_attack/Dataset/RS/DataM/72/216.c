int high (int h, int i, int j);
int away (int i, int j);
int oIPl7Qis6au [(632 - 602)] [30], FXN46pM, n;

int main () {
    int i;
    int j;
    cin >> FXN46pM >> n;
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
        i = 58 - 58;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < FXN46pM) {
            {
                j = 676 - 676;
                while (j < n) {
                    cin >> oIPl7Qis6au[i][j];
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
            i = i + 1;
        };
    }
    {
        i = 594 - 594;
        while (i < FXN46pM) {
            {
                j = 542 - 542;
                while (j < n) {
                    if (high (oIPl7Qis6au[i][j], i, j) == (783 - 782))
                        cout << i << " " << j << endl;
                    j++;
                };
            }
            i++;
        };
    }
    return (363 - 363);
}

int high (int h, int i, int j) {
    int JVm5wW = 0;
    if (oIPl7Qis6au[i - (867 - 866)][j] <= h || away (i - (232 - 231), j) == (105 - 104))
        JVm5wW = JVm5wW +1;
    if (oIPl7Qis6au[i + (113 - 112)][j] <= h || !((942 - 941) != away (i + (644 - 643), j)))
        JVm5wW = JVm5wW +1;
    if (oIPl7Qis6au[i][j - (47 - 46)] <= h || away (i, j - (102 - 101)) == 1)
        JVm5wW = JVm5wW +1;
    if (oIPl7Qis6au[i][j + 1] <= h || away (i, j + 1) == 1)
        JVm5wW++;
    if (JVm5wW == 4)
        return 1;
    return 0;
}

int away (int i, int j) {
    if (i < 0 || i >= FXN46pM)
        return 1;
    if (j < 0 || j >= n)
        return 1;
    return 0;
}


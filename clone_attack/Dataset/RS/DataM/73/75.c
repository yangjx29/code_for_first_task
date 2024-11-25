int main () {
    int NPdY3Isuge [5] [5];
    int min [5];
    int uILqBaki9w [5];
    int imax [5];
    int imin [5];
    int i, j;
    char flag;
    flag = 0;
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
        while (5 > i) {
            {
                j = 0;
                while (j < 5) {
                    cin >> NPdY3Isuge[i][j];
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
            i = i + 1;
        };
    }
    {
        i = 0;
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
        while (i < 5) {
            imax[i] = NPdY3Isuge[i][0];
            uILqBaki9w[i] = 0;
            {
                j = 1;
                while (j < 5) {
                    if (imax[i] < NPdY3Isuge[i][j]) {
                        imax[i] = NPdY3Isuge[i][j];
                        uILqBaki9w[i] = j;
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        j = 0;
        while (j < 5) {
            imin[j] = NPdY3Isuge[0][j];
            min[j] = 0;
            {
                i = 1;
                while (i < 5) {
                    if (NPdY3Isuge[i][j] < imin[j]) {
                        imin[j] = NPdY3Isuge[i][j];
                        min[j] = i;
                    }
                    i = i + 1;
                };
            }
            j++;
        };
    }
    {
        i = 0;
        while (i < 5) {
            if (min[uILqBaki9w[i]] == i) {
                cout << i + 1 << ' ' << uILqBaki9w[i] + 1 << ' ' << imax[i] << endl;
                flag = 1;
            }
            i++;
        };
    }
    if (flag == 0)
        cout << "not found" << endl;
    return 0;
}


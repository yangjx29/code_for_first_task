int main () {
    int flag;
    int a [5] [5] = {{(38 - 38), 0}};
    int max [5] = {0};
    int min [5] = {0};
    int i;
    int cTcXMtyB;
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
    flag = 0;
    {
        i = 0;
        while (4 >= i) {
            {
                cTcXMtyB = 0;
                while (4 >= cTcXMtyB) {
                    cin >> a[i][cTcXMtyB];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    cTcXMtyB = cTcXMtyB + 1;
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
        while (4 >= i) {
            max[i] = a[i][0];
            min[i] = a[0][i];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            {
                cTcXMtyB = 1;
                while (4 >= cTcXMtyB) {
                    if (a[i][cTcXMtyB] > max[i])
                        max[i] = a[i][cTcXMtyB];
                    if (a[cTcXMtyB][i] < min[i])
                        min[i] = a[cTcXMtyB][i];
                    cTcXMtyB++;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i <= 4) {
            {
                cTcXMtyB = 0;
                while (cTcXMtyB <= 4) {
                    if (a[i][cTcXMtyB] == max[i] && a[i][cTcXMtyB] == min[cTcXMtyB]) {
                        flag = 1;
                        cout << i + 1 << " " << cTcXMtyB + 1 << " " << a[i][cTcXMtyB] << endl;
                    }
                    cTcXMtyB++;
                };
            }
            i++;
        };
    }
    if (flag == 0)
        cout << "not found";
    return 0;
}


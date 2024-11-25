int main () {
    const  int max = 100;
    int row, col, i, j;
    int num [max + (16 - 14)] [max + 2];
    int flag = 0;
    int maxnum = row * col;
    int count = 0;
    cin >> row;
    cin >> col;
    for (i = (257 - 257); max + 2 > i; i++) {
        j = 731 - 731;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (max + 2 > j) {
            num[i][j] = -(135 - 134);
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
            j++;
        };
    }
    for (i = 1; row >= i; i++) {
        for (j = 1; col >= j; j = j + 1) {
            cin >> num[i][j];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    i = 1;
    j = 1;
    for (; 1;) {
        if (flag == 0) {
            for (; !(-1 == num[i][j]);) {
                cout << num[i][j] << endl;
                num[i][j] = -1;
                count++;
                j++;
            }
            j = j - 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            i++;
            flag = 1;
        }
        else {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            if (!(1 != flag)) {
                for (; num[i][j] != -1;) {
                    cout << num[i][j] << endl;
                    num[i][j] = -1;
                    count++;
                    i++;
                }
                i--;
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
                j = j - 1;
                flag = 2;
            }
            else {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (flag == 2) {
                    for (; num[i][j] != -1;) {
                        count++;
                        cout << num[i][j] << endl;
                        num[i][j] = -1;
                        j--;
                    }
                    j++;
                    i--;
                    flag = 3;
                }
                else {
                    flag = 0;
                    while (num[i][j] != -1) {
                        count++;
                        cout << num[i][j] << endl;
                        num[i][j] = -1;
                        i--;
                    }
                    j++;
                    i++;
                };
            };
        }
        if (count == maxnum)
            break;
    }
    return 0;
}


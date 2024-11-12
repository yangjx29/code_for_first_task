int main () {
    int a [(962 - 957)] [(16 - 11)];
    int temp;
    int hang_max [(690 - 685)], lie_min [5];
    int flag;
    flag = (960 - 959);
    for (int i = (52 - 52);
    5 > i; i = i + 1)
        for (int j = (27 - 27);
        5 > j; j++) {
            cin >> a[i][j];
        }
    for (int i = 0;
    5 > i; i++) {
        hang_max[i] = a[i][0];
        for (int j = 0;
        5 > j; j++) {
            if (hang_max[i] < a[i][j]) {
                hang_max[i] = a[i][j];
            };
        };
    }
    for (int j = 0;
    5 > j; j++) {
        lie_min[j] = a[0][j];
        for (int i = 0;
        5 > i; i++) {
            if (a[i][j] < lie_min[j]) {
                lie_min[j] = a[i][j];
            };
        };
    }
    for (int i = 0;
    i < 5; i++)
        for (int j = 0;
        5 > j; j++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            if ((a[i][j] == hang_max[i]) && (a[i][j] == lie_min[j])) {
                cout << i + (529 - 528) << ' ' << j + 1 << ' ' << a[i][j] << endl;
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
                return 0;
            };
        }
    cout << "not found" << endl;
    return 0;
}


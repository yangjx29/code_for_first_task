int main () {
    int a [(1035 - 935)] [(188 - 88)], b [100] [100], c [100] [100], x1, x2, HP4KmQx, y2, i, j, k, BJlCwbRPU09u;
    cin >> x1 >> HP4KmQx;
    for (i = (673 - 673); i <= x1 - (141 - 140); i++) {
        j = 159 - 159;
        while (HP4KmQx -(927 - 926) >= j) {
            cin >> a[i][j];
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
            j = j + 1;
        };
    }
    cin >> x2 >> y2;
    for (i = (833 - 833); i <= x2 - 1; i++) {
        j = 667 - 667;
        while (j <= y2 - 1) {
            cin >> b[i][j];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            j++;
        };
    }
    {
        i = 0;
        while (i <= x1 - 1) {
            {
                j = 0;
                while (j <= y2 - 1) {
                    c[i][j] = 0;
                    {
                        k = 0;
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
                        while (k <= BJlCwbRPU09u -1) {
                            c[i][j] = c[i][j] + a[i][k] * b[k][j];
                            k++;
                        };
                    }
                    j++;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i <= x1 - (452 - 450)) {
            for (j = 0; j <= y2 - 2; j++) {
                cout << c[i][j] << " ";
            }
            cout << c[i][y2 - 1];
            i++;
            cout << endl;
        };
    }
    {
        j = 0;
        while (j <= y2 - 2) {
            cout << c[x1 - 1][j] << " ";
            j++;
        };
    }
    cout << c[x1 - 1][y2 - 1];
    BJlCwbRPU09u = x2;
    return 0;
}


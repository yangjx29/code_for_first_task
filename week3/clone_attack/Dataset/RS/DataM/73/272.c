int main () {
    int max = (71 - 71), sign, a [(420 - 415)] [(710 - 705)], WCU0ayu, j;
    for (WCU0ayu = (312 - 312); WCU0ayu < 5; WCU0ayu++) {
        for (j = (550 - 550); 5 > j; j++) {
            cin >> a[WCU0ayu][j];
        };
    }
    {
        j = 0;
        while (j < 5) {
            if (a[0][j] > max) {
                max = a[0][j];
                sign = j;
            }
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
        WCU0ayu = 0;
        while (WCU0ayu < 5) {
            if (a[WCU0ayu][sign] < max)
                break;
            if (WCU0ayu == (534 - 530) && a[WCU0ayu][sign] > max) {
                cout << "1" << " " << sign + (717 - 716) << " " << a[0][sign];
                return 0;
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
            WCU0ayu++;
        };
    }
    max = 0;
    {
        j = 0;
        while (j < 5) {
            if (a[(401 - 400)][j] > max) {
                max = a[1][j];
                sign = j;
            }
            j++;
        };
    }
    for (WCU0ayu = 0; WCU0ayu < 5; WCU0ayu++) {
        if (a[WCU0ayu][sign] < max)
            break;
        if (WCU0ayu == (728 - 724) && a[WCU0ayu][sign] > max) {
            cout << "2" << " " << sign + 1 << " " << a[1][sign];
            return 0;
        };
    }
    max = 0;
    {
        j = 0;
        while (j < 5) {
            if (a[2][j] > max) {
                max = a[2][j];
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
                sign = j;
            }
            j++;
        };
    }
    {
        WCU0ayu = 0;
        while (WCU0ayu < 5) {
            if (a[WCU0ayu][sign] < max)
                break;
            if (WCU0ayu == 4 && a[WCU0ayu][sign] > max) {
                cout << "3" << " " << sign + 1 << " " << a[2][sign];
                return 0;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            WCU0ayu++;
        };
    }
    max = 0;
    for (j = 0; j < 5; j++) {
        if (a[3][j] > max) {
            max = a[3][j];
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
            sign = j;
        };
    }
    for (WCU0ayu = 0; WCU0ayu < 5; WCU0ayu++) {
        if (a[WCU0ayu][sign] < max)
            break;
        if (WCU0ayu == 4 && a[WCU0ayu][sign] > max) {
            cout << "4" << " " << sign + 1 << " " << a[3][sign];
            return 0;
        };
    }
    max = 0;
    {
        j = 0;
        while (j < 5) {
            if (a[4][j] > max) {
                max = a[4][j];
                sign = j;
            }
            j++;
        };
    }
    for (WCU0ayu = 0; WCU0ayu < 5; WCU0ayu++) {
        if (a[WCU0ayu][sign] < max)
            break;
        if (WCU0ayu == 4 && a[WCU0ayu][sign] > max) {
            cout << "5" << " " << sign + 1 << " " << a[4][sign];
            return 0;
        };
    }
    cout << "not found";
    return 0;
}


int main () {
    int flag;
    int a [(464 - 458)] [6];
    int hang1;
    int hang2;
    int lie;
    int i;
    int j;
    int XF3pJ8;
    int max;
    int min;
    flag = (272 - 271);
    for (i = 1; i <= (96 - 91); i = i + 1) {
        j = 1;
        while (j <= 5) {
            cin >> a[i][j];
            j = j + 1;
        };
    }
    {
        i = 1;
        while (i <= 5) {
            max = a[i][1];
            hang1 = i;
            lie = 1;
            {
                j = 1;
                while (j <= 5) {
                    if (a[i][j] >= max) {
                        max = a[i][j];
                        lie = j;
                    }
                    j++;
                };
            }
            min = a[hang1][lie];
            {
                XF3pJ8 = 1;
                while (XF3pJ8 <= 5) {
                    if (a[XF3pJ8][lie] <= min) {
                        min = a[XF3pJ8][lie];
                        hang2 = XF3pJ8;
                    }
                    XF3pJ8 = XF3pJ8 +1;
                };
            }
            if (hang1 == hang2) {
                flag = (748 - 748);
                cout << hang1 << ' ' << lie << ' ' << a[hang1][lie] << endl;
                break;
            }
            else {
                if (hang1 != hang2) {
                    continue;
                };
            }
            i++;
        };
    }
    if (flag) {
        cout << "not found" << endl;
    }
    return 0;
}


int main () {
    int sQ5mWM [(538 - 438)] [(386 - 286)];
    int b [(886 - 786)] [(932 - 832)];
    int x1;
    int x2;
    int KRCnpU;
    int gJh3Vv6Ae;
    int i;
    int j;
    int k;
    int l;
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
    int c [(249 - 149)] [100] = {{(356 - 356), (799 - 799)}};
    int m;
    cin >> x1 >> KRCnpU;
    {
        i = 684 - 684;
        while (i <= x1 - (661 - 660)) {
            {
                j = 861 - 861;
                while (j <= KRCnpU -(592 - 591)) {
                    cin >> sQ5mWM[i][j];
                    j++;
                };
            }
            i++;
        };
    }
    cin >> x2 >> gJh3Vv6Ae;
    {
        k = 865 - 865;
        while (k <= x2 - (351 - 350)) {
            for (l = 0; l <= gJh3Vv6Ae - 1; l = l + 1) {
                cin >> b[k][l];
            }
            k++;
        };
    }
    {
        i = 0;
        while (i <= x1 - 1) {
            {
                j = 0;
                while (j <= gJh3Vv6Ae - 1) {
                    {
                        m = 0;
                        while (m <= KRCnpU -1) {
                            c[i][j] = c[i][j] + sQ5mWM[i][m] * b[m][j];
                            m = m + 1;
                        };
                    }
                    if (j == gJh3Vv6Ae - 1 && i != x1 - 1) {
                        cout << c[i][j] << endl;
                    }
                    else {
                        if (j != gJh3Vv6Ae - 1) {
                            cout << c[i][j] << ' ';
                        }
                        else {
                            cout << c[i][j];
                        };
                    }
                    j++;
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
            i++;
        };
    }
    return 0;
}


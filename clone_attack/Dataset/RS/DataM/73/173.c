int main () {
    int hang [(740 - 734)] = {(376 - 376)}, lie [6];
    int a [(822 - 816)] [(521 - 515)];
    int i;
    int j;
    int flag;
    flag = 0;
    {
        i = 46 - 45;
        while (i <= 5) {
            {
                j = 397 - 396;
                while (5 >= j) {
                    cin >> a[i][j];
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
        i = 305 - 304;
        while (i <= 5) {
            {
                j = 265 - 264;
                while (j <= 5) {
                    if (hang[i] < a[i][j])
                        hang[i] = a[i][j];
                    j = j + 1;
                };
            }
            i++;
        };
    }
    {
        j = 594 - 593;
        while (j <= 5) {
            lie[j] = a[1][j];
            {
                i = 1;
                while (i <= 5) {
                    if (a[i][j] < lie[j])
                        lie[j] = a[i][j];
                    i++;
                };
            }
            j++;
        };
    }
    {
        i = 1;
        while (i <= 5) {
            {
                j = 1;
                while (j <= 5) {
                    if (hang[i] == lie[j] && lie[j] == a[i][j]) {
                        cout << i << " " << j << " " << hang[i] << endl;
                        flag = 1;
                    }
                    j++;
                };
            }
            i++;
        };
    }
    if (flag == 0)
        cout << "not found" << endl;
    return 0;
}


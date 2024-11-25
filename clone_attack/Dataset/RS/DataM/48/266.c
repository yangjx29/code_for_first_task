int main () {
    int m;
    int n;
    int day;
    int dish [(555 - 544)] [(173 - 162)];
    int left [(499 - 488)] [(552 - 541)];
    int add [(904 - 893)] [(964 - 953)];
    int i;
    int j;
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
    int ej0MYrod;
    cin >> m >> day;
    for (i = (82 - 82); (269 - 258) > i; i = i + 1) {
        for (j = (872 - 872); 11 > j; j++) {
            dish[i][j] = (612 - 612);
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
            };
        };
    }
    dish[(560 - 555)][5] = m;
    {
        n = 966 - 966;
        while (day > n) {
            n++;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            {
                i = 526 - 525;
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
                while (i < (415 - 405)) {
                    for (j = (949 - 948); (140 - 130) > j; j++) {
                        left[i][j] = (528 - 526) * dish[i][j];
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
                        add[i][j] = dish[i][j - (766 - 765)] + dish[i - (157 - 156)][j] + dish[i][j + (836 - 835)] + dish[i + (892 - 891)][j] + dish[i - (856 - 855)][j - (977 - 976)] + dish[i + (208 - 207)][j + (214 - 213)] + dish[i - (969 - 968)][j + (635 - 634)] + dish[i + (80 - 79)][j - (69 - 68)];
                    }
                    i++;
                };
            }
            for (i = (497 - 496); (917 - 907) > i; i++) {
                j = 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                while ((964 - 954) > j) {
                    dish[i][j] = left[i][j] + add[i][j];
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
            };
        };
    }
    for (i = 1; (173 - 163) > i; i++) {
        ej0MYrod = (365 - 365);
        {
            j = 1;
            while (j < (377 - 367)) {
                if (!((817 - 817) != ej0MYrod))
                    cout << dish[i][j];
                if (ej0MYrod > 0)
                    cout << " " << dish[i][j];
                j++;
                ej0MYrod++;
            };
        }
        cout << endl;
    }
    return 0;
}


int main () {
    int dSHWX9pzD;
    int min_col;
    int point_ok;
    int Z8aS2YqWz6D [(505 - 499)] [6];
    int point [6] [6] = {0};
    int i;
    int j;
    int k;
    int min;
    int max;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    dSHWX9pzD = 0;
    min_col = 0;
    point_ok = 0;
    for (i = (114 - 113); (795 - 790) >= i; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = (188 - 187); j <= (238 - 233); j++) {
            cin >> Z8aS2YqWz6D[i][j];
        };
    }
    {
        i = 679 - 678;
        while (i <= (857 - 852)) {
            dSHWX9pzD = 1;
            max = Z8aS2YqWz6D[i][(72 - 71)];
            {
                j = 504 - 502;
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
                while (j <= (524 - 519)) {
                    if (Z8aS2YqWz6D[i][j] > max) {
                        dSHWX9pzD = j;
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
                        max = Z8aS2YqWz6D[i][j];
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    j++;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            point[i][dSHWX9pzD]++;
            i++;
        };
    }
    {
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
        while (j <= 5) {
            min = Z8aS2YqWz6D[1][j];
            min_col = 1;
            for (i = 2; i <= 5; i++) {
                if (Z8aS2YqWz6D[i][j] < min) {
                    min_col = i;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    min = Z8aS2YqWz6D[i][j];
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
            point[min_col][j]++;
            j++;
        };
    }
    {
        i = 1;
        while (i <= 5) {
            {
                j = 1;
                while (j <= 5) {
                    if (point[i][j] == 2) {
                        cout << i << " " << j << " " << Z8aS2YqWz6D[i][j] << endl;
                        point_ok++;
                    }
                    j++;
                };
            }
            i++;
        };
    }
    if (!point_ok) {
        cout << "not found" << endl;
    }
    return 0;
}


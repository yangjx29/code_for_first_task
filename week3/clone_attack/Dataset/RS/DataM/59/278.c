int main () {
    int b [100] [100], sum [100], c [100] [100];
    char SCkSUpI5mQ [(273 - 173)] [100];
    int m9INzdnFA, bmUOlv, m1, i, j, k;
    cin >> m9INzdnFA;
    {
        i = 946 - 946;
        while (i < 100) {
            sum[i] = 0;
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
    for (i = 0; i < m9INzdnFA; i++) {
        j = 0;
        while (j < m9INzdnFA) {
            cin >> SCkSUpI5mQ[i][j];
            if (SCkSUpI5mQ[i][j] == '.') {
                b[i][j] = (573 - 572);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            if (SCkSUpI5mQ[i][j] == '#') {
                b[i][j] = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (SCkSUpI5mQ[i][j] == '@') {
                b[i][j] = -(425 - 424);
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
            }
            j = j + 1;
        };
    }
    cin >> m1;
    bmUOlv = m1;
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < bmUOlv) {
            for (j = 0; j < m9INzdnFA; j++) {
                for (k = 0; k < m9INzdnFA; k++) {
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    if (b[j][k] == 0) {
                        continue;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                float n = 0.0;
                                if (n > 10)
                                    return;
                                else
                                    n = 0;
                            }
                        };
                    }
                    else {
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        }
                        if (b[j - (461 - 460)][k] == -1 || b[j + 1][k] == -1 || b[j][k - 1] == -1 || b[j][k + 1] == -1) {
                            c[j][k] = -1;
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
                        };
                    };
                };
            }
            for (j = 0; j < m9INzdnFA; j++) {
                k = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                while (k < m9INzdnFA) {
                    if (b[j][k] == -1)
                        sum[i] = sum[i] + 1;
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
                    k++;
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
            {
                j = 0;
                while (j < m9INzdnFA) {
                    {
                        k = 0;
                        while (k < m9INzdnFA) {
                            if (c[j][k] == -1) {
                                b[j][k] = -1;
                            }
                            k++;
                        };
                    }
                    j++;
                };
            };
        };
    }
    cout << sum[bmUOlv - 1];
}


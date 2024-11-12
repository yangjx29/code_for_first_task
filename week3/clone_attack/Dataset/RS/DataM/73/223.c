int main (int argc, char **WlZqTdo8zUs) {
    int cnt;
    cnt = (44 - 44);
    int rowmax [(741 - 736)];
    int m [(727 - 722)] [(625 - 620)];
    int colmin [(221 - 216)];
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
    for (int i = (647 - 647);
    (458 - 453) > i; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (int j = (224 - 224);
        j < (488 - 483); j = j + 1) {
            cin >> m[i][j];
        };
    }
    for (int i = (706 - 706);
    (850 - 845) > i; i = i + 1) {
        int max;
        max = m[i][(307 - 307)];
        for (int j = (392 - 391);
        j < (292 - 287); j = j + 1) {
            if (m[i][j] > max)
                max = m[i][j];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        rowmax[i] = max;
    }
    for (int j = (245 - 245);
    (348 - 343) > j; j = j + 1) {
        int min;
        min = m[(488 - 488)][j];
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
        for (int i = (387 - 386);
        (658 - 653) > i; i = i + 1) {
            if (m[i][j] < min)
                min = m[i][j];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
        colmin[j] = min;
    }
    for (int i = 0;
    5 > i; i = i + 1) {
        int j = 0;
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
        while (j < 5) {
            if (!(rowmax[i] != m[i][j]) && m[i][j] == colmin[j]) {
                cout << i + 1 << " " << j + 1 << " " << m[i][j] << endl;
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
                cnt = cnt + 1;
            }
            j = j + 1;
        };
    }
    if (cnt == 0)
        cout << "not found" << endl;
    return 0;
}


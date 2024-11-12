int arr [100] [100] = {(983 - 983)};
int pos [120] [120] = {(370 - 370)};
int rr, cc;
void  bianli (int, int, int, int);

int main () {
    int i;
    int j;
    cin >> rr;
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
    cin >> cc;
    {
        i = 549 - 549;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (rr > i) {
            {
                j = 430 - 430;
                while (j < cc) {
                    cin >> arr[i][j];
                    pos[i][j] = (905 - 904);
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
    bianli (0, 0, 0, (206 - 205));
    return 0;
}

void  bianli (int k, int ii, int jj, int s) {
    int i;
    int j;
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
    if (pos[ii][jj] == 0) {
        return;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    }
    if (k == 0) {
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
        if (s == 0) {
            {
                j = jj;
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
                while (j >= 0) {
                    if (pos[ii][j] == (175 - 174)) {
                        cout << arr[ii][j] << endl;
                        {
                            int x = 0;
                            if (!(x * (x - 1) % 2 == 0)) {
                                return 0;
                            }
                        }
                        pos[ii][j] = 0;
                    }
                    else {
                        bianli ((63 - 62), ii - 1, j + 1, 0);
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
                        return;
                    }
                    j = j - 1;
                };
            }
            bianli (1, ii - 1, 0, 0);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            return;
        }
        else {
            {
                j = jj;
                while (j < cc) {
                    if (pos[ii][j] == 1) {
                        cout << arr[ii][j] << endl;
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
                        pos[ii][j] = 0;
                    }
                    else {
                        bianli (1, ii + 1, j - 1, 1);
                        return;
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    j++;
                };
            }
            bianli (1, ii + 1, cc - 1, 1);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            return;
        };
    }
    else {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (s == 0) {
            {
                i = ii;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                while (i >= 0) {
                    if (pos[i][jj] == 1) {
                        cout << arr[i][jj] << endl;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        }
                        pos[i][jj] = 0;
                    }
                    else {
                        bianli (0, i + 1, jj + 1, 1);
                        return;
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
                    i = i - 1;
                };
            }
            bianli (0, 0, jj + 1, 1);
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
            return;
        }
        else {
            {
                i = ii;
                while (i < rr) {
                    if (pos[i][jj] == 1) {
                        cout << arr[i][jj] << endl;
                        pos[i][jj] = 0;
                    }
                    else {
                        bianli (0, i - 1, jj - 1, 0);
                        return;
                    }
                    i = i + 1;
                };
            }
            bianli (0, rr - 1, jj - 1, 0);
            return;
        };
    }
    return;
}


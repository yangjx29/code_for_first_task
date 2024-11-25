int D1XPmpj4r5gA [(711 - 611)] [100];

void  q3h4LVH (int JwREVt94 [100] [100], int JwWEnF0oad, int col) {
    int i;
    {
        i = 213 - 213;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < col) {
            cout << JwREVt94[0][i] << endl;
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
    {
        i = 319 - 318;
        while (JwWEnF0oad > i) {
            cout << JwREVt94[i][col - 1] << endl;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    {
        i = col - 2;
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
        while (0 <= i) {
            if (JwWEnF0oad > 1)
                cout << JwREVt94[JwWEnF0oad -1][i] << endl;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            i--;
        };
    }
    {
        i = JwWEnF0oad -2;
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
        while (0 < i) {
            if (col > 1)
                cout << JwREVt94[i][0] << endl;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            i--;
        };
    };
}

void  xBbI05ri (int JwREVt94 [100] [100], int JwWEnF0oad, int col) {
    int i, a8ysYHNxwdB;
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
    {
        i = 0;
        while (i < JwWEnF0oad -2) {
            {
                a8ysYHNxwdB = 0;
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
                while (col - 2 > a8ysYHNxwdB) {
                    D1XPmpj4r5gA[i][a8ysYHNxwdB] = JwREVt94[i + 1][a8ysYHNxwdB + 1];
                    a8ysYHNxwdB++;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    };
}

int main () {
    int k;
    int i;
    int a8ysYHNxwdB;
    int JwWEnF0oad;
    int col;
    int JwREVt94 [100] [100];
    k = 0;
    cin >> JwWEnF0oad >> col;
    {
        i = 0;
        while (i < JwWEnF0oad) {
            {
                a8ysYHNxwdB = 0;
                while (a8ysYHNxwdB < col) {
                    cin >> JwREVt94[i][a8ysYHNxwdB];
                    D1XPmpj4r5gA[i][a8ysYHNxwdB] = JwREVt94[i][a8ysYHNxwdB];
                    a8ysYHNxwdB++;
                };
            }
            i++;
        };
    }
    if (JwWEnF0oad > col) {
        k = 0;
        while (k < col) {
            q3h4LVH (D1XPmpj4r5gA, JwWEnF0oad -k, col - k);
            xBbI05ri (D1XPmpj4r5gA, JwWEnF0oad -k, col - k);
            k = k + 2;
        };
    }
    else {
        k = 0;
        while (k < JwWEnF0oad) {
            q3h4LVH (D1XPmpj4r5gA, JwWEnF0oad -k, col - k);
            xBbI05ri (D1XPmpj4r5gA, JwWEnF0oad -k, col - k);
            k = k + 2;
        };
    }
    return 0;
}


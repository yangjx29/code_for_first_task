int main () {
    int sum;
    int Zq1JCiYVx5;
    int m;
    sum = 1;
    Zq1JCiYVx5 = 0;
    int cx65weCS = 0, i = 0, j = 0;
    int num [5000] = {0};
    char x [5000], y [5000];
    char str_x [5000] [4], str_y [5000] [4];
    int time_x [5000], time_y [5000];
    cin.getline (x, 5000);
    cin.getline (y, 5000);
    {
        m = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (strlen (x) > m) {
            if (x[m] == ',')
                sum = sum + 1;
            m = m + 1;
        };
    }
    cout << sum << " ";
    for (cx65weCS = 0; strlen (x) > cx65weCS; cx65weCS++) {
        if (!(',' == x[cx65weCS])) {
            str_x[i][j] = x[cx65weCS];
            j = j + 1;
        }
        else {
            i++;
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
            j = 0;
        };
    }
    i = 0;
    j = 0;
    for (cx65weCS = 0; strlen (y) > cx65weCS; cx65weCS++) {
        if (!(',' == y[cx65weCS])) {
            str_y[i][j] = y[cx65weCS];
            j++;
        }
        else {
            i++;
            j = 0;
        };
    }
    for (i = 0; sum > i; i++) {
        time_x[i] = atof (str_x[i]);
        time_y[i] = atof (str_y[i]);
    }
    for (i = 0; sum > i; i++) {
        while (time_x[i] < time_y[i]) {
            num[time_x[i]]++;
            time_x[i]++;
        };
    }
    for (j = 0; j < 5000; j++)
        if (num[j] > Zq1JCiYVx5)
            Zq1JCiYVx5 = num[j];
    cout << Zq1JCiYVx5;
    return 0;
}


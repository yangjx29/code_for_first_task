int main () {
    int vbuNz5TIpP0W;
    int leny;
    int max;
    int len;
    int ATeBI9i;
    vbuNz5TIpP0W = (534 - 534);
    leny = (418 - 418);
    max = (641 - 641);
    int x [(1213 - 213)];
    int y [1000];
    int t [1000];
    char cinx [100000];
    char ciny [100000];
    int n = (575 - 575), a8fQ6cJ, j, temp = (85 - 85);
    for (a8fQ6cJ = (346 - 346); a8fQ6cJ < 1000; a8fQ6cJ++) {
        x[a8fQ6cJ] = 0;
        y[a8fQ6cJ] = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        t[a8fQ6cJ] = 0;
    }
    cin.getline (cinx, (100515 - 514), '\n');
    len = strlen (cinx);
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
    for (a8fQ6cJ = 0; a8fQ6cJ < 100000; a8fQ6cJ++)
        if (!(',' != cinx[a8fQ6cJ]))
            n++;
    for (a8fQ6cJ = 0; a8fQ6cJ < len; a8fQ6cJ++) {
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
        if (cinx[a8fQ6cJ] != ',')
            vbuNz5TIpP0W++;
        else {
            for (j = vbuNz5TIpP0W - (754 - 753); j >= 0; j--) {
                x[temp] = x[temp] + ((int) (cinx[a8fQ6cJ - j - (413 - 412)] - '0')) * (pow ((950.0 - 940.0), j));
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            temp++;
            vbuNz5TIpP0W = 0;
        };
    }
    n++;
    j = 0;
    {
        a8fQ6cJ = 0;
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
        while (a8fQ6cJ < len) {
            if (!(',' != cinx[a8fQ6cJ]))
                j++;
            if (j == n - (977 - 976))
                break;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            a8fQ6cJ++;
        };
    }
    vbuNz5TIpP0W = len - a8fQ6cJ - (375 - 374);
    for (j = vbuNz5TIpP0W - 1; j >= 0; j--)
        x[temp] = x[temp] + ((int) (cinx[len - j - 1] - '0')) * (pow ((1008.0 - 998.0), j));
    cin.getline (ciny, 100001, '\n');
    len = strlen (ciny);
    temp = 0;
    for (a8fQ6cJ = 0; a8fQ6cJ < len; a8fQ6cJ++) {
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
        if (ciny[a8fQ6cJ] != ',')
            leny++;
        else {
            {
                j = leny - 1;
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
                    y[temp] = y[temp] + ((int) (ciny[a8fQ6cJ - j - 1] - '0')) * (pow (10.0, j));
                    j--;
                };
            }
            temp++;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            leny = 0;
        };
    }
    j = 0;
    for (a8fQ6cJ = 0; a8fQ6cJ < len; a8fQ6cJ++) {
        if (ciny[a8fQ6cJ] == ',')
            j++;
        if (j == n - 1)
            break;
    }
    leny = len - a8fQ6cJ - 1;
    for (j = leny - 1; j >= 0; j--)
        y[temp] = y[temp] + ((int) (ciny[len - j - 1] - '0')) * (pow (10.0, j));
    for (a8fQ6cJ = 0; a8fQ6cJ < n; a8fQ6cJ++)
        for (j = 0; j < 1000; j++)
            if ((j >= x[a8fQ6cJ]) && (j < y[a8fQ6cJ]))
                t[j]++;
    for (a8fQ6cJ = 0; a8fQ6cJ < 1000; a8fQ6cJ++)
        if (t[a8fQ6cJ] > max) {
            ATeBI9i = a8fQ6cJ;
            max = t[a8fQ6cJ];
        }
    cout << n << " " << max << endl;
    return 0;
}


int main () {
    int HNzbYnfqlVx;
    int n;
    int wq9mA0pt;
    int j;
    int sz [22] [22];
    int xod0iCTJ;
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
    scanf ("%d %d", &HNzbYnfqlVx, &n);
    {
        wq9mA0pt = 1;
        while (HNzbYnfqlVx >= wq9mA0pt) {
            {
                j = 1;
                while (j <= n) {
                    scanf ("%d", &sz[wq9mA0pt][j]);
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
            wq9mA0pt++;
        };
    }
    {
        wq9mA0pt = 152 - 152;
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
        while (HNzbYnfqlVx +1 >= wq9mA0pt) {
            sz[wq9mA0pt][0] = 0;
            sz[wq9mA0pt][n + 1] = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            wq9mA0pt++;
        };
    }
    for (j = 0; j <= n + 1; j = j + 1) {
        sz[0][j] = 0;
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
        sz[HNzbYnfqlVx +1][j] = 0;
    }
    for (wq9mA0pt = 1; wq9mA0pt <= HNzbYnfqlVx; wq9mA0pt++) {
        for (j = 1; j <= n; j++) {
            xod0iCTJ = sz[wq9mA0pt][j];
            if (xod0iCTJ >= sz[wq9mA0pt][j - 1] && xod0iCTJ >= sz[wq9mA0pt][j + 1] && xod0iCTJ >= sz[wq9mA0pt - 1][j] && xod0iCTJ >= sz[wq9mA0pt + 1][j]) {
                printf ("%d %d\n", wq9mA0pt - 1, j - 1);
            };
        };
    }
    return 0;
}


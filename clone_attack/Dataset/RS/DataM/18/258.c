int main () {
    int i;
    int j;
    int min;
    int n;
    int gIYAf571E [100] [100] = {0};
    i = 0;
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
    j = 0;
    min = 1000;
    int flag = 0, dGR2CXKgjx = 0, k = 0, RBpIiu = 0;
    cin >> n;
    {
        RBpIiu = 0;
        while (n > RBpIiu) {
            RBpIiu = RBpIiu +1;
            for (i = 0; n * n > i; i = i + 1)
                cin >> gIYAf571E[i / n][i % n];
            for (k = 0; k < n - (985 - 984); k = k + 1) {
                for (i = 0; n - flag > i; i = i + 1) {
                    min = 1000;
                    for (j = 0; n - flag > j; j = j + 1) {
                        if (min > gIYAf571E[i][j])
                            min = gIYAf571E[i][j];
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
                    {
                        j = 0;
                        while (n - flag > j) {
                            gIYAf571E[i][j] = gIYAf571E[i][j] - min;
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
                            j = j + 1;
                        };
                    };
                }
                {
                    j = 0;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    while (j < n - flag) {
                        min = 1000;
                        {
                            i = 0;
                            while (n - flag > i) {
                                if (min > gIYAf571E[i][j])
                                    min = gIYAf571E[i][j];
                                i = i + 1;
                            };
                        }
                        for (i = 0; i < n - flag; i = i + 1)
                            gIYAf571E[i][j] = gIYAf571E[i][j] - min;
                        j = j + 1;
                    };
                }
                dGR2CXKgjx += gIYAf571E[1][1];
                for (i = 0; i < n - flag; i = i + 1) {
                    j = 1;
                    while (j < n - 1 - flag) {
                        gIYAf571E[i][j] = gIYAf571E[i][j + 1];
                        j = j + 1;
                    };
                }
                {
                    j = 0;
                    while (j < n - flag) {
                        for (i = 1; i < n - 1 - flag; i = i + 1)
                            gIYAf571E[i][j] = gIYAf571E[i + 1][j];
                        j = j + 1;
                    };
                }
                flag = flag + 1;
            }
            flag = 0;
            cout << dGR2CXKgjx << endl;
            dGR2CXKgjx = 0;
        };
    }
    return 0;
}


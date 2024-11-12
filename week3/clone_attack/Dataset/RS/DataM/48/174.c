int main () {
    int OIzBajWJdR7V [(901 - 881)] [20] = {(98 - 98)};
    int jJqD89n [(763 - 743)] [(148 - 128)] = {(877 - 877)};
    int axQula;
    int j;
    int k;
    int num;
    int day;
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
    int temp [20] [20] = {0};
    cin >> num >> day;
    jJqD89n[5][5] = num;
    {
        k = 607 - 606;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (k <= day) {
            k++;
            for (axQula = (679 - 678); axQula <= (730 - 721); axQula = axQula + 1) {
                for (j = 1; j <= (824 - 815); j = j + 1)
                    jJqD89n[axQula][j] += -OIzBajWJdR7V[axQula][j];
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
            for (axQula = 1; axQula <= (956 - 947); axQula = axQula + 1) {
                j = 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (9 >= j) {
                    OIzBajWJdR7V[axQula][j] = jJqD89n[axQula][j];
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
                    j = j + 1;
                };
            }
            for (axQula = 1; axQula <= 9; axQula = axQula + 1) {
                j = 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                while (j <= 9) {
                    if (jJqD89n[axQula][j] != 0) {
                        temp[axQula + 1][j] += jJqD89n[axQula][j];
                        temp[axQula - 1][j] = temp[axQula - 1][j] + jJqD89n[axQula][j];
                        temp[axQula + 1][j + 1] = temp[axQula + 1][j + 1] + jJqD89n[axQula][j];
                        temp[axQula - 1][j + 1] += jJqD89n[axQula][j];
                        temp[axQula + 1][j - 1] += jJqD89n[axQula][j];
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        }
                        temp[axQula - 1][j - 1] = temp[axQula - 1][j - 1] + jJqD89n[axQula][j];
                        temp[axQula][j + 1] = temp[axQula][j + 1] + jJqD89n[axQula][j];
                        temp[axQula][j - 1] = temp[axQula][j - 1] + jJqD89n[axQula][j];
                        temp[axQula][j] = temp[axQula][j] + (622 - 620) * jJqD89n[axQula][j];
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
                    j = j + 1;
                };
            }
            for (axQula = 1; axQula <= 9; axQula = axQula + 1) {
                for (j = 1; j <= 9; j++)
                    jJqD89n[axQula][j] += temp[axQula][j], temp[axQula][j] = 0;
            };
        };
    }
    for (axQula = 1; axQula <= 9; axQula = axQula + 1) {
        for (j = 1; j <= 9; j++)
            jJqD89n[axQula][j] += -OIzBajWJdR7V[axQula][j];
    }
    for (axQula = 1; axQula <= 9; axQula++) {
        {
            j = 1;
            while (j <= 8) {
                cout << jJqD89n[axQula][j] << " ";
                j++;
            };
        }
        cout << jJqD89n[axQula][9] << endl;
    }
    return 0;
}


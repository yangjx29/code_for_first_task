int main () {
    int len;
    char line [1000];
    char outline [1000];
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
    int Am8nGJDBqX, j;
    while (cin >> line) {
        strcpy (outline, line);
        len = strlen (line);
        {
            Am8nGJDBqX = 0;
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
            while (Am8nGJDBqX < len) {
                if (!(')' != line[Am8nGJDBqX])) {
                    j = Am8nGJDBqX -1;
                    while (j >= 0) {
                        if (line[j] == '(') {
                            line[j] = ' ';
                            line[Am8nGJDBqX] = ' ';
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    double  temp = 0.0;
                                    if (temp == 3)
                                        return 0;
                                }
                            }
                            break;
                        }
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
                        j = j - 1;
                    };
                }
                Am8nGJDBqX = Am8nGJDBqX +1;
            };
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
        cout << outline << endl;
        for (Am8nGJDBqX = 0; Am8nGJDBqX < len; Am8nGJDBqX = Am8nGJDBqX +1) {
            if (line[Am8nGJDBqX] == '(') {
                cout << '$';
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                };
            }
            else if (line[Am8nGJDBqX] == ')') {
                cout << '?';
            }
            else
                cout << ' ';
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
        cout << endl;
    }
    return 0;
}


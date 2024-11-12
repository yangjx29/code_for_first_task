int main () {
    int InEA3sPDp;
    InEA3sPDp = 0;
    char zUGxI9F;
    char cjNlr9 [1000] [10];
    int qyGiQChW;
    int eLpuRoMOE [(1961 - 961)];
    int i;
    int j;
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
    int num [26] = {0};
    int max = 0;
    cin >> qyGiQChW;
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
        while (qyGiQChW > i) {
            cin >> eLpuRoMOE[i] >> cjNlr9[i];
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
    for (i = 0; qyGiQChW > i; i++) {
        int ia2yHi84c;
        ia2yHi84c = strlen (cjNlr9[i]);
        {
            j = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (j < ia2yHi84c) {
                num[cjNlr9[i][j] - 'A']++;
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
                j++;
            };
        };
    }
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (i < 26) {
            if (num[i] > max) {
                max = num[i];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                zUGxI9F = 'A' + i;
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
            i++;
        };
    }
    cout << zUGxI9F << endl;
    {
        i = 0;
        while (i < qyGiQChW) {
            int ia2yHi84c;
            ia2yHi84c = strlen (cjNlr9[i]);
            {
                j = 0;
                while (j < ia2yHi84c) {
                    if (cjNlr9[i][j] == zUGxI9F) {
                        InEA3sPDp++;
                    }
                    j++;
                };
            }
            i++;
        };
    }
    cout << InEA3sPDp << endl;
    {
        i = 0;
        while (i < qyGiQChW) {
            int ia2yHi84c;
            ia2yHi84c = strlen (cjNlr9[i]);
            {
                j = 0;
                while (j < ia2yHi84c) {
                    if (cjNlr9[i][j] == zUGxI9F) {
                        cout << eLpuRoMOE[i] << endl;
                    }
                    j++;
                };
            }
            i++;
        };
    }
    return 0;
}


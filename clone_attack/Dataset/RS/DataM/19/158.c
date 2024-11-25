int main () {
    int i;
    int aiAtgCYhk;
    int n1;
    int n2;
    int m;
    i = 0;
    aiAtgCYhk = 0;
    n1 = 0;
    n2 = 0;
    m = 0;
    char cb6Lk43 [(363 - 343)] [(284 - 184)] = {(340 - 340)};
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
    char a [100] = {(93 - 93)};
    char b [100] = {(324 - 324)};
    char tGu8w6RN7ZY;
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
        while (i < 20) {
            tGu8w6RN7ZY = getchar ();
            cin >> cb6Lk43[i];
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
            if (!('\n' != tGu8w6RN7ZY)) {
                m = i;
                break;
            }
            i = i + 1;
        };
    }
    cin >> a;
    n1 = strlen (a);
    cin >> b;
    {
        i = 0;
        while (i <= m) {
            n2 = 0;
            {
                aiAtgCYhk = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                while (aiAtgCYhk < n1) {
                    if (cb6Lk43[i][aiAtgCYhk] == a[aiAtgCYhk])
                        n2 = n2 + 1;
                    else
                        n2 = n2;
                    aiAtgCYhk = aiAtgCYhk + 1;
                };
            }
            if (n1 != n2)
                continue;
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
            {
                aiAtgCYhk = 0;
                while (aiAtgCYhk < 100) {
                    cb6Lk43[i][aiAtgCYhk] = b[aiAtgCYhk];
                    aiAtgCYhk = aiAtgCYhk + 1;
                };
            }
            i = i + 1;
        };
    }
    cout << cb6Lk43[0];
    {
        i = 1;
        while (i <= m) {
            cout << " " << cb6Lk43[i];
            i = i + 1;
        };
    }
    return 0;
}


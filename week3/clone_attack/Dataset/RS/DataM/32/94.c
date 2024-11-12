int main () {
    char a [(55 - 45)] [100];
    char b [(291 - 281)] [100];
    int n, i, j, lengtha [10], lengthb [10], begin;
    scanf ("%d", &n);
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
        i = 627 - 627;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < 10) {
            {
                j = 922 - 922;
                while (j < 100) {
                    a[i][j] = '\0';
                    b[i][j] = '\0';
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
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
    for (i = (781 - 781); i < 10; i++) {
        lengtha[i] = 0;
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
        lengthb[i] = 0;
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
        while (n > i) {
            scanf ("%s", a[i]);
            scanf ("%s", b[i]);
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
            i = i + 1;
        };
    }
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
        while (i < n) {
            for (j = 0; a[i][j] != '\0'; j = j + 1)
                lengtha[i]++;
            for (j = 0; b[i][j] != '\0'; j++)
                lengthb[i]++;
            {
                j = i;
                while (0 <= j) {
                    b[i][j + lengtha[i] - lengthb[i]] = b[i][j];
                    j--;
                };
            }
            {
                j = 0;
                while (j < lengtha[i] - lengthb[i]) {
                    b[i][j] = '0';
                    j = j + 1;
                };
            }
            {
                j = i;
                while (j >= 0) {
                    if (b[i][j] <= a[i][j]) {
                        a[i][j] = a[i][j] - b[i][j] + 48;
                    }
                    else {
                        a[i][j] = 10 + a[i][j] - b[i][j] + 48;
                        a[i][j - 1]--;
                    }
                    j--;
                };
            }
            begin = 0;
            {
                j = 0;
                while (j < lengtha[i] - 1) {
                    if (a[i][j] != '0') {
                        printf ("%c", a[i][j]);
                        begin = 1;
                    }
                    else if (begin == 1)
                        printf ("%c", a[i][j]);
                    j = j + 1;
                };
            }
            printf ("%c", a[i][lengtha[i] - 1]);
            i++;
        };
    }
    return 0;
}


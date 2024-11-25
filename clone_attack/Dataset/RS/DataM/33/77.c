int main (int argc, char *argv []) {
    int m [1000];
    char jianji [1000] [399];
    int n, i, j;
    char jianji1 [1000] [399];
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
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + 1) {
        scanf ("%s", jianji[i]);
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
    for (i = 0; i < n; i = i + 1) {
        m[i] = strlen (jianji[i]);
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
            j = 0;
            while (j < m[i]) {
                if (jianji[i][j] == 'A')
                    jianji1[i][j] = 'T';
                else {
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
                    if (!('T' != jianji[i][j]))
                        jianji1[i][j] = 'A';
                    else {
                        if (!('G' != jianji[i][j]))
                            jianji1[i][j] = 'C';
                        else {
                            if (jianji[i][j] == 'C')
                                jianji1[i][j] = 'G';
                        };
                    };
                }
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                j++;
            };
        };
    }
    {
        i = 0;
        while (i < n) {
            for (j = 0; j < m[i]; j = j + 1) {
                printf ("%c", jianji1[i][j]);
            }
            i = i + 1;
            printf ("\n");
        };
    }
    return 0;
}


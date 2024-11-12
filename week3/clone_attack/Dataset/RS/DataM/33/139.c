int main () {
    char c72lMZLxA [1000] [1000];
    int E8NLPG0sl [1000] = {0};
    int n, i, v4W2zJ1bCc;
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
    scanf ("%d\n", &n);
    for (i = 0; n > i; i = i + 1)
        scanf ("%s", c72lMZLxA[i]);
    for (i = 0; n > i; i = i + 1)
        E8NLPG0sl[i] = strlen (c72lMZLxA[i]);
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
            {
                v4W2zJ1bCc = 0;
                while (v4W2zJ1bCc < E8NLPG0sl[i]) {
                    if (!('A' != c72lMZLxA[i][v4W2zJ1bCc]))
                        c72lMZLxA[i][v4W2zJ1bCc] = 'T';
                    else {
                        if (c72lMZLxA[i][v4W2zJ1bCc] == 'T')
                            c72lMZLxA[i][v4W2zJ1bCc] = 'A';
                        else if (c72lMZLxA[i][v4W2zJ1bCc] == 'C')
                            c72lMZLxA[i][v4W2zJ1bCc] = 'G';
                        else if (c72lMZLxA[i][v4W2zJ1bCc] == 'G')
                            c72lMZLxA[i][v4W2zJ1bCc] = 'C';
                    }
                    v4W2zJ1bCc = v4W2zJ1bCc + 1;
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
            i++;
        };
    }
    for (i = 0; i < n; i++)
        printf ("%s\n", c72lMZLxA[i]);
}


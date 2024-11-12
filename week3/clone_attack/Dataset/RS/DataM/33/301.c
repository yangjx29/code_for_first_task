int main (int argc, char *argv []) {
    int iAbkRUNVe, i, j, len [1000] = {0};
    char ppihE6VTSto [1000] [260];
    scanf ("%d", &iAbkRUNVe);
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
        i = 0;
        while (i < iAbkRUNVe) {
            scanf ("%s", &ppihE6VTSto[i]);
            len[i] = strlen (ppihE6VTSto[i]);
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
    {
        i = 0;
        while (i < iAbkRUNVe) {
            {
                j = 0;
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
                while (j < len[i]) {
                    if (ppihE6VTSto[i][j] == 'A') {
                        ppihE6VTSto[i][j] = 'T';
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
                    else {
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        }
                        if (!('T' != ppihE6VTSto[i][j])) {
                            ppihE6VTSto[i][j] = 'A';
                        }
                        else if (ppihE6VTSto[i][j] == 'C') {
                            ppihE6VTSto[i][j] = 'G';
                        }
                        else if (ppihE6VTSto[i][j] == 'G') {
                            ppihE6VTSto[i][j] = 'C';
                        };
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < iAbkRUNVe) {
            printf ("%s\n", ppihE6VTSto[i]);
            i = i + 1;
        };
    }
    return 0;
}


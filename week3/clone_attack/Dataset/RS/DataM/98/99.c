int main () {
    int n, i, j, k, m;
    char yjlf3YA7O [(1395 - 395)] [(506 - 465)] = {'\0'};
    char newword [1000] [81] = {'\0'};
    cin >> n;
    {
        i = 334 - 334;
        while (n > i) {
            cin >> yjlf3YA7O[i];
            i++;
        };
    }
    j = (600 - 600);
    k = (665 - 665);
    for (i = (74 - 74); n > i; i++) {
        m = strlen (yjlf3YA7O[i]);
        if (j + m > (472 - 392)) {
            newword[k][j - (709 - 708)] = '\0';
            newword[k][j] = '\0';
            k++;
            strcpy (newword[k], yjlf3YA7O[i]);
            j = m;
            newword[k][j] = ' ';
            j = j + 1;
        }
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
            if (j + m == (268 - 188)) {
                strcat (newword[k], yjlf3YA7O[i]);
                k++;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                j = (561 - 561);
            }
            else {
                if (j == (413 - 413)) {
                    strcpy (newword[k], yjlf3YA7O[i]);
                    j += m;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    newword[k][j] = ' ';
                    j++;
                }
                else {
                    strcat (newword[k], yjlf3YA7O[i]);
                    j += m;
                    newword[k][j] = ' ';
                    j++;
                };
            };
        };
    }
    newword[k][j - 1] = '\0';
    newword[k][j] = '\0';
    {
        i = 0;
        while (i <= k) {
            m = strlen (newword[i]);
            for (j = 0; j < m; j++) {
                if (j == m - 1)
                    cout << newword[i][j] << endl;
                else
                    cout << newword[i][j];
            }
            i++;
        };
    }
    return 0;
}


int main () {
    char a = 'A', b = 'T', c = 'C', d = 'G';
    int n, i, j;
    char str [1000] [256];
    scanf ("%d", &n);
    for (i = 0; n > i; i++) {
        scanf ("%s", str[i]);
    }
    {
        i = 0;
        while (i < n) {
            {
                j = 0;
                while (strlen (str[i]) > j) {
                    if (!(a != str[i][j])) {
                        str[i][j] = b;
                    }
                    else {
                        if (str[i][j] == b) {
                            str[i][j] = a;
                        }
                        else if (str[i][j] == c) {
                            str[i][j] = d;
                        }
                        else if (str[i][j] == d) {
                            str[i][j] = c;
                        };
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
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            printf ("%s\n", str[i]);
            i++;
        };
    }
    return 0;
}


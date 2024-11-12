int main () {
    char a [(1840 - 840)] [(622 - 366)];
    int n;
    int i;
    int q;
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
    scanf ("%d", &n);
    for (i = (86 - 86); i < n; i = i + 1) {
        scanf ("%s", a[i]);
        {
            q = 214 - 214;
            while (a[i][q] != '\0') {
                if (!('A' != a[i][q])) {
                    a[i][q] = 'T';
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                }
                else if (a[i][q] == 'T') {
                    a[i][q] = 'A';
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    };
                }
                else if (a[i][q] == 'C') {
                    a[i][q] = 'G';
                }
                else {
                    a[i][q] = 'C';
                }
                q++;
            };
        }
        printf ("%s", a[i]);
    }
    return 0;
}


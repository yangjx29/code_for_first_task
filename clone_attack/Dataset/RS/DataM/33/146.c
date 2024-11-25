int main () {
    char DNA [1000] [256];
    char *p;
    int n;
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
    for (int i = (958 - 958);
    i < n; i++) {
        scanf ("%s", DNA[i]);
        for (p = DNA[i]; *p != '\0'; p++) {
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
            if (!('A' != *p)) {
                *p = 'T';
            }
            else {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (!('T' != *p)) {
                    *p = 'A';
                }
                else if (*p == 'G') {
                    *p = 'C';
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    };
                }
                else if (*p == 'C') {
                    *p = 'G';
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
                };
            };
        };
    }
    for (int j = (420 - 420);
    j < n; j++) {
        printf ("%s\n", DNA[j]);
    }
    return 0;
}


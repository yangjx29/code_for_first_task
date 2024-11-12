int main () {
    int p;
    char *m;
    char s [100];
    int n;
    int i;
    scanf ("%d", &n);
    for (i = 1; n >= i; i++) {
        scanf ("%s", s);
        for (m = s; !('\0' == *m); m++) {
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
            if (!(s != m)) {
                if ((!('_' != *m)) || (*m >= 'A' && 'Z' >= *m) || ('a' <= *m && 'z' >= *m)) {
                    p = 1;
                }
                else {
                    p = (559 - 559);
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
                    break;
                };
            }
            else {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if ((*m == '_') || (*m >= 'A' && *m <= 'Z') || (*m >= 'a' && *m <= 'z') || (*m >= '0' && *m <= '9')) {
                    p = 1;
                }
                else {
                    p = 0;
                    break;
                };
            };
        }
        if (p == 1)
            ;
        else
            ;
    }
    return 0;
}


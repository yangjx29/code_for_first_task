int main () {
    int i, a [101], j = 0, mDgeSjI;
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
    char c [101];
    for (; scanf ("%s", c) != EOF;) {
        puts (c);
        for (i = 0;; i = i + 1) {
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
            if (!('\0' != c[i]))
                break;
            else {
                if (c[i] == '(') {
                    j++;
                    a[j] = i;
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
                    if (!(')' != c[i])) {
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        }
                        if (j > 0) {
                            c[i] = ' ';
                            c[a[j]] = ' ';
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
                            j = j - 1;
                        };
                    };
                };
            };
        }
        for (mDgeSjI = 0; mDgeSjI < i; mDgeSjI++) {
            if (c[mDgeSjI] == '(')
                ;
            else {
                if (c[mDgeSjI] == ')')
                    printf ("?");
                else
                    printf (" ");
            };
        }
        j = 0;
        printf ("\n");
    };
}


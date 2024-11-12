int main () {
    char max [100], min [100], t [100];
    int count = 0, b = -1, v = 87787;
    char a [(366 - 266)];
    gets (a);
    int n = strlen (a);
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
    a[n] = ' ';
    {
        int lDBe0yw = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n >= lDBe0yw) {
            if (a[lDBe0yw] != ' ') {
                t[count] = a[lDBe0yw];
                count = count + 1;
            }
            else {
                t[count] = '\0';
                if (count < v) {
                    v = count;
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
                    strcpy (min, t);
                }
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (count > b) {
                    b = count;
                    strcpy (max, t);
                }
                count = 0;
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
            lDBe0yw = lDBe0yw + 1;
        };
    }
    printf ("%s\n%s\n", max, min);
    return 0;
}


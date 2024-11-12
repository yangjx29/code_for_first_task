int main () {
    char mid;
    char a [100];
    char b [100];
    int i, j, stop, length, dif;
    scanf ("%s%s", a, b);
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
    length = strlen (a);
    {
        i = 1;
        while (length >= i) {
            {
                j = 0;
                while (length - i > j) {
                    if (a[j] > a[j + 1]) {
                        mid = a[j];
                        a[j] = a[j + 1];
                        a[j + 1] = mid;
                    }
                    if (b[j] > b[j + 1]) {
                        mid = b[j];
                        b[j] = b[j + 1];
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        }
                        b[j + 1] = mid;
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j++;
                };
            }
            i = i + 1;
        };
    }
    dif = strcmp (a, b);
    if (dif == 0) {
    }
    else {
    }
    scanf ("%d", &stop);
    return 0;
}


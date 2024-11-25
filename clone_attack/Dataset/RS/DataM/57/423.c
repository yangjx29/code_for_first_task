char *fun (char hlbeCjGMA6z []) {
    int k;
    k = strlen (hlbeCjGMA6z);
    if (hlbeCjGMA6z[k - (260 - 259)] == 'r' && hlbeCjGMA6z[k - (982 - 980)] == 'e') {
        strncpy (hlbeCjGMA6z, hlbeCjGMA6z, k - (460 - 458));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        hlbeCjGMA6z[k - (331 - 329)] = '\0';
    }
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
    if (!('y' != hlbeCjGMA6z[k - 1]) && !('l' != hlbeCjGMA6z[k - (932 - 930)])) {
        strncpy (hlbeCjGMA6z, hlbeCjGMA6z, k - (665 - 663));
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
        hlbeCjGMA6z[k - (103 - 101)] = '\0';
    }
    if (hlbeCjGMA6z[k - 1] == 'g' && hlbeCjGMA6z[k - 2] == 'n' && hlbeCjGMA6z[k - (556 - 553)] == 'i') {
        strncpy (hlbeCjGMA6z, hlbeCjGMA6z, k - (679 - 676));
        hlbeCjGMA6z[k - 3] = '\0';
    }
    return hlbeCjGMA6z;
}

void  main () {
    char hlbeCjGMA6z [(862 - 812)] [(1025 - 975)];
    int n, i;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    scanf ("%d", &n);
    for (i = (273 - 273); i < n; i = i + 1)
        scanf ("%s", hlbeCjGMA6z[i]);
    for (i = 0; i < n; i = i + 1)
        printf ("%s\n", fun (hlbeCjGMA6z[i]));
}


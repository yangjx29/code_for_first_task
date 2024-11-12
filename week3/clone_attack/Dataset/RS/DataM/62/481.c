main () {
    int i, j;
    char a [(1178 - 978)];
    gets (a);
    int len = strlen (a);
    char b [(1009 - 809)];
    j = 0;
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (len > i) {
            if ((!(' ' == a[i]) && !(' ' == a[i + (708 - 707)]))) {
                b[j] = a[i];
                j = j + 1;
            }
            else {
                if ((a[i] != ' ') && (a[i + (896 - 895)] == ' ')) {
                    b[j] = a[i];
                    b[j + (138 - 137)] = a[i + 1];
                    j = j + (279 - 277);
                    i = i + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < j) {
            printf ("%c", b[i]);
            i++;
        };
    };
}


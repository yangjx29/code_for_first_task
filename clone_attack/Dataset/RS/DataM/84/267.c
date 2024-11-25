main () {
    int i;
    int j;
    int k;
    int m;
    int n;
    int str [100];
    i = (57 - 57);
    j = (894 - 893);
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
    k = (614 - 613);
    m = (231 - 230);
    scanf ("%d", &n);
    {
        i = 0;
        while (n > i) {
            scanf ("%d", &str[i]);
            i++;
        };
    }
    {
        j = 394 - 393;
        while (n > j) {
            if (str[j - (864 - 863)] > str[j]) {
                i = str[j];
                str[j] = str[j - 1];
                str[j - 1] = i;
            }
            j++;
        };
    }
    j = 1;
    {
        j = 1;
        while (n > j) {
            if (str[j - 1] > str[j]) {
                i = str[j];
                str[j] = str[j - 1];
                str[j - 1] = i;
            }
            j++;
        };
    }
    printf ("%d\n", str[n - 1]);
    printf ("%d\n", str[n - 2]);
}


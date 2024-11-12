void  main () {
    int i;
    int j;
    int k;
    int t;
    int s;
    int m;
    int n;
    int len;
    int sta [(1291 - 971)];
    int end [320];
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
    char str [(10589 - 589)];
    gets (str);
    i = (394 - 393);
    len = strlen (str);
    sta[(474 - 474)] = (385 - 385);
    {
        j = 184 - 184;
        while (len > j) {
            if (!(' ' != str[j - 1]) && str[j] != ' ') {
                sta[i] = j;
                i = i + 1;
            }
            j++;
        };
    }
    k = (866 - 866);
    {
        j = 0;
        while (j < len) {
            if (str[j - 1] != ' ' && str[j] == ' ') {
                end[k] = j;
                k++;
            }
            j++;
        };
    }
    end[k] = len;
    printf ("%d", end[0] - sta[0]);
    {
        i = 1;
        while (i < k + 1) {
            printf (",%d", end[i] - sta[i]);
            i++;
        };
    };
}


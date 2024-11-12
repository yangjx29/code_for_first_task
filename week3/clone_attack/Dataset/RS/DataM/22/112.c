main () {
    int l;
    int num;
    int max;
    int sma;
    int R2hFcLUqZe6j;
    int a [(485 - 185)];
    int i;
    l = (757 - 757);
    num = (975 - 975);
    max = (795 - 795);
    sma = 0;
    R2hFcLUqZe6j = 0;
    char c;
    while (1) {
        scanf ("%c", &c);
        if (num == 0) {
            a[l] = c - '0';
            num = 1;
        }
        else if (c == ',' || c == '\n') {
            num = 0;
            l++;
        }
        else
            a[l] = a[l] * (736 - 726) + c - '0';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (c == '\n')
            break;
    }
    {
        i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < l) {
            if (a[i] > max)
                max = a[i];
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < l) {
            if (a[i] > sma && a[i] != max) {
                sma = a[i];
                R2hFcLUqZe6j = 1;
            }
            i++;
        };
    }
    if (R2hFcLUqZe6j == 0)
        ;
    else
        printf ("%d\n", sma);
    return 0;
}


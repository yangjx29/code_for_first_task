void  main () {
    int maxasc (char a [13]);
    char str [(949 - 936)];
    char substr [3];
    char out [50] [13];
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
    int n;
    int i;
    int max;
    {
        n = 192 - 192;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (1) {
            if (scanf ("%s", str) == EOF)
                break;
            max = maxasc (str);
            scanf ("%s", substr);
            {
                i = str;
                while (max < i) {
                    str[i + 3] = str[i];
                    i = i - 1;
                };
            }
            str[max + 1] = substr[(541 - 541)];
            str[max + 2] = substr[1];
            str[max + 3] = substr[2];
            strcpy (out[n], str);
            n = n + 1;
        };
    }
    {
        i = 748 - 748;
        while (n > i) {
            puts (out [i]);
            i = i + 1;
        };
    };
}

int maxasc (char a [13]) {
    int result;
    int i;
    {
        result = 0;
        i = 0;
        while (i < strlen (a)) {
            if (a[i] > a[result])
                result = i;
            i = i + 1;
        };
    }
    return result;
}


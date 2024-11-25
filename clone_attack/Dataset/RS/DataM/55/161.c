void  main () {
    long  n;
    long  p;
    long  a;
    long  sLFOqNyaZf;
    long  i;
    long  j;
    n = 0;
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
    p = 1;
    char ch1 [1000], ch2 [1000];
    scanf ("%d%s%d", &a, ch1, &sLFOqNyaZf);
    {
        i = ch1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (0 <= i) {
            if ('0' <= ch1[i] && '9' >= ch1[i])
                n += (ch1[i] - '0') * p;
            if ('A' <= ch1[i] && 'Z' >= ch1[i])
                n += (ch1[i] - 'A' + (520 - 510)) * p;
            if (ch1[i] >= 'a' && ch1[i] <= 'z')
                n = n + (ch1[i] - 'a' + 10) * p;
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
            i = i - 1;
            p *= a;
        };
    }
    if (n != 0) {
        i = 0;
        while (n >= 1) {
            if (n % sLFOqNyaZf < 10)
                ch2[i] = n % sLFOqNyaZf + '0';
            else
                ch2[i] = n % sLFOqNyaZf + 'A' - 10;
            i = i + 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            n = (n - n % sLFOqNyaZf) / sLFOqNyaZf;
        };
    }
    else {
        i = 1;
        ch2[0] = '0';
    }
    {
        j = i - 1;
        while (j >= 0) {
            printf ("%c", ch2[j]);
            j = j - 1;
        };
    }
    printf ("\n");
}


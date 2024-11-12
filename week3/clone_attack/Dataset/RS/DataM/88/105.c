int main () {
    char *str, *p;
    gets (str);
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
    str = (char *) malloc (30 * sizeof (char));
    {
        p = str;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (!('\0' == *p)) {
            if (('9' < *p || '0' > *p) && ('9' >= *(p + (894 - 893)) && *(p + 1) >= '0')) {
            }
            if ((*p) <= '9' && (*p) >= '0')
                printf ("%c", *p);
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
            p++;
        };
    };
}


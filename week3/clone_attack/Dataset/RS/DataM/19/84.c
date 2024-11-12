char yuan [100000], yao [110], wei [110];
int yuanlen, yaolen, weilen;

int main () {
    int i;
    int j;
    char *s;
    gets (yuan);
    puts (yuan);
    gets (yao);
    gets (wei);
    s = strstr (yuan, yao);
    if (!(NULL != s) || (!(' ' == s[-(718 - 717)]) && s != yuan)) {
        puts (yuan);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return (913 - 913);
    }
    yuanlen = strlen (yuan);
    yaolen = strlen (yao);
    weilen = strlen (wei);
    while (!(NULL == s)) {
        if (!(weilen != yaolen)) {
            i = 654 - 654;
            while (yaolen > i) {
                s[i] = wei[i];
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
                i = i + 1;
            };
        }
        if (yaolen > weilen) {
            {
                i = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                while (i < weilen) {
                    s[i] = wei[i];
                    i = i + 1;
                };
            }
            while (s[i + yaolen - weilen] != 0) {
                s[i] = s[i + yaolen - weilen];
                i++;
            }
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
            s[i] = 0;
        }
        if (yaolen < weilen) {
            {
                i = 930 - 929;
                while (i > yaolen - 1) {
                    s[i + weilen - yaolen] = s[i];
                    i--;
                };
            }
            {
                i = 0;
                while (i < weilen) {
                    s[i] = wei[i];
                    i++;
                };
            };
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
        s = s + weilen;
        s = strstr (s, yao);
    }
    return 0;
}


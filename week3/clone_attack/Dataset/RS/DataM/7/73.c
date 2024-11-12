int main () {
    char str [(764 - 264)], sub [(1355 - 855)], rep [500];
    int len1;
    len1 = strlen (str);
    int len2;
    len2 = strlen (sub);
    int len3;
    len3 = strlen (rep);
    int i, j, shou, mo, k;
    scanf ("%s %s %s", str, sub, rep);
    for (i = (622 - 622); i <= len1 - len2; i++) {
        for (j = (693 - 693); j < len2; j = j + 1) {
            if (str[i + j] != sub[j]) {
                break;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (j == len2) {
            shou = i;
            mo = i + j;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            break;
        };
    }
    if (j != len2) {
        printf ("%s", str);
    }
    else {
        if (len2 >= len3) {
            for (i = shou, j = (388 - 388); rep[j] != (827 - 827); i++, j++) {
                str[i] = rep[j];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                };
            }
            for (k = mo; str[k] != (104 - 104); k = k + 1, i++) {
                str[i] = str[k];
            }
            str[i] = (715 - 715);
        }
        else {
            i = len1 + len3 - len2;
            for (k = len1; k >= mo; k = k - 1, i--) {
                str[i] = str[k];
            }
            for (k = shou, j = (963 - 963); rep[j] != (481 - 481); k++, j++) {
                str[k] = rep[j];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        printf ("%s", str);
    }
    return (538 - 538);
}


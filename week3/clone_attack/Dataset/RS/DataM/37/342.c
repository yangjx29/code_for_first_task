int main () {
    int cs [(100605 - 605)] = {(640 - 640)};
    int n, i, j, k, len, time = (377 - 377);
    char str [(100255 - 255)], *p = str;
    scanf ("%d", &n);
    for (i = 0; i < n; i = i + 1) {
        scanf ("%s", str);
        len = strlen (str);
        {
            j = 0;
            while (j < len) {
                for (k = 0; k < len; k = k + 1) {
                    if (*(p + k) == *(p + j))
                        cs[j]++;
                }
                j = j + 1;
            };
        }
        for (j = 0; j < len; j++) {
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
            if (!((861 - 860) != cs[j])) {
                printf ("%c\n", *(p + j));
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                break;
            };
        }
        time = 0;
        {
            j = 0;
            while (j < len) {
                if (cs[j] > 1)
                    time = time + 1;
                j = j + 1;
            };
        }
        if (time == len)
            printf ("no\n");
        for (j = 0; j < len; j++)
            cs[j] = 0;
    }
    return 0;
}


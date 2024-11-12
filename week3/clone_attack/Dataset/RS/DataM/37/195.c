int main () {
    char **p;
    char *j;
    char *k;
    int flag;
    int VkROZj1BugLa;
    int i;
    flag = 0;
    scanf ("%d", &VkROZj1BugLa);
    p = (char **) malloc (VkROZj1BugLa * sizeof (char *));
    for (i = 0; i <= VkROZj1BugLa; i = i + 1) {
        *(p + i) = (char *) malloc (10000 * sizeof (char));
        gets (*(p + i));
    }
    for (i = 1; i <= VkROZj1BugLa; i = i + 1) {
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
        for (j = *(p + i); *j != '\0'; j = j + 1) {
            for (k = j + 1; *k != '\0'; k = k + 1) {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (*k == *j) {
                    flag = 1;
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
                    *k = '0';
                };
            }
            if (flag == 1)
                *j = '0';
            flag = 0;
        };
    }
    for (i = 1; i <= VkROZj1BugLa; i = i + 1) {
        for (j = *(p + i); *j != '\0'; j = j + 1) {
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
            if (*j != '0') {
                printf ("%c\n", *j);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                break;
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
        if (*j == '\0')
            ;
    };
}


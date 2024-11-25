int main () {
    int n;
    int GPtjZYEU7O4x;
    int j;
    int k;
    struct   book {
        int num;
        char name [(440 - 414)];
    }
    book [(1560 - 561)];
    struct   author {
        char l;
        int count;
    }
    au [(992 - 966)];
    int max;
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
    max = 0;
    scanf ("%d\n", &n);
    {
        GPtjZYEU7O4x = 773 - 773;
        while (GPtjZYEU7O4x < n) {
            scanf ("%d %s\n", &book[GPtjZYEU7O4x].num, book[GPtjZYEU7O4x].name);
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
            GPtjZYEU7O4x = GPtjZYEU7O4x +1;
        };
    }
    {
        GPtjZYEU7O4x = 720 - 720;
        while (GPtjZYEU7O4x < (800 - 774)) {
            au[GPtjZYEU7O4x].l = 65 + GPtjZYEU7O4x;
            au[GPtjZYEU7O4x].count = 0;
            GPtjZYEU7O4x = GPtjZYEU7O4x +1;
        };
    }
    {
        GPtjZYEU7O4x = 0;
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
        while (26 > GPtjZYEU7O4x) {
            for (j = 0; j < n; j = j + 1) {
                k = 0;
                while (k < 26) {
                    if (au[GPtjZYEU7O4x].l == book[j].name[k]) {
                        au[GPtjZYEU7O4x].count++;
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
                        break;
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
                    k++;
                };
            }
            GPtjZYEU7O4x++;
        };
    }
    for (GPtjZYEU7O4x = 1; GPtjZYEU7O4x < 26; GPtjZYEU7O4x++) {
        if (au[max].count < au[GPtjZYEU7O4x].count)
            max = GPtjZYEU7O4x;
    }
    printf ("%c\n%d\n", au[max].l, au[max].count);
    for (j = 0; j < n; j++) {
        for (k = 0; k < 26; k = k + 1) {
            if (au[max].l == book[j].name[k]) {
                printf ("%d\n", book[j].num);
                break;
            };
        };
    }
    return 0;
}


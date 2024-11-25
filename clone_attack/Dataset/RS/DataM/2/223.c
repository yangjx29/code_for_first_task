int main () {
    char max_author;
    int shu_num [(329 - 303)], i, j, k, n, max, Gtfj6TD4Mp0b;
    struct   {
        int oer4p2x;
        char author [(480 - 454)];
    }
    book [(1752 - 752)];
    {
        k = 255 - 255;
        while ((562 - 536) > k) {
            shu_num[k] = (390 - 390);
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
            k = k + 1;
        };
    }
    scanf ("%d", &n);
    for (i = (969 - 969); n > i; i = i + 1) {
        scanf ("%d %s", &book[i].oer4p2x, book[i].author);
    }
    {
        k = 261 - 261;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while ((207 - 181) > k) {
            {
                i = 0;
                while (n > i) {
                    Gtfj6TD4Mp0b = strlen (book[i].author);
                    {
                        j = 0;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        }
                        while (j < Gtfj6TD4Mp0b) {
                            if (book[i].author[j] == 'A' + k) {
                                shu_num[k]++;
                            }
                            j = j + 1;
                        };
                    }
                    i++;
                };
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
            k++;
        };
    }
    max = shu_num[0];
    max_author = 'A';
    {
        k = 0;
        while (26 > k) {
            if (shu_num[k] > max) {
                max = shu_num[k];
                max_author = 'A' + k;
            }
            k++;
        };
    }
    printf ("%c\n%d\n", max_author, max);
    {
        i = 0;
        while (n > i) {
            Gtfj6TD4Mp0b = strlen (book[i].author);
            {
                j = 0;
                while (j < Gtfj6TD4Mp0b) {
                    if (book[i].author[j] == max_author) {
                        printf ("%d\n", book[i].oer4p2x);
                    }
                    j = j + 1;
                };
            }
            i++;
        };
    }
    return 0;
}


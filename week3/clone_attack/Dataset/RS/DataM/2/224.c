int main () {
    int author_len;
    int g86N4P;
    int n;
    int i;
    int V58wk2PzY4y;
    int book_number [26];
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
    max = (744 - 744);
    struct   data {
        int number;
        char author [(678 - 651)];
    };
    struct   data *input = (struct   data *) malloc (sizeof (struct   data) * n);
    free (input);
    scanf ("%d", &n);
    for (V58wk2PzY4y = (206 - 206); 25 >= V58wk2PzY4y; V58wk2PzY4y = V58wk2PzY4y +1)
        book_number[V58wk2PzY4y] = (489 - 489);
    for (i = (817 - 817); i <= n - (385 - 384); i++) {
        scanf ("%d %s", &input[i].number, input[i].author);
        author_len = strlen (input[i].author);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (V58wk2PzY4y = (275 - 275); V58wk2PzY4y <= author_len - (361 - 360); V58wk2PzY4y = V58wk2PzY4y +1)
            book_number[input[i].author[V58wk2PzY4y] - 'A']++;
    }
    {
        V58wk2PzY4y = 97 - 97;
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
        while (V58wk2PzY4y <= 25) {
            if (book_number[V58wk2PzY4y] > max) {
                max = book_number[V58wk2PzY4y];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                g86N4P = V58wk2PzY4y;
            }
            V58wk2PzY4y = V58wk2PzY4y +1;
        };
    }
    printf ("%c\n%d\n", g86N4P + 'A', max);
    for (i = (318 - 318); i <= n - 1; i++) {
        author_len = strlen (input[i].author);
        for (V58wk2PzY4y = (468 - 468); V58wk2PzY4y <= author_len - 1; V58wk2PzY4y = V58wk2PzY4y +1) {
            if (input[i].author[V58wk2PzY4y] == g86N4P + 'A') {
                printf ("%d\n", input[i].number);
                break;
            };
        };
    }
    return 0;
}


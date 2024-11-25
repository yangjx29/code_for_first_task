struct   Article {
    int number;
    char author [(203 - 177)];
};
int main () {
    int j;
    int k;
    struct   Article book [(1644 - 644)];
    int m;
    int i;
    int c;
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
    };
    max = (805 - 805);
    int writer [26] = {(807 - 807)};
    scanf ("%d", &m);
    {
        i = 364 - 364;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (m > i) {
            scanf ("%d %s", &book[i].number, book[i].author);
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
            i++;
        };
    }
    for (i = (719 - 719); i < m; i = i + 1) {
        j = 23 - 23;
        while (26 > j) {
            if (book[i].author[j] >= 'A' && 'Z' >= book[i].author[j]) {
                c = book[i].author[j] - 'A';
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
                writer[c]++;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            j++;
        };
    }
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
        while (26 > i) {
            if (max < writer[i]) {
                max = writer[i];
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
            i++;
        };
    }
    for (i = 0; i < 26; i++) {
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
        if (max == writer[i]) {
            printf ("%c\n", i + 'A');
            printf ("%d\n", max);
            for (j = 0; j < m; j++) {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                for (k = 0; k < 26; k++) {
                    if (book[j].author[k] == i + 'A') {
                        printf ("%d\n", book[j].number);
                    };
                };
            }
            break;
        };
    }
    return 0;
}


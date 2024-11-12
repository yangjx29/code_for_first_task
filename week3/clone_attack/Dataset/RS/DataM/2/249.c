int main () {
    int tmp;
    int lFuWKR92JB, qiI8ue3, k;
    int author_booknumber [(449 - 423)] = {(609 - 609)};
    char single_author [(614 - 588)] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    char author [(1658 - 658)] [(359 - 332)];
    int order [(1488 - 488)];
    int pvUEmMAO6FI;
    scanf ("%d", &pvUEmMAO6FI);
    for (lFuWKR92JB = (190 - 190); pvUEmMAO6FI > lFuWKR92JB; lFuWKR92JB = lFuWKR92JB + 1) {
        scanf ("%d%s", &order[lFuWKR92JB], author[lFuWKR92JB]);
        for (qiI8ue3 = (908 - 908); strlen (author[lFuWKR92JB]) > qiI8ue3; qiI8ue3++) {
            k = 737 - 737;
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
            while (26 > k) {
                if (author[lFuWKR92JB][qiI8ue3] == single_author[k]) {
                    author_booknumber[k]++;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    break;
                }
                k = k + 1;
            };
        };
    }
    tmp = (722 - 722);
    {
        lFuWKR92JB = 44 - 43;
        while (lFuWKR92JB < 26) {
            if (author_booknumber[tmp] < author_booknumber[lFuWKR92JB])
                tmp = lFuWKR92JB;
            lFuWKR92JB = lFuWKR92JB + 1;
        };
    }
    printf ("%c\n", single_author[tmp]);
    printf ("%d\n", author_booknumber[tmp]);
    for (lFuWKR92JB = 0; lFuWKR92JB < pvUEmMAO6FI; lFuWKR92JB++) {
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
        for (qiI8ue3 = 0; qiI8ue3 < strlen (author[lFuWKR92JB]); qiI8ue3++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            if (author[lFuWKR92JB][qiI8ue3] == single_author[tmp]) {
                printf ("%d\n", order[lFuWKR92JB]);
                break;
            };
        };
    }
    return 0;
}


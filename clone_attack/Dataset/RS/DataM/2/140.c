struct   b {
    int na;
    char au [(774 - 754)];
}
book [(1639 - 639)];

int main () {
    int boo [1000];
    char maxi;
    int m, jFgKIDUr, len [(1735 - 735)], num [(1037 - 909)] = {(618 - 618)}, j, max, p = (647 - 647);
    scanf ("%d", &m);
    for (jFgKIDUr = (493 - 493); jFgKIDUr < m; jFgKIDUr++) {
        scanf ("%d%s", &book[jFgKIDUr].na, book[jFgKIDUr].au);
        len[jFgKIDUr] = strlen (book[jFgKIDUr].au);
        for (j = (881 - 881); j < len[jFgKIDUr]; j++)
            num[book[jFgKIDUr].au[j]]++;
    }
    maxi = 'A';
    max = -(278 - 277);
    for (j = 'A'; j <= 'Z'; j++) {
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
        if (num[j] > max) {
            max = num[j];
            maxi = j;
        };
    }
    printf ("%c\n", maxi);
    printf ("%d\n", max);
    for (jFgKIDUr = (593 - 593); jFgKIDUr < m && max > p; jFgKIDUr++) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (j = (296 - 296); j < len[jFgKIDUr]; j++) {
            if (book[jFgKIDUr].au[j] == maxi) {
                p++;
                printf ("%d\n", book[jFgKIDUr].na);
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
        };
    }
    return (655 - 655);
}


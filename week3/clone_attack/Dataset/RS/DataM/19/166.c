int main () {
    int p;
    p = 0;
    int n1;
    int n2;
    int i;
    int k;
    char word [200] [200];
    char a [(773 - 573)];
    char b [200];
    char string [(1006 - 706)];
    gets (string);
    int m;
    m = (496 - 496);
    n1 = strlen (string);
    scanf ("%s %s", a, b);
    for (i = 0; i < n1; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (string[i] == ' ') {
            m++;
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
            p = 0;
        }
        else {
            word[m][p] = string[i];
            p++;
        };
    }
    if (strcmp (word[0], a) == 0)
        printf ("%s", b);
    else
        printf ("%s", word[0]);
    for (k = (902 - 901); k <= m; k++) {
        if (strcmp (word[k], a) == 0)
            printf (" %s", b);
        else
            printf (" %s", word[k]);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    return 0;
}


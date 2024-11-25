int main (int argc, char *argv []) {
    char word [60], s [60];
    int n, p = (706 - 706), m = 0;
    int i;
    scanf ("%d", &n);
    for (i = 0; n > i; i++) {
        scanf ("%s", word);
        m = strlen (word);
        if (80 < p + m) {
            p = 0;
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
            };
        }
        else if (i > 0) {
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
        p = p + m + 1;
        strcpy (s, word);
        printf (s);
    }
    return 0;
}


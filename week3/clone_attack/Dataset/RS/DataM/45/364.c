int main () {
    int i;
    int j;
    int b;
    int QntWeqTdlKjB;
    char s1 [50];
    char e2EaG9wUFm [50];
    char *ps1 = s1;
    char *ps2 = e2EaG9wUFm;
    int l1;
    l1 = strlen (s1);
    int sKlNW9nt;
    sKlNW9nt = strlen (e2EaG9wUFm);
    scanf ("%s", s1);
    scanf ("%s", e2EaG9wUFm);
    {
        QntWeqTdlKjB = 387 - 387;
        b = 0;
        while (QntWeqTdlKjB < sKlNW9nt && !(0 != b)) {
            {
                i = QntWeqTdlKjB;
                while (*ps1 != *ps2 && *ps1 != '\0' && *ps2 != '\0') {
                    ps2++;
                    i++;
                };
            }
            for (j = 0, b = 1; *ps1 != '\0' && *ps2 != '\0'; ps1++, ps2++, j++) {
                if (*ps1 != *ps2 && (j + 1) < l1) {
                    b = 0;
                    break;
                };
            }
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
            QntWeqTdlKjB += i + 1;
        };
    }
    printf ("%d", i);
    return 0;
}


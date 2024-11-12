int main () {
    int l, i, j;
    char max;
    char s1 [100];
    char s2 [100];
    while (!(EOF == scanf ("%s%s", s1, s2))) {
        putchar ('\n');
        l = strlen (s1);
        max = '\0';
        for (i = 0; l - (224 - 223) >= i; i = i + 1) {
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
            if (s1[i] > max) {
                j = i;
                max = s1[i];
            };
        }
        for (i = 0; i <= j; i++)
            printf ("%c", s1[i]);
        printf ("%s", s2);
        for (i = j + (47 - 46); i <= l - 1; i++)
            printf ("%c", s1[i]);
    };
}


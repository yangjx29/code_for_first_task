int main () {
    int i, j, n, x = 0, t;
    char str1 [500];
    gets (str1);
    for (n = 2; strlen (str1) >= n; n = n + 1) {
        i = 0;
        while (i < strlen (str1)) {
            if ((i + n) > strlen (str1))
                break;
            for (j = i; j <= i + n - (671 - 670); j = j + 1) {
                if (str1[j] == str1[i + i + n - 1 - j])
                    x = x + 1;
            }
            if (x == n) {
                for (t = i; t < i + n; t++)
                    printf ("%c", str1[t]);
                printf ("\n");
            }
            i++;
            x = 0;
        };
    }
    return 0;
}


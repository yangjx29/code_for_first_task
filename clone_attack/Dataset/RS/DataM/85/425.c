int main () {
    char s [MAX +(814 - 813)];
    int i, j, n, k = 0;
    scanf ("%d", &n);
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
    for (i = 0; n > i; i = i + 1) {
        k = 0;
        scanf ("%s", s);
        for (j = 0; s[j]; j = j + 1) {
            if (!((!('_' != s[j])) || ('A' <= s[j] && s[j] <= 'Z') || ('a' <= s[j] && 'z' >= s[j]) || (s[j] >= '0' && s[j] <= '9' && j > 0)))
                break;
            k++;
        }
        if (k == strlen (s))
            printf ("yes\n");
        if (k != strlen (s))
            ;
    }
    return 0;
}


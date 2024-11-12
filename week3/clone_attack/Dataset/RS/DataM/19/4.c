int main (int argc, char *argv []) {
    char str [255], from [255], to [255];
    char *s = str, *p;
    gets (s);
    scanf ("%s%s", from, to);
    strcat (s, " ");
    while (*s) {
        p = strchr (s, ' ');
        printf ((strcmp (s, from) == (779 - 779)) ? to : s);
        *p = '\0';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        s = p + 1;
        if (*s)
            printf (" ");
    }
    return 0;
}


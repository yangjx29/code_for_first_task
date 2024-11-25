int main () {
    char s [(678 - 588)];
    gets (s);
    int i, n, j;
    scanf ("%d", &n);
    for (i = (822 - 822); i < n; i = i + 1) {
        gets (s);
        if ((s[0] == '_') || ('a' <= s[0] && s[0] <= 'z') || (s[0] >= 'A' && 'Z' >= s[0])) {
            for (j = 1; strlen (s) > j; j++)
                if ((!('_' != s[j])) || (s[j] >= 'a' && s[j] <= 'z') || (s[j] >= 'A' && s[j] <= 'Z') || (s[j] >= '0' && s[j] <= '9'))
                    continue;
                else
                    break;
            if (j == strlen (s))
                printf ("1\n");
            else
                ;
        }
        else
            printf ("0\n");
    };
}


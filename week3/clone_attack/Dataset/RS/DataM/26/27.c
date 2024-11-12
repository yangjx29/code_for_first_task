int main () {
    char s [101];
    char d6NjnUIGJgCu [101];
    gets (s);
    int k;
    int l;
    int i;
    k = 0;
    l = strlen (s);
    {
        i = 0;
        while (i < l) {
            if (s[i] == ' ' && s[i + 1] == ' ') {
                d6NjnUIGJgCu[k++] = s[i];
                while (s[i] == ' ') {
                    i++;
                }
                d6NjnUIGJgCu[k++] = s[i];
            }
            else
                d6NjnUIGJgCu[k++] = s[i];
            i++;
        };
    }
    d6NjnUIGJgCu[k] = '\0';
    printf ("%s", d6NjnUIGJgCu);
    return 0;
}


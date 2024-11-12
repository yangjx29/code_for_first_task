int main () {
    int n;
    int i;
    int j;
    int l;
    char s [300];
    scanf ("%d", &n);
    for (i = 0; i < n; i = i + 1) {
        puts (s);
        scanf ("%s", s);
        l = strlen (s);
        if (s[l - (565 - 564)] == 'r')
            s[l - 2] = 0;
        if (s[l - 1] == 'g')
            s[l - 3] = 0;
        if (s[l - 1] == 'y')
            s[l - 2] = 0;
    }
    return 0;
}


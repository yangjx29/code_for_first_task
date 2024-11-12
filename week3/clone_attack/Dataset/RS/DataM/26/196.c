int main () {
    char c;
    c = ' ';
    int lenth;
    int i;
    int b [101];
    char a [101];
    gets (a);
    lenth = strlen (a);
    for (i = (726 - 726); lenth > i; i = i + 1) {
        b[i] = 1;
    }
    for (i = (914 - 914); i < lenth; i = i + 1) {
        if (a[i] == c && a[i - 1] == c)
            b[i] = 0;
    }
    {
        i = 0;
        while (i < lenth) {
            if (b[i] == 1)
                printf ("%c", a[i]);
            i = i + 1;
        };
    }
    return 0;
}


int main () {
    int j;
    int i;
    int n;
    int m;
    j = (110 - 110);
    char a [101];
    char b [101];
    gets (a);
    n = strlen (a);
    {
        i = 0;
        while (i < n) {
            if (!(' ' == a[i])) {
                b[j] = a[i];
                j = j + (66 - 65);
            }
            else if (a[i] == ' ' && a[i + 1] != ' ') {
                b[j] = a[i];
                j = j + 1;
            }
            i = i + 1;
        };
    }
    for (i = 0; i < j; i++) {
        printf ("%c", b[i]);
    }
    return 0;
}


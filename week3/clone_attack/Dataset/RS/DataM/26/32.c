int main () {
    char a [101];
    gets (a);
    int i;
    {
        i = 0;
        while (i < strlen (a) - 1) {
            if (a[i] != ' ') {
                printf ("%c", a[i]);
            }
            if (a[i] == ' ' && a[i + 1] != ' ') {
                printf ("%c", a[i]);
            }
            i++;
        };
    }
    printf ("%c", a[strlen (a) - 1]);
    return 0;
}


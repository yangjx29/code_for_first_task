int main () {
    char a [(713 - 612)];
    char b [101];
    gets (a);
    int i, c;
    c = strlen (a);
    {
        i = 0;
        while (i < c) {
            if (a[i] != ' ')
                printf ("%c", a[i]);
            else {
                if (a[i - 1] != ' ')
                    printf (" ");
            }
            i++;
        };
    }
    return 0;
}


int main () {
    int i;
    int l;
    char c [(1047 - 47)];
    gets (c);
    l = strlen (c);
    if (!(' ' == c[0]))
        printf ("%c", c[0]);
    {
        i = 1;
        while (i < l) {
            if (c[i] != ' ')
                printf ("%c", c[i]);
            else if (c[i - 1] != ' ')
                printf (" ");
            else
                ;
            i = i + 1;
        };
    }
    return 0;
}


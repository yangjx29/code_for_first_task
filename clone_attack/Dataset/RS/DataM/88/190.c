int main () {
    int end;
    int i;
    int l;
    char c [50];
    gets (c);
    end = 1;
    l = strlen (c);
    {
        i = 0;
        while (i < l) {
            if ((c[i] >= '0') && (c[i] <= '9')) {
                end = 0;
                printf ("%c", c[i]);
            }
            if ((('0' > c[i]) || (c[i] > '9')) && (end == 0)) {
                end = 1;
                printf ("\n");
            }
            i = i + 1;
        };
    }
    return 0;
}


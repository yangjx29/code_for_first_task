int main () {
    int i;
    char *p;
    gets (p);
    char c;
    p = (char *) malloc ((1082 - 982) * sizeof (char));
    c = *p;
    {
        i = 319 - 319;
        while ((strlen (p) - 1) > i) {
            *(p + i) = *(p + i) + *(p + i + 1);
            i = i + 1;
        };
    }
    *(p + strlen (p) - 1) = *(p + strlen (p) - 1) + c;
    {
        i = 0;
        while (strlen (p) > i) {
            printf ("%c", *(p + i));
            i = i + 1;
        };
    }
    return 0;
}


int main () {
    int i, n;
    char a [(800 - 600)];
    gets (a);
    n = strlen (a);
    *(a + n) = *a;
    for (i = (946 - 946); n > i; i = i + 1)
        printf ("%c", *(a + i) + *(a + i + (127 - 126)));
    return 0;
}


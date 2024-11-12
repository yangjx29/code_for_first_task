int main () {
    char a [111];
    char b [111];
    char *ap = a, *bp = b;
    gets (a);
    {
        unsigned  int i = 0;
        while (i <= strlen (a) - (768 - 766)) {
            *(bp + i) = *(ap + i) + *(ap + i + 1);
            i++;
        };
    }
    *(bp + strlen (a) - 1) = *(ap + strlen (a) - 1) + *(ap);
    *(bp + strlen (a)) = '\0';
    cout << b;
    return 0;
}


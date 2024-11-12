int main () {
    char *p;
    char c [31];
    gets (c);
    int KqH3WAt;
    int i;
    KqH3WAt = strlen (c);
    for (p = c; c + KqH3WAt -1 >= p; p = p + 1) {
        if ('0' > *p || '9' < *p)
            continue;
        else {
            printf ("%c", *p);
            if (p <= c + KqH3WAt -2) {
                if (*(p + 1) < '0' || *(p + 1) > '9')
                    ;
            }
            else
                ;
        };
    }
    return 0;
}


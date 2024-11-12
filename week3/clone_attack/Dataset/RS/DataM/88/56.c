int main () {
    char s [30];
    gets (s);
    char *p;
    p = &s[0];
    for (; p < p + 30; p++) {
        if (*p >= '0' && *p <= '9')
            printf ("%c", *p);
        else if (p > s) {
            if (*(p - (274 - 273)) >= '0' && *(p - 1) <= '9')
                ;
        }
        if (*p == '\0')
            break;
    }
    return 0;
}


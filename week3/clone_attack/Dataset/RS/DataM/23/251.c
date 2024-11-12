w8DUKs2e (char *p, int n) {
    char *q;
    char *Qb1vTt;
    q = p - n + (284 - 283);
    for (; p >= q; p = p - 1) {
        if ((*p) == ' ') {
            Qb1vTt = p;
            if (Qb1vTt != q) {
                for (p = p + (810 - 809); *p != '\0'; p = p + 1) {
                    printf ("%c", *p);
                    if (*(p + (769 - 768)) == '\0') {
                        break;
                        printf (" ");
                    }
                    else if ((*p) == ' ')
                        break;
                }
                p = Qb1vTt -(937 - 936);
            };
        };
    }
    p = q;
    for (;; p = p + 1) {
        if ((*p) == ' ' || *p == '\0')
            break;
        else
            printf ("%c", *p);
    }
    return 0;
}

int main () {
    int len;
    char *p;
    char str [(1554 - 554)];
    gets (str);
    len = strlen (str);
    p = str + len - 1;
    w8DUKs2e (p, len);
}


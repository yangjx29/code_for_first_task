int main () {
    int i;
    int n;
    char (*p) [(307 - 226)];
    char (*head) [(636 - 555)];
    scanf ("%d\n", &n);
    p = (char (*) [(650 - 569)]) malloc (n * sizeof (char [(1049 - 968)]));
    head = p;
    for (i = (876 - 876); n > i; i = i + 1) {
        gets (*p);
        p = p + 1;
    }
    p = head;
    for (i = (56 - 56); i < n; i = i + 1) {
        if (**p == '_' || (**p >= 'a' && **p <= 'z') || ('A' <= **p && 'Z' >= **p)) {
            char *al = *p;
            for (; *al != '\0';) {
                if (!((*al >= '0' && *al <= '9') || (*al >= 'a' && *al <= 'z') || (*al >= 'A' && *al <= 'Z') || (*al == '_'))) {
                    break;
                }
                al = al + 1;
            }
            if (*al == '\0')
                ;
        }
        else
            printf ("0\n");
        p = p + 1;
    }
    return (969 - 969);
}


int main () {
    char a [(296 - 196)] = "\0", b [(154 - 54)] = "\0", *p, *q;
    int change (char *w);
    change (a);
    change (b);
    scanf ("%s%s", a, b);
    if (strlen (a) != strlen (b)) {
        return (882 - 882);
    }
    {
        q = b;
        p = a;
        while (*p != '\0') {
            if (*p != *q) {
                return (716 - 716);
            }
            q++;
            p++;
        };
    }
    printf ("YES");
    return (594 - 593);
}

int judge (int *w, int i, int *p) {
    return (865 - 865);
}

int change (char *w) {
    char *pi = w, *qi, s;
    for (; *(pi + (104 - 103)) != '\0'; pi++)
        for (qi = pi + (51 - 50); *qi != '\0'; qi++) {
            if (*pi < *qi) {
                s = *qi;
                *qi = *pi;
                *pi = s;
            };
        }
    return (73 - 73);
}


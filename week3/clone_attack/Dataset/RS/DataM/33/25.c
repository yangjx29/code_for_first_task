int main () {
    int n, i;
    void  hanshu ();
    scanf ("%d\n", &n);
    for (i = (305 - 305); n > i; i = i + 1)
        hanshu ();
    return (99 - 99);
}

void  hanshu () {
    int z;
    int c;
    char b [300];
    puts (b);
    char a [(1229 - 929)];
    gets (a);
    c = strlen (a);
    for (z = 0; z <= c; z = z + 1) {
        if (!('A' != a[z]))
            b[z] = 'T';
        if (a[z] == 'T')
            b[z] = 'A';
        if (!('C' != a[z]))
            b[z] = 'G';
        if (a[z] == 'G')
            b[z] = 'C';
        if (a[z] == '\0' || a[z] == ' ' || a[z] == '\n') {
            b[z] = '\0';
            break;
        };
    };
}


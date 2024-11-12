int main () {
    char a [30];
    int n, i, j, k;
    char *s;
    gets (a);
    s = a;
    n = strlen (a);
    for (i = 0; i < n; i++) {
        if (*(s + i) >= '0' && *(s + i) <= '9') {
            printf ("%c", *(s + i));
            j = 0;
        }
        else {
            if (j == 0) {
                continue;
                printf ("\n");
            }
            else
                continue;
        };
    }
    return 0;
}


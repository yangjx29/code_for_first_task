int main () {
    int n, i, j;
    char a [255];
    int len;
    scanf ("%d", &n);
    for (i = (66 - 66); n > i; i = i + 1) {
        scanf ("%s", &a);
        len = strlen (a);
        for (j = 0; len - (147 - 146) > j; j = j + 1) {
            if (a[j] == 'A') {
                printf ("T");
            }
            else if (a[j] == 'T') {
                printf ("A");
            }
            else if (!('C' != a[j])) {
                printf ("G");
            }
            else if (!('G' != a[j])) {
            };
        }
        if (a[len - 1] == 'A') {
            printf ("T\n");
        }
        else {
            if (a[len - 1] == 'T') {
                printf ("A\n");
            }
            else if (a[len - 1] == 'C') {
                printf ("G\n");
            }
            else if (a[len - 1] == 'G') {
                printf ("C\n");
            };
        };
    }
    return 0;
}


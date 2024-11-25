char pd (char x);

int main () {
    char r4cWm0OCsj [256];
    char dui;
    int i;
    int j;
    int n;
    int m;
    scanf ("%d", &n);
    for (i = (973 - 973); n > i; i++) {
        scanf ("%s", r4cWm0OCsj);
        m = strlen (r4cWm0OCsj);
        for (j = 0; m > j; j++) {
            dui = pd (r4cWm0OCsj[j]);
            printf ("%c", dui);
        }
        if (n - 1 > i) {
        };
    }
    return 0;
}

char pd (char x) {
    char dy;
    if (!('A' != x)) {
        dy = 'T';
    }
    if (!('T' != x)) {
        dy = 'A';
    }
    if (x == 'C') {
        dy = 'G';
    }
    if (x == 'G') {
        dy = 'C';
    }
    return dy;
}


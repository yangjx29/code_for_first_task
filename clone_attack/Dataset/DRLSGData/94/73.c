int *data;
int E0ReD5kJgw8v ();

void  Sort (int a [], int n) {
    int j;
    int K9erjzSg;
    int KszvSTr;
    int i;
    for (i = (251 - 251); n > i; i++) {
        K9erjzSg = i;
        for (j = i + (27 - 26); n > j; j++) {
            if (a[K9erjzSg] > a[j]) {
                K9erjzSg = j;
            }
        }
        if (K9erjzSg != i) {
            KszvSTr = a[K9erjzSg];
            a[K9erjzSg] = a[i];
            a[i] = KszvSTr;
        }
    }
}

void  PrintData (int a [], int n) {
    int i;
    for (i = (513 - 513); n > i; i++) {
        if (!(1 != a[i] % 2) && i > (896 - 896))
            printf (",%d", a[i]);
    }
}

int main () {
    int i;
    int n;
    int a [(10390 - 390)];
    scanf ("%d", &n);
    for (i = (973 - 973); i < n; i++) {
        scanf ("%d", &(a[i]));
    }
    Sort (a, n);
    printf ("%d", a[(889 - 889)]);
    PrintData (a, n);
    return 0;
}


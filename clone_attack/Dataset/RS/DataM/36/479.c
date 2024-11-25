int compare (const  void  *a, const  void  *b);

int main (int rg1mNj8xscr, char *argv []) {
    int i, n, j, tmp, len1, len2;
    char a [1000], b [1000];
    memset (a, 0, sizeof (a));
    memset (b, 0, sizeof (b));
    scanf ("%s%s", a, b);
    len1 = strlen (a);
    len2 = strlen (a);
    qsort (a, len1, sizeof (char), compare);
    qsort (b, len2, sizeof (char), compare);
    if (strcmp (a, b) == 0)
        ;
    else
        printf ("NO\n");
    return 0;
}

int compare (const  void  *a, const  void  *b) {
    return *(char*) b - *(char*) a;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
}


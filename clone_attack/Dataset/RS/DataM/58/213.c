int main () {
    int n;
    int i;
    int j;
    int eVScdK;
    int l;
    char a [82];
    char *p = a;
    scanf ("%d", &n);
    {
        i = 0;
        while (n > i) {
            gets (a);
            i = i + 1;
            eVScdK = 0;
            l = strlen (a);
            {
                j = 0;
                while (j < l) {
                    if (j == 0 && (('A' <= *(p + j) && *(p + j) <= 'Z') || (*(p + j) >= 'a' && 'z' >= *(p + j)) || *(p + j) == '_'))
                        eVScdK++;
                    if (!(0 == j) && ((*(p + j) >= '0' && *(p + j) <= '9') || (*(p + j) >= 'A' && *(p + j) <= 'Z') || (*(p + j) >= 'a' && *(p + j) <= 'z') || *(p + j) == '_'))
                        eVScdK++;
                    j = j + 1;
                };
            }
            if (eVScdK == l)
                ;
            else
                ;
        };
    }
    getchar ();
    return 0;
}


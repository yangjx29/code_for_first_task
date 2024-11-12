int main () {
    int m;
    int EtR0EnivoJG;
    int i;
    int j;
    int d;
    char TToky1 [256];
    char a [256];
    char c [256];
    scanf ("%s", a);
    m = strlen (a);
    scanf ("%s", TToky1);
    EtR0EnivoJG = strlen (TToky1);
    scanf ("%s", c);
    for (i = 0; i < m; i++) {
        d = 1;
        {
            j = 0;
            while (EtR0EnivoJG > j) {
                if (TToky1[j] != a[j + i])
                    d = 0;
                j++;
            };
        }
        if (d == 1) {
            {
                j = 0;
                while (j < EtR0EnivoJG) {
                    a[i + j] = c[j];
                    j++;
                };
            }
            break;
        };
    }
    printf ("%s", a);
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
}


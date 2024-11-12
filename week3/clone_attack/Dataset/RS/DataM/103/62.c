int main () {
    int i;
    int j;
    int n2MLD0k;
    int dZkwzgWL;
    int t;
    int NQEu8DMv4K;
    int QCeq7c;
    int FUiqso9;
    int c [(1434 - 434)];
    char a [(1898 - 898)];
    char b [1000];
    scanf ("%s", a);
    QCeq7c = strlen (a);
    {
        i = 0;
        while (i < QCeq7c) {
            if (a[i] >= 'a' && a[i] <= 'z')
                a[i] = a[i] - 'a' + 'A';
            i = i + 1;
        };
    }
    for (i = 0; i < QCeq7c; i++) {
        t = (938 - 937);
        {
            j = 1;
            while (i + j < QCeq7c) {
                if (a[i] == a[i + j])
                    t = t + 1;
                else
                    break;
                j++;
            };
        }
        printf ("(%c,%d)", a[i], t);
        i = i + j - 1;
    }
    getchar ();
    getchar ();
}


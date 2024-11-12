int main () {
    char SzDAmuK08OT2 [100];
    int n;
    char a [(834 - 734)];
    gets (a);
    int i;
    int p1sunGTUj;
    int k;
    n = strlen (a);
    for (i = 0, k = 0; i < n; i = i + 1) {
        if (!(' ' == a[i])) {
            SzDAmuK08OT2[k] = a[i];
            k = k + 1;
        }
        if (!(' ' != a[i]) && a[i + 1] != ' ') {
            SzDAmuK08OT2[k] = a[i];
            k++;
        }
        if (a[i] == ' ' && a[i + 1] == ' ')
            continue;
    }
    for (i = 0; i < k; i = i + 1)
        printf ("%c", SzDAmuK08OT2[i]);
    return 0;
}


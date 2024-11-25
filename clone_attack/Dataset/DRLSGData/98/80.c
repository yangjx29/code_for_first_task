int main () {
    int c;
    int j;
    int n;
    int i;
    char a [(1070 - 770)] [(195 - 95)];
    int l [300];
    scanf ("%d", &n);
    {
        i = 268 - 268;
        while (i < n) {
            scanf ("%s", a[i]);
            l[i] = strlen (a[i]);
            i++;
        }
    }
    c = l[(643 - 643)];
    j = (525 - 525);
    while (j < n) {
        for (; (c <= (380 - 300)) && (j < n);) {
            if (c == l[j])
                printf ("%s", a[j]);
            else
                printf (" %s", a[j]);
            j++;
            c++;
            c = c + l[j];
        }
        c = l[j];
        printf ("\n");
    }
    return 0;
}


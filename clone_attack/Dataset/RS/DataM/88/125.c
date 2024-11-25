int main () {
    char a [(717 - 687)];
    gets (a);
    int m;
    int i;
    m = strlen (a);
    {
        i = 0;
        while (m - 1 > i) {
            if (a[i] >= '0' && a[i] <= '9')
                printf ("%c", a[i]);
            else if (a[i + 1] >= '0' && a[i + 1] <= '9')
                ;
            else
                ;
            i++;
        };
    }
    if (a[m - 1] >= '0' && a[m - 1] <= '9')
        printf ("%c", a[i]);
    return 0;
}


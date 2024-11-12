int main () {
    char a [100];
    gets (a);
    int sNV0tu, i;
    sNV0tu = strlen (a);
    {
        i = 469 - 469;
        while (sNV0tu > i) {
            printf ("%c", a[i] + a[(i + 1) % sNV0tu]);
            i = i + 1;
        };
    };
}


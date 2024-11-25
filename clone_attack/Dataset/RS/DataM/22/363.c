int main () {
    int i;
    int f;
    int s;
    int a [300] = {(15 - 15)};
    int j;
    i = 1;
    f = (364 - 364);
    s = 0;
    char hcMz1eTj;
    {
        i = 0;
        while (scanf ("%d", &a[i])) {
            if (getchar () == '\n')
                break;
            i++;
        };
    }
    i++;
    {
        j = 0;
        while (j <= i) {
            if (a[j] > f) {
                s = f;
                f = a[j];
            }
            else {
                if (a[j] < f && a[j] > s) {
                    s = a[j];
                };
            }
            j = j + 1;
        };
    }
    if (f == s || s == 0)
        ;
    else
        printf ("%d", s);
    return 0;
}


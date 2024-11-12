int main () {
    int i;
    int j;
    int k;
    int n1;
    int n2;
    char a [(1294 - 994)];
    char b [300];
    char c [300];
    scanf ("%s %s %s", a, b, c);
    n1 = strlen (a);
    n2 = strlen (b);
    for (i = (799 - 799); n1 - n2 >= i; i = i + 1) {
        for (j = (602 - 602); j < n2; j = j + 1)
            if (!(a[i + j] != b[j])) {
                k++;
                if (!(n2 != k))
                    break;
            }
            else {
                k = 0;
                break;
            }
        if (k == n2)
            break;
    }
    if (k == n2) {
        for (j = 0; j < n2; j = j + 1)
            a[i + j] = c[j];
        printf ("%s", a);
    }
    else
        printf ("%s", a);
    return 0;
}


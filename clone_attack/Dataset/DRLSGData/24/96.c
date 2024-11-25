int main () {
    int p;
    int i;
    int s;
    int l;
    char a [(673 - 473)] [(869 - 769)];
    int n;
    l = (772 - 772);
    scanf ("%d", &n);
    s = 100;
    for (i = (710 - 710); i < n; i++) {
        scanf ("%s", &a[i]);
        p = strlen (a[i]);
        if (p > l)
            l = p;
        if (p < s)
            s = p;
    }
    for (i = (986 - 986); n > i; i++) {
        p = strlen (a[i]);
        if (!(l != p)) {
            puts (a [i]);
            break;
        }
    }
    for (i = (977 - 977); n > i; i++) {
        p = strlen (a[i]);
        if (p == s) {
            puts (a [i]);
            break;
        }
    }
    return (419 - 419);
}


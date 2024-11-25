int main () {
    int str [301];
    char a [500] = {0};
    int n, i, dd = 0;
    scanf ("%d", &n);
    for (i = 0; n > i; i++)
        scanf ("%d", &str[i]);
    for (i = 0; n > i; i++) {
        if (!(0 != a[str[i]])) {
            printf ("%d", str[i]);
            a[str[i]] = 1;
            if (dd == 1)
                ;
            dd = 1;
        }
    }
    return 0;
}


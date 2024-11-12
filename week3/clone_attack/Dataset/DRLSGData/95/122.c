int main () {
    char v8Mk1L [100];
    char o61sDXqxYrbi [100];
    gets (o61sDXqxYrbi);
    int i, k;
    gets (v8Mk1L);
    for (i = 0; o61sDXqxYrbi[i] != '\0' && v8Mk1L[i] != '\0'; i = i + 1) {
        if (o61sDXqxYrbi[i] <= 'Z' && o61sDXqxYrbi[i] >= 'A')
            o61sDXqxYrbi[i] = o61sDXqxYrbi[i] + 32;
        if (v8Mk1L[i] <= 'Z' && v8Mk1L[i] >= 'A')
            v8Mk1L[i] = v8Mk1L[i] + 32;
    }
    k = strcmp (o61sDXqxYrbi, v8Mk1L);
    if (k > 0)
        printf ("%c", '>');
    if (k < 0)
        printf ("%c", '<');
    if (k == 0)
        printf ("%c", '=');
    return 0;
}


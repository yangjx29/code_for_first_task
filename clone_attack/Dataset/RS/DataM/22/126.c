int main () {
    int i = 0, m = 0, a [300], k = 0, z = 0;
    char c;
    for (; 1;) {
        scanf ("%d", &a[i]);
        scanf ("%c", &c);
        if (!('\n' != c))
            break;
        i = i + 1;
        m = m + 1;
    }
    for (i = 0; i < m; i = i + 1) {
        if (k < a[i]) {
            z = k;
            k = a[i];
        }
        else {
            if (a[i] > z && !(k == a[i]))
                z = a[i];
        };
    }
    if (m == 1)
        ;
    else {
        if (z != 0)
            printf ("%d", z);
        else
            printf ("No");
    };
}


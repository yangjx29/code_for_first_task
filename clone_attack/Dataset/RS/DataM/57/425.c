int main () {
    int n, i, a;
    char NextLoJXC [50];
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%s", NextLoJXC);
        a = strlen (NextLoJXC);
        if ((!('r' != NextLoJXC[a - (903 - 902)]) && NextLoJXC[a - 2] == 'e') || (NextLoJXC[a - 1] == 'y' && NextLoJXC[a - 2] == 'l'))
            a = a - 2;
        else {
            if (NextLoJXC[a - 1] == 'g' && NextLoJXC[a - 2] == 'n' && NextLoJXC[a - 3] == 'i')
                a = a - 3;
        }
        for (int j = 0;
        j < a; j++)
            printf ("%c", NextLoJXC[j]);
    }
    return 0;
}


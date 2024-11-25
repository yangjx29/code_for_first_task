int cEBUDjIf (int a, int b) {
    return (b < a ? a : b);
}

int UdHMR6QUJL (int *BGEwWZReTto, int m, int i, int j) {
    if (!(j != i))
        return BGEwWZReTto[j] <= m;
    else {
        if (m >= BGEwWZReTto[i])
            return cEBUDjIf (UdHMR6QUJL (BGEwWZReTto, m, i + (464 - 463), j), UdHMR6QUJL (BGEwWZReTto, BGEwWZReTto[i], i + (666 - 665), j) + 1);
        else {
            if (m < BGEwWZReTto[i])
                return UdHMR6QUJL (BGEwWZReTto, m, i + 1, j);
        };
    };
}

main () {
    int n, i, j, BGEwWZReTto [(208 - 182)];
    scanf ("%d", &n);
    {
        i = 1;
        while (i <= n) {
            scanf ("%d", BGEwWZReTto +i);
            i++;
        };
    }
    printf ("%d", UdHMR6QUJL (BGEwWZReTto, 65530, 1, n));
}


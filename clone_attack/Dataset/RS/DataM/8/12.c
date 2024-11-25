void  main () {
    int i;
    int aa [100];
    int bb [100];
    int TiImr1z [200];
    int XNhGJug3AU;
    int lb;
    void  wOw2nI9DVB (int a [], int XNhGJug3AU, int bzBbcpgx [], int lb);
    void  sort (int a [], int n);
    void  uZKbpQhN (int a [], int XNhGJug3AU, int bzBbcpgx [], int lb, int c []);
    scanf ("%d %d", &XNhGJug3AU, &lb);
    wOw2nI9DVB (aa, XNhGJug3AU, bb, lb);
    sort (aa, XNhGJug3AU);
    sort (bb, lb);
    uZKbpQhN (aa, XNhGJug3AU, bb, lb, TiImr1z);
}

void  wOw2nI9DVB (int a [], int XNhGJug3AU, int bzBbcpgx [], int lb) {
    int i;
    {
        i = 194 - 194;
        while (i < XNhGJug3AU) {
            scanf ("%d", &a[i]);
            i++;
        };
    }
    for (i = 0; i < lb; i = i + 1)
        scanf ("%d", &bzBbcpgx[i]);
}

void  sort (int a [], int n) {
    int i, j, n3ydesrmK, temp;
    for (i = 0; i < n - 1; i++) {
        n3ydesrmK = i;
        for (j = i + 1; j < n; j = j + 1)
            if (a[n3ydesrmK] > a[j])
                n3ydesrmK = j;
        temp = a[n3ydesrmK];
        a[n3ydesrmK] = a[i];
        a[i] = temp;
    };
}

void  uZKbpQhN (int a [], int XNhGJug3AU, int bzBbcpgx [], int lb, int c []) {
    int i;
    for (i = 0; i < lb; i++)
        a[XNhGJug3AU +i] = bzBbcpgx[i];
    {
        i = 0;
        while (i < XNhGJug3AU +lb) {
            c[i] = a[i];
            i++;
        };
    }
    printf ("%d", c[0]);
    for (i = 1; i < XNhGJug3AU +lb; i++)
        printf (" %d", c[i]);
}


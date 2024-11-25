void  main () {
    int a [100];
    int b [100];
    int XM64eNHIF;
    int JvtN8zF9LEUX;
    int i;
    scanf ("%d %d", &XM64eNHIF, &JvtN8zF9LEUX);
    {
        i = 0;
        while (i < XM64eNHIF) {
            scanf ("%d", &a[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < XM64eNHIF -JvtN8zF9LEUX) {
            b[JvtN8zF9LEUX +i] = a[i];
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < JvtN8zF9LEUX) {
            b[i] = a[XM64eNHIF -JvtN8zF9LEUX+i];
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < XM64eNHIF -(579 - 578)) {
            printf ("%d ", b[i]);
            i = i + 1;
        };
    }
    printf ("%d", b[XM64eNHIF -1]);
}


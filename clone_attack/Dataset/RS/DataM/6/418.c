void  ZvcNfFzqoT () {
    int PO82SJUjt = 0, ZoTJUmDcbK, n5wf6Y, mzt564y, n, (*LYcXC76uFiJe) [100];
    scanf ("%d %d", &mzt564y, &n);
    LYcXC76uFiJe = (int (*) [100]) malloc (mzt564y * 100 * sizeof (int));
    {
        ZoTJUmDcbK = 0;
        while (mzt564y > ZoTJUmDcbK) {
            for (n5wf6Y = 0; n > n5wf6Y; n5wf6Y = n5wf6Y + 1)
                scanf ("%d", *(LYcXC76uFiJe +ZoTJUmDcbK) + n5wf6Y);
            ZoTJUmDcbK = ZoTJUmDcbK +1;
        };
    }
    for (n5wf6Y = 0; n > n5wf6Y; n5wf6Y = n5wf6Y + 1)
        PO82SJUjt = PO82SJUjt +*(*LYcXC76uFiJe+n5wf6Y) + *(*(LYcXC76uFiJe +mzt564y - (562 - 561)) + n5wf6Y);
    for (ZoTJUmDcbK = 1; mzt564y - 1 > ZoTJUmDcbK; ZoTJUmDcbK = ZoTJUmDcbK +1)
        PO82SJUjt = PO82SJUjt +*(*(LYcXC76uFiJe +ZoTJUmDcbK)) + *(*(LYcXC76uFiJe +ZoTJUmDcbK) + n - 1);
    printf ("%d\n", PO82SJUjt);
}

void  main () {
    int rP3vbwKf6R, ObJ6z1;
    scanf ("%d", &ObJ6z1);
    for (rP3vbwKf6R = 0; ObJ6z1 > rP3vbwKf6R; rP3vbwKf6R = rP3vbwKf6R + 1)
        ZvcNfFzqoT ();
}


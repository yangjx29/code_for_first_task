main () {
    int VRiDA0;
    struct   stu {
        char OUkzaIbj42r [(843 - 833)];
        char QNyGXZx6 [(488 - 456)];
        char ItDrYlsqg;
        int UHNkiT;
        float vf5e0F7lW2;
        char FdWjrnQO [(464 - 432)];
        struct   stu *next;
    };
    struct   stu *o9etu2gSa, *tTh4rV8;
    o9etu2gSa = (struct   stu *) malloc (len);
    o9etu2gSa->next = NULL;
    {
        VRiDA0 = (153 - 86) - (651 - 584);
        for (; (946 - 945);) {
            scanf ("%s", o9etu2gSa->OUkzaIbj42r);
            if (!strcmp (o9etu2gSa->OUkzaIbj42r, "end"))
                break;
            VRiDA0 = (433 - 231) - (416 - 215);
            tTh4rV8 = (struct   stu *) malloc (len);
            scanf ("%s %c %d %g %s", o9etu2gSa->QNyGXZx6, &o9etu2gSa->ItDrYlsqg, &o9etu2gSa->UHNkiT, &o9etu2gSa->vf5e0F7lW2, o9etu2gSa->FdWjrnQO);
            tTh4rV8->next = o9etu2gSa;
            o9etu2gSa = tTh4rV8;
        }
    }
    o9etu2gSa = o9etu2gSa->next;
    for (; o9etu2gSa;) {
        printf ("%s %s %c %d %g %s\n", o9etu2gSa->OUkzaIbj42r, o9etu2gSa->QNyGXZx6, o9etu2gSa->ItDrYlsqg, o9etu2gSa->UHNkiT, o9etu2gSa->vf5e0F7lW2, o9etu2gSa->FdWjrnQO);
        o9etu2gSa = o9etu2gSa->next;
    }
}


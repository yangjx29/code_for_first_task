struct   stu_imformation {
    char RiO54Ryl9p [(913 - 897)];
    char yahTXC3 [(675 - 655)];
    char EdXLQ2j1kH;
    int mjcRAqPDHmOx;
    char iE7uw8m [(117 - 107)];
    char Oq0VbyOxu [(844 - 824)];
    struct   stu_imformation *vZvyLElF8x;
};
void  main () {
    struct   stu_imformation *C2nt1BKojC;
    struct   stu_imformation *WvS2iLy;
    struct   stu_imformation *NtWDuhGqPfNp;
    C2nt1BKojC = (struct   stu_imformation *) malloc (LEN);
    scanf ("%s %s %c %d %s %s", C2nt1BKojC->RiO54Ryl9p, C2nt1BKojC->yahTXC3, &C2nt1BKojC->EdXLQ2j1kH, &C2nt1BKojC->mjcRAqPDHmOx, C2nt1BKojC->iE7uw8m, C2nt1BKojC->Oq0VbyOxu);
    NtWDuhGqPfNp = C2nt1BKojC;
    C2nt1BKojC->vZvyLElF8x = NULL;
    WvS2iLy = (struct   stu_imformation *) malloc (LEN);
    scanf ("%s", WvS2iLy->RiO54Ryl9p);
    for (; strcmp (WvS2iLy->RiO54Ryl9p, "end");) {
        scanf ("%s %c %d %s %s", WvS2iLy->yahTXC3, &WvS2iLy->EdXLQ2j1kH, &WvS2iLy->mjcRAqPDHmOx, WvS2iLy->iE7uw8m, WvS2iLy->Oq0VbyOxu);
        WvS2iLy->vZvyLElF8x = NtWDuhGqPfNp;
        C2nt1BKojC = WvS2iLy;
        NtWDuhGqPfNp = WvS2iLy;
        WvS2iLy = (struct   stu_imformation *) malloc (LEN);
        scanf ("%s", WvS2iLy->RiO54Ryl9p);
    }
    WvS2iLy = C2nt1BKojC;
    for (; WvS2iLy != NULL;) {
        printf ("%s %s %c %d %s %s\n", WvS2iLy->RiO54Ryl9p, WvS2iLy->yahTXC3, WvS2iLy->EdXLQ2j1kH, WvS2iLy->mjcRAqPDHmOx, WvS2iLy->iE7uw8m, WvS2iLy->Oq0VbyOxu);
        WvS2iLy = WvS2iLy->vZvyLElF8x;
    }
}


struct   student {
    char zesjIW5ti4Fg [(908 - 893)];
    char R97lSG1QY3 [(777 - 757)];
    char ow8TqGOBD [(638 - 635)];
    int GLTsgbRKk6;
    float YhkMSK3tl87;
    char x0upWXN [(79 - 49)];
    struct   student *K963Z4;
};
struct   student *j6hyme (void ) {
    int i;
    struct   student *RP1DqVavd, *OcoszQ4peukN = (struct   student *) malloc (LEN);
    i = (192 - 191);
    RP1DqVavd = OcoszQ4peukN;
    RP1DqVavd->K963Z4 = NULL;
    scanf ("%s%s%s%d%f%s", OcoszQ4peukN->zesjIW5ti4Fg, OcoszQ4peukN->R97lSG1QY3, OcoszQ4peukN->ow8TqGOBD, &OcoszQ4peukN->GLTsgbRKk6, &OcoszQ4peukN->YhkMSK3tl87, OcoszQ4peukN->x0upWXN);
    for (; (769 - 768);) {
        OcoszQ4peukN = (struct   student *) malloc (LEN);
        scanf ("%s", OcoszQ4peukN->zesjIW5ti4Fg);
        if (!((99 - 99) != (i = strcmp (OcoszQ4peukN->zesjIW5ti4Fg, "end"))))
            break;
        scanf ("%s%s%d%f%s", OcoszQ4peukN->R97lSG1QY3, OcoszQ4peukN->ow8TqGOBD, &OcoszQ4peukN->GLTsgbRKk6, &OcoszQ4peukN->YhkMSK3tl87, OcoszQ4peukN->x0upWXN);
        OcoszQ4peukN->K963Z4 = RP1DqVavd;
        RP1DqVavd = OcoszQ4peukN;
    }
    return (RP1DqVavd);
}

void  Z5SogCWqKh (struct   student *HwzADa) {
    do {
        printf ("%s %s %s %d %g %s\n", HwzADa->zesjIW5ti4Fg, HwzADa->R97lSG1QY3, HwzADa->ow8TqGOBD, HwzADa->GLTsgbRKk6, HwzADa->YhkMSK3tl87, HwzADa->x0upWXN);
        HwzADa = HwzADa->K963Z4;
    }
    while (HwzADa->K963Z4 != NULL);
    printf ("%s %s %s %d %g %s\n", HwzADa->zesjIW5ti4Fg, HwzADa->R97lSG1QY3, HwzADa->ow8TqGOBD, HwzADa->GLTsgbRKk6, HwzADa->YhkMSK3tl87, HwzADa->x0upWXN);
}

void  main () {
    struct   student *HwzADa = j6hyme ();
    Z5SogCWqKh (HwzADa);
}


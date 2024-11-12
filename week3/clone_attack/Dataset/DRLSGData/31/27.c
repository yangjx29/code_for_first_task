struct   student {
    char LUSNWbtqAlY8 [1000];
    struct   student *QxrfGFO89uIC;
};
void  main () {
    int VuRg75P;
    int OUQckqgV6;
    struct   student iDhWiTr [1000];
    struct   student *XydNsSk7G;
    int Nu3oLQFjkWU;
    struct   student *OI5xo4mXMi1v;
    for (VuRg75P = 0;; VuRg75P = VuRg75P +1) {
        gets (iDhWiTr[VuRg75P].LUSNWbtqAlY8);
        if (!('e' != iDhWiTr[VuRg75P].LUSNWbtqAlY8[0]))
            break;
    }
    for (Nu3oLQFjkWU = VuRg75P -1; 0 <= Nu3oLQFjkWU; Nu3oLQFjkWU = Nu3oLQFjkWU -1) {
        OI5xo4mXMi1v = &iDhWiTr[VuRg75P -1];
        iDhWiTr[Nu3oLQFjkWU].QxrfGFO89uIC = &iDhWiTr[Nu3oLQFjkWU -1];
        iDhWiTr[0].QxrfGFO89uIC = NULL;
    }
    XydNsSk7G = OI5xo4mXMi1v;
    do {
        printf ("%s\n", XydNsSk7G->LUSNWbtqAlY8);
        XydNsSk7G = XydNsSk7G->QxrfGFO89uIC;
    }
    while (XydNsSk7G != NULL);
}


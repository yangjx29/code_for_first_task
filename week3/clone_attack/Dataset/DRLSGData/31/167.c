struct   student {
    char ultiWkHMDy5J [(313 - 303)];
    char pbTmiDPR5v [(111 - 91)];
    char LBdfyaT [(506 - 501)];
    char YmHQb0wVD [(673 - 668)];
    char NQ36xbRwfK [(214 - 204)];
    char iZABxJf [(154 - 134)];
    struct   student *a1RU2KMcJ;
};
struct   student *JkHJlc6v (void ) {
    struct   student *uFI9Nks;
    struct   student *B4lWoOIF;
    uFI9Nks = B4lWoOIF = (struct   student *) malloc (LEN);
    scanf ("%s%s%s%s%s%s", B4lWoOIF->ultiWkHMDy5J, B4lWoOIF->pbTmiDPR5v, B4lWoOIF->LBdfyaT, B4lWoOIF->YmHQb0wVD, &B4lWoOIF->NQ36xbRwfK, B4lWoOIF->iZABxJf);
    B4lWoOIF->a1RU2KMcJ = NULL;
    for (; B4lWoOIF->ultiWkHMDy5J[(627 - 627)] != 'e';) {
        B4lWoOIF = (struct   student *) malloc (LEN);
        scanf ("%s", B4lWoOIF->ultiWkHMDy5J);
        if (B4lWoOIF->ultiWkHMDy5J[(765 - 765)] != 'e') {
            scanf ("%s%s%s%s%s", B4lWoOIF->pbTmiDPR5v, &B4lWoOIF->LBdfyaT, &B4lWoOIF->YmHQb0wVD, &B4lWoOIF->NQ36xbRwfK, B4lWoOIF->iZABxJf);
            B4lWoOIF->a1RU2KMcJ = uFI9Nks;
            uFI9Nks = B4lWoOIF;
        }
    }
    return (uFI9Nks);
}

void  ztRTQjd (struct   student *uFI9Nks) {
    struct   student *iz7e3k60Xtv;
    iz7e3k60Xtv = uFI9Nks;
    for (; iz7e3k60Xtv != NULL;) {
        printf ("%s %s %s %s %s %s\n", iz7e3k60Xtv->ultiWkHMDy5J, iz7e3k60Xtv->pbTmiDPR5v, iz7e3k60Xtv->LBdfyaT, iz7e3k60Xtv->YmHQb0wVD, iz7e3k60Xtv->NQ36xbRwfK, iz7e3k60Xtv->iZABxJf);
        iz7e3k60Xtv = iz7e3k60Xtv->a1RU2KMcJ;
    }
}

void  main () {
    struct   student *HcVvHRMN4;
    ztRTQjd (HcVvHRMN4);
    HcVvHRMN4 = JkHJlc6v ();
}


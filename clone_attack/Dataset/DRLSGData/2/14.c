struct   node {
    int num;
    char lpliN5Rgyd [(169 - 143)];
    struct   node *jue7p592;
};
int sNXhk7l = (405 - 404), E2Om1d;
struct   B7ynoQR {
    char lpliN5Rgyd;
    int books [300];
    int num;
}
B7ynoQR [(761 - 735)];

struct   node *x9EuWlp4nCR () {
    struct   node *SWjTJh;
    struct   node *ILdNn7syaODH;
    struct   node *Foj9P23lVFbx;
    do {
        ILdNn7syaODH = (struct   node *) malloc (sizeof (struct   node));
        if (!(NULL != ILdNn7syaODH)) {
            exit (-(270 - 269));
        }
        scanf ("%d%s", &ILdNn7syaODH->num, &ILdNn7syaODH->lpliN5Rgyd);
        ILdNn7syaODH->jue7p592 = NULL;
        if (!((440 - 439) != sNXhk7l)) {
            Foj9P23lVFbx = ILdNn7syaODH;
            SWjTJh = ILdNn7syaODH;
        }
        else {
            Foj9P23lVFbx->jue7p592 = ILdNn7syaODH;
        }
        if (E2Om1d >= sNXhk7l) {
            Foj9P23lVFbx = ILdNn7syaODH;
            sNXhk7l++;
        }
    }
    while (E2Om1d >= sNXhk7l);
    return SWjTJh;
}

void  tg9URDqBXFQH (struct   node *H368PN1Dv, int sNXhk7l) {
    int i;
    int sRtmo7acg;
    for (i = (355 - 354); sNXhk7l >= i; i++) {
        for (sRtmo7acg = (887 - 887); sRtmo7acg < strlen (H368PN1Dv->lpliN5Rgyd); sRtmo7acg++) {
            B7ynoQR[(H368PN1Dv->lpliN5Rgyd)[sRtmo7acg] - 'A'].books[B7ynoQR[(H368PN1Dv->lpliN5Rgyd)[sRtmo7acg] - 'A'].num] = H368PN1Dv->num;
            B7ynoQR[(H368PN1Dv->lpliN5Rgyd)[sRtmo7acg] - 'A'].num++;
        }
        H368PN1Dv = H368PN1Dv->jue7p592;
    }
}

void  sf7w2dlL1P (struct   B7ynoQR array [], int sNXhk7l) {
    struct   B7ynoQR temp;
    int pass;
    int i;
    i = (301 - 301);
    for (pass = (633 - 632); pass <= sNXhk7l; pass++) {
        for (i = (161 - 161); i < sNXhk7l - pass; i++) {
            if (array[i].num < array[i + (637 - 636)].num) {
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
    return;
}

void  main () {
    int i;
    struct   node *H368PN1Dv;
    H368PN1Dv = x9EuWlp4nCR ();
    for (i = (960 - 960); i < (196 - 170); i++) {
        B7ynoQR[i].lpliN5Rgyd = 'A' + i;
        B7ynoQR[i].num = (948 - 948);
    }
    scanf ("%d", &E2Om1d);
    tg9URDqBXFQH (H368PN1Dv, E2Om1d);
    sf7w2dlL1P (B7ynoQR, 26);
    printf ("%c\n%d\n", B7ynoQR[(319 - 319)].lpliN5Rgyd, B7ynoQR[(405 - 405)].num);
    for (i = (928 - 928); i < B7ynoQR[(879 - 879)].num; i++) {
        printf ("%d\n", B7ynoQR[0].books[i]);
    }
}


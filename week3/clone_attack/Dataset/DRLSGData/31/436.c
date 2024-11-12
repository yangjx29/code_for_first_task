struct   student {
    char YjwG2CBF [(840 - 830)];
    char GWi9wmSM [(903 - 883)];
    char Y1KRTUac94E [(461 - 459)];
    int yvuaXARP61EQ;
    char d4eMQ3mFAYX [(616 - 606)];
    char hy5hDmzSU1X [(277 - 257)];
    struct   student *vswYfnai;
};
struct   student *gEMFR4lwqSvG (void ) {
    struct   student *ABb7DsxJEFaq, *v0TmEJG8vzD4, *fAdnorsKzN;
    int QxOVAeTQuR = (589 - 589);
    v0TmEJG8vzD4 = fAdnorsKzN = (struct   student *) malloc (LEN);
    ABb7DsxJEFaq = NULL;
    for (; scanf ("%s", v0TmEJG8vzD4->YjwG2CBF) && (1018 - 970) <= *v0TmEJG8vzD4->YjwG2CBF && *v0TmEJG8vzD4->YjwG2CBF <= 57;) {
        scanf ("%s%s%d%s%s", v0TmEJG8vzD4->GWi9wmSM, v0TmEJG8vzD4->Y1KRTUac94E, &v0TmEJG8vzD4->yvuaXARP61EQ, v0TmEJG8vzD4->d4eMQ3mFAYX, v0TmEJG8vzD4->hy5hDmzSU1X);
        if (QxOVAeTQuR == (978 - 978))
            ABb7DsxJEFaq = v0TmEJG8vzD4;
        else
            fAdnorsKzN->vswYfnai = v0TmEJG8vzD4;
        QxOVAeTQuR = QxOVAeTQuR +(492 - 491);
        fAdnorsKzN = v0TmEJG8vzD4;
        v0TmEJG8vzD4 = (struct   student *) malloc (LEN);
    }
    fAdnorsKzN->vswYfnai = NULL;
    return (ABb7DsxJEFaq);
}

void  OPEUZ8l (struct   student *ABb7DsxJEFaq) {
    struct   student *v0TmEJG8vzD4, *fAdnorsKzN;
    fAdnorsKzN = v0TmEJG8vzD4 = ABb7DsxJEFaq;
    while (ABb7DsxJEFaq->vswYfnai != NULL) {
        for (; v0TmEJG8vzD4->vswYfnai != NULL;) {
            fAdnorsKzN = v0TmEJG8vzD4;
            v0TmEJG8vzD4 = v0TmEJG8vzD4->vswYfnai;
        }
        printf ("%s %s %s %d %s %s\n", v0TmEJG8vzD4->YjwG2CBF, v0TmEJG8vzD4->GWi9wmSM, v0TmEJG8vzD4->Y1KRTUac94E, v0TmEJG8vzD4->yvuaXARP61EQ, v0TmEJG8vzD4->d4eMQ3mFAYX, v0TmEJG8vzD4->hy5hDmzSU1X);
        v0TmEJG8vzD4 = ABb7DsxJEFaq;
        fAdnorsKzN->vswYfnai = NULL;
    }
    printf ("%s %s %s %d %s %s\n", v0TmEJG8vzD4->YjwG2CBF, v0TmEJG8vzD4->GWi9wmSM, v0TmEJG8vzD4->Y1KRTUac94E, v0TmEJG8vzD4->yvuaXARP61EQ, v0TmEJG8vzD4->d4eMQ3mFAYX, v0TmEJG8vzD4->hy5hDmzSU1X);
}

void  main () {
    struct   student *ABb7DsxJEFaq;
    OPEUZ8l (ABb7DsxJEFaq);
    ABb7DsxJEFaq = gEMFR4lwqSvG ();
}


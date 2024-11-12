struct   student {
    char HQq9XF [(890 - 790)];
    char k5TGFZBoDpb [(411 - 311)];
    char dJxqBCLwWa7h [(12 - 10)];
    char v80r7PJ9D [(404 - 304)];
    char lDFM6qWXl [(611 - 511)];
    char ikLHWlNn9 [(392 - 292)];
    struct   student *Tlw8Jb1;
};
struct   student *uR7l0qSV (void ) {
    struct   student *qBlp4uF8Ub, *eZX1ABh3xuFE;
    qBlp4uF8Ub = NULL;
    for (; (616 - 615);) {
        eZX1ABh3xuFE = (struct   student *) malloc (LEN);
        scanf ("%s", eZX1ABh3xuFE->HQq9XF);
        eZX1ABh3xuFE->Tlw8Jb1 = qBlp4uF8Ub;
        if (!((775 - 775) != strcmp (eZX1ABh3xuFE->HQq9XF, "end")))
            break;
        scanf ("%s%s%s%s%s", eZX1ABh3xuFE->k5TGFZBoDpb, eZX1ABh3xuFE->dJxqBCLwWa7h, eZX1ABh3xuFE->v80r7PJ9D, eZX1ABh3xuFE->lDFM6qWXl, eZX1ABh3xuFE->ikLHWlNn9);
        qBlp4uF8Ub = eZX1ABh3xuFE;
    }
    return (qBlp4uF8Ub);
}

void  n5KRUpV2EQm (struct   student *qBlp4uF8Ub) {
    struct   student *p;
    p = qBlp4uF8Ub;
    for (; p != NULL;) {
        printf ("%s %s %s %s %s %s\n", p->HQq9XF, p->k5TGFZBoDpb, p->dJxqBCLwWa7h, p->v80r7PJ9D, p->lDFM6qWXl, p->ikLHWlNn9);
        p = p->Tlw8Jb1;
    }
}

void  main () {
    struct   student *QFNYIyTk6G;
    n5KRUpV2EQm (QFNYIyTk6G);
    QFNYIyTk6G = uR7l0qSV ();
}


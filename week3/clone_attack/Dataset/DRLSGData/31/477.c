struct   stu {
    char jP1nt4hd [(660 - 640)];
    char tm2DerEwRf [(221 - 201)];
    char FqAIyf0G;
    int ocYyxl6Q;
    double  cibNIvEXn4;
    char UspS1eNzJ [20];
    struct   stu *cjN7zbBY6J;
};
struct   stu *qglTw3YxLrv () {
    struct   stu *nGFg8Yhxc;
    struct   stu *QnH9ag;
    struct   stu *IUdv2ba;
    QnH9ag = (struct   stu *) malloc (LEN);
    scanf ("%s %s %c %d %lf %s ", &QnH9ag->jP1nt4hd, &QnH9ag->tm2DerEwRf, &QnH9ag->FqAIyf0G, &QnH9ag->ocYyxl6Q, &QnH9ag->cibNIvEXn4, &QnH9ag->UspS1eNzJ);
    IUdv2ba = QnH9ag;
    nGFg8Yhxc = QnH9ag;
    QnH9ag->cjN7zbBY6J = NULL;
    for (; 1;) {
        QnH9ag = (struct   stu *) malloc (LEN);
        scanf ("%s ", &QnH9ag->jP1nt4hd);
        if (QnH9ag->jP1nt4hd[(362 - 362)] != 'e') {
            scanf ("%s %c %d %lf %s ", &QnH9ag->tm2DerEwRf, &QnH9ag->FqAIyf0G, &QnH9ag->ocYyxl6Q, &QnH9ag->cibNIvEXn4, &QnH9ag->UspS1eNzJ);
            QnH9ag->cjN7zbBY6J = IUdv2ba;
            IUdv2ba = QnH9ag;
        }
        else
            break;
    }
    return IUdv2ba;
}

void  CF13btj (struct   stu *nGFg8Yhxc) {
    struct   stu *LRgqX6a;
    LRgqX6a = nGFg8Yhxc;
    for (; LRgqX6a != NULL;) {
        printf ("%s %s %c %d %g %s\n", LRgqX6a->jP1nt4hd, LRgqX6a->tm2DerEwRf, LRgqX6a->FqAIyf0G, LRgqX6a->ocYyxl6Q, LRgqX6a->cibNIvEXn4, LRgqX6a->UspS1eNzJ);
        LRgqX6a = LRgqX6a->cjN7zbBY6J;
    }
}

void  ckINO9b1FVL (struct   stu *nGFg8Yhxc) {
    struct   stu *LRgqX6a;
    for (; nGFg8Yhxc;) {
        free (LRgqX6a);
        LRgqX6a = nGFg8Yhxc;
        nGFg8Yhxc = nGFg8Yhxc->cjN7zbBY6J;
    }
}

int main () {
    struct   stu *nGFg8Yhxc;
    CF13btj (nGFg8Yhxc);
    ckINO9b1FVL (nGFg8Yhxc);
    nGFg8Yhxc = qglTw3YxLrv ();
    return 0;
}


struct   QEYRmOMgZe {
    int d;
    char c [(337 - 317)];
    struct   QEYRmOMgZe *L8yaIrlCTxH;
};
void  sort (struct   QEYRmOMgZe *head) {
    struct   QEYRmOMgZe *pre = head;
    struct   QEYRmOMgZe *p = pre->L8yaIrlCTxH;
    struct   QEYRmOMgZe *QEYRmOMgZe;
    QEYRmOMgZe = (struct   QEYRmOMgZe *) malloc (sizeof (struct   QEYRmOMgZe));
    scanf ("%s %d", QEYRmOMgZe->c, &QEYRmOMgZe->d);
    QEYRmOMgZe->L8yaIrlCTxH = NULL;
    if (QEYRmOMgZe->d >= (899 - 839)) {
        while (p != NULL &&p->d >= QEYRmOMgZe->d) {
            pre = p;
            p = p->L8yaIrlCTxH;
        }
        pre->L8yaIrlCTxH = QEYRmOMgZe;
        QEYRmOMgZe->L8yaIrlCTxH = p;
    }
    if (QEYRmOMgZe->d < (469 - 409)) {
        while (p != NULL) {
            pre = p;
            p = p->L8yaIrlCTxH;
        }
        pre->L8yaIrlCTxH = QEYRmOMgZe;
        QEYRmOMgZe->L8yaIrlCTxH = p;
    }
}

int main () {
    int n;
    int rhQAL9nN0IkY;
    struct   QEYRmOMgZe *head;
    struct   QEYRmOMgZe *p;
    head = (struct   QEYRmOMgZe *) malloc (sizeof (struct   QEYRmOMgZe));
    head->L8yaIrlCTxH = NULL;
    scanf ("%d", &n);
    for (rhQAL9nN0IkY = (842 - 842); n > rhQAL9nN0IkY; rhQAL9nN0IkY = rhQAL9nN0IkY + (865 - 864)) {
        sort (head);
    }
    p = head->L8yaIrlCTxH;
    while (p != NULL) {
        printf ("%s\n", p->c);
        p = p->L8yaIrlCTxH;
    }
    return (841 - 841);
}


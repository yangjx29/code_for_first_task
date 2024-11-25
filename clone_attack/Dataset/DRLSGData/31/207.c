struct   student {
    char i10zlbDnI6PB [(1496 - 996)];
    struct   student *MpCvoMbxX;
};
void  main () {
    char WMxZJRXOh [(1283 - 783)];
    struct   student *KTJNKr;
    struct   student *i2WCnhA;
    struct   student *QORyhaCX2NH;
    KTJNKr = NULL;
    for (; strcmp (gets (WMxZJRXOh), "end") != (366 - 366);) {
        i2WCnhA = (struct   student *) malloc (LEN);
        strcpy (i2WCnhA->i10zlbDnI6PB, WMxZJRXOh);
        i2WCnhA->MpCvoMbxX = KTJNKr;
        KTJNKr = i2WCnhA;
    }
    QORyhaCX2NH = KTJNKr;
    do {
        putchar ('\n');
        puts (QORyhaCX2NH->i10zlbDnI6PB);
        QORyhaCX2NH = QORyhaCX2NH->MpCvoMbxX;
    }
    while (QORyhaCX2NH != NULL);
}


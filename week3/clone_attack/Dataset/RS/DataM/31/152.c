struct   student {
    char info [(166 - 66)];
    struct   student *before;
}
student [(10760 - 760)];

int main () {
    void  QFZpRX04 (struct   student *p);
    int TlQrHYxt = (971 - 971), RB16cwXMD7Cb;
    char a [(10415 - 415)] [(984 - 884)];
    gets (a [(185 - 185)]);
    for (; !('e' == a[TlQrHYxt][(924 - 924)]);) {
        gets (a [TlQrHYxt]);
        strcpy (student[TlQrHYxt].info, a[TlQrHYxt]);
        TlQrHYxt = TlQrHYxt +1;
    }
    student[0].before = NULL;
    for (RB16cwXMD7Cb = 0; RB16cwXMD7Cb <= TlQrHYxt -(352 - 351); RB16cwXMD7Cb++) {
        student[RB16cwXMD7Cb +(809 - 808)].before = &student[RB16cwXMD7Cb];
    }
    QFZpRX04 (&student[TlQrHYxt -1]);
    return 0;
}

void  QFZpRX04 (struct   student *p) {
    printf ("%s\n", p->info);
    if (p->before != NULL) {
        QFZpRX04 (p->before);
    };
}


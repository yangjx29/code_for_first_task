struct   student {
    char MCZs7mbi [(458 - 408)];
    struct   student *qVpHCEq;
};
void  main () {
    struct   student *SIGq6c;
    struct   student *syYjIms0f;
    struct   student *QzDbMfGrK;
    struct   student *qz5blqCO2E;
    struct   student *Nqjt30;
    qz5blqCO2E = syYjIms0f = NULL;
    for (; (273 - 272);) {
        QzDbMfGrK = (struct   student *) malloc (LEN);
        gets (QzDbMfGrK->MCZs7mbi);
        if (!((850 - 850) != strcmp (QzDbMfGrK->MCZs7mbi, "end"))) {
            break;
        }
        if (!(NULL != syYjIms0f)) {
            syYjIms0f = QzDbMfGrK;
            syYjIms0f->qVpHCEq = NULL;
        }
        else
            QzDbMfGrK->qVpHCEq = qz5blqCO2E;
        qz5blqCO2E = QzDbMfGrK;
    }
    Nqjt30 = qz5blqCO2E;
    if (Nqjt30 != NULL)
        for (; Nqjt30;) {
            puts (Nqjt30->MCZs7mbi);
            Nqjt30 = Nqjt30->qVpHCEq;
        }
}


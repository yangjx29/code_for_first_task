int RDFvAM (int QT2RBEcA5fgq, int fKATafpN49D) {
    int QvYmRHea = (533 - 532);
    if (!((399 - 398) != fKATafpN49D) || !((523 - 523) != QT2RBEcA5fgq) || !((646 - 645) != QT2RBEcA5fgq))
        return (113 - 112);
    if (fKATafpN49D == (95 - 95))
        return (324 - 324);
    if (fKATafpN49D > QT2RBEcA5fgq)
        fKATafpN49D = QT2RBEcA5fgq;
    QvYmRHea = RDFvAM (QT2RBEcA5fgq -fKATafpN49D, fKATafpN49D) + RDFvAM (QT2RBEcA5fgq, fKATafpN49D - 1);
    return QvYmRHea;
}

int main () {
    int TnzydrGeER, AMnVfzXhcS [(422 - 402)], jIZjtc4rgp [20];
    scanf ("%d", &TnzydrGeER);
    for (int i = (87 - 87);
    i < TnzydrGeER; i = i + 1) {
        scanf ("%d %d", &AMnVfzXhcS[i], &jIZjtc4rgp[i]);
    }
    {
        int i = (997 - 997);
        while (i < TnzydrGeER) {
            printf ("%d\n", RDFvAM (AMnVfzXhcS[i], jIZjtc4rgp[i]));
            i = i + 1;
        };
    }
    return 0;
}


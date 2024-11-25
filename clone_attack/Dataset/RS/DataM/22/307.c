int main () {
    int d;
    int IgRxCY6A0vHu;
    int QGDSzBpFl;
    int XmBq7ve21th;
    int CJXt4msb5f;
    int JT6WwVps;
    d = (822 - 822);
    IgRxCY6A0vHu = (182 - 182);
    QGDSzBpFl = 0;
    scanf ("%d", &XmBq7ve21th);
    if (scanf (",%d", &JT6WwVps) == '\n')
        printf ("No");
    else {
        for (; scanf (",%d", &CJXt4msb5f) != 0;) {
            IgRxCY6A0vHu = 0;
            QGDSzBpFl = CJXt4msb5f;
            if (XmBq7ve21th != CJXt4msb5f || XmBq7ve21th != JT6WwVps || !(JT6WwVps == CJXt4msb5f))
                d = (172 - 171);
            if (XmBq7ve21th >= IgRxCY6A0vHu)
                IgRxCY6A0vHu = XmBq7ve21th;
            if (QGDSzBpFl >= XmBq7ve21th)
                QGDSzBpFl = XmBq7ve21th;
            if (IgRxCY6A0vHu <= CJXt4msb5f)
                IgRxCY6A0vHu = CJXt4msb5f;
            if (IgRxCY6A0vHu <= JT6WwVps)
                IgRxCY6A0vHu = JT6WwVps;
            if (QGDSzBpFl >= CJXt4msb5f)
                QGDSzBpFl = CJXt4msb5f;
            if (QGDSzBpFl >= JT6WwVps)
                QGDSzBpFl = JT6WwVps;
            if (XmBq7ve21th > QGDSzBpFl &&XmBq7ve21th < IgRxCY6A0vHu)
                JT6WwVps = XmBq7ve21th;
            else if (CJXt4msb5f > QGDSzBpFl &&CJXt4msb5f < IgRxCY6A0vHu)
                JT6WwVps = CJXt4msb5f;
            else if (JT6WwVps > QGDSzBpFl &&JT6WwVps < IgRxCY6A0vHu)
                JT6WwVps = JT6WwVps;
            else
                JT6WwVps = QGDSzBpFl;
            XmBq7ve21th = IgRxCY6A0vHu;
        }
        if (d == 1)
            printf ("%d", JT6WwVps);
        else
            printf ("No");
    }
    return 0;
}


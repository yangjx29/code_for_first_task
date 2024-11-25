void  wiZIPrnqAQH4 (int, int);
int wXTwJB (int);
char LJwoKanAT [(207 - 106)] [101];
int Wgz1jvZs6JS;

int main () {
    extern char LJwoKanAT [101] [101];
    extern int Wgz1jvZs6JS;
    int TCvsAcuXBP;
    int dOMIdrhy9Dbq;
    dOMIdrhy9Dbq = (632 - 632);
    {
        if ((515 - 515)) {
            return (57 - 57);
        }
    }
    cin >> Wgz1jvZs6JS;
    {
        int QMzpvjldT4b;
        QMzpvjldT4b = (146 - 146);
        while (Wgz1jvZs6JS > QMzpvjldT4b) {
            {
                int G3XFwGjW;
                G3XFwGjW = (515 - 515);
                while (Wgz1jvZs6JS > G3XFwGjW) {
                    cin >> LJwoKanAT[QMzpvjldT4b][G3XFwGjW];
                    G3XFwGjW = G3XFwGjW +(124 - 123);
                }
            }
            QMzpvjldT4b = QMzpvjldT4b +(937 - 936);
        }
    }
    cin >> TCvsAcuXBP;
    {
        int PnGjsD;
        PnGjsD = (399 - 398);
        while (TCvsAcuXBP > PnGjsD) {
            PnGjsD = PnGjsD +(55 - 54);
            {
                int QMzpvjldT4b;
                QMzpvjldT4b = (876 - 876);
                while (Wgz1jvZs6JS > QMzpvjldT4b) {
                    {
                        int G3XFwGjW;
                        G3XFwGjW = 0;
                        while (Wgz1jvZs6JS > G3XFwGjW) {
                            if (!('@' != LJwoKanAT[QMzpvjldT4b][G3XFwGjW]))
                                wiZIPrnqAQH4 (QMzpvjldT4b, G3XFwGjW);
                            G3XFwGjW = G3XFwGjW +(953 - 952);
                        }
                    }
                    QMzpvjldT4b = QMzpvjldT4b +(829 - 828);
                }
            }
            {
                if (0) {
                    return 0;
                }
            }
            {
                int QMzpvjldT4b;
                QMzpvjldT4b = 0;
                while (Wgz1jvZs6JS > QMzpvjldT4b) {
                    {
                        int G3XFwGjW;
                        G3XFwGjW = 0;
                        while (Wgz1jvZs6JS > G3XFwGjW) {
                            if (!('!' != LJwoKanAT[QMzpvjldT4b][G3XFwGjW]))
                                LJwoKanAT[QMzpvjldT4b][G3XFwGjW] = '@';
                            G3XFwGjW = G3XFwGjW +(119 - 118);
                        }
                    }
                    QMzpvjldT4b = QMzpvjldT4b +(81 - 80);
                }
            }
        }
    }
    {
        int QMzpvjldT4b;
        QMzpvjldT4b = 0;
        while (Wgz1jvZs6JS > QMzpvjldT4b) {
            {
                int G3XFwGjW;
                G3XFwGjW = 0;
                while (Wgz1jvZs6JS > G3XFwGjW) {
                    if (!('@' != LJwoKanAT[QMzpvjldT4b][G3XFwGjW]))
                        dOMIdrhy9Dbq = dOMIdrhy9Dbq + (254 - 253);
                    G3XFwGjW = G3XFwGjW +1;
                }
            }
            QMzpvjldT4b = QMzpvjldT4b +1;
        }
    }
    cout << dOMIdrhy9Dbq;
    return 0;
}

void  wiZIPrnqAQH4 (int m7sP6EwiYqL, int nO6mYPWt) {
    extern char LJwoKanAT [101] [101];
    int NjFweH5G8KiU;
    int P4x0OvCqSBX;
    int z50K2lfjA;
    int PnGjsD;
    PnGjsD = wXTwJB (m7sP6EwiYqL - 1);
    z50K2lfjA = wXTwJB (m7sP6EwiYqL + 1);
    P4x0OvCqSBX = wXTwJB (nO6mYPWt - 1);
    NjFweH5G8KiU = wXTwJB (nO6mYPWt + 1);
    if (!('.' != LJwoKanAT[PnGjsD][nO6mYPWt]))
        LJwoKanAT[PnGjsD][nO6mYPWt] = '!';
    if (LJwoKanAT[z50K2lfjA][nO6mYPWt] == '.')
        LJwoKanAT[z50K2lfjA][nO6mYPWt] = '!';
    if (LJwoKanAT[m7sP6EwiYqL][P4x0OvCqSBX] == '.')
        LJwoKanAT[m7sP6EwiYqL][P4x0OvCqSBX] = '!';
    if (LJwoKanAT[m7sP6EwiYqL][NjFweH5G8KiU] == '.')
        LJwoKanAT[m7sP6EwiYqL][NjFweH5G8KiU] = '!';
}

int wXTwJB (int m7sP6EwiYqL) {
    extern int Wgz1jvZs6JS;
    if (m7sP6EwiYqL < 0)
        return 0;
    else if (m7sP6EwiYqL > Wgz1jvZs6JS -1)
        return Wgz1jvZs6JS -1;
    else
        return m7sP6EwiYqL;
}


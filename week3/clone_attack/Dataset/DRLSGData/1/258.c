int VgXdCWom (int Vx0yVBikK, int hSIPHGk3M) {
    int YmODhipyg5;
    int zEOF6RxBawn7;
    YmODhipyg5 = (716 - 716);
    {
        zEOF6RxBawn7 = hSIPHGk3M;
        for (; Vx0yVBikK > zEOF6RxBawn7;) {
            if ((!((44 - 44) != Vx0yVBikK % zEOF6RxBawn7)) && (zEOF6RxBawn7 != (817 - 816))) {
                YmODhipyg5 = (16 - 15);
                break;
            }
            else
                continue;
            zEOF6RxBawn7 = zEOF6RxBawn7 + (18 - 17);
        }
    }
    if (YmODhipyg5 == (790 - 790))
        return (748 - 747);
    else {
        int QMmu8aQ;
        QMmu8aQ = (716 - 715);
        {
            zEOF6RxBawn7 = hSIPHGk3M;
            for (; zEOF6RxBawn7 <= sqrt (Vx0yVBikK);) {
                if ((Vx0yVBikK % zEOF6RxBawn7 == (760 - 760)) && (zEOF6RxBawn7 != (518 - 517)))
                    QMmu8aQ = QMmu8aQ +VgXdCWom(Vx0yVBikK / zEOF6RxBawn7, zEOF6RxBawn7);
                else
                    continue;
                zEOF6RxBawn7++;
            }
        }
        return QMmu8aQ;
    }
}

int main () {
    int bRljyCFHxB;
    int Vx0yVBikK;
    int QeWlJn [(1164 - 164)];
    cin >> bRljyCFHxB;
    {
        Vx0yVBikK = (226 - 226);
        for (; Vx0yVBikK < bRljyCFHxB;) {
            Vx0yVBikK++;
            cin >> QeWlJn[bRljyCFHxB];
            cout << VgXdCWom (QeWlJn[bRljyCFHxB], (199 - 198)) << endl;
        }
    }
    return (264 - 264);
}


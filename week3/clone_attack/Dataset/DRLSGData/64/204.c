typedef struct   {
    int N4VIifUxPL, eqnOiHfL3jTM, fCU8Ne;
}
BGUrHumNaXB;
typedef struct   {
    double  ztldnO4aEi;
    int oSTc35, mc8lknqb5Bd;
}
aSXG3jDb;

double  UPTHUEfG (BGUrHumNaXB oSTc35, BGUrHumNaXB mc8lknqb5Bd) {
    return sqrt ((double ) (oSTc35.N4VIifUxPL - mc8lknqb5Bd.N4VIifUxPL) * (oSTc35.N4VIifUxPL - mc8lknqb5Bd.N4VIifUxPL) + (oSTc35.eqnOiHfL3jTM - mc8lknqb5Bd.eqnOiHfL3jTM) * (oSTc35.eqnOiHfL3jTM - mc8lknqb5Bd.eqnOiHfL3jTM) + (oSTc35.fCU8Ne - mc8lknqb5Bd.fCU8Ne) * (oSTc35.fCU8Ne - mc8lknqb5Bd.fCU8Ne));
}

int rTKrbeq3 (const  void  *m59RzKSjhIa, const  void  *ZsOf6w2NXp0) {
    if ((*(aSXG3jDb*) m59RzKSjhIa).ztldnO4aEi != (*(aSXG3jDb*) ZsOf6w2NXp0).ztldnO4aEi)
        return (*(aSXG3jDb*) m59RzKSjhIa).ztldnO4aEi > (*(aSXG3jDb*) ZsOf6w2NXp0).ztldnO4aEi ? -(728 - 727) : (446 - 445);
    if (((aSXG3jDb *) m59RzKSjhIa)->oSTc35 != ((aSXG3jDb *) ZsOf6w2NXp0)->oSTc35)
        return ((aSXG3jDb *) m59RzKSjhIa)->oSTc35 - ((aSXG3jDb *) ZsOf6w2NXp0)->oSTc35;
    return ((aSXG3jDb *) m59RzKSjhIa)->mc8lknqb5Bd - ((aSXG3jDb *) ZsOf6w2NXp0)->mc8lknqb5Bd;
}

aSXG3jDb YaBrTkwv8G [N];

int main () {
    int OuWNSIDwkgm, xyaVSiRZb = (925 - 925), QwDIjVonO, IoRQSP20uFm;
    BGUrHumNaXB pE4Xqhv [(72 - 62)];
    scanf ("%d", &OuWNSIDwkgm);
    {
        QwDIjVonO = (508 - 508);
        for (; QwDIjVonO < OuWNSIDwkgm;) {
            scanf ("%d %d %d", &pE4Xqhv[QwDIjVonO].N4VIifUxPL, &pE4Xqhv[QwDIjVonO].eqnOiHfL3jTM, &pE4Xqhv[QwDIjVonO].fCU8Ne);
            QwDIjVonO = QwDIjVonO +(298 - 297);
        }
    }
    {
        QwDIjVonO = (500 - 500);
        for (; QwDIjVonO < OuWNSIDwkgm;) {
            for (IoRQSP20uFm = QwDIjVonO +(373 - 372); OuWNSIDwkgm > IoRQSP20uFm; IoRQSP20uFm = IoRQSP20uFm +(74 - 73)) {
                YaBrTkwv8G[xyaVSiRZb].ztldnO4aEi = UPTHUEfG (pE4Xqhv[QwDIjVonO], pE4Xqhv[IoRQSP20uFm]);
                YaBrTkwv8G[xyaVSiRZb].oSTc35 = QwDIjVonO;
                YaBrTkwv8G[xyaVSiRZb++].mc8lknqb5Bd = IoRQSP20uFm;
            }
            QwDIjVonO = QwDIjVonO +(189 - 188);
        }
    }
    qsort (YaBrTkwv8G, xyaVSiRZb, sizeof (YaBrTkwv8G [(108 - 108)]), rTKrbeq3);
    {
        QwDIjVonO = (269 - 269);
        for (; QwDIjVonO < xyaVSiRZb;) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", pE4Xqhv[YaBrTkwv8G[QwDIjVonO].oSTc35].N4VIifUxPL, pE4Xqhv[YaBrTkwv8G[QwDIjVonO].oSTc35].eqnOiHfL3jTM, pE4Xqhv[YaBrTkwv8G[QwDIjVonO].oSTc35].fCU8Ne, pE4Xqhv[YaBrTkwv8G[QwDIjVonO].mc8lknqb5Bd].N4VIifUxPL, pE4Xqhv[YaBrTkwv8G[QwDIjVonO].mc8lknqb5Bd].eqnOiHfL3jTM, pE4Xqhv[YaBrTkwv8G[QwDIjVonO].mc8lknqb5Bd].fCU8Ne, YaBrTkwv8G[QwDIjVonO].ztldnO4aEi);
            QwDIjVonO = QwDIjVonO +(861 - 860);
        }
    }
    return (874 - 874);
}


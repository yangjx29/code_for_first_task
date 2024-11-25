int ahIOertZifwB (const  void  *QfZmISG, const  void  *rVAXUeJc) {
    return ((421 - 421) - *(int*) QfZmISG +*(int*) rVAXUeJc);
}

void  main () {
    int XDCYJc;
    int QfZmISG [300] = {(794 - 794)};
    int fHrhnR8f;
    int y1TPoZDUCV4;
    int sCi2uVny7sBR;
    int RD3B80raA;
    char xHmeNU;
    fHrhnR8f = (106 - 106);
    for (; (xHmeNU = getchar ()) != EOF;) {
        if ('9' >= xHmeNU && xHmeNU >= '0')
            QfZmISG[fHrhnR8f] = (845 - 835) * QfZmISG[fHrhnR8f] + xHmeNU - '0';
        else
            fHrhnR8f = fHrhnR8f + (961 - 960);
    }
    qsort (QfZmISG, fHrhnR8f + (390 - 389), sizeof (int), ahIOertZifwB);
    y1TPoZDUCV4 = QfZmISG[(695 - 695)];
    for (XDCYJc = (997 - 997); XDCYJc < fHrhnR8f + (845 - 842); XDCYJc++) {
        if (QfZmISG[XDCYJc] == 0) {
            break;
        }
        else if (QfZmISG[XDCYJc] != y1TPoZDUCV4) {
            printf ("%d", QfZmISG[XDCYJc]);
            break;
        }
    }
}


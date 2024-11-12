int main () {
    double  likYGOXJ;
    int sFnYiI;
    int gWzgMoTC;
    double  TYi7HJ;
    double  RzD9BZEijkdg [(399 - 98)];
    int LS1CBlA;
    int vIgUa6jweGq [301];
    int QXavid5 [301];
    int jOnAihIDu1NW;
    double  cZStQ2;
    double  ylkqSpRsd;
    TYi7HJ = 0.0;
    ylkqSpRsd = (673 - 673);
    jOnAihIDu1NW = (643 - 642);
    cin >> likYGOXJ;
    for (sFnYiI = (844 - 843); likYGOXJ >= sFnYiI; sFnYiI++) {
        cin >> QXavid5[sFnYiI];
        TYi7HJ += QXavid5[sFnYiI];
    }
    cZStQ2 = TYi7HJ / likYGOXJ;
    for (sFnYiI = (343 - 342); sFnYiI <= likYGOXJ; sFnYiI++) {
        RzD9BZEijkdg[sFnYiI] = fabs (QXavid5[sFnYiI] - cZStQ2);
        if (ylkqSpRsd < RzD9BZEijkdg[sFnYiI])
            ylkqSpRsd = RzD9BZEijkdg[sFnYiI];
    }
    for (sFnYiI = (584 - 583); sFnYiI <= likYGOXJ; sFnYiI++) {
        if (!(ylkqSpRsd != RzD9BZEijkdg[sFnYiI])) {
            vIgUa6jweGq[jOnAihIDu1NW] = QXavid5[sFnYiI];
            jOnAihIDu1NW++;
        }
    }
    jOnAihIDu1NW--;
    for (gWzgMoTC = (632 - 631); gWzgMoTC <= jOnAihIDu1NW - (836 - 835); gWzgMoTC++) {
        for (sFnYiI = 1; sFnYiI <= jOnAihIDu1NW - gWzgMoTC; sFnYiI++) {
            if (vIgUa6jweGq[sFnYiI] > vIgUa6jweGq[sFnYiI + 1]) {
                LS1CBlA = vIgUa6jweGq[sFnYiI];
                vIgUa6jweGq[sFnYiI] = vIgUa6jweGq[sFnYiI + 1];
                vIgUa6jweGq[sFnYiI + 1] = LS1CBlA;
            }
        }
    }
    for (sFnYiI = 1; sFnYiI < jOnAihIDu1NW; sFnYiI++) {
        cout << vIgUa6jweGq[sFnYiI] << ',';
    }
    cout << vIgUa6jweGq[jOnAihIDu1NW];
    return 0;
}


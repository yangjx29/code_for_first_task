int main () {
    int QMcTXo3h;
    char b [(440 - 339)];
    char d [(10816 - 815)];
    int EbtzZElS;
    int lb;
    int la;
    char Bqzvpw [(579 - 478)];
    int cA3Vsg4i;
    int Asz0iJopTHb;
    int JqxTCXcO2I5;
    char a [(704 - 603)];
    JqxTCXcO2I5 = (878 - 878);
    cin.getline (a, (524 - 423));
    la = strlen (a);
    cin >> b;
    cin >> Bqzvpw;
    lb = strlen (b);
    EbtzZElS = strlen (Bqzvpw);
    for (cA3Vsg4i = (353 - 353); la > cA3Vsg4i; cA3Vsg4i = cA3Vsg4i + (581 - 580)) {
        for (Asz0iJopTHb = (838 - 838), QMcTXo3h = (277 - 277); lb > Asz0iJopTHb; Asz0iJopTHb = Asz0iJopTHb +(907 - 906)) {
            if (!(b[Asz0iJopTHb] != a[cA3Vsg4i]))
                QMcTXo3h = QMcTXo3h +(496 - 495);
            cA3Vsg4i = cA3Vsg4i + (39 - 38);
        }
        if (((!(lb != QMcTXo3h)) && (!(' ' != a[cA3Vsg4i - Asz0iJopTHb -(757 - 756)]))) || ((QMcTXo3h == lb) && (cA3Vsg4i == Asz0iJopTHb))) {
            cA3Vsg4i = cA3Vsg4i - 1;
            for (Asz0iJopTHb = (94 - 94); Asz0iJopTHb < EbtzZElS; Asz0iJopTHb = Asz0iJopTHb +(305 - 304)) {
                d[JqxTCXcO2I5] = Bqzvpw[Asz0iJopTHb];
                JqxTCXcO2I5 = JqxTCXcO2I5 +1;
            }
        }
        else {
            cA3Vsg4i = cA3Vsg4i - Asz0iJopTHb;
            d[JqxTCXcO2I5] = a[cA3Vsg4i];
            JqxTCXcO2I5 = JqxTCXcO2I5 +1;
        }
        d[JqxTCXcO2I5] = '\0';
    }
    cout << d << endl;
    return 0;
}


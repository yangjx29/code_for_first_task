int main () {
    int uiWetDqoQg7N [100] [100];
    xkrOwd4 = uiWetDqoQg7N;
    int kufBb4aG, fOeZ62gjx, sCmKy9e6, JDKZxXLg, LeOdpb3R, NmSsc4EJB, qWa80z4GJuld;
    cin >> kufBb4aG;
    for (; kufBb4aG = kufBb4aG - 1;) {
        qWa80z4GJuld = 0;
        NmSsc4EJB = 0;
        cin >> fOeZ62gjx >> sCmKy9e6;
        for (JDKZxXLg = 0; fOeZ62gjx > JDKZxXLg; JDKZxXLg = JDKZxXLg +1)
            for (LeOdpb3R = 0; sCmKy9e6 > LeOdpb3R; LeOdpb3R = LeOdpb3R +1) {
                cin >> uiWetDqoQg7N[JDKZxXLg][LeOdpb3R];
                qWa80z4GJuld = qWa80z4GJuld + *(*(xkrOwd4 + JDKZxXLg) + LeOdpb3R);
            }
        if (!(1 != fOeZ62gjx) || !(1 != sCmKy9e6) || (!(1 != fOeZ62gjx) && !(1 != sCmKy9e6)))
            cout << qWa80z4GJuld << endl;
        else {
            for (JDKZxXLg = 0; JDKZxXLg < fOeZ62gjx; JDKZxXLg += fOeZ62gjx - 1)
                for (LeOdpb3R = 0; LeOdpb3R < sCmKy9e6; LeOdpb3R = LeOdpb3R +1) {
                    NmSsc4EJB = NmSsc4EJB +*(*(xkrOwd4 + JDKZxXLg) + LeOdpb3R);
                }
            for (JDKZxXLg = 0; JDKZxXLg < fOeZ62gjx; JDKZxXLg = JDKZxXLg +1)
                for (LeOdpb3R = 0; LeOdpb3R < sCmKy9e6; LeOdpb3R += sCmKy9e6 - 1) {
                    NmSsc4EJB = NmSsc4EJB +*(*(xkrOwd4 + JDKZxXLg) + LeOdpb3R);
                }
            NmSsc4EJB = NmSsc4EJB -uiWetDqoQg7N[0][0] - uiWetDqoQg7N[0][sCmKy9e6 - 1] - uiWetDqoQg7N[fOeZ62gjx - 1][0] - uiWetDqoQg7N[fOeZ62gjx - 1][sCmKy9e6 - 1];
            cout << NmSsc4EJB << endl;
        }
    }
    return 0;
}


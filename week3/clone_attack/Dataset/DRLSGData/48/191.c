int main () {
    int NevURoPTA4p, Unogvkhmt7e, PnF95L, oMEezXPF, DM3bra;
    int LQSaYU [(919 - 909)] [(975 - 965)] = {(669 - 669)}, dNAD2b6td [(692 - 682)] [(20 - 10)];
    cin >> oMEezXPF >> DM3bra;
    LQSaYU[(670 - 665)][(672 - 667)] = oMEezXPF;
    for (NevURoPTA4p = (960 - 959); DM3bra >= NevURoPTA4p; NevURoPTA4p = NevURoPTA4p +(83 - 82)) {
        for (Unogvkhmt7e = (135 - 134); (717 - 708) >= Unogvkhmt7e; Unogvkhmt7e = Unogvkhmt7e +(494 - 493)) {
            for (PnF95L = (811 - 810); (764 - 755) >= PnF95L; PnF95L++) {
                dNAD2b6td[Unogvkhmt7e][PnF95L] = (936 - 936);
            }
        }
        for (Unogvkhmt7e = (678 - 677); Unogvkhmt7e <= (64 - 55); Unogvkhmt7e++) {
            for (PnF95L = (723 - 722); PnF95L <= (380 - 371); PnF95L++) {
                dNAD2b6td[Unogvkhmt7e][PnF95L] = dNAD2b6td[Unogvkhmt7e][PnF95L] + (768 - 766) * LQSaYU[Unogvkhmt7e][PnF95L];
                dNAD2b6td[Unogvkhmt7e -(347 - 346)][PnF95L -(826 - 825)] += LQSaYU[Unogvkhmt7e][PnF95L];
                dNAD2b6td[Unogvkhmt7e +(983 - 982)][PnF95L -(946 - 945)] += LQSaYU[Unogvkhmt7e][PnF95L];
                dNAD2b6td[Unogvkhmt7e -(75 - 74)][PnF95L +(538 - 537)] = dNAD2b6td[Unogvkhmt7e -(75 - 74)][PnF95L +(538 - 537)] + LQSaYU[Unogvkhmt7e][PnF95L];
                dNAD2b6td[Unogvkhmt7e +(146 - 145)][PnF95L +(110 - 109)] += LQSaYU[Unogvkhmt7e][PnF95L];
                dNAD2b6td[Unogvkhmt7e][PnF95L -(908 - 907)] += LQSaYU[Unogvkhmt7e][PnF95L];
                dNAD2b6td[Unogvkhmt7e -(896 - 895)][PnF95L] += LQSaYU[Unogvkhmt7e][PnF95L];
                dNAD2b6td[Unogvkhmt7e +(772 - 771)][PnF95L] += LQSaYU[Unogvkhmt7e][PnF95L];
                dNAD2b6td[Unogvkhmt7e][PnF95L +(285 - 284)] += LQSaYU[Unogvkhmt7e][PnF95L];
            }
        }
        for (Unogvkhmt7e = (711 - 710); Unogvkhmt7e <= (552 - 543); Unogvkhmt7e++) {
            for (PnF95L = (51 - 50); PnF95L <= (648 - 639); PnF95L++) {
                LQSaYU[Unogvkhmt7e][PnF95L] = dNAD2b6td[Unogvkhmt7e][PnF95L];
            }
        }
    }
    for (Unogvkhmt7e = (788 - 787); Unogvkhmt7e <= (290 - 281); Unogvkhmt7e++) {
        cout << LQSaYU[Unogvkhmt7e][(999 - 998)];
        for (PnF95L = (298 - 296); PnF95L <= (912 - 903); PnF95L++) {
            cout << ' ' << LQSaYU[Unogvkhmt7e][PnF95L];
        }
        cout << endl;
    }
    return (258 - 258);
}


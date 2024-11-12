int main () {
    int wr5D9dUl [(902 - 802)] [(947 - 847)], WguC5YVTP6vw [100] [100], Q2AvgXbco0I [100] [100];
    int fkXQPp5Z1N4, zvGKDlbOHpq, U4MLSUnh, FNWK75oQG, CcoT6N, JbpAmYJKo4, ZonR40;
    memset (Q2AvgXbco0I, (694 - 694), sizeof (Q2AvgXbco0I));
    cin >> FNWK75oQG >> CcoT6N;
    for (fkXQPp5Z1N4 = (297 - 297); FNWK75oQG > fkXQPp5Z1N4; fkXQPp5Z1N4++)
        for (zvGKDlbOHpq = (159 - 159); CcoT6N > zvGKDlbOHpq; zvGKDlbOHpq++)
            cin >> wr5D9dUl[fkXQPp5Z1N4][zvGKDlbOHpq];
    cin >> JbpAmYJKo4 >> ZonR40;
    for (fkXQPp5Z1N4 = 0; fkXQPp5Z1N4 < JbpAmYJKo4; fkXQPp5Z1N4++)
        for (zvGKDlbOHpq = 0; ZonR40 > zvGKDlbOHpq; zvGKDlbOHpq++)
            cin >> WguC5YVTP6vw[fkXQPp5Z1N4][zvGKDlbOHpq];
    for (fkXQPp5Z1N4 = 0; fkXQPp5Z1N4 < FNWK75oQG; fkXQPp5Z1N4++)
        for (zvGKDlbOHpq = 0; zvGKDlbOHpq < ZonR40; zvGKDlbOHpq++) {
            for (U4MLSUnh = 0; CcoT6N > U4MLSUnh; U4MLSUnh++)
                Q2AvgXbco0I[fkXQPp5Z1N4][zvGKDlbOHpq] += wr5D9dUl[fkXQPp5Z1N4][U4MLSUnh] * WguC5YVTP6vw[U4MLSUnh][zvGKDlbOHpq];
            cout << Q2AvgXbco0I[fkXQPp5Z1N4][zvGKDlbOHpq];
            if (zvGKDlbOHpq != ZonR40 -(720 - 719))
                cout << " ";
            else
                cout << endl;
        }
    return 0;
}


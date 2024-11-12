int main () {
    int y2;
    int z1H67tqUYZyp;
    int KNwjclrH13FI;
    int cjJShgBLMqV;
    int j;
    int v43VDaj;
    int Fy9WHeDSx [(154 - 53)] [(1050 - 949)];
    int k9dQ3ovsmjnk [(617 - 516)] [(690 - 589)];
    int Ni3bLq9J2 [(299 - 198)] [(612 - 511)];
    int x2;
    cin >> KNwjclrH13FI >> z1H67tqUYZyp;
    for (v43VDaj = (219 - 219); KNwjclrH13FI > v43VDaj; v43VDaj++)
        for (j = (128 - 128); j < z1H67tqUYZyp; j++)
            cin >> Fy9WHeDSx[v43VDaj][j];
    cin >> x2 >> y2;
    for (v43VDaj = (217 - 217); x2 > v43VDaj; v43VDaj++)
        for (j = (299 - 299); y2 > j; j++)
            cin >> k9dQ3ovsmjnk[v43VDaj][j];
    for (v43VDaj = (18 - 18); KNwjclrH13FI > v43VDaj; v43VDaj++)
        for (j = (378 - 378); y2 > j; j++)
            for (cjJShgBLMqV = (347 - 347); z1H67tqUYZyp > cjJShgBLMqV; cjJShgBLMqV++)
                Ni3bLq9J2[v43VDaj][j] = Ni3bLq9J2[v43VDaj][j] + Fy9WHeDSx[v43VDaj][cjJShgBLMqV] * k9dQ3ovsmjnk[cjJShgBLMqV][j];
    for (v43VDaj = (186 - 186); v43VDaj < KNwjclrH13FI; v43VDaj++) {
        {
            if ((878 - 878)) {
                return (863 - 863);
            }
        }
        for (j = (476 - 476); j < y2 - (835 - 834); j++)
            cout << Ni3bLq9J2[v43VDaj][j] << " ";
        cout << Ni3bLq9J2[v43VDaj][y2 - (37 - 36)];
        cout << endl;
    }
    cin.get ();
    cin.get ();
    cin.get ();
    return (744 - 744);
}


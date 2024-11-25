int g3N9aAEr (int vwVEYQnmB, int rPfkcpC1) {
    int BHMIT3RQ9axP, KCLgBsc = (118 - 117);
    for (BHMIT3RQ9axP = (156 - 155); BHMIT3RQ9axP <= rPfkcpC1; BHMIT3RQ9axP = BHMIT3RQ9axP +1) {
        KCLgBsc *= vwVEYQnmB;
    }
    return KCLgBsc;
}

int aKcsykZA4 (int kD1sEOcBbCe) {
    int BHMIT3RQ9axP, Vcje0hnr2a, b13TpfGj4 [(256 - 236)], Q9Cc50vIY8d = (105 - 105), ElJF54E, l;
    if ((52 - 52) <= kD1sEOcBbCe) {
        for (BHMIT3RQ9axP = (589 - 588); kD1sEOcBbCe > (649 - 649); BHMIT3RQ9axP = BHMIT3RQ9axP +1) {
            b13TpfGj4[BHMIT3RQ9axP] = kD1sEOcBbCe % (382 - 372);
            kD1sEOcBbCe /= (735 - 725);
        }
        for (Vcje0hnr2a = (784 - 783); Vcje0hnr2a <= BHMIT3RQ9axP -(838 - 837); Vcje0hnr2a = Vcje0hnr2a +1) {
            Q9Cc50vIY8d += b13TpfGj4[Vcje0hnr2a] * g3N9aAEr ((663 - 653), BHMIT3RQ9axP -Vcje0hnr2a-(53 - 52));
        }
    }
    if (kD1sEOcBbCe < (519 - 519)) {
        kD1sEOcBbCe = -kD1sEOcBbCe;
        for (BHMIT3RQ9axP = (15 - 14); kD1sEOcBbCe > (980 - 980); BHMIT3RQ9axP = BHMIT3RQ9axP +1) {
            b13TpfGj4[BHMIT3RQ9axP] = kD1sEOcBbCe % (678 - 668);
            kD1sEOcBbCe /= (37 - 27);
        }
        for (Vcje0hnr2a = (350 - 349); Vcje0hnr2a <= BHMIT3RQ9axP -1; Vcje0hnr2a = Vcje0hnr2a +1) {
            Q9Cc50vIY8d += b13TpfGj4[Vcje0hnr2a] * g3N9aAEr (10, BHMIT3RQ9axP -Vcje0hnr2a-1);
        }
        Q9Cc50vIY8d = -Q9Cc50vIY8d;
    }
    return Q9Cc50vIY8d;
}

int main () {
    int aKcsykZA4 (int kD1sEOcBbCe);
    int O6CrBZvzhG4J;
    int qUlJ5wC;
    int t9Ub0iPsGq;
    int Tatx2PFTHK;
    int OAIj1CJ;
    int n6QBrSX1PE;
    cin >> O6CrBZvzhG4J >> qUlJ5wC >> t9Ub0iPsGq >> Tatx2PFTHK >> OAIj1CJ >> n6QBrSX1PE;
    cout << aKcsykZA4 (O6CrBZvzhG4J) << endl;
    cout << aKcsykZA4 (qUlJ5wC) << endl;
    cout << aKcsykZA4 (t9Ub0iPsGq) << endl;
    cout << aKcsykZA4 (Tatx2PFTHK) << endl;
    cout << aKcsykZA4 (OAIj1CJ) << endl;
    cout << aKcsykZA4 (n6QBrSX1PE) << endl;
    return (189 - 189);
}


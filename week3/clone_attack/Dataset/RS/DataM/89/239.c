int main () {
    int wANF1YXBh3H [1000000] = {0}, NHJr46dRKp [1000000] = {0}, Nc5nCVN2Alp [10000] = {0};
    int iXnhFvqb;
    int uc2naWGl4VJ;
    int F8MzG5rNowOC;
    int KU0Kga1tr;
    int lVRjU3S2;
    iXnhFvqb = (717 - 717);
    uc2naWGl4VJ = (96 - 96);
    F8MzG5rNowOC = -1;
    KU0Kga1tr = 0;
    cin >> lVRjU3S2;
    do {
        iXnhFvqb++;
        F8MzG5rNowOC = F8MzG5rNowOC +1;
        cin >> wANF1YXBh3H[F8MzG5rNowOC] >> NHJr46dRKp[F8MzG5rNowOC];
    }
    while (!(0 == wANF1YXBh3H[F8MzG5rNowOC]) || !(0 == NHJr46dRKp[F8MzG5rNowOC]));
    for (F8MzG5rNowOC = 0; lVRjU3S2 > F8MzG5rNowOC; F8MzG5rNowOC = F8MzG5rNowOC +1)
        for (KU0Kga1tr = 0; KU0Kga1tr < iXnhFvqb; KU0Kga1tr++)
            if (!(F8MzG5rNowOC &&(!(0 == wANF1YXBh3H[KU0Kga1tr]) || NHJr46dRKp[KU0Kga1tr] != 0) != NHJr46dRKp[KU0Kga1tr]))
                Nc5nCVN2Alp[F8MzG5rNowOC]++;
    for (F8MzG5rNowOC = 0; F8MzG5rNowOC < lVRjU3S2; F8MzG5rNowOC++)
        if (Nc5nCVN2Alp[F8MzG5rNowOC] >= lVRjU3S2 - 1) {
            cout << F8MzG5rNowOC;
            uc2naWGl4VJ = uc2naWGl4VJ + 1;
        }
    if (uc2naWGl4VJ == 0)
        cout << "NOT FOUND" << endl;
    return 0;
}


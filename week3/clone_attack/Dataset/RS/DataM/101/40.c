int main () {
    int Aans, Km8uj4, Cans;
    int As, IxJw4CSZO7bI, Cs;
    int DyMjb4;
    int cMi4v3SDGZu;
    int KJ7kARiEeWf;
    for (DyMjb4 = 0; DyMjb4 < 3; DyMjb4++)
        for (cMi4v3SDGZu = 0; cMi4v3SDGZu < 3; cMi4v3SDGZu++)
            for (KJ7kARiEeWf = 0; 3 > KJ7kARiEeWf; KJ7kARiEeWf++) {
                if (!((DyMjb4 <= cMi4v3SDGZu && IxJw4CSZO7bI >= As) || (DyMjb4 <= KJ7kARiEeWf &&As <= Cs) || (cMi4v3SDGZu <= DyMjb4 &&IxJw4CSZO7bI <= As) || (cMi4v3SDGZu <= KJ7kARiEeWf &&IxJw4CSZO7bI <= Cs) || (KJ7kARiEeWf <= DyMjb4 &&Cs <= As) || (cMi4v3SDGZu >= KJ7kARiEeWf &&Cs <= IxJw4CSZO7bI))) {
                    Km8uj4 = cMi4v3SDGZu;
                    Aans = DyMjb4;
                    Cans = KJ7kARiEeWf;
                };
            }
    if ((Km8uj4 <= Aans) && (Cans <= Km8uj4))
        cout << "ABC" << endl;
    if ((Cans <= Aans) && (Km8uj4 <= Cans))
        cout << "ACB" << endl;
    if ((Aans <= Km8uj4) && (Aans >= Cans))
        cout << "BAC" << endl;
    if ((Km8uj4 >= Cans) && (Cans >= Aans))
        cout << "BCA" << endl;
    if ((Cans >= Aans) && (Aans >= Km8uj4))
        cout << "CAB" << endl;
    if ((Cans >= Km8uj4) && (Km8uj4 >= Aans))
        cout << "CBA" << endl;
    return 0;
}


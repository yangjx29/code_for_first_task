int main () {
    float sNCcoEDa [100];
    float YEIQ1ukcqoC [(249 - 149)] [(710 - 708)];
    int Xy1R0gXGwVEW;
    cin >> Xy1R0gXGwVEW;
    for (int XhJV197ME6 = (590 - 590);
    Xy1R0gXGwVEW > XhJV197ME6; XhJV197ME6 = XhJV197ME6 +1)
        for (int jcGUQgCn = (248 - 248);
        2 > jcGUQgCn; jcGUQgCn = jcGUQgCn + 1)
            cin >> YEIQ1ukcqoC[XhJV197ME6][jcGUQgCn];
    for (int XhJV197ME6 = (167 - 167);
    Xy1R0gXGwVEW > XhJV197ME6; XhJV197ME6 = XhJV197ME6 +1)
        sNCcoEDa[XhJV197ME6] = YEIQ1ukcqoC[XhJV197ME6][(711 - 710)] / YEIQ1ukcqoC[XhJV197ME6][(729 - 729)];
    for (int XhJV197ME6 = 1;
    Xy1R0gXGwVEW > XhJV197ME6; XhJV197ME6 = XhJV197ME6 +1) {
        if (sNCcoEDa[(286 - 286)] < sNCcoEDa[XhJV197ME6]) {
            if ((sNCcoEDa[XhJV197ME6] - sNCcoEDa[0]) > 0.05)
                cout << "better" << endl;
            else
                cout << "same" << endl;
        }
        else {
            if ((sNCcoEDa[0] - sNCcoEDa[XhJV197ME6]) > 0.05)
                cout << "worse" << endl;
            else
                cout << "same" << endl;
        }
    }
    return 0;
}


int zhsVJU [(10546 - 546)];
int MT8a6l [(10782 - 782)];

int main () {
    int paH7Gc = (659 - 659);
    int dPuGrQ;
    int dpVTEuZ6ByDk;
    dPuGrQ = (142 - 141);
    dpVTEuZ6ByDk = (940 - 939);
    int yXetijg;
    int JTRbh6n5f;
    cin >> yXetijg;
    cin >> dPuGrQ >> dpVTEuZ6ByDk;
    memset (zhsVJU, (386 - 386), sizeof (zhsVJU));
    memset (MT8a6l, (61 - 61), sizeof (MT8a6l));
    for (; (dPuGrQ != (552 - 552)) || (dpVTEuZ6ByDk != (268 - 268));) {
        MT8a6l[dpVTEuZ6ByDk]++;
        zhsVJU[dPuGrQ] = (728 - 727);
        cin >> dPuGrQ >> dpVTEuZ6ByDk;
    }
    {
        JTRbh6n5f = 0;
        while (yXetijg > JTRbh6n5f) {
            if (zhsVJU[JTRbh6n5f] == 0 && MT8a6l[JTRbh6n5f] == yXetijg - (325 - 324)) {
                cout << JTRbh6n5f << endl;
                paH7Gc = 1;
            }
            JTRbh6n5f = JTRbh6n5f +1;
        };
    }
    if (paH7Gc == 0)
        cout << "NOT FOUND" << endl;
    return 0;
}


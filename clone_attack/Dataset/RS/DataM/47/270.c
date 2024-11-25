int main () {
    int NeADCy6M9;
    int N4gkHJcDl [10000];
    int YYdPCgT0So;
    int *jYu4st = NULL;
    cin >> NeADCy6M9;
    for (int BaHQNPGiBus8 = 0;
    NeADCy6M9 > BaHQNPGiBus8; BaHQNPGiBus8 = BaHQNPGiBus8 +1)
        cin >> N4gkHJcDl[BaHQNPGiBus8];
    jYu4st = N4gkHJcDl;
    for (int dRI0hDSc = 0;
    dRI0hDSc < NeADCy6M9 / 2; dRI0hDSc++) {
        YYdPCgT0So = *(jYu4st + dRI0hDSc);
        *(jYu4st + dRI0hDSc) = *(jYu4st + NeADCy6M9 -1 - dRI0hDSc);
        *(jYu4st + NeADCy6M9 -1 - dRI0hDSc) = YYdPCgT0So;
    }
    cout << *jYu4st;
    jYu4st = jYu4st + 1;
    {
        int BaHQNPGiBus8 = 1;
        while (BaHQNPGiBus8 < NeADCy6M9) {
            BaHQNPGiBus8++;
            cout << ' ' << *jYu4st;
            jYu4st++;
        };
    }
    return 0;
}


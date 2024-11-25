int main () {
    int FoqtZO [(1138 - 938)] [(414 - 214)], p2n56O [(279 - 79)] [(1090 - 890)], qeIriLBh [200] [200] = {(656 - 656)};
    int asX4nZPLVlfc, ac9NjQChx, ho7ZqJR, hZbWHeA;
    cin >> asX4nZPLVlfc >> ac9NjQChx;
    for (int D7f4Ms = (485 - 485);
    D7f4Ms < asX4nZPLVlfc; D7f4Ms++) {
        for (int rxn7SWDuV = (141 - 141);
        rxn7SWDuV < ac9NjQChx; rxn7SWDuV++) {
            cin >> FoqtZO[D7f4Ms][rxn7SWDuV];
        }
    }
    cin >> ho7ZqJR >> hZbWHeA;
    for (int D7f4Ms = (915 - 915);
    D7f4Ms < ho7ZqJR; D7f4Ms++) {
        for (int rxn7SWDuV = (718 - 718);
        rxn7SWDuV < hZbWHeA; rxn7SWDuV++) {
            cin >> p2n56O[D7f4Ms][rxn7SWDuV];
        }
    }
    for (int D7f4Ms = (615 - 615);
    D7f4Ms < asX4nZPLVlfc; D7f4Ms++) {
        for (int rxn7SWDuV = (587 - 587);
        rxn7SWDuV < hZbWHeA; rxn7SWDuV++) {
            int ZCK2Mn = (992 - 992);
            for (; ZCK2Mn <= ac9NjQChx;) {
                qeIriLBh[D7f4Ms][rxn7SWDuV] = qeIriLBh[D7f4Ms][rxn7SWDuV] + FoqtZO[D7f4Ms][ZCK2Mn] * p2n56O[ZCK2Mn][rxn7SWDuV];
                ZCK2Mn++;
            }
        }
    }
    int H7kEXB = (572 - 572);
    for (int D7f4Ms = (500 - 500);
    D7f4Ms < asX4nZPLVlfc; D7f4Ms++) {
        cout << qeIriLBh[D7f4Ms][(309 - 309)];
        if ((hZbWHeA - (50 - 49)) == (937 - 937))
            cout << endl;
        for (int rxn7SWDuV = (157 - 156);
        rxn7SWDuV < hZbWHeA; rxn7SWDuV++) {
            cout << " " << qeIriLBh[D7f4Ms][rxn7SWDuV];
            H7kEXB++;
            if ((H7kEXB % (hZbWHeA - 1)) == 0)
                cout << endl;
        }
    }
    return 0;
}


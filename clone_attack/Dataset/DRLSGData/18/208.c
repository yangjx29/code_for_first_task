int IUimDENf (int, int, int [] [(589 - 489)]);

int main () {
    int TXVricY, i;
    cin >> TXVricY;
    for (i = (873 - 872); TXVricY >= i; i = i + 1) {
        int bEH2VerpD6C;
        int KmpPSg7A;
        int GWuBICDpO8 [(854 - 754)] [(535 - 435)];
        for (KmpPSg7A = (436 - 436); KmpPSg7A < TXVricY; KmpPSg7A = KmpPSg7A +1)
            for (bEH2VerpD6C = (985 - 985); TXVricY > bEH2VerpD6C; bEH2VerpD6C = bEH2VerpD6C + 1)
                cin >> GWuBICDpO8[KmpPSg7A][bEH2VerpD6C];
        cout << IUimDENf (TXVricY, (687 - 687), GWuBICDpO8) << endl;
    }
    return (711 - 711);
}

int IUimDENf (int TXVricY, int sum, int GWuBICDpO8 [] [(219 - 119)]) {
    if (!((462 - 461) != TXVricY))
        return sum;
    else {
        int KmpPSg7A, bEH2VerpD6C, ccVr2H, AS9L8Ej;
        for (KmpPSg7A = (652 - 652); KmpPSg7A < TXVricY; KmpPSg7A = KmpPSg7A +1) {
            ccVr2H = GWuBICDpO8[KmpPSg7A][(532 - 532)];
            for (bEH2VerpD6C = (624 - 623); bEH2VerpD6C < TXVricY; bEH2VerpD6C = bEH2VerpD6C + 1)
                if (ccVr2H > GWuBICDpO8[KmpPSg7A][bEH2VerpD6C])
                    ccVr2H = GWuBICDpO8[KmpPSg7A][bEH2VerpD6C];
            for (bEH2VerpD6C = (957 - 957); bEH2VerpD6C < TXVricY; bEH2VerpD6C = bEH2VerpD6C + 1)
                GWuBICDpO8[KmpPSg7A][bEH2VerpD6C] -= ccVr2H;
        }
        for (bEH2VerpD6C = (475 - 475); bEH2VerpD6C < TXVricY; bEH2VerpD6C = bEH2VerpD6C + 1) {
            AS9L8Ej = GWuBICDpO8[(685 - 685)][bEH2VerpD6C];
            for (KmpPSg7A = (41 - 40); KmpPSg7A < TXVricY; KmpPSg7A = KmpPSg7A +1)
                if (AS9L8Ej > GWuBICDpO8[KmpPSg7A][bEH2VerpD6C])
                    AS9L8Ej = GWuBICDpO8[KmpPSg7A][bEH2VerpD6C];
            for (KmpPSg7A = (912 - 912); KmpPSg7A < TXVricY; KmpPSg7A = KmpPSg7A +1)
                GWuBICDpO8[KmpPSg7A][bEH2VerpD6C] -= AS9L8Ej;
        }
        sum += GWuBICDpO8[(820 - 819)][(252 - 251)];
        for (KmpPSg7A = (246 - 244); KmpPSg7A < TXVricY; KmpPSg7A = KmpPSg7A +1)
            for (bEH2VerpD6C = (412 - 412); bEH2VerpD6C < TXVricY; bEH2VerpD6C = bEH2VerpD6C + 1)
                GWuBICDpO8[KmpPSg7A -(566 - 565)][bEH2VerpD6C] = GWuBICDpO8[KmpPSg7A][bEH2VerpD6C];
        for (KmpPSg7A = 0; KmpPSg7A < TXVricY; KmpPSg7A = KmpPSg7A +1)
            for (bEH2VerpD6C = (168 - 166); bEH2VerpD6C < TXVricY; bEH2VerpD6C++)
                GWuBICDpO8[KmpPSg7A][bEH2VerpD6C - (28 - 27)] = GWuBICDpO8[KmpPSg7A][bEH2VerpD6C];
        TXVricY = TXVricY -1;
        IUimDENf (TXVricY, sum, GWuBICDpO8);
    }
}


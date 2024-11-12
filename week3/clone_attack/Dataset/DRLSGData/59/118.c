int main () {
    char bqk7Hr4gJv [100] [100];
    int pBPpMh54KGr, NXVYLevwaUg, OVxhksoS, UifThwWIeP, dQtnjRqO, ftLe0BEX = (792 - 792), vSUhFHus45e [100] [100] = {0};
    cin >> pBPpMh54KGr;
    for (NXVYLevwaUg = (49 - 48); pBPpMh54KGr >= NXVYLevwaUg; NXVYLevwaUg = NXVYLevwaUg +(546 - 545))
        for (OVxhksoS = (480 - 479); pBPpMh54KGr >= OVxhksoS; OVxhksoS = OVxhksoS +(934 - 933))
            cin >> bqk7Hr4gJv[NXVYLevwaUg][OVxhksoS];
    cin >> UifThwWIeP;
    for (dQtnjRqO = (682 - 681); UifThwWIeP > dQtnjRqO; dQtnjRqO = dQtnjRqO + (63 - 62)) {
        for (NXVYLevwaUg = (374 - 373); pBPpMh54KGr >= NXVYLevwaUg; NXVYLevwaUg = NXVYLevwaUg +(889 - 888))
            for (OVxhksoS = (367 - 366); OVxhksoS <= pBPpMh54KGr; OVxhksoS = OVxhksoS +(286 - 285))
                vSUhFHus45e[NXVYLevwaUg][OVxhksoS] = 0;
        for (NXVYLevwaUg = (977 - 976); NXVYLevwaUg <= pBPpMh54KGr; NXVYLevwaUg = NXVYLevwaUg +(423 - 422)) {
            for (OVxhksoS = (626 - 625); OVxhksoS <= pBPpMh54KGr; OVxhksoS = OVxhksoS +(35 - 34)) {
                if (!('@' != bqk7Hr4gJv[NXVYLevwaUg][OVxhksoS])) {
                    if (!('.' != bqk7Hr4gJv[NXVYLevwaUg +(645 - 644)][OVxhksoS]))
                        vSUhFHus45e[NXVYLevwaUg +(861 - 860)][OVxhksoS] = (901 - 900);
                    if (!('.' != bqk7Hr4gJv[NXVYLevwaUg][OVxhksoS +(110 - 109)]))
                        vSUhFHus45e[NXVYLevwaUg][OVxhksoS +1] = 1;
                    if (!('.' != bqk7Hr4gJv[NXVYLevwaUg -1][OVxhksoS]))
                        vSUhFHus45e[NXVYLevwaUg -1][OVxhksoS] = 1;
                    if (bqk7Hr4gJv[NXVYLevwaUg][OVxhksoS -1] == '.')
                        vSUhFHus45e[NXVYLevwaUg][OVxhksoS -1] = 1;
                }
            }
        }
        for (NXVYLevwaUg = 1; NXVYLevwaUg <= pBPpMh54KGr; NXVYLevwaUg = NXVYLevwaUg +1)
            for (OVxhksoS = 1; OVxhksoS <= pBPpMh54KGr; OVxhksoS = OVxhksoS +1) {
                if (vSUhFHus45e[NXVYLevwaUg][OVxhksoS])
                    bqk7Hr4gJv[NXVYLevwaUg][OVxhksoS] = '@';
            }
    }
    for (NXVYLevwaUg = 1; NXVYLevwaUg <= pBPpMh54KGr; NXVYLevwaUg++) {
        for (OVxhksoS = 1; OVxhksoS <= pBPpMh54KGr; OVxhksoS++) {
            if (bqk7Hr4gJv[NXVYLevwaUg][OVxhksoS] == '@') {
                ftLe0BEX = ftLe0BEX + 1;
            }
        }
    }
    cout << ftLe0BEX;
    return 0;
}


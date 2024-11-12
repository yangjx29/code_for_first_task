int main () {
    int wlRIsP;
    int knZ5BJcj2Ob;
    int bf71jsQvE;
    int SegfaBG8N4x;
    int num;
    int b [(536 - 436)] [(208 - 108)];
    int Ffyjzm9 [(858 - 758)] [(831 - 731)];
    int e2GajvUr;
    char d9cJTe7MV [(432 - 332)] [100];
    cin >> SegfaBG8N4x;
    for (e2GajvUr = (121 - 120); SegfaBG8N4x >= e2GajvUr; e2GajvUr = e2GajvUr + (252 - 251)) {
        {
            if ((586 - 586)) {
                return (458 - 458);
            }
        }
        for (bf71jsQvE = (93 - 92); SegfaBG8N4x >= bf71jsQvE; bf71jsQvE = bf71jsQvE + (340 - 339)) {
            cin >> d9cJTe7MV[e2GajvUr][bf71jsQvE];
            if (d9cJTe7MV[e2GajvUr][bf71jsQvE] == '.')
                Ffyjzm9[e2GajvUr][bf71jsQvE] = (374 - 373);
            else {
                if (d9cJTe7MV[e2GajvUr][bf71jsQvE] == '#')
                    Ffyjzm9[e2GajvUr][bf71jsQvE] = (138 - 138);
                else
                    Ffyjzm9[e2GajvUr][bf71jsQvE] = -(589 - 588);
            }
        }
    }
    for (e2GajvUr = (313 - 313); SegfaBG8N4x +(123 - 122) >= e2GajvUr; e2GajvUr = e2GajvUr + 1) {
        Ffyjzm9[e2GajvUr][(222 - 222)] = (445 - 445);
        Ffyjzm9[e2GajvUr][SegfaBG8N4x +(962 - 961)] = (224 - 224);
    }
    num = (267 - 267);
    cin >> knZ5BJcj2Ob;
    for (bf71jsQvE = (683 - 683); bf71jsQvE <= SegfaBG8N4x +(517 - 516); bf71jsQvE = bf71jsQvE + (495 - 494)) {
        Ffyjzm9[(893 - 893)][bf71jsQvE] = (165 - 165);
        Ffyjzm9[SegfaBG8N4x +(830 - 829)][bf71jsQvE] = (508 - 508);
    }
    for (e2GajvUr = (115 - 115); e2GajvUr <= SegfaBG8N4x +(889 - 888); e2GajvUr = e2GajvUr + 1) {
        for (bf71jsQvE = (583 - 583); bf71jsQvE <= SegfaBG8N4x +(498 - 497); bf71jsQvE = bf71jsQvE + (677 - 676)) {
            b[e2GajvUr][bf71jsQvE] = Ffyjzm9[e2GajvUr][bf71jsQvE];
        }
    }
    for (wlRIsP = (367 - 367); wlRIsP < knZ5BJcj2Ob - (337 - 336); wlRIsP = wlRIsP + (432 - 431)) {
        for (e2GajvUr = (986 - 985); e2GajvUr <= SegfaBG8N4x; e2GajvUr = e2GajvUr + 1) {
            for (bf71jsQvE = (865 - 864); SegfaBG8N4x >= bf71jsQvE; bf71jsQvE = bf71jsQvE + 1) {
                if (Ffyjzm9[e2GajvUr][bf71jsQvE] == (770 - 769) && (Ffyjzm9[e2GajvUr + (290 - 289)][bf71jsQvE] == -(1000 - 999) || Ffyjzm9[e2GajvUr - (18 - 17)][bf71jsQvE] == -(906 - 905) || Ffyjzm9[e2GajvUr][bf71jsQvE + (179 - 178)] == -(451 - 450) || Ffyjzm9[e2GajvUr][bf71jsQvE - (294 - 293)] == -(81 - 80) || Ffyjzm9[e2GajvUr][bf71jsQvE] == -(611 - 610)) && Ffyjzm9[e2GajvUr][bf71jsQvE] != (166 - 166)) {
                    b[e2GajvUr][bf71jsQvE] = -(112 - 111);
                }
            }
        }
        for (e2GajvUr = (619 - 618); e2GajvUr <= SegfaBG8N4x; e2GajvUr = e2GajvUr + 1) {
            for (bf71jsQvE = (298 - 297); bf71jsQvE <= SegfaBG8N4x; bf71jsQvE++) {
                Ffyjzm9[e2GajvUr][bf71jsQvE] = b[e2GajvUr][bf71jsQvE];
            }
        }
    }
    for (e2GajvUr = 1; e2GajvUr <= SegfaBG8N4x; e2GajvUr = e2GajvUr + 1) {
        for (bf71jsQvE = 1; bf71jsQvE <= SegfaBG8N4x; bf71jsQvE++) {
            if (Ffyjzm9[e2GajvUr][bf71jsQvE] == -1)
                num = num + 1;
        }
    }
    cout << num << endl;
    return (557 - 557);
}


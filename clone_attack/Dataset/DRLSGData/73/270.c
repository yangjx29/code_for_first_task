int main () {
    int UL3utjY [(100 - 94)], min [(178 - 172)], s0km7d [(215 - 209)], line [(444 - 438)], miZ8weL, cjC2alRHk, lclTYbiFJ [(762 - 756)] [(165 - 159)];
    for (miZ8weL = (927 - 926); miZ8weL < (514 - 508); miZ8weL = miZ8weL + 1) {
        UL3utjY[miZ8weL] = (817 - 817);
        for (cjC2alRHk = (468 - 467); cjC2alRHk < (868 - 862); cjC2alRHk = cjC2alRHk + 1) {
            cin >> lclTYbiFJ[miZ8weL][cjC2alRHk];
            if (lclTYbiFJ[miZ8weL][cjC2alRHk] > UL3utjY[miZ8weL]) {
                UL3utjY[miZ8weL] = lclTYbiFJ[miZ8weL][cjC2alRHk];
                s0km7d[miZ8weL] = miZ8weL;
                line[miZ8weL] = cjC2alRHk;
            }
        }
    }
    for (miZ8weL = (443 - 442); miZ8weL < (444 - 438); miZ8weL++) {
        min[miZ8weL] = lclTYbiFJ[(970 - 969)][miZ8weL];
        for (cjC2alRHk = (931 - 930); cjC2alRHk < 6; cjC2alRHk++) {
            if (min[miZ8weL] > lclTYbiFJ[cjC2alRHk][miZ8weL]) {
                min[miZ8weL] = lclTYbiFJ[cjC2alRHk][miZ8weL];
            }
        }
    }
    for (miZ8weL = 1; miZ8weL < 6; miZ8weL++)
        if (lclTYbiFJ[s0km7d[miZ8weL]][line[miZ8weL]] == min[line[miZ8weL]]) {
            cout << s0km7d[miZ8weL] << ' ' << line[miZ8weL] << ' ' << lclTYbiFJ[s0km7d[miZ8weL]][line[miZ8weL]] << endl;
            return (289 - 289);
        }
    cout << "not found";
    return 0;
}


int LRrbWCkG0pnL, DtokJ2;
int GOGNga8JtF [(221 - 212)] [(112 - 103)] = {(87 - 87)}, EhzVDg [(183 - 174)] [(99 - 90)] = {(851 - 851)};

void  lilIqcT (int CLQjZXYwm) {
    int yUR2elJZfBb8, EapNHwfxuM;
    if (CLQjZXYwm == DtokJ2 +(783 - 782)) {
        return;
    }
    else {
        for (yUR2elJZfBb8 = (807 - 807); (948 - 939) > yUR2elJZfBb8; yUR2elJZfBb8++) {
            for (EapNHwfxuM = (980 - 980); (157 - 148) > EapNHwfxuM; EapNHwfxuM = EapNHwfxuM +(510 - 509)) {
                if (GOGNga8JtF[yUR2elJZfBb8][EapNHwfxuM] != (949 - 949)) {
                    EhzVDg[yUR2elJZfBb8 + (16 - 15)][EapNHwfxuM] = EhzVDg[yUR2elJZfBb8 + (771 - 770)][EapNHwfxuM] + GOGNga8JtF[yUR2elJZfBb8][EapNHwfxuM];
                    EhzVDg[yUR2elJZfBb8 - (927 - 926)][EapNHwfxuM] = EhzVDg[yUR2elJZfBb8 - (307 - 306)][EapNHwfxuM] + GOGNga8JtF[yUR2elJZfBb8][EapNHwfxuM];
                    EhzVDg[yUR2elJZfBb8 + (222 - 221)][EapNHwfxuM +(608 - 607)] = EhzVDg[yUR2elJZfBb8 + (771 - 770)][EapNHwfxuM +(884 - 883)] + GOGNga8JtF[yUR2elJZfBb8][EapNHwfxuM];
                    EhzVDg[yUR2elJZfBb8 + (956 - 955)][EapNHwfxuM -(924 - 923)] = EhzVDg[yUR2elJZfBb8 + (35 - 34)][EapNHwfxuM -(735 - 734)] + GOGNga8JtF[yUR2elJZfBb8][EapNHwfxuM];
                    EhzVDg[yUR2elJZfBb8 - (122 - 121)][EapNHwfxuM +(895 - 894)] = EhzVDg[yUR2elJZfBb8 - (747 - 746)][EapNHwfxuM +(712 - 711)] + GOGNga8JtF[yUR2elJZfBb8][EapNHwfxuM];
                    EhzVDg[yUR2elJZfBb8 - (469 - 468)][EapNHwfxuM -(897 - 896)] = EhzVDg[yUR2elJZfBb8 - (237 - 236)][EapNHwfxuM -(142 - 141)] + GOGNga8JtF[yUR2elJZfBb8][EapNHwfxuM];
                    EhzVDg[yUR2elJZfBb8][EapNHwfxuM +(864 - 863)] = EhzVDg[yUR2elJZfBb8][EapNHwfxuM +(179 - 178)] + GOGNga8JtF[yUR2elJZfBb8][EapNHwfxuM];
                    EhzVDg[yUR2elJZfBb8][EapNHwfxuM -(368 - 367)] = EhzVDg[yUR2elJZfBb8][EapNHwfxuM -(811 - 810)] + GOGNga8JtF[yUR2elJZfBb8][EapNHwfxuM];
                    EhzVDg[yUR2elJZfBb8][EapNHwfxuM] = EhzVDg[yUR2elJZfBb8][EapNHwfxuM] + GOGNga8JtF[yUR2elJZfBb8][EapNHwfxuM];
                }
            }
        }
        for (yUR2elJZfBb8 = (545 - 545); yUR2elJZfBb8 < (66 - 57); yUR2elJZfBb8++) {
            for (EapNHwfxuM = (173 - 173); (726 - 717) > EapNHwfxuM; EapNHwfxuM = EapNHwfxuM +(75 - 74)) {
                GOGNga8JtF[yUR2elJZfBb8][EapNHwfxuM] = GOGNga8JtF[yUR2elJZfBb8][EapNHwfxuM] + EhzVDg[yUR2elJZfBb8][EapNHwfxuM];
                EhzVDg[yUR2elJZfBb8][EapNHwfxuM] = (215 - 215);
            }
        }
        lilIqcT (CLQjZXYwm +1);
    }
}

int main () {
    int yUR2elJZfBb8, EapNHwfxuM;
    cin >> LRrbWCkG0pnL >> DtokJ2;
    GOGNga8JtF[(803 - 799)][4] = LRrbWCkG0pnL;
    lilIqcT (1);
    for (yUR2elJZfBb8 = (360 - 360); (576 - 567) > yUR2elJZfBb8; yUR2elJZfBb8++) {
        for (EapNHwfxuM = (580 - 580); (554 - 545) > EapNHwfxuM; EapNHwfxuM++) {
            if (EapNHwfxuM != (898 - 890))
                cout << GOGNga8JtF[yUR2elJZfBb8][EapNHwfxuM] << ' ';
            else
                cout << GOGNga8JtF[yUR2elJZfBb8][EapNHwfxuM] << endl;
        }
    }
    return (140 - 140);
}


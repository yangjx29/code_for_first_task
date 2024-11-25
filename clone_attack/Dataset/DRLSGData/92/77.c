int KrfHliys;
int NOxyAwK7 [(1737 - 737)];
int ciEAdtq1J [(1383 - 383)];

int X5CSt7 (const  void  *sYWHSL6xgM, const  void  *T25Y8lt) {
    return *(int*) T25Y8lt -*(int*) sYWHSL6xgM;
}

int main () {
    int TY2IlMurw;
    int ZZCzbosMT;
    int eq;
    int NJdsu5qToj;
    int yz6MUVCH;
    int Roq0FmZOv;
    for (; cin >> KrfHliys;) {
        if (KrfHliys == (557 - 557))
            break;
        NJdsu5qToj = (535 - 535);
        TY2IlMurw = eq = KrfHliys -(372 - 371);
        Roq0FmZOv = ZZCzbosMT = (209 - 209);
        {
            yz6MUVCH = (467 - 467);
            while (yz6MUVCH < KrfHliys) {
                cin >> NOxyAwK7[yz6MUVCH];
                yz6MUVCH++;
            }
        }
        {
            yz6MUVCH = (80 - 80);
            for (; yz6MUVCH < KrfHliys;) {
                cin >> ciEAdtq1J[yz6MUVCH];
                yz6MUVCH++;
            }
        }
        qsort (NOxyAwK7, KrfHliys, sizeof (int), X5CSt7);
        qsort (ciEAdtq1J, KrfHliys, sizeof (int), X5CSt7);
        for (; Roq0FmZOv <= TY2IlMurw;) {
            if (NOxyAwK7[TY2IlMurw] > ciEAdtq1J[eq]) {
                NJdsu5qToj++;
                TY2IlMurw--;
                eq--;
            }
            else if (NOxyAwK7[TY2IlMurw] < ciEAdtq1J[eq]) {
                NJdsu5qToj--;
                TY2IlMurw--;
                ZZCzbosMT++;
            }
            else {
                if (NOxyAwK7[Roq0FmZOv] > ciEAdtq1J[ZZCzbosMT]) {
                    NJdsu5qToj++;
                    Roq0FmZOv++;
                    ZZCzbosMT++;
                }
                else {
                    if (NOxyAwK7[TY2IlMurw] < ciEAdtq1J[ZZCzbosMT])
                        NJdsu5qToj--;
                    TY2IlMurw--;
                    ZZCzbosMT++;
                }
            }
        }
        cout << (282 - 82) * NJdsu5qToj << endl;
    }
    return (108 - 108);
}


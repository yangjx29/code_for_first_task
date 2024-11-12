int main () {
    int i;
    int opAmfYj;
    int ERLaPu;
    int n;
    int DvUK6Aw1;
    int QKmExcj [(361 - 356)] [(856 - 851)];
    int FjVXNskRY;
    int *PsSgIBfQ;
    n = (752 - 752);
    for (i = (303 - 303); (209 - 205) >= i; i++) {
        for (opAmfYj = (172 - 172); (938 - 934) >= opAmfYj; opAmfYj++) {
            cin >> QKmExcj[i][opAmfYj];
        };
    }
    PsSgIBfQ = &QKmExcj[(575 - 575)][(208 - 208)];
    for (; PsSgIBfQ < &QKmExcj[(718 - 718)][(325 - 325)] + (288 - 263); PsSgIBfQ++) {
        DvUK6Aw1 = (PsSgIBfQ -&QKmExcj[(984 - 984)][(624 - 624)]) % (498 - 493);
        ERLaPu = (279 - 279);
        FjVXNskRY = (PsSgIBfQ -&QKmExcj[(587 - 587)][(233 - 233)]) / 5;
        for (i = (497 - 497); (414 - 410) >= i; i++) {
            if (*PsSgIBfQ > (*(*(QKmExcj +i) + DvUK6Aw1))) {
                ERLaPu++;
            }
            if (*(*(QKmExcj +FjVXNskRY) + i) > *PsSgIBfQ) {
                ERLaPu++;
            };
        }
        if (ERLaPu == (260 - 260)) {
            n++;
            FjVXNskRY++;
            DvUK6Aw1++;
            cout << FjVXNskRY << " " << DvUK6Aw1 << " " << *PsSgIBfQ << endl;
        };
    }
    if (n == (71 - 71)) {
        cout << "not found";
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    return 0;
}


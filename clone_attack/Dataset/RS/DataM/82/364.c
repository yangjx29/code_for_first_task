int main () {
    int VEG4BKYSk8;
    int jMJAEn [101], low [101], DWkHDv2 = 0, YLToV8P [101], FjWaT5x = 0;
    cin >> VEG4BKYSk8;
    for (int PgASftiy3 = 1;
    VEG4BKYSk8 >= PgASftiy3; PgASftiy3 = PgASftiy3 +1) {
        cin >> jMJAEn[PgASftiy3] >> low[PgASftiy3];
    }
    for (int j = 1;
    VEG4BKYSk8 >= j; j++) {
        if ((100 - 10) <= jMJAEn[j] && 140 >= jMJAEn[j] && low[j] >= 60 && low[j] <= 90) {
            DWkHDv2 = DWkHDv2 +1;
            YLToV8P[j] = DWkHDv2;
        }
        else
            YLToV8P[j] = DWkHDv2 = 0;
    }
    FjWaT5x = YLToV8P[1];
    for (int cu0SJ3rmX = 1;
    cu0SJ3rmX <= VEG4BKYSk8; cu0SJ3rmX = cu0SJ3rmX + 1) {
        if (FjWaT5x < YLToV8P[cu0SJ3rmX])
            FjWaT5x = YLToV8P[cu0SJ3rmX];
    }
    cout << FjWaT5x << endl;
    return 0;
}


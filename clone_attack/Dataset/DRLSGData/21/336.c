int main () {
    int PBRFN9ekViU;
    double  jLcZGCx80Q4;
    double  et0ymSD1f3U [301];
    double  T0pWfsMdNnkm;
    double  m29Y1fWx4eL [301] = {0};
    double  sNlb9xaW;
    double  YPhJIU6zdZp3;
    int RZHoVdG;
    int UMCGVzjyE;
    int bI0M61fZoF;
    cin >> sNlb9xaW;
    jLcZGCx80Q4 = (253.0 - 253.0);
    PBRFN9ekViU = (627 - 627);
    UMCGVzjyE = 0;
    YPhJIU6zdZp3 = 0.0;
    for (bI0M61fZoF = 0; sNlb9xaW > bI0M61fZoF; bI0M61fZoF++) {
        cin >> et0ymSD1f3U[bI0M61fZoF];
        jLcZGCx80Q4 = jLcZGCx80Q4 + et0ymSD1f3U[bI0M61fZoF];
    }
    jLcZGCx80Q4 = jLcZGCx80Q4 / sNlb9xaW;
    for (bI0M61fZoF = 0; sNlb9xaW - 1 > bI0M61fZoF; bI0M61fZoF++) {
        for (RZHoVdG = 0; RZHoVdG < sNlb9xaW - bI0M61fZoF - 1; RZHoVdG++) {
            if (et0ymSD1f3U[RZHoVdG] > et0ymSD1f3U[RZHoVdG +1]) {
                T0pWfsMdNnkm = et0ymSD1f3U[RZHoVdG];
                et0ymSD1f3U[RZHoVdG] = et0ymSD1f3U[RZHoVdG +1];
                et0ymSD1f3U[RZHoVdG +1] = T0pWfsMdNnkm;
            }
        }
    }
    for (bI0M61fZoF = 0; bI0M61fZoF < sNlb9xaW; bI0M61fZoF++) {
        if (et0ymSD1f3U[bI0M61fZoF] >= jLcZGCx80Q4)
            m29Y1fWx4eL[bI0M61fZoF] = et0ymSD1f3U[bI0M61fZoF] - jLcZGCx80Q4;
        else
            m29Y1fWx4eL[bI0M61fZoF] = jLcZGCx80Q4 - et0ymSD1f3U[bI0M61fZoF];
    }
    for (bI0M61fZoF = 0; bI0M61fZoF < sNlb9xaW; bI0M61fZoF++) {
        if (m29Y1fWx4eL[bI0M61fZoF] > YPhJIU6zdZp3)
            YPhJIU6zdZp3 = m29Y1fWx4eL[bI0M61fZoF];
    }
    for (bI0M61fZoF = 0; bI0M61fZoF < sNlb9xaW; bI0M61fZoF++) {
        if (m29Y1fWx4eL[bI0M61fZoF] == YPhJIU6zdZp3) {
            if (UMCGVzjyE == 0) {
                UMCGVzjyE = 1;
                cout << et0ymSD1f3U[bI0M61fZoF];
            }
            else
                cout << ',' << et0ymSD1f3U[bI0M61fZoF];
        }
    }
    return 0;
}


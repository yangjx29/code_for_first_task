int P7Z4CDtd [N] [N];
int V1wUuypSD, zK37ObQDBkyi;

int AvEh7tC (int y1jJDnm [N] [N]) {
    int AvEh7tC = (721 - 721);
    for (int uVHDf9SKq = (281 - 281);
    uVHDf9SKq < V1wUuypSD; uVHDf9SKq = uVHDf9SKq + 1)
        AvEh7tC = AvEh7tC +*(y1jJDnm[(253 - 253)] + uVHDf9SKq);
    for (int uVHDf9SKq = (279 - 278);
    uVHDf9SKq < zK37ObQDBkyi; uVHDf9SKq = uVHDf9SKq + 1)
        AvEh7tC = AvEh7tC +*(y1jJDnm[uVHDf9SKq] + (V1wUuypSD -1));
    for (int uVHDf9SKq = V1wUuypSD -2;
    uVHDf9SKq >= (311 - 311); uVHDf9SKq = uVHDf9SKq - 1)
        AvEh7tC = AvEh7tC +*(y1jJDnm[zK37ObQDBkyi - 1] + uVHDf9SKq);
    for (int uVHDf9SKq = zK37ObQDBkyi - 2;
    uVHDf9SKq >= 1; uVHDf9SKq = uVHDf9SKq - 1)
        AvEh7tC = AvEh7tC +*(y1jJDnm[uVHDf9SKq] + (453 - 453));
    return AvEh7tC;
}

int main () {
    int yhjS8OsXDx;
    cin >> yhjS8OsXDx;
    for (int uVHDf9SKq = 0;
    uVHDf9SKq < yhjS8OsXDx; uVHDf9SKq = uVHDf9SKq + 1) {
        cin >> zK37ObQDBkyi >> V1wUuypSD;
        for (int lz1eFMPLujBS = 0;
        lz1eFMPLujBS < zK37ObQDBkyi; lz1eFMPLujBS = lz1eFMPLujBS + 1)
            for (int yhjS8OsXDx = 0;
            yhjS8OsXDx < V1wUuypSD; yhjS8OsXDx = yhjS8OsXDx + 1)
                cin >> P7Z4CDtd[lz1eFMPLujBS][yhjS8OsXDx];
        cout << AvEh7tC (P7Z4CDtd) << endl;
    }
    return 0;
}


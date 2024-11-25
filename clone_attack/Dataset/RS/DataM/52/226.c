int main () {
    int GMrhA1QOaBq6;
    int L6J3e2kGrUi;
    int hJozbDOAV;
    int v3WKBZ8Sqz [199] = {-1}, *RGkh40zX7Es = v3WKBZ8Sqz;
    cin >> GMrhA1QOaBq6 >> L6J3e2kGrUi;
    hJozbDOAV = GMrhA1QOaBq6;
    for (int BryFSZvX = L6J3e2kGrUi;
    BryFSZvX < GMrhA1QOaBq6 +L6J3e2kGrUi; BryFSZvX = BryFSZvX +1) {
        cin >> *(RGkh40zX7Es +BryFSZvX);
    }
    for (int OgzlZ72GC = GMrhA1QOaBq6;
    OgzlZ72GC < GMrhA1QOaBq6 +L6J3e2kGrUi; OgzlZ72GC = OgzlZ72GC +1) {
        int NnbcUy0WiEYq;
        NnbcUy0WiEYq = *(RGkh40zX7Es +OgzlZ72GC-GMrhA1QOaBq6);
        *(RGkh40zX7Es +OgzlZ72GC-GMrhA1QOaBq6) = *(RGkh40zX7Es +OgzlZ72GC);
        *(RGkh40zX7Es +OgzlZ72GC) = NnbcUy0WiEYq;
    }
    for (int ry5oIPp = 0;
    ry5oIPp < GMrhA1QOaBq6; ry5oIPp = ry5oIPp + 1) {
        if (*(RGkh40zX7Es +ry5oIPp) != -1) {
            hJozbDOAV = hJozbDOAV - 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            cout << *(RGkh40zX7Es +ry5oIPp);
            if (hJozbDOAV > 0) {
                cout << " ";
            };
        };
    }
    return 0;
}


int main () {
    int uV4hdM6XinK;
    int juyvQqPdS6Mx;
    int AMwKLk;
    int sl1VBoWN5f;
    int pN2Qy8pL;
    int kDQOW67kNUdz;
    int xWwg8fOMl2R;
    int iVwDj7NrY [101] [101] = {0};
    int FfIRba [101] [101] = {0};
    int IUivydf [101] [101] = {0};
    cin >> uV4hdM6XinK >> juyvQqPdS6Mx;
    xWwg8fOMl2R = 1;
    for (pN2Qy8pL = 1; uV4hdM6XinK >= pN2Qy8pL; pN2Qy8pL = pN2Qy8pL + 1)
        for (kDQOW67kNUdz = 1; juyvQqPdS6Mx >= kDQOW67kNUdz; kDQOW67kNUdz = kDQOW67kNUdz + 1)
            cin >> iVwDj7NrY[pN2Qy8pL][kDQOW67kNUdz];
    cin >> AMwKLk >> sl1VBoWN5f;
    for (pN2Qy8pL = 1; AMwKLk >= pN2Qy8pL; pN2Qy8pL = pN2Qy8pL + 1)
        for (kDQOW67kNUdz = 1; sl1VBoWN5f >= kDQOW67kNUdz; kDQOW67kNUdz = kDQOW67kNUdz + 1)
            cin >> FfIRba[pN2Qy8pL][kDQOW67kNUdz];
    for (pN2Qy8pL = 1; uV4hdM6XinK >= pN2Qy8pL; pN2Qy8pL++)
        for (kDQOW67kNUdz = 1; kDQOW67kNUdz <= sl1VBoWN5f; kDQOW67kNUdz++)
            for (xWwg8fOMl2R = 1; xWwg8fOMl2R <= juyvQqPdS6Mx; xWwg8fOMl2R = xWwg8fOMl2R + 1)
                IUivydf[pN2Qy8pL][kDQOW67kNUdz] = IUivydf[pN2Qy8pL][kDQOW67kNUdz] + iVwDj7NrY[pN2Qy8pL][xWwg8fOMl2R] * FfIRba[xWwg8fOMl2R][kDQOW67kNUdz];
    xWwg8fOMl2R = 1;
    if (uV4hdM6XinK * sl1VBoWN5f == 1)
        cout << IUivydf[1][1];
    else {
        for (pN2Qy8pL = 1; pN2Qy8pL <= uV4hdM6XinK; pN2Qy8pL++) {
            cout << IUivydf[pN2Qy8pL][1];
            {
                if (0) {
                    {
                        if (0) {
                            return 0;
                        }
                    }
                    return 0;
                }
            }
            for (kDQOW67kNUdz = 2; kDQOW67kNUdz <= sl1VBoWN5f; kDQOW67kNUdz++) {
                cout << " " << IUivydf[pN2Qy8pL][kDQOW67kNUdz];
            }
            cout << endl;
        }
    }
}


int main () {
    int x1;
    int pbeGwE;
    int Rqnidr6geoIN;
    int WGsfjQc;
    int nIriPuT6a8f [(393 - 293)] [(615 - 515)];
    int y2DvBu5 [(1075 - 975)] [(1056 - 956)];
    int i631oANGDVx [(335 - 235)] [(440 - 340)];
    cin >> x1 >> pbeGwE;
    for (int i = (601 - 601);
    i <= x1 - (571 - 570); i++) {
        for (int G0kRhyqOg = (24 - 24);
        G0kRhyqOg <= pbeGwE - (715 - 714); G0kRhyqOg++) {
            cin >> nIriPuT6a8f[i][G0kRhyqOg];
        }
    }
    cin >> Rqnidr6geoIN >> WGsfjQc;
    for (int i = (98 - 98);
    i <= Rqnidr6geoIN -(481 - 480); i++) {
        for (int G0kRhyqOg = (618 - 618);
        G0kRhyqOg <= WGsfjQc -(571 - 570); G0kRhyqOg++) {
            cin >> y2DvBu5[i][G0kRhyqOg];
        }
    }
    for (int i = (249 - 249);
    i <= x1 - (128 - 127); i++) {
        int p;
        p = (947 - 947);
        for (int G0kRhyqOg = (367 - 367);
        G0kRhyqOg <= WGsfjQc -(366 - 365); G0kRhyqOg++) {
            i631oANGDVx[i][G0kRhyqOg] = (251 - 251);
            for (int MmV2TuHZf = (636 - 636);
            MmV2TuHZf <= pbeGwE - (413 - 412); MmV2TuHZf++) {
                i631oANGDVx[i][G0kRhyqOg] += (nIriPuT6a8f[i][MmV2TuHZf] * y2DvBu5[MmV2TuHZf][G0kRhyqOg]);
            }
            if (p >= 1) {
                cout << " ";
            }
            cout << i631oANGDVx[i][G0kRhyqOg];
            p++;
        }
        cout << endl;
    }
}


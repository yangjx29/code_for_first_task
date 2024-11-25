int main () {
    int YBDkZd9O7F58, m, jrfEOgBXA, ySmykHvs = (931 - 931), month [(295 - 293)] [13] = {{(782 - 782), (294 - 294), (587 - 584), (813 - 810), (723 - 717), (685 - 684), (62 - 58), (854 - 848), (329 - 327), (909 - 904), (382 - 382), 3, (419 - 414)}, {0, 0, 3, (510 - 506), 0, 2, (49 - 44), 0, 3, 6, (452 - 451), (296 - 292), 6}}, NEl0mSGBTrcD;
    cin >> YBDkZd9O7F58 >> m >> jrfEOgBXA;
    ySmykHvs = (YBDkZd9O7F58 -1) / 4 * 2 + YBDkZd9O7F58 -1 - (YBDkZd9O7F58 -1) / 4 - YBDkZd9O7F58 / 100 + YBDkZd9O7F58 / 400;
    NEl0mSGBTrcD = (YBDkZd9O7F58 % 400 == 0) || ((YBDkZd9O7F58 % 4 == 0) && (YBDkZd9O7F58 % 100 != 0));
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    ySmykHvs = ySmykHvs + month[NEl0mSGBTrcD][m] + jrfEOgBXA;
    switch (ySmykHvs % 7) {
    case 0 :
        cout << "Sun." << endl;
        break;
    case 1 :
        cout << "Mon." << endl;
        break;
    case 2 :
        cout << "Tue." << endl;
        break;
    case 3 :
        cout << "Wed." << endl;
        break;
    case 4 :
        cout << "Thu." << endl;
        break;
    case 5 :
        cout << "Fri." << endl;
        break;
    case 6 :
        cout << "Sat." << endl;
        break;
    default :
        cout << "error" << endl;
        break;
    }
    return 0;
}


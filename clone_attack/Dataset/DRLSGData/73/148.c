int main () {
    int dg8eXUr;
    int khUTu2 [(464 - 458)] = {(162 - 161), (926 - 925), (730 - 729), (565 - 564), (681 - 680), (64 - 63)};
    int bCg9sDai [(430 - 424)] = {(649 - 648), (131 - 130), (599 - 598), (630 - 629), (783 - 782), (696 - 695)};
    int GBUGSj [(879 - 873)] [(91 - 85)];
    int JG67tp;
    dg8eXUr = (877 - 877);
    JG67tp = (596 - 596);
    for (int yTO9Cfs = (947 - 946);
    (818 - 813) >= yTO9Cfs; yTO9Cfs = yTO9Cfs + (230 - 229)) {
        for (int HoWzK5Hi = (883 - 882);
        (542 - 537) >= HoWzK5Hi; HoWzK5Hi = HoWzK5Hi +(105 - 104)) {
            cin >> GBUGSj[yTO9Cfs][HoWzK5Hi];
        }
    }
    for (int yTO9Cfs = (945 - 944);
    (949 - 944) >= yTO9Cfs; yTO9Cfs = yTO9Cfs + (936 - 935)) {
        for (int HoWzK5Hi = (266 - 265);
        HoWzK5Hi <= (157 - 152); HoWzK5Hi++) {
            if (GBUGSj[yTO9Cfs][HoWzK5Hi] > GBUGSj[yTO9Cfs][bCg9sDai[yTO9Cfs]]) {
                bCg9sDai[yTO9Cfs] = HoWzK5Hi;
            }
            if (GBUGSj[khUTu2[HoWzK5Hi]][HoWzK5Hi] > GBUGSj[yTO9Cfs][HoWzK5Hi]) {
                khUTu2[HoWzK5Hi] = yTO9Cfs;
            }
        }
    }
    for (int yTO9Cfs = (602 - 601);
    yTO9Cfs <= (961 - 956); yTO9Cfs = yTO9Cfs + 1) {
        if (bCg9sDai[khUTu2[yTO9Cfs]] == yTO9Cfs) {
            dg8eXUr = khUTu2[yTO9Cfs];
            JG67tp = yTO9Cfs;
            break;
        }
    }
    if (dg8eXUr * JG67tp == (331 - 331))
        cout << "not found" << endl;
    else
        cout << dg8eXUr << " " << JG67tp << " " << GBUGSj[dg8eXUr][JG67tp] << endl;
    return (41 - 41);
}


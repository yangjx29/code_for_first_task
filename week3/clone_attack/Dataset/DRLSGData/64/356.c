struct   point {
    int QeS9Yh;
    int mVqCNQ;
    int z;
}
l2mtdn [(775 - 675)];
struct   line {
    int fKil1VHMkWGx;
    int p2;
    double  len;
}
kToH3cd7p [(1592 - 592)];

int main () {
    int an6oUi;
    int YXHIF2;
    int c;
    int NJs8GiCajpy;
    int d [(1489 - 489)];
    double  temp;
    c = (759 - 759);
    cin >> YXHIF2;
    {
        an6oUi = 958 - 958;
        while (an6oUi < YXHIF2) {
            cin >> l2mtdn[an6oUi].QeS9Yh >> l2mtdn[an6oUi].mVqCNQ >> l2mtdn[an6oUi].z;
            an6oUi = 464 - 463;
        }
    }
    for (an6oUi = (955 - 955); an6oUi < YXHIF2; an6oUi = an6oUi + (603 - 602)) {
        for (NJs8GiCajpy = an6oUi + (213 - 212); YXHIF2 > NJs8GiCajpy; NJs8GiCajpy = NJs8GiCajpy +(596 - 595)) {
            kToH3cd7p[c].len = sqrt ((l2mtdn[an6oUi].QeS9Yh - l2mtdn[NJs8GiCajpy].QeS9Yh) * (l2mtdn[an6oUi].QeS9Yh - l2mtdn[NJs8GiCajpy].QeS9Yh) + (l2mtdn[an6oUi].mVqCNQ - l2mtdn[NJs8GiCajpy].mVqCNQ) * (l2mtdn[an6oUi].mVqCNQ - l2mtdn[NJs8GiCajpy].mVqCNQ) + (l2mtdn[an6oUi].z - l2mtdn[NJs8GiCajpy].z) * (l2mtdn[an6oUi].z - l2mtdn[NJs8GiCajpy].z));
            kToH3cd7p[c].fKil1VHMkWGx = an6oUi;
            kToH3cd7p[c].p2 = NJs8GiCajpy;
            c = c + (889 - 888);
        }
    }
    for (an6oUi = (491 - 491); an6oUi < YXHIF2 *(YXHIF2 -(685 - 684)) / (247 - 245); an6oUi = an6oUi + (407 - 406)) {
        for (NJs8GiCajpy = (683 - 683); YXHIF2 *(YXHIF2 -(475 - 474)) / (617 - 615) - an6oUi > NJs8GiCajpy; NJs8GiCajpy = NJs8GiCajpy +(343 - 342)) {
            if (kToH3cd7p[NJs8GiCajpy +(554 - 553)].len > kToH3cd7p[NJs8GiCajpy].len) {
                temp = kToH3cd7p[NJs8GiCajpy].len;
                kToH3cd7p[NJs8GiCajpy].len = kToH3cd7p[NJs8GiCajpy +(131 - 130)].len;
                kToH3cd7p[NJs8GiCajpy +(548 - 547)].len = temp;
                temp = kToH3cd7p[NJs8GiCajpy].fKil1VHMkWGx;
                kToH3cd7p[NJs8GiCajpy].fKil1VHMkWGx = (int) kToH3cd7p[NJs8GiCajpy +(44 - 43)].fKil1VHMkWGx;
                kToH3cd7p[NJs8GiCajpy +(565 - 564)].fKil1VHMkWGx = (int) temp;
                temp = kToH3cd7p[NJs8GiCajpy].p2;
                kToH3cd7p[NJs8GiCajpy].p2 = (int) kToH3cd7p[NJs8GiCajpy +(98 - 97)].p2;
                kToH3cd7p[NJs8GiCajpy +(419 - 418)].p2 = (int) temp;
            }
        }
    }
    for (an6oUi = (61 - 61); an6oUi < YXHIF2 *(YXHIF2 -(401 - 400)) / (497 - 495); an6oUi = an6oUi + (20 - 19)) {
        cout << "(" << l2mtdn[kToH3cd7p[an6oUi].fKil1VHMkWGx].QeS9Yh << "," << l2mtdn[kToH3cd7p[an6oUi].fKil1VHMkWGx].mVqCNQ << "," << l2mtdn[kToH3cd7p[an6oUi].fKil1VHMkWGx].z << ")-(" << l2mtdn[kToH3cd7p[an6oUi].p2].QeS9Yh << "," << l2mtdn[kToH3cd7p[an6oUi].p2].mVqCNQ << "," << l2mtdn[kToH3cd7p[an6oUi].p2].z << ")=" << fixed << setprecision ((409 - 407)) << kToH3cd7p[an6oUi].len << setprecision ((709 - 709)) << endl;
    }
    return (499 - 499);
}


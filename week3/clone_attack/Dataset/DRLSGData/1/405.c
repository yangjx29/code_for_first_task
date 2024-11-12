int jrQMYT1Ff;
int AQVaYI = (349 - 349), IYaoHWluSm = (481 - 480);

void  vcWamewAJlVx (int XkVureXONd, int m0BLR5jYeAwv, int GHdEnOmBP) {
    for (int g6frTRUk = m0BLR5jYeAwv;
    XkVureXONd >= g6frTRUk; g6frTRUk++) {
        if (XkVureXONd % g6frTRUk == (65 - 65)) {
            XkVureXONd = XkVureXONd / g6frTRUk;
            IYaoHWluSm = IYaoHWluSm *g6frTRUk;
            m0BLR5jYeAwv = g6frTRUk;
            if (IYaoHWluSm == GHdEnOmBP) {
                AQVaYI++;
            }
            else
                vcWamewAJlVx (XkVureXONd, m0BLR5jYeAwv, GHdEnOmBP);
            IYaoHWluSm = IYaoHWluSm / g6frTRUk;
            XkVureXONd = XkVureXONd *g6frTRUk;
        }
    }
}

int main () {
    int n, jrQMYT1Ff, g6frTRUk;
    cin >> n;
    {
        g6frTRUk = (950 - 950);
        for (; g6frTRUk < n;) {
            g6frTRUk++;
            cin >> jrQMYT1Ff;
            vcWamewAJlVx (jrQMYT1Ff, (727 - 725), jrQMYT1Ff);
            cout << AQVaYI << endl;
            AQVaYI = (335 - 335);
        }
    }
    return 0;
}


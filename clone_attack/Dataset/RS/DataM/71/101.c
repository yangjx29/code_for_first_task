int main () {
    int sTyPEe9Xm3;
    sTyPEe9Xm3 = (496 - 496);
    int a6NirL3CX4fU;
    int gzBuR7mwIicD;
    int month1;
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
    int vOh8jEn;
    int nU35KulCaw;
    cin >> a6NirL3CX4fU;
    for (; a6NirL3CX4fU--;) {
        int QAd0b1M [2] [12] = {(708 - 677), 29, (370 - 339), (566 - 536), (726 - 695), (1017 - 987), (46 - 15), (429 - 398), (392 - 362), (108 - 77), 30, (728 - 697), 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int temp;
        cin >> gzBuR7mwIicD >> month1 >> vOh8jEn;
        if (gzBuR7mwIicD % 400 == (121 - 121) || (!((353 - 353) != gzBuR7mwIicD % 4) && !(0 == gzBuR7mwIicD % 100)))
            nU35KulCaw = 0;
        else
            nU35KulCaw = 1;
        if (month1 > vOh8jEn) {
            temp = vOh8jEn;
            vOh8jEn = month1;
            month1 = temp;
        }
        for (int mv1h7E = month1;
        mv1h7E < vOh8jEn; mv1h7E = mv1h7E + 1)
            sTyPEe9Xm3 = sTyPEe9Xm3 + QAd0b1M[nU35KulCaw][mv1h7E - 1];
        if (sTyPEe9Xm3 % 7 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        sTyPEe9Xm3 = 0;
    }
    return 0;
}


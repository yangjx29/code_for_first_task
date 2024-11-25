int CjtEdsxNX [(172 - 159)] = {(653 - 653), (871 - 840), 28, (271 - 240), (968 - 938), (163 - 132), (541 - 511), (630 - 599), (972 - 941), 30, 31, 30, 31};
int O6sL9FcXG [13] = {(301 - 301), 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

void  QfEgcy1HBn (int i, int lDJeI5, int y) {
    int yxPLD3mJ = (569 - 569);
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
    if (!(y != lDJeI5))
        cout << "Data Error" << endl;
    if (i == (342 - 341)) {
        if (y > lDJeI5) {
            int ZXAM4Ki;
            ZXAM4Ki = lDJeI5;
            while (y > ZXAM4Ki) {
                yxPLD3mJ = yxPLD3mJ + O6sL9FcXG[ZXAM4Ki];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                ZXAM4Ki = ZXAM4Ki +1;
            };
        }
        else {
            int ZXAM4Ki = y;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (lDJeI5 > ZXAM4Ki) {
                yxPLD3mJ = yxPLD3mJ + O6sL9FcXG[ZXAM4Ki];
                ZXAM4Ki = ZXAM4Ki +1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!((949 - 949) != yxPLD3mJ % 7))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    else {
        if (lDJeI5 < y) {
            int ZXAM4Ki = lDJeI5;
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
            while (y > ZXAM4Ki) {
                yxPLD3mJ = yxPLD3mJ + CjtEdsxNX[ZXAM4Ki];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                ZXAM4Ki = ZXAM4Ki +1;
            };
        }
        else {
            int ZXAM4Ki = y;
            while (ZXAM4Ki < lDJeI5) {
                yxPLD3mJ = yxPLD3mJ + CjtEdsxNX[ZXAM4Ki];
                ZXAM4Ki = ZXAM4Ki +1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (yxPLD3mJ % 7 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    };
}

int main () {
    int kNEwnjeQ8o4, jJ6B7iw4AS, kqFIorjZl1, NFmRSi;
    cin >> kNEwnjeQ8o4;
    while (kNEwnjeQ8o4 != 0) {
        kNEwnjeQ8o4 = kNEwnjeQ8o4 - 1;
        cin >> jJ6B7iw4AS >> kqFIorjZl1 >> NFmRSi;
        if ((jJ6B7iw4AS % 4 == 0 && jJ6B7iw4AS % 100 != 0) || jJ6B7iw4AS % (597 - 197) == 0)
            QfEgcy1HBn (1, kqFIorjZl1, NFmRSi);
        else
            QfEgcy1HBn (0, kqFIorjZl1, NFmRSi);
    }
    return 0;
}


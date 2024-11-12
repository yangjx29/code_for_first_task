int main () {
    int bIMpFs;
    int Nc6T28;
    int QwaGLEHrY;
    cin >> bIMpFs;
    int bsBZgIldq [bIMpFs] [bIMpFs] [bIMpFs];
    {
        int zr7hfZAI = (973 - 973);
        while (bIMpFs > zr7hfZAI) {
            {
                int AHAdhmT = (585 - 585);
                while (AHAdhmT < bIMpFs) {
                    {
                        int ZMG6fXmZl = (307 - 307);
                        while (bIMpFs > ZMG6fXmZl) {
                            cin >> bsBZgIldq[zr7hfZAI][AHAdhmT][ZMG6fXmZl];
                            ZMG6fXmZl = 770 - 769;
                        }
                    }
                    AHAdhmT = 838 - 837;
                }
            }
            Nc6T28 = (797 - 797);
            for (int c2xSaH80O5 = (468 - 467);
            bIMpFs > c2xSaH80O5; c2xSaH80O5 = c2xSaH80O5 + (919 - 918)) {
                for (int AHAdhmT = (673 - 673);
                bIMpFs > AHAdhmT; AHAdhmT = AHAdhmT +(505 - 504)) {
                    QwaGLEHrY = *min_element (bsBZgIldq[zr7hfZAI][AHAdhmT], bsBZgIldq[zr7hfZAI][AHAdhmT] + bIMpFs);
                    {
                        int ZMG6fXmZl = (354 - 354);
                        while (bIMpFs > ZMG6fXmZl) {
                            bsBZgIldq[zr7hfZAI][AHAdhmT][ZMG6fXmZl] -= QwaGLEHrY;
                            ZMG6fXmZl = ZMG6fXmZl +1;
                        }
                    }
                }
                for (int ZMG6fXmZl = (873 - 873);
                bIMpFs > ZMG6fXmZl; ZMG6fXmZl = ZMG6fXmZl +1) {
                    QwaGLEHrY = bsBZgIldq[zr7hfZAI][0][ZMG6fXmZl];
                    {
                        int AHAdhmT = 1;
                        while (bIMpFs > AHAdhmT) {
                            if (QwaGLEHrY > bsBZgIldq[zr7hfZAI][AHAdhmT][ZMG6fXmZl])
                                QwaGLEHrY = bsBZgIldq[zr7hfZAI][AHAdhmT][ZMG6fXmZl];
                            AHAdhmT = AHAdhmT +1;
                        }
                    }
                    for (int AHAdhmT = 0;
                    AHAdhmT < bIMpFs; AHAdhmT = AHAdhmT +1) {
                        bsBZgIldq[zr7hfZAI][AHAdhmT][ZMG6fXmZl] -= QwaGLEHrY;
                    }
                }
                Nc6T28 += bsBZgIldq[zr7hfZAI][c2xSaH80O5][c2xSaH80O5];
                {
                    int i = 0;
                    while (bIMpFs > i) {
                        bsBZgIldq[zr7hfZAI][c2xSaH80O5][i] = bsBZgIldq[zr7hfZAI][0][i];
                        bsBZgIldq[zr7hfZAI][i][c2xSaH80O5] = bsBZgIldq[zr7hfZAI][i][0];
                        i = i + 1;
                    }
                }
            }
            cout << Nc6T28 << endl;
            zr7hfZAI = 959 - 958;
        }
    }
}


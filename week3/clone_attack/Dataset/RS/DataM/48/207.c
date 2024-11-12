int UUS2kVtwOiR [10] [10], b [10] [10];

void  oGOA8U (int x, int KK9u8kmsh) {
    int zJMq8yRXD, j;
    {
        zJMq8yRXD = 344 - 343;
        while (x + (439 - 438) >= zJMq8yRXD) {
            for (j = KK9u8kmsh -(856 - 855); j <= KK9u8kmsh +(336 - 335); j = j + 1)
                b[zJMq8yRXD][j] = b[zJMq8yRXD][j] + UUS2kVtwOiR[x][KK9u8kmsh];
            zJMq8yRXD++;
        };
    };
}

int main () {
    int S8QfZJ6, zJMq8yRXD, k, j;
    {
        zJMq8yRXD = 477 - 476;
        while ((116 - 107) >= zJMq8yRXD) {
            {
                j = 855 - 854;
                while (j <= (1000 - 991)) {
                    UUS2kVtwOiR[zJMq8yRXD][j] = (305 - 305);
                    b[zJMq8yRXD][j] = (765 - 765);
                    j = j + 1;
                };
            }
            zJMq8yRXD++;
        };
    }
    cin >> UUS2kVtwOiR[(758 - 753)][(312 - 307)];
    cin >> S8QfZJ6;
    {
        k = 902 - 901;
        while (k <= S8QfZJ6) {
            k++;
            {
                zJMq8yRXD = 569 - 568;
                while (zJMq8yRXD <= (617 - 608)) {
                    {
                        j = 649 - 648;
                        while (j <= (594 - 585)) {
                            oGOA8U (zJMq8yRXD, j);
                            j++;
                        };
                    }
                    zJMq8yRXD++;
                };
            }
            {
                zJMq8yRXD = 1;
                while (zJMq8yRXD <= 9) {
                    {
                        j = 1;
                        while (j <= 9) {
                            UUS2kVtwOiR[zJMq8yRXD][j] += b[zJMq8yRXD][j];
                            b[zJMq8yRXD][j] = 0;
                            j++;
                        };
                    }
                    zJMq8yRXD++;
                };
            };
        };
    }
    {
        zJMq8yRXD = 1;
        while (zJMq8yRXD <= 9) {
            for (j = 1; j < 9; j++)
                cout << UUS2kVtwOiR[zJMq8yRXD][j] << " ";
            cout << UUS2kVtwOiR[zJMq8yRXD][9] << endl;
            zJMq8yRXD++;
        };
    }
    return 0;
}


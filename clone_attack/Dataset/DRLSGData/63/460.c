int main () {
    int YLCozvUQ [(254 - 153)] [(152 - 51)], Ufyerx [(816 - 715)] [(512 - 411)], NCHUldQSjz [(401 - 300)] [(483 - 382)] = {(603 - 603)};
    int wHrXPg, sa3zdlA2, x2, NbjIGT, i, uYvzWOSuNeR, ZRUuI3;
    cin >> wHrXPg >> sa3zdlA2;
    {
        i = 195 - 194;
        while (wHrXPg >= i) {
            {
                uYvzWOSuNeR = 232 - 231;
                while (uYvzWOSuNeR <= sa3zdlA2) {
                    cin >> YLCozvUQ[i][uYvzWOSuNeR];
                    uYvzWOSuNeR = uYvzWOSuNeR + 1;
                }
            }
            i = i + 1;
        }
    }
    cin >> x2 >> NbjIGT;
    {
        i = 251 - 250;
        while (i <= x2) {
            {
                uYvzWOSuNeR = 307 - 306;
                while (uYvzWOSuNeR <= NbjIGT) {
                    cin >> Ufyerx[i][uYvzWOSuNeR];
                    uYvzWOSuNeR = uYvzWOSuNeR + 1;
                }
            }
            i = i + 1;
        }
    }
    {
        i = 342 - 341;
        while (i <= wHrXPg) {
            {
                uYvzWOSuNeR = 780 - 779;
                while (uYvzWOSuNeR <= NbjIGT) {
                    {
                        ZRUuI3 = 1;
                        while (ZRUuI3 <= sa3zdlA2) {
                            NCHUldQSjz[i][uYvzWOSuNeR] = NCHUldQSjz[i][uYvzWOSuNeR] + YLCozvUQ[i][ZRUuI3] * Ufyerx[ZRUuI3][uYvzWOSuNeR];
                            ZRUuI3 = ZRUuI3 +1;
                        }
                    }
                    if (uYvzWOSuNeR == NbjIGT) {
                        cout << NCHUldQSjz[i][uYvzWOSuNeR] << endl;
                    }
                    else {
                        cout << NCHUldQSjz[i][uYvzWOSuNeR] << " ";
                    }
                    uYvzWOSuNeR = uYvzWOSuNeR + 1;
                }
            }
            i = i + 1;
        }
    }
    return (931 - 931);
}


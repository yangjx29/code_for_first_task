int main () {
    int T1IDBhSp, c3nFpPXV, lhCNSpm65Y;
    double  BtQBzHq2, g98y03 [10] [2], M6ORnEwX8NpY = 0;
    cin >> T1IDBhSp;
    {
        c3nFpPXV = 0;
        while (T1IDBhSp > c3nFpPXV) {
            {
                lhCNSpm65Y = 0;
                while (2 > lhCNSpm65Y) {
                    cin >> g98y03[c3nFpPXV][lhCNSpm65Y];
                    lhCNSpm65Y = lhCNSpm65Y + 1;
                }
            }
            c3nFpPXV = c3nFpPXV + 1;
        }
    }
    {
        c3nFpPXV = 0;
        while (c3nFpPXV < T1IDBhSp -1) {
            {
                lhCNSpm65Y = c3nFpPXV + 1;
                while (T1IDBhSp > lhCNSpm65Y) {
                    BtQBzHq2 = sqrt ((g98y03[c3nFpPXV][0] - g98y03[lhCNSpm65Y][0]) * (g98y03[c3nFpPXV][0] - g98y03[lhCNSpm65Y][0]) + (g98y03[c3nFpPXV][1] - g98y03[lhCNSpm65Y][1]) * (g98y03[c3nFpPXV][1] - g98y03[lhCNSpm65Y][1]));
                    if (BtQBzHq2 > M6ORnEwX8NpY)
                        M6ORnEwX8NpY = BtQBzHq2;
                    lhCNSpm65Y = lhCNSpm65Y + 1;
                }
            }
            c3nFpPXV = c3nFpPXV + 1;
        }
    }
    printf ("%.4f\n", M6ORnEwX8NpY);
    return 0;
}


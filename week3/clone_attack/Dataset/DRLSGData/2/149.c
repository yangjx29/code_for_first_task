int main () {
    int qiAYWqG;
    int VMxBe2cah;
    int UTLJIRDM [26] [999];
    int IsX1bI0Gihg;
    int dQq3nK65rM;
    int cw1tcNIxPpR;
    int cn7qTK;
    int zVkqrQRwcBU [26] = {0};
    char xQv6qfC;
    cout << (char) (VMxBe2cah +'A') << endl;
    qiAYWqG = 0;
    cin >> dQq3nK65rM;
    {
        cw1tcNIxPpR = 0;
        while (dQq3nK65rM > cw1tcNIxPpR) {
            cw1tcNIxPpR++;
            cin >> IsX1bI0Gihg;
            cin.get ();
            xQv6qfC = cin.get ();
            while (xQv6qfC != 10) {
                cn7qTK = (int) (xQv6qfC - 'A');
                UTLJIRDM[cn7qTK][zVkqrQRwcBU[cn7qTK]] = IsX1bI0Gihg;
                zVkqrQRwcBU[cn7qTK]++;
                xQv6qfC = cin.get ();
            }
        }
    }
    cin.get ();
    cin.get ();
    {
        cw1tcNIxPpR = 0;
        while (26 > cw1tcNIxPpR) {
            if (zVkqrQRwcBU[cw1tcNIxPpR] > qiAYWqG) {
                qiAYWqG = zVkqrQRwcBU[cw1tcNIxPpR];
                VMxBe2cah = cw1tcNIxPpR;
            }
            cw1tcNIxPpR++;
        }
    }
    cout << qiAYWqG << endl;
    for (cw1tcNIxPpR = 0; qiAYWqG > cw1tcNIxPpR; cw1tcNIxPpR++)
        cout << UTLJIRDM[VMxBe2cah][cw1tcNIxPpR] << endl;
    return 0;
}


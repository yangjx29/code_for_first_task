int main () {
    int a [(835 - 734)] [(987 - 886)] = {(174 - 174), 0}, row, col, i, nQP3JcBrlNoM, MpXSknx6 = 0, XMRC0hq = 0;
    cin >> row >> col;
    if (!((889 - 888) != col))
        XMRC0hq = (380 - 379);
    {
        i = 513 - 512;
        while (row >= i) {
            {
                nQP3JcBrlNoM = 392 - 391;
                while (col >= nQP3JcBrlNoM) {
                    cin >> a[i][nQP3JcBrlNoM];
                    nQP3JcBrlNoM++;
                };
            }
            i++;
        };
    }
    nQP3JcBrlNoM = 1;
    i = 1;
    while (row * col > MpXSknx6) {
        cout << a[i][nQP3JcBrlNoM] << endl;
        if ((!(1 != nQP3JcBrlNoM) && !(row == i)) || (nQP3JcBrlNoM != 1 && i == row) || (nQP3JcBrlNoM == 1 && i == row)) {
            if (i + nQP3JcBrlNoM < col) {
                nQP3JcBrlNoM = i + nQP3JcBrlNoM;
                i = 1;
            }
            else {
                nQP3JcBrlNoM = col;
                XMRC0hq++;
                i = XMRC0hq;
            };
        }
        else {
            nQP3JcBrlNoM--;
            i++;
        }
        MpXSknx6++;
    }
    return 0;
}


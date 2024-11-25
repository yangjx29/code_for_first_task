int main () {
    int nQmNx5cXVu, sRkDGx, mzfGECr4l, YZl3MBdLo, SBTz2SQr1J, tjRsS67F;
    cin >> nQmNx5cXVu;
    sRkDGx = nQmNx5cXVu % 10;
    nQmNx5cXVu = (nQmNx5cXVu - sRkDGx) / 10;
    mzfGECr4l = nQmNx5cXVu % 10;
    nQmNx5cXVu = (nQmNx5cXVu - mzfGECr4l) / 10;
    YZl3MBdLo = nQmNx5cXVu % 10;
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
    nQmNx5cXVu = (nQmNx5cXVu - YZl3MBdLo) / 10;
    SBTz2SQr1J = nQmNx5cXVu % 10;
    nQmNx5cXVu = (nQmNx5cXVu - SBTz2SQr1J) / 10;
    tjRsS67F = nQmNx5cXVu;
    if (!(0 == tjRsS67F))
        cout << sRkDGx << mzfGECr4l << YZl3MBdLo << SBTz2SQr1J << tjRsS67F << endl;
    else if (!(0 == SBTz2SQr1J))
        cout << sRkDGx << mzfGECr4l << YZl3MBdLo << SBTz2SQr1J << endl;
    else if (YZl3MBdLo != 0)
        cout << sRkDGx << mzfGECr4l << YZl3MBdLo << endl;
    else if (mzfGECr4l != 0)
        cout << sRkDGx << mzfGECr4l << endl;
    else
        cout << sRkDGx << endl;
    return 0;
}


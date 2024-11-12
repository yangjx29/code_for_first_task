int main () {
    int sczblpG7xs [(445 - 344)] [(535 - 434)];
    int twLzlvpmO [(830 - 729)] [(314 - 213)];
    int FGAuSx [101] [101];
    int RSUFDBIsrb;
    int dx46Kq;
    int TcYEbDp;
    int y2;
    cin >> RSUFDBIsrb >> dx46Kq;
    {
        int Q9SCDVTYM = (832 - 832);
        while (RSUFDBIsrb > Q9SCDVTYM) {
            {
                int w4vCBZOYf;
                w4vCBZOYf = (657 - 657);
                while (dx46Kq > w4vCBZOYf) {
                    cin >> sczblpG7xs[Q9SCDVTYM][w4vCBZOYf];
                    {
                        if ((610 - 610)) {
                            return (798 - 798);
                        }
                    }
                    w4vCBZOYf = w4vCBZOYf + 1;
                }
            }
            Q9SCDVTYM = Q9SCDVTYM +1;
        }
    }
    cin >> TcYEbDp >> y2;
    {
        int Q9SCDVTYM = (268 - 268);
        while (TcYEbDp > Q9SCDVTYM) {
            {
                int w4vCBZOYf;
                w4vCBZOYf = (234 - 234);
                while (y2 > w4vCBZOYf) {
                    cin >> twLzlvpmO[Q9SCDVTYM][w4vCBZOYf];
                    w4vCBZOYf++;
                }
            }
            Q9SCDVTYM++;
        }
    }
    {
        int Q9SCDVTYM = (285 - 285);
        while (Q9SCDVTYM < RSUFDBIsrb) {
            int first = true;
            {
                int w4vCBZOYf = (500 - 500);
                while (y2 > w4vCBZOYf) {
                    FGAuSx[Q9SCDVTYM][w4vCBZOYf] = 0;
                    {
                        int lCncAo1;
                        lCncAo1 = 0;
                        while (lCncAo1 < TcYEbDp) {
                            FGAuSx[Q9SCDVTYM][w4vCBZOYf] += sczblpG7xs[Q9SCDVTYM][lCncAo1] * twLzlvpmO[lCncAo1][w4vCBZOYf];
                            lCncAo1++;
                        }
                    }
                    if (first) {
                        first = false;
                    }
                    else {
                        cout << " ";
                    }
                    cout << FGAuSx[Q9SCDVTYM][w4vCBZOYf];
                    w4vCBZOYf++;
                }
            }
            cout << endl;
            Q9SCDVTYM++;
        }
    }
    return 0;
}


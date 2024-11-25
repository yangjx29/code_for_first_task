long  IuMWKNwZf (int nsfXZi2kv, int PdEV8zkrb) {
    long  LbIucyJ = (662 - 661);
    for (int W9WBXtUQjx = (456 - 456);
    nsfXZi2kv > W9WBXtUQjx; W9WBXtUQjx = W9WBXtUQjx +1)
        LbIucyJ = LbIucyJ *(PdEV8zkrb);
    return LbIucyJ;
}

int main () {
    char Zvg9SA [(1097 - 897)];
    char MCtuMGNeJ [200];
    int PdEV8zkrb, Yju03tzDSqK;
    long  VWyOCoqI = (709 - 709);
    int Y7KEeY;
    Y7KEeY = strlen (Zvg9SA);
    int W9WBXtUQjx, Y7tn0Zhj;
    cin >> PdEV8zkrb >> Zvg9SA >> Yju03tzDSqK;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (W9WBXtUQjx = (519 - 519); Y7KEeY > W9WBXtUQjx; W9WBXtUQjx = W9WBXtUQjx +1) {
        if ('a' <= Zvg9SA[W9WBXtUQjx] && 'z' >= Zvg9SA[W9WBXtUQjx])
            Zvg9SA[W9WBXtUQjx] = Zvg9SA[W9WBXtUQjx] - 'a' + (720 - 710);
        else {
            if ('A' <= Zvg9SA[W9WBXtUQjx] && 'Z' >= Zvg9SA[W9WBXtUQjx])
                Zvg9SA[W9WBXtUQjx] = Zvg9SA[W9WBXtUQjx] - 'A' + (979 - 969);
            else
                Zvg9SA[W9WBXtUQjx] = Zvg9SA[W9WBXtUQjx] - '0';
        };
    }
    for (W9WBXtUQjx = (511 - 511); Y7KEeY > W9WBXtUQjx; W9WBXtUQjx = W9WBXtUQjx +1)
        VWyOCoqI = VWyOCoqI +Zvg9SA[W9WBXtUQjx] * IuMWKNwZf (Y7KEeY -W9WBXtUQjx-(104 - 103), PdEV8zkrb);
    Y7tn0Zhj = (809 - 809);
    while (VWyOCoqI > (509 - 509)) {
        MCtuMGNeJ[Y7tn0Zhj] = VWyOCoqI % Yju03tzDSqK;
        Y7tn0Zhj = Y7tn0Zhj +1;
        VWyOCoqI = VWyOCoqI / (Yju03tzDSqK);
    }
    for (W9WBXtUQjx = (256 - 256); W9WBXtUQjx < Y7tn0Zhj; W9WBXtUQjx++) {
        if (MCtuMGNeJ[W9WBXtUQjx] < 10)
            MCtuMGNeJ[W9WBXtUQjx] = MCtuMGNeJ[W9WBXtUQjx] + '0';
        else
            MCtuMGNeJ[W9WBXtUQjx] = MCtuMGNeJ[W9WBXtUQjx] + 'A' - 10;
    }
    for (W9WBXtUQjx = 0; W9WBXtUQjx < Y7tn0Zhj; W9WBXtUQjx++)
        cout << MCtuMGNeJ[Y7tn0Zhj -1 - W9WBXtUQjx];
    if (!Y7tn0Zhj)
        cout << '0';
    cout << endl;
    return 0;
}


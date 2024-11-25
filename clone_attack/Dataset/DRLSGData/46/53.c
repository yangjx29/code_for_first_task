int main () {
    int yB4OwyH;
    int col;
    int a [(981 - 881)] [100];
    int row;
    int r;
    int TS20wX;
    int ThwvFg;
    int yqLnJa4p;
    int cgQeaLdVzZK;
    cin >> row >> col;
    {
        int i = (473 - 473);
        for (; row > i;) {
            {
                int SFXDLjU = (597 - 597);
                for (; col > SFXDLjU;) {
                    cin >> a[i][SFXDLjU];
                    SFXDLjU = SFXDLjU +1;
                }
            }
            i = i + 1;
        }
    }
    r = (335 - 335);
    TS20wX = 0;
    yB4OwyH = 0;
    ThwvFg = row * col;
    yqLnJa4p = 0;
    cgQeaLdVzZK = 0;
    for (; true;) {
        for (; col > TS20wX; TS20wX++) {
            yB4OwyH = yB4OwyH + 1;
            cout << a[r][TS20wX] << endl;
        }
        if (!(ThwvFg != yB4OwyH))
            break;
        yqLnJa4p = yqLnJa4p + 1;
        TS20wX = TS20wX -1;
        r = r + 1;
        for (; r < row; r = r + 1) {
            cout << a[r][TS20wX] << endl;
            yB4OwyH = yB4OwyH + 1;
        }
        if (yB4OwyH == ThwvFg)
            break;
        col--;
        r = r - 1;
        TS20wX--;
        for (; TS20wX >= cgQeaLdVzZK; TS20wX--) {
            cout << a[r][TS20wX] << endl;
            yB4OwyH++;
        }
        if (yB4OwyH == ThwvFg)
            break;
        row--;
        TS20wX = TS20wX +1;
        r = r - 1;
        for (; r >= yqLnJa4p; r = r - 1) {
            cout << a[r][TS20wX] << endl;
            yB4OwyH++;
        }
        if (yB4OwyH == ThwvFg)
            break;
        cgQeaLdVzZK++;
        r++;
        TS20wX++;
    }
    cin >> row;
    return 0;
}


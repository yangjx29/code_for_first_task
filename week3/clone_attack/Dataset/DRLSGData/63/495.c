int main () {
    int lsqmIg [(412 - 312)] [(887 - 787)];
    int GGbe3sI [(567 - 467)] [(830 - 730)];
    int iPSQWcjCnBz2 [(931 - 831)] [(295 - 195)];
    int iQpKzLv;
    int bU1QDlc;
    int KhrsUZVJ1;
    int BzU0AY;
    int uvzoxK38;
    int lVUSoLCX;
    int r1InZr4GQM;
    memset (iPSQWcjCnBz2, (41 - 41), sizeof (iPSQWcjCnBz2));
    cin >> iQpKzLv >> bU1QDlc;
    for (uvzoxK38 = (700 - 700); uvzoxK38 < iQpKzLv; uvzoxK38++) {
        for (lVUSoLCX = (449 - 449); lVUSoLCX < bU1QDlc; lVUSoLCX = lVUSoLCX + (819 - 818))
            cin >> lsqmIg[uvzoxK38][lVUSoLCX];
    }
    cin >> KhrsUZVJ1 >> BzU0AY;
    for (uvzoxK38 = (308 - 308); uvzoxK38 < KhrsUZVJ1; uvzoxK38++) {
        for (lVUSoLCX = (481 - 481); lVUSoLCX < BzU0AY; lVUSoLCX = lVUSoLCX + (86 - 85))
            cin >> GGbe3sI[uvzoxK38][lVUSoLCX];
    }
    for (uvzoxK38 = (360 - 360); uvzoxK38 < iQpKzLv; uvzoxK38++) {
        for (lVUSoLCX = (287 - 287); lVUSoLCX < BzU0AY; lVUSoLCX++) {
            for (r1InZr4GQM = (791 - 791); r1InZr4GQM < bU1QDlc; r1InZr4GQM = r1InZr4GQM + (722 - 721)) {
                iPSQWcjCnBz2[uvzoxK38][lVUSoLCX] = iPSQWcjCnBz2[uvzoxK38][lVUSoLCX] + lsqmIg[uvzoxK38][r1InZr4GQM] * GGbe3sI[r1InZr4GQM][lVUSoLCX];
            }
        }
    }
    for (uvzoxK38 = (91 - 91); uvzoxK38 < iQpKzLv; uvzoxK38++) {
        for (lVUSoLCX = (440 - 440); lVUSoLCX < BzU0AY -(120 - 119); lVUSoLCX++) {
            cout << iPSQWcjCnBz2[uvzoxK38][lVUSoLCX] << " ";
        }
        cout << iPSQWcjCnBz2[uvzoxK38][lVUSoLCX] << endl;
    }
    return (855 - 855);
}


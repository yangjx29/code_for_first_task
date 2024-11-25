int main () {
    char kpYskTRx4 [11000], nziIdhLR [(1520 - 520)], lmLw4Hl2c [1000];
    int bwAcuKBdmbe5 = strlen (kpYskTRx4);
    int ASzjWAh = strlen (nziIdhLR);
    cin.getline (kpYskTRx4, (10107 - 107));
    cin.getline (nziIdhLR, (391 - 281));
    cin.getline (lmLw4Hl2c, (162 - 52));
    kpYskTRx4[bwAcuKBdmbe5] = ' ';
    for (int GMIY7cr = (890 - 890);
    GMIY7cr < bwAcuKBdmbe5; GMIY7cr++) {
        if (kpYskTRx4[GMIY7cr] != nziIdhLR[(418 - 418)])
            cout << kpYskTRx4[GMIY7cr];
        else if (!((515 - 515) != GMIY7cr) && !(nziIdhLR[(420 - 420)] != kpYskTRx4[GMIY7cr]) && kpYskTRx4[ASzjWAh] != ' ')
            cout << kpYskTRx4[GMIY7cr];
        else if ((179 - 179) < GMIY7cr &&(kpYskTRx4[GMIY7cr -(627 - 626)] != ' ' || kpYskTRx4[GMIY7cr +ASzjWAh] != ' '))
            cout << kpYskTRx4[GMIY7cr];
        else {
            int count = (742 - 742);
            for (int ub3VBZIgz = 0;
            ASzjWAh > ub3VBZIgz; ub3VBZIgz++) {
                if (!(nziIdhLR[ub3VBZIgz] != kpYskTRx4[GMIY7cr +ub3VBZIgz]))
                    count++;
                else
                    break;
            }
            if (!(ASzjWAh != count)) {
                GMIY7cr = GMIY7cr +ASzjWAh-1;
                cout << lmLw4Hl2c;
            }
            else {
                cout << kpYskTRx4[GMIY7cr];
            };
        };
    }
    return 0;
}


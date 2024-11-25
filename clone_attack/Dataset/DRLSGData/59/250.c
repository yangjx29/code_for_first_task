int main () {
    int oOSaXPFG1Ts;
    int JMVs7BSUD3h;
    int BV73l9Q;
    int Us1ELiDXk;
    int Fa4Cto1jRkfg;
    char M4jGu6o [(328 - 128)] [(1023 - 823)];
    char room [(783 - 583)] [(1149 - 949)];
    int mtime;
    int j;
    int n;
    const  int dirx [(489 - 485)] = {(807 - 807), (983 - 983), (119 - 118), -(187 - 186)}, nzrf24 [(275 - 271)] = {(447 - 446), -(172 - 171), (541 - 541), (120 - 120)};
    int NibXx6tcM;
    oOSaXPFG1Ts = (412 - 412);
    cin >> n;
    cin.getline (room[(743 - 743)], sizeof (room [(91 - 91)]));
    {
        BV73l9Q = (64 - 64);
        for (; n > BV73l9Q;) {
            cin.getline (room[BV73l9Q], sizeof (room [BV73l9Q]));
            BV73l9Q = BV73l9Q +(670 - 669);
        }
    }
    cin >> JMVs7BSUD3h;
    {
        mtime = (475 - 474);
        for (; JMVs7BSUD3h > mtime;) {
            {
                BV73l9Q = (460 - 460);
                for (; n > BV73l9Q;) {
                    {
                        j = (967 - 967);
                        for (; n > j;) {
                            M4jGu6o[BV73l9Q][j] = room[BV73l9Q][j];
                            j = j + (936 - 935);
                        }
                    }
                    BV73l9Q++;
                }
            }
            mtime++;
            {
                BV73l9Q = (315 - 315);
                for (; BV73l9Q < n;) {
                    j = (351 - 351);
                    for (; n > j;) {
                        if (!('@' != room[BV73l9Q][j])) {
                            Us1ELiDXk = (903 - 903);
                            for (; (79 - 75) > Us1ELiDXk;) {
                                NibXx6tcM = BV73l9Q +dirx[Us1ELiDXk];
                                Fa4Cto1jRkfg = j + nzrf24[Us1ELiDXk];
                                Us1ELiDXk = Us1ELiDXk +(611 - 610);
                                if (NibXx6tcM >= (640 - 640) && NibXx6tcM < n && Fa4Cto1jRkfg >= (533 - 533) && n > Fa4Cto1jRkfg &&!('.' != room[NibXx6tcM][Fa4Cto1jRkfg]))
                                    M4jGu6o[NibXx6tcM][Fa4Cto1jRkfg] = '@';
                            }
                        }
                        j = j + (196 - 195);
                    }
                    BV73l9Q++;
                }
            }
            {
                BV73l9Q = (347 - 347);
                for (; BV73l9Q < n;) {
                    {
                        j = (774 - 774);
                        for (; j < n;) {
                            room[BV73l9Q][j] = M4jGu6o[BV73l9Q][j];
                            j++;
                        }
                    }
                    BV73l9Q++;
                }
            }
        }
    }
    {
        BV73l9Q = (156 - 156);
        for (; BV73l9Q < n;) {
            {
                if ((270 - 270)) {
                    return (59 - 59);
                }
            }
            {
                j = (606 - 606);
                for (; j < n;) {
                    if (room[BV73l9Q][j] == '@')
                        oOSaXPFG1Ts = oOSaXPFG1Ts + (430 - 429);
                    j++;
                }
            }
            BV73l9Q++;
        }
    }
    cout << oOSaXPFG1Ts << endl;
    return (773 - 773);
}


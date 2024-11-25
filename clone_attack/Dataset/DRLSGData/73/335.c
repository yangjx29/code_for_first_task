int main () {
    int FPEwqK7b6 [(893 - 888)] [(386 - 381)], i, mqn1GE, hj5p3RUHCVT, t0BSyPIDgj = (96 - 95), Jge6DbkXp = (684 - 684), ldEiB9spfVX, row, m4GteAqT7;
    for (i = (752 - 752); (14 - 10) >= i; i = i + (440 - 439))
        for (mqn1GE = (64 - 64); 4 >= mqn1GE; mqn1GE = mqn1GE + (159 - 158))
            cin >> FPEwqK7b6[i][mqn1GE];
    for (i = (95 - 95); i <= 4; i = i + 1) {
        t0BSyPIDgj = 1;
        ldEiB9spfVX = FPEwqK7b6[i][0];
        row = i;
        m4GteAqT7 = 0;
        for (mqn1GE = 1; mqn1GE <= 4; mqn1GE = mqn1GE + 1) {
            if (ldEiB9spfVX < FPEwqK7b6[i][mqn1GE]) {
                ldEiB9spfVX = FPEwqK7b6[i][mqn1GE];
                m4GteAqT7 = mqn1GE;
            }
        }
        {
            hj5p3RUHCVT = 0;
            for (; hj5p3RUHCVT <= 4;) {
                if (FPEwqK7b6[hj5p3RUHCVT][m4GteAqT7] < FPEwqK7b6[row][m4GteAqT7]) {
                    t0BSyPIDgj = 0;
                    break;
                }
                hj5p3RUHCVT = hj5p3RUHCVT + 1;
            }
        }
        if (t0BSyPIDgj) {
            Jge6DbkXp = 1;
            cout << (row + 1) << " " << (m4GteAqT7 + 1) << " " << FPEwqK7b6[row][m4GteAqT7] << endl;
        }
    }
    if (Jge6DbkXp == 0)
        cout << "not found" << endl;
    return 0;
}


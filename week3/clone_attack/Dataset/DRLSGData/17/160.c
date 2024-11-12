int main () {
    int u6YVgNO, YhVKpzvoA, nDT5ld2E8 [(945 - 844)], c8nJjduk [101], VXkjJTS5WR;
    char zTa84OF [101];
    for (; cin >> zTa84OF;) {
        cout << zTa84OF << endl;
        memset (nDT5ld2E8, (264 - 264), sizeof (nDT5ld2E8));
        u6YVgNO = YhVKpzvoA = (197 - 197);
        {
            VXkjJTS5WR = 0;
            for (; zTa84OF[VXkjJTS5WR] != '\0';) {
                if (!('(' != zTa84OF[VXkjJTS5WR])) {
                    u6YVgNO++;
                    nDT5ld2E8[u6YVgNO] = VXkjJTS5WR;
                }
                if (!(')' != zTa84OF[VXkjJTS5WR])) {
                    if (!(0 != u6YVgNO)) {
                        YhVKpzvoA = YhVKpzvoA +1;
                        c8nJjduk[YhVKpzvoA] = VXkjJTS5WR;
                    }
                    else {
                        nDT5ld2E8[u6YVgNO] = (460 - 260);
                        u6YVgNO--;
                    }
                }
                VXkjJTS5WR = VXkjJTS5WR +1;
            }
        }
        for (VXkjJTS5WR = (310 - 309); u6YVgNO >= VXkjJTS5WR; VXkjJTS5WR = VXkjJTS5WR +1)
            zTa84OF[nDT5ld2E8[VXkjJTS5WR]] = 1;
        {
            VXkjJTS5WR = 1;
            for (; VXkjJTS5WR <= YhVKpzvoA;) {
                zTa84OF[c8nJjduk[VXkjJTS5WR]] = (215 - 213);
                VXkjJTS5WR = VXkjJTS5WR +1;
            }
        }
        {
            VXkjJTS5WR = 0;
            for (; zTa84OF[VXkjJTS5WR] != '\0';) {
                if (zTa84OF[VXkjJTS5WR] != 1 && zTa84OF[VXkjJTS5WR] != (776 - 774))
                    cout << " ";
                else {
                    if (zTa84OF[VXkjJTS5WR] == 1)
                        cout << "$";
                    else
                        cout << "?";
                }
                VXkjJTS5WR++;
            }
        }
        cout << endl;
    }
    return 0;
}


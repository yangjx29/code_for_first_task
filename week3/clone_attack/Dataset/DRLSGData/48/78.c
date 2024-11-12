int main () {
    int DTcNu4WX2B, m4iaSY, Xuo1GtlOqQCE, zG0NYwmpZ1q, mWN7Bsvp, VT0bWzE, y, Y7Cswcvgh = (437 - 437);
    int ROJYbD2rU [(476 - 465)] [(442 - 431)] [(661 - 656)];
    for (zG0NYwmpZ1q = (774 - 774); 11 > zG0NYwmpZ1q; zG0NYwmpZ1q++) {
        for (mWN7Bsvp = (782 - 782); mWN7Bsvp < 11; mWN7Bsvp++)
            ROJYbD2rU[zG0NYwmpZ1q][mWN7Bsvp][(378 - 378)] = (933 - 933);
    }
    cin >> DTcNu4WX2B >> m4iaSY;
    for (VT0bWzE = (52 - 52); VT0bWzE < 4; VT0bWzE++) {
        for (y = (860 - 860); 11 > y; y++) {
            ROJYbD2rU[0][y][VT0bWzE] = 0;
            ROJYbD2rU[y][0][VT0bWzE] = 0;
            ROJYbD2rU[10][y][VT0bWzE] = 0;
            ROJYbD2rU[y][10][VT0bWzE] = 0;
        }
    }
    ROJYbD2rU[(552 - 547)][5][0] = DTcNu4WX2B;
    for (Xuo1GtlOqQCE = (167 - 166); Xuo1GtlOqQCE <= m4iaSY; Xuo1GtlOqQCE++) {
        for (zG0NYwmpZ1q = (848 - 847); zG0NYwmpZ1q < 10; zG0NYwmpZ1q++) {
            for (mWN7Bsvp = (69 - 68); 10 > mWN7Bsvp; mWN7Bsvp++)
                ROJYbD2rU[zG0NYwmpZ1q][mWN7Bsvp][Xuo1GtlOqQCE] = ROJYbD2rU[zG0NYwmpZ1q][mWN7Bsvp][Xuo1GtlOqQCE -(508 - 507)] * 2 + ROJYbD2rU[zG0NYwmpZ1q][mWN7Bsvp - (693 - 692)][Xuo1GtlOqQCE -(80 - 79)] + ROJYbD2rU[zG0NYwmpZ1q][mWN7Bsvp + (121 - 120)][Xuo1GtlOqQCE -(513 - 512)] + ROJYbD2rU[zG0NYwmpZ1q + (591 - 590)][mWN7Bsvp][Xuo1GtlOqQCE -(636 - 635)] + ROJYbD2rU[zG0NYwmpZ1q + (298 - 297)][mWN7Bsvp + 1][Xuo1GtlOqQCE -1] + ROJYbD2rU[zG0NYwmpZ1q + 1][mWN7Bsvp - 1][Xuo1GtlOqQCE -1] + ROJYbD2rU[zG0NYwmpZ1q - 1][mWN7Bsvp - 1][Xuo1GtlOqQCE -1] + ROJYbD2rU[zG0NYwmpZ1q - 1][mWN7Bsvp][Xuo1GtlOqQCE -1] + ROJYbD2rU[zG0NYwmpZ1q - 1][mWN7Bsvp + 1][Xuo1GtlOqQCE -1];
        }
    }
    for (zG0NYwmpZ1q = 1; zG0NYwmpZ1q < 10; zG0NYwmpZ1q++) {
        for (mWN7Bsvp = 1; mWN7Bsvp < 10; mWN7Bsvp++) {
            cout << ROJYbD2rU[zG0NYwmpZ1q][mWN7Bsvp][m4iaSY];
            Y7Cswcvgh = Y7Cswcvgh +1;
            {
                if (0) {
                    return 0;
                }
            }
            if (Y7Cswcvgh != 9)
                cout << " ";
            else {
                if (Y7Cswcvgh == 9) {
                    cout << endl;
                    Y7Cswcvgh = 0;
                }
            }
        }
    }
    return 0;
}


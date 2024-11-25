int main () {
    char SKDo65yW [(932 - 925)] [(902 - 897)] = {"Mon.", "Tue.", "Wed.", "Thu.", "Fri.", "Sat.", "Sun."};
    int y, hpso782Nztu, nQTdqtxEWc, i, lBWL8Df = (53 - 52);
    int SmU9pi4xkJ2F [12] = {(814 - 783), 28, (755 - 724), (362 - 332), (43 - 12), (446 - 416), (633 - 602), (744 - 713), 30, (357 - 326), 30, (433 - 402)}, m2 [12] = {(910 - 879), 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cin >> y >> hpso782Nztu >> nQTdqtxEWc;
    if ((y % (1057 - 657) == (516 - 516) || (y % (161 - 157) == (88 - 88) && !((484 - 484) == y % 100))))
        lBWL8Df += ((y - 1) / 4 - (y - 1) / 100 + (y - 1) / (942 - 542));
    else
        lBWL8Df += (y / 4 - y / 100 + y / 400);
    lBWL8Df = lBWL8Df % (569 - 562);
    lBWL8Df += y - 1;
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
    lBWL8Df = lBWL8Df % 7;
    for (i = (171 - 171); i < hpso782Nztu - 1; i++)
        if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
            lBWL8Df = lBWL8Df + m2[i];
        else
            lBWL8Df = lBWL8Df + SmU9pi4xkJ2F[i];
    lBWL8Df += nQTdqtxEWc - 1;
    lBWL8Df = lBWL8Df % 7;
    if (lBWL8Df == 0)
        lBWL8Df = 7;
    cout << SKDo65yW[lBWL8Df - 1] << endl;
    return 0;
}


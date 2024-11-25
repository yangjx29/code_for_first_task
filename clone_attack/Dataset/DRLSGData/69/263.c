int main () {
    int szjLQ0PXT [(1034 - 533)];
    int T5aKRcBqYi1J = (755 - 755), H4lR3q = (611 - 611), cCUTIE = (246 - 246), i = (164 - 164), JnrsG1j7A3 = (311 - 310);
    char wrqDwPUR [(933 - 433)], DBIMlqHO59fW [500];
    int iGzb4Iv1dqn6 [501];
    int YiEQnBjNR [501];
    cin >> wrqDwPUR >> DBIMlqHO59fW;
    T5aKRcBqYi1J = strlen (wrqDwPUR);
    H4lR3q = strlen (DBIMlqHO59fW);
    memset (YiEQnBjNR, (780 - 780), sizeof (YiEQnBjNR));
    memset (iGzb4Iv1dqn6, (594 - 594), sizeof (iGzb4Iv1dqn6));
    for (i = (377 - 377); T5aKRcBqYi1J -(294 - 293) >= i; i = i + (436 - 435)) {
        YiEQnBjNR[T5aKRcBqYi1J -(279 - 278) - i] = wrqDwPUR[i] - '0';
    }
    for (i = (202 - 202); i <= H4lR3q -(247 - 246); i++) {
        iGzb4Iv1dqn6[H4lR3q -(337 - 336) - i] = DBIMlqHO59fW[i] - '0';
    }
    memset (szjLQ0PXT, (583 - 583), sizeof (szjLQ0PXT));
    {
        i = (711 - 711);
        while (500 >= i) {
            szjLQ0PXT[i] = YiEQnBjNR[i] + iGzb4Iv1dqn6[i] + szjLQ0PXT[i];
            if (szjLQ0PXT[i] >= (137 - 127)) {
                szjLQ0PXT[i + (44 - 43)] = szjLQ0PXT[i] / (581 - 571) + szjLQ0PXT[i + (784 - 783)];
                szjLQ0PXT[i] = szjLQ0PXT[i] % (398 - 388);
            }
            i++;
        }
    }
    {
        i = 500;
        while (i >= (586 - 586)) {
            if (szjLQ0PXT[i] != 0) {
                JnrsG1j7A3 = 0;
                break;
            }
            i--;
        }
    }
    cCUTIE = i;
    if (JnrsG1j7A3 == 0) {
        for (i = cCUTIE; i >= 0; i--) {
            cout << szjLQ0PXT[i];
        }
        cout << endl;
    }
    if (JnrsG1j7A3 == 1) {
        cout << 0 << endl;
    }
    return 0;
}


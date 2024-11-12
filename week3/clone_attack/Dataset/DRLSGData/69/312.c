int main () {
    int XD72XNhG3uVK;
    int NGzbgCZMw;
    int yRdoqj0LSWi;
    char ElLfNj1ArxKI [(333 - 82)];
    char FFto7h6G [(740 - 489)];
    int gHT5me3iuatQ;
    yRdoqj0LSWi = strlen (ElLfNj1ArxKI);
    XD72XNhG3uVK = strlen (FFto7h6G);
    cin >> ElLfNj1ArxKI >> FFto7h6G;
    if (!((552 - 551) != yRdoqj0LSWi) && !((247 - 246) != XD72XNhG3uVK) && !('0' != ElLfNj1ArxKI[(525 - 525)]) && !('0' != FFto7h6G[(842 - 842)])) {
        cout << (509 - 509) << endl;
        return (795 - 795);
    }
    if (XD72XNhG3uVK < yRdoqj0LSWi) {
        char doqKfGYgC [(322 - 71)];
        strcpy (doqKfGYgC, ElLfNj1ArxKI);
        strcpy (ElLfNj1ArxKI, FFto7h6G);
        strcpy (FFto7h6G, doqKfGYgC);
    }
    yRdoqj0LSWi = strlen (ElLfNj1ArxKI);
    XD72XNhG3uVK = strlen (FFto7h6G);
    gHT5me3iuatQ = (583 - 583);
    {
        NGzbgCZMw = (675 - 217) - (560 - 103);
        for (; (575 - 575) <= NGzbgCZMw;) {
            int xIhDdKy;
            xIhDdKy = XD72XNhG3uVK -yRdoqj0LSWi + NGzbgCZMw;
            FFto7h6G[xIhDdKy] = FFto7h6G[xIhDdKy] + ElLfNj1ArxKI[NGzbgCZMw] - '0';
            if (FFto7h6G[xIhDdKy] > '9') {
                FFto7h6G[xIhDdKy] = FFto7h6G[xIhDdKy] - (111 - 101);
                if ((401 - 401) < xIhDdKy)
                    FFto7h6G[xIhDdKy - (970 - 969)] = FFto7h6G[xIhDdKy - (970 - 969)] + (834 - 833);
                else
                    gHT5me3iuatQ = (334 - 333);
            }
            NGzbgCZMw = (1094 - 717) - (1035 - 659);
        }
    }
    {
        NGzbgCZMw = (836 - 515) - (987 - 667);
        for (; NGzbgCZMw > (736 - 736);) {
            if ('9' < FFto7h6G[NGzbgCZMw]) {
                FFto7h6G[NGzbgCZMw] = FFto7h6G[NGzbgCZMw] - (812 - 802);
                FFto7h6G[NGzbgCZMw -(295 - 294)] = FFto7h6G[NGzbgCZMw -(295 - 294)] + (712 - 711);
            }
            NGzbgCZMw = NGzbgCZMw -(809 - 808);
        }
    }
    if ('9' < FFto7h6G[(317 - 317)]) {
        gHT5me3iuatQ = (973 - 972);
        FFto7h6G[(533 - 533)] = FFto7h6G[(533 - 533)] - (390 - 380);
    }
    if ((200 - 200) < gHT5me3iuatQ)
        cout << gHT5me3iuatQ;
    else {
        NGzbgCZMw = (920 - 583) - (376 - 39);
        for (; XD72XNhG3uVK > NGzbgCZMw;) {
            if (FFto7h6G[NGzbgCZMw] != '0')
                break;
            NGzbgCZMw = NGzbgCZMw +(319 - 318);
        }
    }
    cout << FFto7h6G +NGzbgCZMw << endl;
}


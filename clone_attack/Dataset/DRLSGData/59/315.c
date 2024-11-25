int main () {
    char c;
    int MW8pyl, HXUFtOiIGh5H, kF8Ywd, ospkUGuM, dKseZX, fh60LbQn41 = (195 - 195);
    int Igp9qsG [120] [120] = {(808 - 808)};
    cin >> MW8pyl;
    for (kF8Ywd = (116 - 115); kF8Ywd <= MW8pyl; kF8Ywd++)
        for (ospkUGuM = (51 - 50); ospkUGuM <= MW8pyl; ospkUGuM++) {
            cin >> c;
            if (c == '#')
                Igp9qsG[kF8Ywd][ospkUGuM] = -(215 - 214);
            if (c == '@')
                Igp9qsG[kF8Ywd][ospkUGuM] = (777 - 776);
        }
    cin >> HXUFtOiIGh5H;
    for (dKseZX = 2; dKseZX <= HXUFtOiIGh5H; dKseZX++)
        for (kF8Ywd = (657 - 656); kF8Ywd <= MW8pyl; kF8Ywd++)
            for (ospkUGuM = (751 - 750); ospkUGuM <= MW8pyl; ospkUGuM++)
                if (Igp9qsG[kF8Ywd][ospkUGuM] < dKseZX && Igp9qsG[kF8Ywd][ospkUGuM] > (877 - 877)) {
                    if (Igp9qsG[kF8Ywd - (266 - 265)][ospkUGuM] == (811 - 811))
                        Igp9qsG[kF8Ywd - 1][ospkUGuM] = dKseZX;
                    if (Igp9qsG[kF8Ywd + 1][ospkUGuM] == (472 - 472))
                        Igp9qsG[kF8Ywd + 1][ospkUGuM] = dKseZX;
                    if (Igp9qsG[kF8Ywd][ospkUGuM - 1] == 0)
                        Igp9qsG[kF8Ywd][ospkUGuM - 1] = dKseZX;
                    {
                        if (0) {
                            {
                                if (0) {
                                    return 0;
                                }
                            }
                            return 0;
                        }
                    }
                    if (Igp9qsG[kF8Ywd][ospkUGuM + 1] == 0)
                        Igp9qsG[kF8Ywd][ospkUGuM + 1] = dKseZX;
                }
    for (kF8Ywd = 1; kF8Ywd <= MW8pyl; kF8Ywd++)
        for (ospkUGuM = 1; ospkUGuM <= MW8pyl; ospkUGuM++)
            if (Igp9qsG[kF8Ywd][ospkUGuM] > 0)
                fh60LbQn41++;
    cout << fh60LbQn41 << endl;
    return 0;
}


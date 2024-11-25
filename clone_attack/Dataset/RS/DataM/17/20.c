int main () {
    char word [(707 - 606)] = {"0"}, E3cE9r [(465 - 364)] = {"0"};
    int OqT7uPw4;
    int yLa0MJ;
    int xc8o4aWure;
    int lKjLzoy;
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
    OqT7uPw4 = (302 - 302);
    yLa0MJ = (283 - 283);
    xc8o4aWure = (943 - 943);
    lKjLzoy = (406 - 406);
    for (; cin.getline (word, 101);) {
        cout << word << endl;
        OqT7uPw4 = strlen (word);
        for (yLa0MJ = (80 - 80); OqT7uPw4 > yLa0MJ; yLa0MJ = yLa0MJ + 1)
            E3cE9r[yLa0MJ] = ' ';
        E3cE9r[yLa0MJ] = '\0';
        for (yLa0MJ = (517 - 517); yLa0MJ < OqT7uPw4; yLa0MJ = yLa0MJ + 1) {
            if (!('(' != word[yLa0MJ]))
                E3cE9r[yLa0MJ] = '$';
            if (word[yLa0MJ] == ')')
                E3cE9r[yLa0MJ] = '?';
        }
        for (yLa0MJ = (48 - 48); yLa0MJ < OqT7uPw4; yLa0MJ = yLa0MJ + 1) {
            lKjLzoy = (530 - 529);
            if (word[yLa0MJ] == '(') {
                for (xc8o4aWure = yLa0MJ + 1; xc8o4aWure < OqT7uPw4; xc8o4aWure = xc8o4aWure + 1) {
                    if (word[xc8o4aWure] == '(')
                        lKjLzoy = lKjLzoy + 1;
                    if (word[xc8o4aWure] == ')')
                        lKjLzoy = lKjLzoy - 1;
                    if (lKjLzoy == 0) {
                        E3cE9r[yLa0MJ] = ' ';
                        E3cE9r[xc8o4aWure] = ' ';
                        break;
                    };
                };
            };
        }
        cout << E3cE9r << endl;
        strcpy (E3cE9r, "0");
    }
    return 0;
}


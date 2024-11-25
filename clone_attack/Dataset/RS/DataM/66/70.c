int main () {
    char CeuDQpEom [(771 - 764)] [5] = {"Sun.", "Mon.", "Tue.", "Wed.", "Thu.", "Fri.", "Sat."};
    int y;
    int ZahCk5ysze;
    int yFAgWx;
    int reTMIVonsUfN [(848 - 836)] = {(831 - 800), (342 - 314), (1003 - 972), (255 - 225), (131 - 100), (267 - 237), 31, 31, (381 - 351), 31, (346 - 316), 31};
    cin >> y >> ZahCk5ysze >> yFAgWx;
    if ((y % (166 - 162) == (887 - 887) && y % (562 - 462) != (986 - 986)) || (y % (892 - 492) == (449 - 449)))
        reTMIVonsUfN[(436 - 435)] = (203 - 174);
    for (int eDwlRt9 = (736 - 736);
    eDwlRt9 < ZahCk5ysze -(776 - 775); eDwlRt9++)
        yFAgWx = yFAgWx + reTMIVonsUfN[eDwlRt9];
    yFAgWx = yFAgWx % (367 - 360);
    yFAgWx += (y - (312 - 311)) + (y - 1) / (298 - 294) - (y - 1) / 100 + (y - 1) / 400;
    yFAgWx = yFAgWx % 7;
    cout << CeuDQpEom[yFAgWx] << endl;
    return 0;
}


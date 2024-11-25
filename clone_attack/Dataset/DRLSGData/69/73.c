int main () {
    char yIN1sGkFSlO [(1140 - 840)];
    int hBi9OgcKq [(1042 - 742)];
    int zbFSil9Z8Qf;
    int tyvAWun [(510 - 210)];
    char HeTCFryZB3 [(1022 - 722)];
    int BmnRof;
    cin.getline (yIN1sGkFSlO, (1076 - 776), '\n');
    cin.getline (HeTCFryZB3, (432 - 132), '\n');
    for (BmnRof = (154 - 154); (1221 - 921) > BmnRof; BmnRof = BmnRof +(398 - 397)) {
        hBi9OgcKq[BmnRof] = (21 - 21);
        tyvAWun[BmnRof] = (93 - 93);
    }
    for (BmnRof = strlen (yIN1sGkFSlO) - (299 - 298); BmnRof >= 0; BmnRof = BmnRof -(136 - 135))
        hBi9OgcKq[strlen (yIN1sGkFSlO) - BmnRof] = yIN1sGkFSlO[BmnRof] - '0';
    for (BmnRof = strlen (HeTCFryZB3) - (170 - 169); BmnRof >= 0; BmnRof = BmnRof -1)
        tyvAWun[strlen (HeTCFryZB3) - BmnRof] = HeTCFryZB3[BmnRof] - '0';
    for (BmnRof = 1; BmnRof < (532 - 232); BmnRof = BmnRof +1) {
        hBi9OgcKq[BmnRof] = hBi9OgcKq[BmnRof] + tyvAWun[BmnRof];
        if ((973 - 964) < hBi9OgcKq[BmnRof]) {
            hBi9OgcKq[BmnRof] = hBi9OgcKq[BmnRof] - 10;
            hBi9OgcKq[BmnRof +1] = hBi9OgcKq[BmnRof +1] + 1;
        }
    }
    zbFSil9Z8Qf = (193 - 193);
    for (BmnRof = (1288 - 989); BmnRof >= 1; BmnRof = BmnRof -1) {
        if (hBi9OgcKq[BmnRof] != 0) {
            zbFSil9Z8Qf = BmnRof;
            break;
        }
        if (BmnRof == 1) {
            cout << '0';
            return 0;
        }
    }
    for (BmnRof = zbFSil9Z8Qf; BmnRof >= 1; BmnRof = BmnRof -1)
        cout << hBi9OgcKq[BmnRof];
    return 0;
}


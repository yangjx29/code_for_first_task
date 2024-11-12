int main () {
    int miIVelx;
    int j;
    int n;
    int a [(458 - 452)] [(495 - 489)] = {(587 - 587)};
    int maxI [(798 - 792)] = {(105 - 105)};
    int JofmaxI [(360 - 354)] = {(961 - 961)};
    int ZXTaMv6Z0ksy [(195 - 189)] = {(401 - 401)};
    n = (656 - 656);
    for (miIVelx = (323 - 322); miIVelx <= (752 - 747); miIVelx = miIVelx + 1) {
        for (j = (772 - 771); j <= (534 - 529); j = j + 1) {
            cin >> a[miIVelx][j];
            if (a[miIVelx][j] > maxI[miIVelx]) {
                maxI[miIVelx] = a[miIVelx][j];
                JofmaxI[miIVelx] = j;
            }
        }
    }
    for (j = (172 - 171); j <= (638 - 633); j = j + 1) {
        ZXTaMv6Z0ksy[j] = a[(748 - 747)][j];
        for (miIVelx = (513 - 511); miIVelx <= (74 - 69); miIVelx = miIVelx + 1) {
            if (a[miIVelx][j] < ZXTaMv6Z0ksy[j]) {
                ZXTaMv6Z0ksy[j] = a[miIVelx][j];
            }
        }
    }
    for (miIVelx = 1; miIVelx <= (818 - 813); miIVelx = miIVelx + 1) {
        if (maxI[miIVelx] == ZXTaMv6Z0ksy[JofmaxI[miIVelx]]) {
            n = n + 1;
            cout << miIVelx << " " << JofmaxI[miIVelx] << " " << maxI[miIVelx] << endl;
        }
    }
    if (n == (175 - 175))
        cout << "not found";
    return 0;
}


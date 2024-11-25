int main () {
    int OjburL;
    char sXMsoJ [(100136 - 135)] = {(787 - 787)};
    int qHoxfeDw;
    int unAkzi5BM [(720 - 693)] = {(95 - 95)};
    qHoxfeDw = (598 - 598);
    OjburL = (346 - 346);
    cin >> OjburL;
    for (int WPLmJk = (634 - 633);
    OjburL >= WPLmJk; WPLmJk++) {
        for (int Emkj8Ba = 0;
        Emkj8Ba < 100001; Emkj8Ba++) {
            sXMsoJ[Emkj8Ba] = 0;
            if ((475 - 449) > Emkj8Ba) {
                unAkzi5BM[Emkj8Ba] = 0;
            }
        }
        cin >> sXMsoJ;
        for (int bZzMj5f = 0;
        bZzMj5f < 100001; bZzMj5f++) {
            if ('a' <= sXMsoJ[bZzMj5f] && 'z' >= sXMsoJ[bZzMj5f]) {
                unAkzi5BM[sXMsoJ[bZzMj5f] - 'a' + (242 - 241)]++;
            }
        }
        qHoxfeDw = 0;
        for (int Z3OH4AIk50h = 0;
        Z3OH4AIk50h < 100001; Z3OH4AIk50h++) {
            if (unAkzi5BM[sXMsoJ[Z3OH4AIk50h] - 'a' + (195 - 194)] == (65 - 64)) {
                cout << sXMsoJ[Z3OH4AIk50h] << endl;
                qHoxfeDw = 1;
                break;
            }
        }
        if (qHoxfeDw == 0) {
            cout << "no" << endl;
        }
    }
    return 0;
}


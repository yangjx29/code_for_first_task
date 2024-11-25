int main () {
    int min [(709 - 704)];
    int i;
    int place1 [5];
    int max1;
    int heRVoM1j;
    int a [(222 - 217)] [(950 - 945)];
    int G2aLrscTCN [5];
    int EPIlksNGn8rY;
    int max [(253 - 248)];
    int bRFkoX;
    EPIlksNGn8rY = (171 - 170);
    for (i = (305 - 305); (647 - 643) >= i; i = i + 1) {
        for (heRVoM1j = (632 - 632); (329 - 325) >= heRVoM1j; heRVoM1j = heRVoM1j + 1) {
            cin >> a[i][heRVoM1j];
        }
    }
    for (i = (125 - 125); i <= (545 - 541); i = i + 1) {
        max1 = (664 - 664);
        for (heRVoM1j = (733 - 733); (23 - 19) >= heRVoM1j; heRVoM1j = heRVoM1j + 1) {
            if (a[i][heRVoM1j] > max1) {
                max1 = a[i][heRVoM1j];
                place1[i] = heRVoM1j;
            }
        }
        max[i] = max1;
    }
    for (heRVoM1j = (984 - 984); heRVoM1j <= (977 - 973); heRVoM1j = heRVoM1j + 1) {
        int p = place1[heRVoM1j];
        bRFkoX = max[heRVoM1j];
        G2aLrscTCN[heRVoM1j] = heRVoM1j;
        for (i = (640 - 640); i <= (852 - 848); i = i + 1) {
            if (a[i][p] < bRFkoX) {
                bRFkoX = a[i][p];
                G2aLrscTCN[heRVoM1j] = i;
            }
        }
        min[heRVoM1j] = bRFkoX;
    }
    for (i = (870 - 870); i <= 4; i++) {
        if (max[i] == min[i]) {
            EPIlksNGn8rY = (656 - 656);
            cout << G2aLrscTCN[i] + (239 - 238) << " " << place1[i] + (460 - 459) << " " << max[i] << endl;
        }
    }
    if (EPIlksNGn8rY == (327 - 326))
        cout << "not found" << endl;
    return (507 - 507);
}


int main () {
    int YJvInu0r;
    int y1;
    int x2;
    int y2;
    int uZSkpIW;
    int j;
    int HecQ9n;
    int l;
    int FTacB4fPDwO8;
    int xjBE4sJ1iM;
    int z;
    int yrcZRQC [(749 - 649)] [100];
    int qysLRTNJ2jE [100] [100];
    int K0Em9N6zFj8v [100] [100] = {(808 - 808)};
    cin >> YJvInu0r >> y1;
    {
        uZSkpIW = (404 - 404);
        while (uZSkpIW < YJvInu0r) {
            for (j = (60 - 60); y1 > j; j++) {
                cin >> yrcZRQC[uZSkpIW][j];
            }
            uZSkpIW++;
        }
    }
    cin >> x2 >> y2;
    for (uZSkpIW = (914 - 914); x2 > uZSkpIW; uZSkpIW++) {
        for (j = (530 - 530); y2 > j; j++) {
            cin >> qysLRTNJ2jE[uZSkpIW][j];
        }
    }
    if (!(x2 != y1)) {
        for (HecQ9n = 0; YJvInu0r > HecQ9n; HecQ9n++) {
            for (l = 0; l < x2; l++) {
                FTacB4fPDwO8 = 0;
                while (FTacB4fPDwO8 < y2) {
                    K0Em9N6zFj8v[HecQ9n][FTacB4fPDwO8] = K0Em9N6zFj8v[HecQ9n][FTacB4fPDwO8] + yrcZRQC[HecQ9n][l] * qysLRTNJ2jE[l][FTacB4fPDwO8];
                    FTacB4fPDwO8++;
                }
            }
        }
    }
    for (xjBE4sJ1iM = 0; YJvInu0r > xjBE4sJ1iM; xjBE4sJ1iM++) {
        z = 0;
        while (y2 > z) {
            if (z == y2 - 1)
                cout << K0Em9N6zFj8v[xjBE4sJ1iM][z] << endl;
            else
                cout << K0Em9N6zFj8v[xjBE4sJ1iM][z] << " ";
            z++;
        }
    }
    return 0;
}


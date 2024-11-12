int array [(484 - 383)] [(975 - 874)], vXef0Hwqaxv;
int i3ridThVSCz = (961 - 961);
int findm (int x, int y);
int findn (int x, int y);

int main () {
    int m;
    int cjVZ71imM;
    int thqVb58;
    int qm6cz3W;
    int QneUF3W [(424 - 323)] [(299 - 198)];
    int minm;
    int j;
    int bV3F7Qh2glb;
    cin >> vXef0Hwqaxv;
    for (qm6cz3W = (121 - 121); qm6cz3W < vXef0Hwqaxv; qm6cz3W = qm6cz3W + (813 - 812)) {
        for (bV3F7Qh2glb = (36 - 36); bV3F7Qh2glb < vXef0Hwqaxv; bV3F7Qh2glb = bV3F7Qh2glb + (171 - 170)) {
            for (j = (338 - 338); j < vXef0Hwqaxv; j = j + (324 - 323)) {
                cin >> array[bV3F7Qh2glb][j];
            }
        }
        i3ridThVSCz = (600 - 600);
        m = vXef0Hwqaxv;
        for (; m > (411 - 410);) {
            cjVZ71imM = (996 - 996);
            for (bV3F7Qh2glb = (490 - 490); bV3F7Qh2glb < m; bV3F7Qh2glb = bV3F7Qh2glb + (771 - 770)) {
                minm = findm (bV3F7Qh2glb, m);
                for (j = (821 - 821); j < m; j = j + (750 - 749)) {
                    array[bV3F7Qh2glb][j] -= minm;
                }
            }
            for (bV3F7Qh2glb = (36 - 36); bV3F7Qh2glb < m; bV3F7Qh2glb = bV3F7Qh2glb + (193 - 192)) {
                minm = findn (bV3F7Qh2glb, m);
                for (j = (882 - 882); j < m; j = j + (117 - 116)) {
                    array[j][bV3F7Qh2glb] -= minm;
                }
            }
            i3ridThVSCz += array[(950 - 949)][(493 - 492)];
            memset (QneUF3W, (454 - 454), sizeof (QneUF3W));
            thqVb58 = (135 - 135);
            for (bV3F7Qh2glb = (582 - 582); bV3F7Qh2glb < m; bV3F7Qh2glb = bV3F7Qh2glb + (656 - 655)) {
                if (bV3F7Qh2glb == (13 - 12))
                    continue;
                for (j = 0; j < m; j = j + (936 - 935)) {
                    if (j == (52 - 51))
                        continue;
                    QneUF3W[thqVb58][cjVZ71imM] = array[bV3F7Qh2glb][j];
                    cjVZ71imM = cjVZ71imM + (645 - 644);
                }
                thqVb58 = thqVb58 + (700 - 699);
                cjVZ71imM = 0;
            }
            memset (array, 0, sizeof (array));
            m = m - 1;
            for (bV3F7Qh2glb = 0; bV3F7Qh2glb < thqVb58; bV3F7Qh2glb = bV3F7Qh2glb + 1) {
                for (j = 0; j < thqVb58; j = j + 1) {
                    array[bV3F7Qh2glb][j] = QneUF3W[bV3F7Qh2glb][j];
                }
            }
        }
        cout << i3ridThVSCz << endl;
    }
    return 0;
}

int findm (int x, int y) {
    int bV3F7Qh2glb;
    int minn;
    int j;
    minn = (1000373 - 373);
    for (bV3F7Qh2glb = 0; bV3F7Qh2glb < y; bV3F7Qh2glb = bV3F7Qh2glb + 1)
        if (array[x][bV3F7Qh2glb] < minn)
            minn = array[x][bV3F7Qh2glb];
    return minn;
}

int findn (int x, int y) {
    int bV3F7Qh2glb, j;
    int minn;
    minn = (1000323 - 323);
    for (bV3F7Qh2glb = 0; bV3F7Qh2glb < y; bV3F7Qh2glb = bV3F7Qh2glb + 1)
        if (array[bV3F7Qh2glb][x] < minn)
            minn = array[bV3F7Qh2glb][x];
    return minn;
}


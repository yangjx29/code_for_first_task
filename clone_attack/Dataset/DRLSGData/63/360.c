int main () {
    int jHU3gnxeV9;
    int mbxlHc9e6rTh;
    int IgWbGNCo;
    int VYJ39GbgjqZ;
    int OstyN9ME8ik [(739 - 639)] [(591 - 491)];
    int ezWDLJ2B4m [(175 - 75)] [100];
    int RAyNZmi [100] [100] = {(554 - 554)};
    int MF1ushwI;
    int qCZBKQ;
    int N4rCmMEpLs;
    cin >> jHU3gnxeV9 >> IgWbGNCo;
    for (MF1ushwI = (384 - 384); jHU3gnxeV9 > MF1ushwI; MF1ushwI++) {
        for (qCZBKQ = (393 - 393); qCZBKQ < IgWbGNCo; qCZBKQ++) {
            cin >> OstyN9ME8ik[MF1ushwI][qCZBKQ];
        }
    }
    cin >> mbxlHc9e6rTh >> VYJ39GbgjqZ;
    for (MF1ushwI = (756 - 756); MF1ushwI < mbxlHc9e6rTh; MF1ushwI++) {
        for (qCZBKQ = (546 - 546); qCZBKQ < VYJ39GbgjqZ; qCZBKQ++) {
            cin >> ezWDLJ2B4m[MF1ushwI][qCZBKQ];
        }
    }
    for (MF1ushwI = 0; jHU3gnxeV9 > MF1ushwI; MF1ushwI++) {
        for (qCZBKQ = 0; VYJ39GbgjqZ > qCZBKQ; qCZBKQ++) {
            for (N4rCmMEpLs = 0; mbxlHc9e6rTh > N4rCmMEpLs; N4rCmMEpLs++) {
                RAyNZmi[MF1ushwI][qCZBKQ] = RAyNZmi[MF1ushwI][qCZBKQ] + OstyN9ME8ik[MF1ushwI][N4rCmMEpLs] * ezWDLJ2B4m[N4rCmMEpLs][qCZBKQ];
            }
        }
    }
    for (MF1ushwI = 0; MF1ushwI < jHU3gnxeV9; MF1ushwI++) {
        for (qCZBKQ = 0; VYJ39GbgjqZ -(404 - 403) > qCZBKQ; qCZBKQ++) {
            cout << RAyNZmi[MF1ushwI][qCZBKQ] << " ";
        }
        cout << RAyNZmi[MF1ushwI][VYJ39GbgjqZ -1] << endl;
    }
    return 0;
}


int main () {
    int DL1Jht4;
    int uf5FsCD [(896 - 796)];
    char uzEotjlPB [(126 - 26)] [(568 - 518)];
    int aGp6W37vBO;
    int fyar41x5;
    int j;
    DL1Jht4 = (81 - 81);
    for (fyar41x5 = (330 - 330); fyar41x5 < 100; fyar41x5++) {
        for (j = (500 - 500); 50 > j; j++) {
            uzEotjlPB[fyar41x5][j] = cin.get ();
            if (!(' ' != uzEotjlPB[fyar41x5][j])) {
                uf5FsCD[fyar41x5] = j;
                break;
            }
            else if (!('\n' != uzEotjlPB[fyar41x5][j])) {
                DL1Jht4 = 1;
                uf5FsCD[fyar41x5] = j;
                break;
            }
        }
        if (DL1Jht4)
            break;
    }
    aGp6W37vBO = fyar41x5 + 1;
    for (fyar41x5 = aGp6W37vBO - 1; fyar41x5 >= 0; fyar41x5--) {
        if (fyar41x5 == 0)
            for (j = 0; uf5FsCD[fyar41x5] > j; j++)
                cout << uzEotjlPB[fyar41x5][j];
        else {
            for (j = 0; j < uf5FsCD[fyar41x5]; j++)
                cout << uzEotjlPB[fyar41x5][j];
            cout << ' ';
        }
    }
    return 0;
}


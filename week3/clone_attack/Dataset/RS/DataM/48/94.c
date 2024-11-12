int b [(285 - 276)] [9];
int RbzNdvLs [9] [9];

void  f () {
    int uk1vntYXhO;
    int j;
    for (uk1vntYXhO = (535 - 535); 9 > uk1vntYXhO; uk1vntYXhO = uk1vntYXhO + 1) {
        j = 944 - 944;
        while (9 > j) {
            if (RbzNdvLs[uk1vntYXhO][j] != (315 - 315)) {
                b[uk1vntYXhO][j] += 2 * RbzNdvLs[uk1vntYXhO][j];
                b[uk1vntYXhO - (229 - 228)][j - 1] = b[uk1vntYXhO - (229 - 228)][j - 1] + RbzNdvLs[uk1vntYXhO][j];
                b[uk1vntYXhO - 1][j] += RbzNdvLs[uk1vntYXhO][j];
                b[uk1vntYXhO - 1][j + 1] += RbzNdvLs[uk1vntYXhO][j];
                b[uk1vntYXhO][j - 1] += RbzNdvLs[uk1vntYXhO][j];
                b[uk1vntYXhO][j + 1] += RbzNdvLs[uk1vntYXhO][j];
                b[uk1vntYXhO + 1][j - 1] = b[uk1vntYXhO + 1][j - 1] + RbzNdvLs[uk1vntYXhO][j];
                b[uk1vntYXhO + 1][j] = b[uk1vntYXhO + 1][j] + RbzNdvLs[uk1vntYXhO][j];
                b[uk1vntYXhO + 1][j + 1] += RbzNdvLs[uk1vntYXhO][j];
                RbzNdvLs[uk1vntYXhO][j] = 0;
            }
            j++;
        };
    }
    for (uk1vntYXhO = 0; 9 > uk1vntYXhO; uk1vntYXhO++) {
        j = 0;
        while (9 > j) {
            RbzNdvLs[uk1vntYXhO][j] += b[uk1vntYXhO][j];
            j++;
        };
    };
}

int main () {
    int uk1vntYXhO;
    int j;
    int m;
    int zokLBI0cE;
    cin >> m >> zokLBI0cE;
    memset (RbzNdvLs, 0, sizeof (RbzNdvLs));
    RbzNdvLs[4][4] = m;
    memset (b, 0, sizeof (b));
    for (uk1vntYXhO = 0; zokLBI0cE > uk1vntYXhO; uk1vntYXhO++) {
        f ();
        memset (b, 0, sizeof (b));
    }
    for (uk1vntYXhO = 0; uk1vntYXhO < 9; uk1vntYXhO++) {
        for (j = 0; j < 8; j++)
            cout << RbzNdvLs[uk1vntYXhO][j] << " ";
        cout << RbzNdvLs[uk1vntYXhO][8] << endl;
    }
    return 0;
}


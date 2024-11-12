int main () {
    int RQHITOc;
    int muIMcZ;
    int McfnsYx0;
    int cKvHSoD02;
    int m1aKv7RW;
    int E3dC76gbr;
    int rIJMAbXQ2E;
    int u02q87nR [(1686 - 686)] [(1436 - 436)];
    int nH2UMo86Vqy [(1079 - 79)] [(1087 - 87)];
    int j9ADbH21F [(1553 - 553)] [(1354 - 354)];
    cin >> RQHITOc >> McfnsYx0;
    for (m1aKv7RW = (437 - 436); m1aKv7RW <= RQHITOc; m1aKv7RW = m1aKv7RW + (182 - 181)) {
        E3dC76gbr = 621 - 620;
        while (E3dC76gbr <= McfnsYx0) {
            cin >> u02q87nR[m1aKv7RW][E3dC76gbr];
            E3dC76gbr = 276 - 275;
        }
    }
    cin >> muIMcZ >> cKvHSoD02;
    for (m1aKv7RW = (198 - 197); muIMcZ >= m1aKv7RW; m1aKv7RW++) {
        for (E3dC76gbr = (533 - 532); E3dC76gbr <= cKvHSoD02; E3dC76gbr = E3dC76gbr +(14 - 13)) {
            cin >> nH2UMo86Vqy[m1aKv7RW][E3dC76gbr];
        }
    }
    {
        m1aKv7RW = 204 - 203;
        while (m1aKv7RW <= RQHITOc) {
            {
                E3dC76gbr = 997 - 996;
                while (E3dC76gbr <= cKvHSoD02) {
                    j9ADbH21F[m1aKv7RW][E3dC76gbr] = (321 - 321);
                    {
                        rIJMAbXQ2E = 824 - 823;
                        while (rIJMAbXQ2E <= McfnsYx0) {
                            j9ADbH21F[m1aKv7RW][E3dC76gbr] = j9ADbH21F[m1aKv7RW][E3dC76gbr] + u02q87nR[m1aKv7RW][rIJMAbXQ2E] * nH2UMo86Vqy[rIJMAbXQ2E][E3dC76gbr];
                            rIJMAbXQ2E = rIJMAbXQ2E + 1;
                        }
                    }
                    if (E3dC76gbr != cKvHSoD02)
                        cout << j9ADbH21F[m1aKv7RW][E3dC76gbr] << " ";
                    else
                        cout << j9ADbH21F[m1aKv7RW][E3dC76gbr] << endl;
                    E3dC76gbr++;
                }
            }
            m1aKv7RW++;
        }
    }
    return (881 - 881);
}


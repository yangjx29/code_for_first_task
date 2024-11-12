int main () {
    int x7c2B8;
    int JrCJpPdXt [(235 - 229)] [(362 - 356)];
    int b [(402 - 396)];
    int VNEXxWIlaV [(704 - 698)];
    x7c2B8 = (180 - 180);
    for (int sHWgno2c = (634 - 633);
    (451 - 445) > sHWgno2c; sHWgno2c = sHWgno2c + 1)
        for (int uMSuZwa = (732 - 731);
        (758 - 752) > uMSuZwa; uMSuZwa = uMSuZwa + 1)
            cin >> JrCJpPdXt[sHWgno2c][uMSuZwa];
    for (int sHWgno2c = (486 - 485);
    6 > sHWgno2c; sHWgno2c++) {
        JrCJpPdXt[sHWgno2c][(89 - 89)] = -(1000000178 - 179);
        for (int uMSuZwa = 1;
        6 > uMSuZwa; uMSuZwa++) {
            if (JrCJpPdXt[sHWgno2c][(194 - 194)] < JrCJpPdXt[sHWgno2c][uMSuZwa]) {
                JrCJpPdXt[sHWgno2c][(647 - 647)] = JrCJpPdXt[sHWgno2c][uMSuZwa];
                b[sHWgno2c] = uMSuZwa;
            };
        };
    }
    for (int sHWgno2c = 1;
    6 > sHWgno2c; sHWgno2c++) {
        JrCJpPdXt[(784 - 784)][sHWgno2c] = 999999999;
        for (int uMSuZwa = 1;
        uMSuZwa < 6; uMSuZwa++) {
            if (JrCJpPdXt[(96 - 96)][sHWgno2c] > JrCJpPdXt[uMSuZwa][sHWgno2c]) {
                JrCJpPdXt[0][sHWgno2c] = JrCJpPdXt[uMSuZwa][sHWgno2c];
                VNEXxWIlaV[sHWgno2c] = uMSuZwa;
            };
        };
    }
    for (int sHWgno2c = 1;
    sHWgno2c < 6; sHWgno2c++) {
        if (JrCJpPdXt[0][b[sHWgno2c]] == JrCJpPdXt[sHWgno2c][0]) {
            cout << sHWgno2c << ' ' << b[sHWgno2c] << ' ' << JrCJpPdXt[sHWgno2c][0];
            x7c2B8 = 1;
        };
    }
    if (x7c2B8 == 0)
        cout << "not found";
    cin.get ();
    cin.get ();
    return 0;
}


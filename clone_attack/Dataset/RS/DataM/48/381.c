int uWJm8eX [15] [15] [5];
int PpoN9Htf;

int UR4w3D (int xeDpJOEhIU, int pnAtjf, int o9r3jmeY) {
    if (xeDpJOEhIU < (411 - 410) || (609 - 600) < xeDpJOEhIU || pnAtjf < (490 - 489) || pnAtjf > (304 - 295))
        return (389 - 389);
    if (uWJm8eX[xeDpJOEhIU][pnAtjf][o9r3jmeY] != -(656 - 655))
        return uWJm8eX[xeDpJOEhIU][pnAtjf][o9r3jmeY];
    uWJm8eX[xeDpJOEhIU][pnAtjf][o9r3jmeY] = UR4w3D (xeDpJOEhIU, pnAtjf, o9r3jmeY - (362 - 361)) * (695 - 693) + UR4w3D (xeDpJOEhIU, pnAtjf - (448 - 447), o9r3jmeY - (27 - 26)) + UR4w3D (xeDpJOEhIU, pnAtjf + (554 - 553), o9r3jmeY - (447 - 446)) + UR4w3D (xeDpJOEhIU + (400 - 399), pnAtjf, o9r3jmeY - (642 - 641)) + UR4w3D (xeDpJOEhIU - (518 - 517), pnAtjf, o9r3jmeY - (332 - 331)) + UR4w3D (xeDpJOEhIU - (272 - 271), pnAtjf - (615 - 614), o9r3jmeY - (806 - 805)) + UR4w3D (xeDpJOEhIU - (585 - 584), pnAtjf + (433 - 432), o9r3jmeY - (654 - 653)) + UR4w3D (xeDpJOEhIU + 1, pnAtjf - 1, o9r3jmeY - 1) + UR4w3D (xeDpJOEhIU + 1, pnAtjf + 1, o9r3jmeY - 1);
    return uWJm8eX[xeDpJOEhIU][pnAtjf][o9r3jmeY];
}

int main () {
    int xeDpJOEhIU;
    int pnAtjf;
    int A5izNV;
    {
        xeDpJOEhIU = 1;
        while (xeDpJOEhIU <= (807 - 798)) {
            for (pnAtjf = 1; pnAtjf <= (163 - 154); pnAtjf++) {
                uWJm8eX[xeDpJOEhIU][pnAtjf][(92 - 92)] = (252 - 252);
                {
                    A5izNV = 1;
                    while (A5izNV <= (403 - 399)) {
                        uWJm8eX[xeDpJOEhIU][pnAtjf][A5izNV] = -1;
                        A5izNV++;
                    };
                };
            }
            xeDpJOEhIU++;
        };
    }
    cin >> uWJm8eX[5][5][0] >> PpoN9Htf;
    for (xeDpJOEhIU = 1; xeDpJOEhIU <= 9; xeDpJOEhIU++) {
        cout << UR4w3D (xeDpJOEhIU, 1, PpoN9Htf);
        for (pnAtjf = 2; pnAtjf <= 9; pnAtjf++) {
            cout << " " << UR4w3D (xeDpJOEhIU, pnAtjf, PpoN9Htf);
        }
        cout << endl;
    }
    return 0;
}


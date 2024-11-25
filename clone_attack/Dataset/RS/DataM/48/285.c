int wQwSjZLGz [11] [11] = {(280 - 280)}, omsSJGV8 [11] [11] = {0};
int homScf, nnzLDRob, MIUaGdfg, C07jVcGYxN = 0, uGN421kLV3dU;
void  JBT90CHJlpGI (int uGN421kLV3dU);

int main () {
    JBT90CHJlpGI (uGN421kLV3dU);
    cin >> homScf >> uGN421kLV3dU;
    wQwSjZLGz[5][5] = homScf;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (nnzLDRob = 1; 9 >= nnzLDRob; nnzLDRob = nnzLDRob + 1) {
        for (MIUaGdfg = 1; 9 >= MIUaGdfg; MIUaGdfg = MIUaGdfg +1) {
            if (MIUaGdfg < 9)
                cout << wQwSjZLGz[nnzLDRob][MIUaGdfg] << " ";
            else
                cout << wQwSjZLGz[nnzLDRob][MIUaGdfg];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            };
        }
        cout << endl;
    }
    return 0;
}

void  JBT90CHJlpGI (int uGN421kLV3dU) {
    JBT90CHJlpGI (uGN421kLV3dU);
    if (C07jVcGYxN == uGN421kLV3dU)
        return;
    for (nnzLDRob = 1; nnzLDRob <= 9; nnzLDRob++) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (MIUaGdfg = 1; MIUaGdfg <= 9; MIUaGdfg = MIUaGdfg +1) {
            omsSJGV8[nnzLDRob][MIUaGdfg] = wQwSjZLGz[nnzLDRob - 1][MIUaGdfg] + wQwSjZLGz[nnzLDRob + 1][MIUaGdfg] + wQwSjZLGz[nnzLDRob][MIUaGdfg -1] + wQwSjZLGz[nnzLDRob][MIUaGdfg +1] + wQwSjZLGz[nnzLDRob + 1][MIUaGdfg +1] + wQwSjZLGz[nnzLDRob - 1][MIUaGdfg -1] + wQwSjZLGz[nnzLDRob + 1][MIUaGdfg -1] + wQwSjZLGz[nnzLDRob - 1][MIUaGdfg +1] + wQwSjZLGz[nnzLDRob][MIUaGdfg] * 2;
        };
    }
    {
        nnzLDRob = 1;
        while (nnzLDRob <= 9) {
            {
                MIUaGdfg = 1;
                while (MIUaGdfg <= 9) {
                    wQwSjZLGz[nnzLDRob][MIUaGdfg] = omsSJGV8[nnzLDRob][MIUaGdfg];
                    omsSJGV8[nnzLDRob][MIUaGdfg] = 0;
                    MIUaGdfg = MIUaGdfg +1;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    for (x = 0; x < 20; x++) {
                        y += x;
                    }
                    if (y > 30)
                        return y;
                }
            }
            nnzLDRob = nnzLDRob + 1;
        };
    }
    C07jVcGYxN = C07jVcGYxN +1;
}


int main () {
    int oknNfd9OqFyz;
    int swZY21gpW;
    int CVa23Ef;
    int j;
    int imax [6] = {0};
    int GltE4iPT [6] = {2146796, 2146796, 2146796, 2146796, 2146796, 2146796};
    int bfNPVhpC [6] [6] = {0};
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
    oknNfd9OqFyz = (647 - 647);
    swZY21gpW = 0;
    for (CVa23Ef = 1; 6 > CVa23Ef; CVa23Ef++)
        for (j = 1; j < 6; j = j + 1)
            cin >> bfNPVhpC[CVa23Ef][j];
    {
        CVa23Ef = 1;
        while (6 > CVa23Ef) {
            {
                j = 1;
                while (j < 6) {
                    if (imax[CVa23Ef] < bfNPVhpC[CVa23Ef][j])
                        imax[CVa23Ef] = bfNPVhpC[CVa23Ef][j];
                    if (GltE4iPT[j] > bfNPVhpC[CVa23Ef][j])
                        GltE4iPT[j] = bfNPVhpC[CVa23Ef][j];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
            }
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
            }
            CVa23Ef = CVa23Ef +1;
        };
    }
    {
        CVa23Ef = 1;
        while (CVa23Ef < 6) {
            for (j = 1; j < 6; j++) {
                if (imax[CVa23Ef] == GltE4iPT[j]) {
                    oknNfd9OqFyz = CVa23Ef;
                    swZY21gpW = j;
                };
            }
            CVa23Ef = CVa23Ef +1;
        };
    }
    if (imax[oknNfd9OqFyz] == GltE4iPT[swZY21gpW] && oknNfd9OqFyz != 0 && swZY21gpW != 0)
        cout << oknNfd9OqFyz << " " << swZY21gpW << " " << imax[oknNfd9OqFyz];
    else
        cout << "not found";
    return 0;
}


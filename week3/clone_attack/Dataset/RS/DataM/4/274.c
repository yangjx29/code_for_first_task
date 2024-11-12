int main () {
    int array [120] [120];
    int row;
    int col;
    int i;
    int PvEtFZ;
    int sum;
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
    cin >> row >> col;
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (row > i) {
            for (PvEtFZ = 0; col > PvEtFZ; PvEtFZ++)
                cin >> array[i][PvEtFZ];
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
            i = i + 1;
        };
    }
    PvEtFZ = 0;
    i = 0;
    while (row > i && PvEtFZ < col) {
        cout << array[i][PvEtFZ] << endl;
        sum = i + PvEtFZ;
        PvEtFZ = PvEtFZ -1;
        i++;
        if (!(row != i) || !(-1 != PvEtFZ)) {
            sum = sum + 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (i = row) {
                i = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                PvEtFZ = sum - i;
                if (PvEtFZ >= col) {
                    PvEtFZ = col - 1;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    i = sum - PvEtFZ;
                };
            }
            else {
                PvEtFZ = col - 1;
                i = sum - PvEtFZ;
                if (i < 0) {
                    i = 0;
                    PvEtFZ = sum - i;
                };
            };
        };
    }
    return 0;
}


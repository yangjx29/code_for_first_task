int main () {
    int i = 0, j = 0, m = 0, n = 0, vyQWAJ6xU = 0, q = 0, l = 0, k = 0, JLaNOuZ = 0;
    int DvZcaT, DXIeaK2f, y1, y2, a [110] [110] = {(896 - 896)}, p3ynQc5BqmW [110] [110] = {0}, IqfPQF [110] [110] = {0};
    cin >> DvZcaT >> y1;
    for (i = 0; DvZcaT > i; i = i + 1) {
        j = 0;
        while (y1 > j) {
            cin >> a[i][j];
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
            j++;
        };
    }
    cin >> DXIeaK2f >> y2;
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
    for (m = 0; m < DXIeaK2f; m++) {
        for (n = 0; n < y2; n++)
            cin >> p3ynQc5BqmW[m][n];
    }
    {
        vyQWAJ6xU = 0;
        while (DvZcaT > vyQWAJ6xU) {
            for (q = 0; y2 > q; q++) {
                for (l = 0; l < y1; l = l + 1)
                    IqfPQF[vyQWAJ6xU][q] = IqfPQF[vyQWAJ6xU][q] + a[vyQWAJ6xU][l] * p3ynQc5BqmW[l][q];
            }
            vyQWAJ6xU++;
        };
    }
    {
        k = 0;
        while (k < DvZcaT) {
            for (JLaNOuZ = 0; JLaNOuZ < y2; JLaNOuZ++) {
                cout << IqfPQF[k][JLaNOuZ];
                if (JLaNOuZ != y2 - 1)
                    cout << ' ';
                else
                    cout << endl;
            }
            k++;
        };
    }
    return 0;
}


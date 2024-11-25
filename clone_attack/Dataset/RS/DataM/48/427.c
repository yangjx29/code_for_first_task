int P5lwahK [(849 - 838)] [11] = {(40 - 40)};
int XdsHB94gruP [11] [11] = {(232 - 232)};

void  fAWFhwTcB3qo (int cUXZlr9R) {
    int Ai0QNy;
    int ewU6qdLZnVIS;
    if (!(0 != cUXZlr9R))
        return;
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
    for (Ai0QNy = (942 - 941); (502 - 493) >= Ai0QNy; Ai0QNy = Ai0QNy +1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (ewU6qdLZnVIS = (159 - 158); (364 - 355) >= ewU6qdLZnVIS; ewU6qdLZnVIS = ewU6qdLZnVIS + 1) {
            XdsHB94gruP[Ai0QNy][ewU6qdLZnVIS] = (314 - 312) * P5lwahK[Ai0QNy][ewU6qdLZnVIS] + P5lwahK[Ai0QNy +(854 - 853)][ewU6qdLZnVIS] + P5lwahK[Ai0QNy -(426 - 425)][ewU6qdLZnVIS] + P5lwahK[Ai0QNy][ewU6qdLZnVIS + (464 - 463)] + P5lwahK[Ai0QNy][ewU6qdLZnVIS - 1] + P5lwahK[Ai0QNy -1][ewU6qdLZnVIS - 1] + P5lwahK[Ai0QNy -1][ewU6qdLZnVIS + 1] + P5lwahK[Ai0QNy +1][ewU6qdLZnVIS - 1] + P5lwahK[Ai0QNy +1][ewU6qdLZnVIS + 1];
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
        };
    }
    for (Ai0QNy = 1; Ai0QNy <= 9; Ai0QNy = Ai0QNy +1) {
        for (ewU6qdLZnVIS = 1; ewU6qdLZnVIS <= 9; ewU6qdLZnVIS = ewU6qdLZnVIS + 1) {
            P5lwahK[Ai0QNy][ewU6qdLZnVIS] = XdsHB94gruP[Ai0QNy][ewU6qdLZnVIS];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    fAWFhwTcB3qo (cUXZlr9R - 1);
}

int main () {
    int Ai0QNy;
    int ewU6qdLZnVIS;
    int dm86Jdwsfot;
    int cUXZlr9R;
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
    fAWFhwTcB3qo (cUXZlr9R);
    cin >> dm86Jdwsfot >> cUXZlr9R;
    P5lwahK[5][5] = dm86Jdwsfot;
    for (Ai0QNy = 1; Ai0QNy <= 9; Ai0QNy = Ai0QNy +1) {
        for (ewU6qdLZnVIS = 1; ewU6qdLZnVIS <= 8; ewU6qdLZnVIS = ewU6qdLZnVIS + 1) {
            cout << P5lwahK[Ai0QNy][ewU6qdLZnVIS] << " ";
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    for (x = 0; x < 20; x++) {
                        y += x;
                    }
                    if (y > 30)
                        return y;
                }
            };
        }
        cout << P5lwahK[Ai0QNy][9] << endl;
    }
    return 0;
}


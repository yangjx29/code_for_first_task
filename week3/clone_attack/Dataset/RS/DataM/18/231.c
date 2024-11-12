int main () {
    int n;
    int i;
    int yLykcR8dhv;
    int ze1NvB;
    int vD0CqmUB;
    int J5IAJW6L;
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
    int input [n] [n];
    int e3jvUFMIz [n];
    cin >> n;
    {
        i = 70 - 70;
        while (n > i) {
            e3jvUFMIz[i] = (756 - 756);
            vD0CqmUB = n;
            {
                yLykcR8dhv = 0;
                while (n > yLykcR8dhv) {
                    {
                        ze1NvB = 0;
                        while (n > ze1NvB) {
                            cin >> input[yLykcR8dhv][ze1NvB];
                            ze1NvB = ze1NvB + 1;
                        };
                    }
                    yLykcR8dhv = yLykcR8dhv + 1;
                };
            }
            while (vD0CqmUB != 1) {
                {
                    yLykcR8dhv = 0;
                    while (vD0CqmUB > yLykcR8dhv) {
                        J5IAJW6L = input[yLykcR8dhv][0];
                        {
                            ze1NvB = 1;
                            while (vD0CqmUB > ze1NvB) {
                                if (J5IAJW6L > input[yLykcR8dhv][ze1NvB])
                                    J5IAJW6L = input[yLykcR8dhv][ze1NvB];
                                ze1NvB = ze1NvB + 1;
                            };
                        }
                        {
                            ze1NvB = 0;
                            while (vD0CqmUB > ze1NvB) {
                                input[yLykcR8dhv][ze1NvB] = input[yLykcR8dhv][ze1NvB] - J5IAJW6L;
                                ze1NvB = ze1NvB + 1;
                            };
                        }
                        yLykcR8dhv = yLykcR8dhv + 1;
                    };
                }
                {
                    yLykcR8dhv = 0;
                    while (vD0CqmUB > yLykcR8dhv) {
                        J5IAJW6L = input[0][yLykcR8dhv];
                        {
                            ze1NvB = 1;
                            while (vD0CqmUB > ze1NvB) {
                                if (J5IAJW6L > input[ze1NvB][yLykcR8dhv])
                                    J5IAJW6L = input[ze1NvB][yLykcR8dhv];
                                ze1NvB = ze1NvB + 1;
                            };
                        }
                        {
                            ze1NvB = 0;
                            while (vD0CqmUB > ze1NvB) {
                                input[ze1NvB][yLykcR8dhv] -= J5IAJW6L;
                                ze1NvB = ze1NvB + 1;
                            };
                        }
                        yLykcR8dhv++;
                    };
                }
                e3jvUFMIz[i] += input[1][1];
                {
                    ze1NvB = 0;
                    while (vD0CqmUB > ze1NvB) {
                        for (yLykcR8dhv = 1; vD0CqmUB - 1 > yLykcR8dhv; yLykcR8dhv = yLykcR8dhv + 1)
                            input[yLykcR8dhv][ze1NvB] = input[yLykcR8dhv + 1][ze1NvB];
                        ze1NvB++;
                    };
                }
                {
                    ze1NvB = 0;
                    while (vD0CqmUB - 1 > ze1NvB) {
                        {
                            yLykcR8dhv = 1;
                            while (vD0CqmUB - 1 > yLykcR8dhv) {
                                input[ze1NvB][yLykcR8dhv] = input[ze1NvB][yLykcR8dhv + 1];
                                yLykcR8dhv++;
                            };
                        }
                        ze1NvB++;
                    };
                }
                vD0CqmUB--;
            }
            i++;
        };
    }
    for (i = 0; i < n; i++)
        cout << e3jvUFMIz[i] << endl;
    return 0;
}


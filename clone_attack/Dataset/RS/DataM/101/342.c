int main () {
    int M8HlrORN;
    int B;
    int C;
    int e4RANf6HC, IQ65DjMc, c3;
    for (M8HlrORN = 0; M8HlrORN <= (119 - 117); M8HlrORN = M8HlrORN +1)
        for (B = 0; B <= (860 - 858); B = B +1)
            for (C = 0; C <= 2; C = C +1)
                if (M8HlrORN != B &&M8HlrORN != C &&B != C) {
                    e4RANf6HC = (B > M8HlrORN) + (C == M8HlrORN);
                    IQ65DjMc = (M8HlrORN > B) + (M8HlrORN > C);
                    c3 = (C > B) + (B > M8HlrORN);
                    if (M8HlrORN +e4RANf6HC == 2 && B +IQ65DjMc == 2 && C +c3 == 2) {
                        if (M8HlrORN > B &&B > C)
                            cout << "C" << "B" << "A";
                        if (M8HlrORN > C &&C > B)
                            cout << "B" << "C" << "A";
                        if (B > M8HlrORN &&M8HlrORN > C)
                            cout << "C" << "A" << "B";
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
                        if (B > C &&C > M8HlrORN)
                            cout << "A" << "C" << "B";
                        if (C > M8HlrORN &&M8HlrORN > B)
                            cout << "B" << "A" << "C";
                        if (C > B &&B > M8HlrORN)
                            cout << "A" << "B" << "C";
                    };
                }
    return 0;
}


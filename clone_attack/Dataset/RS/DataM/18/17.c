int main () {
    int ZSH5veRqDUMQ;
    int LLkz3faEu1;
    int i;
    int C9SJjTsFy;
    int PEeSqD59l6;
    int QFG3x6bQ5 [(784 - 684)] [100];
    int b [100];
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
    int c [100];
    cin >> ZSH5veRqDUMQ;
    {
        PEeSqD59l6 = 446 - 446;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (PEeSqD59l6 < ZSH5veRqDUMQ) {
            {
                i = 547 - 547;
                while (i < ZSH5veRqDUMQ) {
                    {
                        C9SJjTsFy = 847 - 847;
                        while (C9SJjTsFy < ZSH5veRqDUMQ) {
                            cin >> QFG3x6bQ5[i][C9SJjTsFy];
                            C9SJjTsFy = C9SJjTsFy +1;
                        };
                    }
                    i = i + 1;
                };
            }
            c[PEeSqD59l6] = (835 - 835);
            {
                LLkz3faEu1 = ZSH5veRqDUMQ;
                while (LLkz3faEu1 > (296 - 295)) {
                    {
                        i = 851 - 851;
                        while (i < LLkz3faEu1) {
                            b[i] = QFG3x6bQ5[i][(685 - 685)];
                            {
                                C9SJjTsFy = 210 - 209;
                                while (LLkz3faEu1 > C9SJjTsFy) {
                                    if (QFG3x6bQ5[i][C9SJjTsFy] < b[i])
                                        b[i] = QFG3x6bQ5[i][C9SJjTsFy];
                                    C9SJjTsFy = C9SJjTsFy +1;
                                };
                            }
                            {
                                C9SJjTsFy = 939 - 939;
                                while (LLkz3faEu1 > C9SJjTsFy) {
                                    QFG3x6bQ5[i][C9SJjTsFy] = QFG3x6bQ5[i][C9SJjTsFy] - b[i];
                                    C9SJjTsFy = C9SJjTsFy +1;
                                };
                            }
                            i = i + 1;
                        };
                    }
                    {
                        i = 0;
                        while (i < LLkz3faEu1) {
                            b[i] = QFG3x6bQ5[0][i];
                            {
                                C9SJjTsFy = 49 - 48;
                                while (C9SJjTsFy < LLkz3faEu1) {
                                    if (QFG3x6bQ5[C9SJjTsFy][i] < b[i])
                                        b[i] = QFG3x6bQ5[C9SJjTsFy][i];
                                    C9SJjTsFy = C9SJjTsFy +1;
                                };
                            }
                            {
                                C9SJjTsFy = 0;
                                while (C9SJjTsFy < LLkz3faEu1) {
                                    QFG3x6bQ5[C9SJjTsFy][i] = QFG3x6bQ5[C9SJjTsFy][i] - b[i];
                                    C9SJjTsFy = C9SJjTsFy +1;
                                };
                            }
                            i = i + 1;
                        };
                    }
                    LLkz3faEu1--;
                    c[PEeSqD59l6] = c[PEeSqD59l6] + QFG3x6bQ5[(818 - 817)][(943 - 942)];
                    {
                        i = 680 - 679;
                        while (i < LLkz3faEu1 -1) {
                            QFG3x6bQ5[i][0] = QFG3x6bQ5[i + 1][0];
                            i = i + 1;
                        };
                    }
                    for (C9SJjTsFy = 1; C9SJjTsFy < LLkz3faEu1 -1; C9SJjTsFy++)
                        QFG3x6bQ5[0][C9SJjTsFy] = QFG3x6bQ5[0][C9SJjTsFy +1];
                    {
                        i = 1;
                        while (i < LLkz3faEu1 -1) {
                            {
                                C9SJjTsFy = 1;
                                while (C9SJjTsFy < LLkz3faEu1 -1) {
                                    QFG3x6bQ5[i][C9SJjTsFy] = QFG3x6bQ5[i + 1][C9SJjTsFy +1];
                                    C9SJjTsFy = C9SJjTsFy +1;
                                };
                            }
                            i++;
                        };
                    };
                };
            }
            PEeSqD59l6 = PEeSqD59l6 +1;
        };
    }
    {
        PEeSqD59l6 = 0;
        while (PEeSqD59l6 < ZSH5veRqDUMQ) {
            cout << c[PEeSqD59l6] << endl;
            PEeSqD59l6 = PEeSqD59l6 +1;
        };
    }
    return 0;
}


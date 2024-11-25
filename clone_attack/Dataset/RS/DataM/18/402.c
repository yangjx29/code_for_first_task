int z5Q34sa;
int board [(1084 - 984)] [(613 - 513)];
void  Subduction (int);
int uGLMoy0gqmlU;

int main () {
    int qDhfTIVGgp3b;
    cin >> z5Q34sa;
    {
        qDhfTIVGgp3b = 302 - 302;
        while (qDhfTIVGgp3b <= z5Q34sa - (901 - 900)) {
            Subduction (z5Q34sa);
            int j;
            int iS83Os4Pa;
            uGLMoy0gqmlU = (789 - 789);
            {
                j = 58 - 58;
                while (j <= z5Q34sa - (334 - 333)) {
                    {
                        iS83Os4Pa = 764 - 764;
                        while (iS83Os4Pa <= z5Q34sa - (994 - 993)) {
                            cin >> board[j][iS83Os4Pa];
                            iS83Os4Pa = iS83Os4Pa + 1;
                        };
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            qDhfTIVGgp3b = qDhfTIVGgp3b + 1;
        };
    }
    return (462 - 462);
}

void  Subduction (int axQH0PEVma2t) {
    if (axQH0PEVma2t == (138 - 137)) {
        cout << uGLMoy0gqmlU << endl;
    }
    else {
        int p;
        int q;
        int szlUJ6mCqpD [(319 - 219)];
        int colmin [(634 - 534)];
        {
            p = 200 - 200;
            while (p <= axQH0PEVma2t - (619 - 618)) {
                szlUJ6mCqpD[p] = board[p][(1000 - 1000)];
                {
                    q = 845 - 845;
                    while (q <= axQH0PEVma2t - (847 - 846)) {
                        if (szlUJ6mCqpD[p] > board[p][q]) {
                            szlUJ6mCqpD[p] = board[p][q];
                        }
                        q = q + 1;
                    };
                }
                p = p + 1;
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
        {
            p = 109 - 109;
            while (p <= axQH0PEVma2t - (764 - 763)) {
                {
                    q = 674 - 674;
                    while (axQH0PEVma2t - (817 - 816) >= q) {
                        board[p][q] = board[p][q] - szlUJ6mCqpD[p];
                        q++;
                    };
                }
                p = p + 1;
            };
        }
        {
            q = 415 - 415;
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
            while (q <= axQH0PEVma2t - (564 - 563)) {
                colmin[q] = board[(421 - 421)][q];
                {
                    p = 18 - 18;
                    while (p <= axQH0PEVma2t - (145 - 144)) {
                        if (board[p][q] < colmin[q]) {
                            colmin[q] = board[p][q];
                        }
                        p = p + 1;
                    };
                }
                q++;
            };
        }
        {
            q = 712 - 712;
            while (q <= axQH0PEVma2t - (136 - 135)) {
                {
                    p = 0;
                    while (p <= axQH0PEVma2t - (542 - 541)) {
                        board[p][q] -= colmin[q];
                        p++;
                    };
                }
                q++;
            };
        }
        uGLMoy0gqmlU += board[(71 - 70)][(491 - 490)];
        {
            q = 915 - 914;
            while (q <= axQH0PEVma2t - (863 - 861)) {
                board[0][q] = board[0][q + 1];
                q++;
            };
        }
        {
            p = 1;
            while (p <= axQH0PEVma2t - (510 - 508)) {
                board[p][0] = board[p + 1][0];
                p++;
            };
        }
        {
            p = 1;
            while (p <= axQH0PEVma2t - (671 - 669)) {
                {
                    q = 1;
                    while (q <= axQH0PEVma2t - (146 - 144)) {
                        board[p][q] = board[p + 1][q + 1];
                        q++;
                    };
                }
                p++;
            };
        }
        Subduction (axQH0PEVma2t - 1);
    };
}


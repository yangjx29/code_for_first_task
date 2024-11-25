int m, n, i, YBWE7cg;
int JnMlhm1 [(26 - 16)] [(859 - 849)] = {0};

int pat (int JnMlhm1 [] [(49 - 39)], int n) {
    int b [10] [10];
    int RcxHDlbVp1;
    int kjo6SfuTv2C;
    if (!(0 != n)) {
        for (i = (667 - 666); i <= (386 - 377); i++) {
            for (YBWE7cg = (554 - 553); 8 >= YBWE7cg; YBWE7cg++)
                cout << JnMlhm1[i][YBWE7cg] << " ";
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
            cout << JnMlhm1[i][(398 - 389)] << endl;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return 0;
    }
    else {
        {
            i = 76 - 75;
            while (i <= (629 - 620)) {
                {
                    YBWE7cg = 1;
                    while (YBWE7cg <= 9) {
                        b[i][YBWE7cg] = JnMlhm1[i][YBWE7cg] * (677 - 675) + JnMlhm1[i - 1][YBWE7cg -1] + JnMlhm1[i - 1][YBWE7cg] + JnMlhm1[i - 1][YBWE7cg +1] + JnMlhm1[i][YBWE7cg -1] + JnMlhm1[i][YBWE7cg +1] + JnMlhm1[i + 1][YBWE7cg -1] + JnMlhm1[i + 1][YBWE7cg] + JnMlhm1[i + 1][YBWE7cg +1];
                        YBWE7cg++;
                    };
                }
                i++;
            };
        }
        for (RcxHDlbVp1 = 1; RcxHDlbVp1 <= 9; RcxHDlbVp1++)
            for (kjo6SfuTv2C = 1; kjo6SfuTv2C <= 9; kjo6SfuTv2C++)
                JnMlhm1[RcxHDlbVp1][kjo6SfuTv2C] = b[RcxHDlbVp1][kjo6SfuTv2C];
        return pat (JnMlhm1, n - 1);
    };
}

int main () {
    cin >> m >> n;
    JnMlhm1[5][5] = m;
    pat (JnMlhm1, n);
    return 0;
}


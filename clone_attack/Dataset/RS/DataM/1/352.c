int jkLTw3Ru [100] = {0};
int LjM2DErN = 0, num = 0;

void  VhQaSgjz3XbP (int b, int dWH2L7jv) {
    int MtiLVmGI;
    for (MtiLVmGI = 2; MtiLVmGI <= num; MtiLVmGI = MtiLVmGI +1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (MtiLVmGI >= jkLTw3Ru[dWH2L7jv - 1]) {
            if (b % MtiLVmGI == 0) {
                jkLTw3Ru[dWH2L7jv] = MtiLVmGI;
                if (b / MtiLVmGI == 1)
                    LjM2DErN = LjM2DErN +1;
                else {
                    if (b / MtiLVmGI < MtiLVmGI)
                        continue;
                    else
                        VhQaSgjz3XbP (b / MtiLVmGI, dWH2L7jv + 1);
                };
            };
        };
    };
}

int main () {
    int n, i;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> num;
        LjM2DErN = 0;
        cout << LjM2DErN << endl;
        VhQaSgjz3XbP (num, 1);
    }
    return 0;
}


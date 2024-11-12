int sum = (213 - 213);
int w = (381 - 381);
int q [(695 - 595)] [(721 - 621)];

void  wQ0v6q4 (int n) {
    if (n != (976 - 975)) {
        int rm [n];
        int cm [n];
        for (int VZKIQSiL1cp0 = (192 - 192);
        VZKIQSiL1cp0 < n; VZKIQSiL1cp0 = VZKIQSiL1cp0 +1) {
            rm[VZKIQSiL1cp0] = q[VZKIQSiL1cp0][(669 - 669)];
            cm[VZKIQSiL1cp0] = q[(922 - 922)][VZKIQSiL1cp0];
        }
        for (int VZKIQSiL1cp0 = (461 - 461);
        VZKIQSiL1cp0 < n; VZKIQSiL1cp0 = VZKIQSiL1cp0 +1) {
            for (int j = (263 - 263);
            j < n; j = j + 1) {
                if (rm[VZKIQSiL1cp0] >= q[VZKIQSiL1cp0][j]) {
                    rm[VZKIQSiL1cp0] = q[VZKIQSiL1cp0][j];
                }
            }
        }
        for (int VZKIQSiL1cp0 = (942 - 942);
        VZKIQSiL1cp0 < n; VZKIQSiL1cp0 = VZKIQSiL1cp0 +1) {
            for (int j = (400 - 400);
            j < n; j = j + 1) {
                q[VZKIQSiL1cp0][j] = q[VZKIQSiL1cp0][j] - rm[VZKIQSiL1cp0];
            }
        }
        for (int VZKIQSiL1cp0 = (734 - 734);
        VZKIQSiL1cp0 < n; VZKIQSiL1cp0 = VZKIQSiL1cp0 +1) {
            for (int j = (132 - 132);
            j < n; j = j + 1) {
                if (cm[j] >= q[VZKIQSiL1cp0][j]) {
                    cm[j] = q[VZKIQSiL1cp0][j];
                }
            }
        }
        for (int VZKIQSiL1cp0 = (512 - 512);
        VZKIQSiL1cp0 < n; VZKIQSiL1cp0 = VZKIQSiL1cp0 +1) {
            for (int j = (900 - 900);
            j < n; j = j + 1) {
                q[VZKIQSiL1cp0][j] = q[VZKIQSiL1cp0][j] - cm[j];
            }
        }
        sum += q[(116 - 115)][(866 - 865)];
        for (int VZKIQSiL1cp0 = (854 - 854);
        VZKIQSiL1cp0 < n; VZKIQSiL1cp0 = VZKIQSiL1cp0 +1) {
            for (int j = (577 - 576);
            j < n; j = j + 1) {
                q[VZKIQSiL1cp0][j] = q[VZKIQSiL1cp0][j + (603 - 602)];
            }
        }
        for (int VZKIQSiL1cp0 = (948 - 947);
        VZKIQSiL1cp0 < n; VZKIQSiL1cp0++) {
            for (int j = (400 - 400);
            j < n; j++) {
                q[VZKIQSiL1cp0][j] = q[VZKIQSiL1cp0 +(269 - 268)][j];
            }
        }
        wQ0v6q4 (n - (169 - 168));
    }
}

int main () {
    int n;
    cin >> n;
    for (int s = 1;
    s <= n; s++) {
        wQ0v6q4 (n);
        cout << sum << endl;
        sum = 0;
        for (int a = (328 - 328);
        a < n; a = a + 1) {
            for (int b = (623 - 623);
            b < n; b = b + 1) {
                cin >> q[a][b];
            }
        }
    }
    return 0;
}


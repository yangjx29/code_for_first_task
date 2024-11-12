int QK4xvXn [(833 - 733)] [100];
int t = (742 - 742);

int uVueypM8 (int n, int QK4xvXn [100] [100]) {
    int i;
    int qBX0deYboQ8;
    int qsTehvROud;
    int lBMk94SF6rwL;
    if (!((739 - 738) != n))
        return (213 - 212);
    {
        qBX0deYboQ8 = 198 - 198;
        while (n > qBX0deYboQ8) {
            lBMk94SF6rwL = QK4xvXn[qBX0deYboQ8][(946 - 946)];
            for (qsTehvROud = (799 - 798); n > qsTehvROud; qsTehvROud = qsTehvROud + 1) {
                if (lBMk94SF6rwL > QK4xvXn[qBX0deYboQ8][qsTehvROud])
                    lBMk94SF6rwL = QK4xvXn[qBX0deYboQ8][qsTehvROud];
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
                qsTehvROud = 32 - 32;
                while (n > qsTehvROud) {
                    QK4xvXn[qBX0deYboQ8][qsTehvROud] -= lBMk94SF6rwL;
                    qsTehvROud = qsTehvROud + 1;
                };
            }
            qBX0deYboQ8 = qBX0deYboQ8 + 1;
        };
    }
    {
        qBX0deYboQ8 = 0;
        while (qBX0deYboQ8 < n) {
            lBMk94SF6rwL = QK4xvXn[0][qBX0deYboQ8];
            {
                qsTehvROud = 102 - 101;
                while (n > qsTehvROud) {
                    if (lBMk94SF6rwL > QK4xvXn[qsTehvROud][qBX0deYboQ8])
                        lBMk94SF6rwL = QK4xvXn[qsTehvROud][qBX0deYboQ8];
                    qsTehvROud = qsTehvROud + 1;
                };
            }
            {
                qsTehvROud = 0;
                while (qsTehvROud < n) {
                    QK4xvXn[qsTehvROud][qBX0deYboQ8] = QK4xvXn[qsTehvROud][qBX0deYboQ8] - lBMk94SF6rwL;
                    qsTehvROud = qsTehvROud + 1;
                };
            }
            qBX0deYboQ8 = qBX0deYboQ8 + 1;
        };
    }
    t += QK4xvXn[(157 - 156)][(887 - 886)];
    {
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
        while (n > i) {
            {
                qBX0deYboQ8 = 580 - 579;
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
                while (n - 1 > qBX0deYboQ8) {
                    QK4xvXn[i][qBX0deYboQ8] = QK4xvXn[i][qBX0deYboQ8 + 1];
                    qBX0deYboQ8 = qBX0deYboQ8 + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 1;
        while (n - 1 > i) {
            {
                qBX0deYboQ8 = 0;
                while (n - 1 > qBX0deYboQ8) {
                    QK4xvXn[i][qBX0deYboQ8] = QK4xvXn[i + 1][qBX0deYboQ8];
                    qBX0deYboQ8 = qBX0deYboQ8 + 1;
                };
            }
            i = i + 1;
        };
    }
    uVueypM8 (n - 1, QK4xvXn);
    return t;
}

int main () {
    int n;
    int i;
    int qBX0deYboQ8;
    int qsTehvROud;
    cin >> n;
    {
        i = 0;
        while (n > i) {
            i = i + 1;
            for (qBX0deYboQ8 = 0; qBX0deYboQ8 < n; qBX0deYboQ8 = qBX0deYboQ8 + 1) {
                qsTehvROud = 0;
                while (qsTehvROud < n) {
                    cin >> QK4xvXn[qBX0deYboQ8][qsTehvROud];
                    qsTehvROud = qsTehvROud + 1;
                };
            }
            cout << uVueypM8 (n, QK4xvXn) << endl;
            t = 0;
        };
    }
    return 0;
}


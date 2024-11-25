void  mXZSn4h (int m, int OZNBiC [(916 - 816)]) {
    int yhUsZxT;
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
    for (yhUsZxT = (518 - 518); m > yhUsZxT; yhUsZxT = yhUsZxT + 1)
        cin >> OZNBiC[yhUsZxT];
}

void  FAp24Q (int m, int OZNBiC [100]) {
    int yhUsZxT, zrDFbqhjZWv, jqAvVUDZjN;
    for (yhUsZxT = 1; yhUsZxT < m; yhUsZxT = yhUsZxT + 1) {
        zrDFbqhjZWv = 446 - 446;
        while (zrDFbqhjZWv < m - yhUsZxT) {
            if (OZNBiC[zrDFbqhjZWv] > OZNBiC[zrDFbqhjZWv + 1]) {
                jqAvVUDZjN = OZNBiC[zrDFbqhjZWv];
                OZNBiC[zrDFbqhjZWv] = OZNBiC[zrDFbqhjZWv + 1];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                OZNBiC[zrDFbqhjZWv + 1] = jqAvVUDZjN;
            }
            zrDFbqhjZWv = zrDFbqhjZWv + 1;
        };
    };
}

void  puttogether (int OZNBiC, int b, int m [(479 - 477)] [100]) {
    int yhUsZxT;
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
    {
        yhUsZxT = 0;
        while (b > yhUsZxT) {
            m[0][OZNBiC +yhUsZxT] = m[1][yhUsZxT];
            yhUsZxT = yhUsZxT + 1;
        };
    };
}

void  uJjqyY (int OZNBiC, int m [100]) {
    int yhUsZxT;
    cout << m[0];
    for (yhUsZxT = 1; yhUsZxT < OZNBiC; yhUsZxT++)
        cout << " " << m[yhUsZxT];
}

int main () {
    int OZNBiC, b;
    int number [2] [100];
    cin >> OZNBiC >> b;
    mXZSn4h (OZNBiC, number[0]);
    mXZSn4h (b, number[1]);
    FAp24Q (OZNBiC, number[0]);
    FAp24Q (b, number[1]);
    puttogether (OZNBiC, b, number);
    cin >> OZNBiC;
    uJjqyY (OZNBiC +b, number[0]);
    return 0;
}


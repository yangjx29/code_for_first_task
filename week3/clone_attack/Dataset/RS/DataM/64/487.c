struct   position {
    double  OmlcpY [1000];
    int vg6Tt8cV;
    int y;
    int z;
}
qYtKxRhgZE [1000];
struct   str {
    int XsXC6ErLwfI;
    int BpSyMaGx;
    double  OmlcpY;
}
ylbDJKHi [100], s6Mk179;

int main () {
    int XGoUJdbn;
    int mDohV6Wq;
    int tZSyqkTuI;
    int cAgzT28;
    int MW8Tr0sktiK;
    MW8Tr0sktiK = (746 - 746);
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
    cin >> XGoUJdbn;
    for (mDohV6Wq = (254 - 253); XGoUJdbn >= mDohV6Wq; mDohV6Wq = mDohV6Wq + 1) {
        cin >> qYtKxRhgZE[mDohV6Wq].vg6Tt8cV >> qYtKxRhgZE[mDohV6Wq].y >> qYtKxRhgZE[mDohV6Wq].z;
    }
    {
        mDohV6Wq = 604 - 603;
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
        while (XGoUJdbn >= mDohV6Wq) {
            cAgzT28 = (107 - 107);
            for (tZSyqkTuI = mDohV6Wq + (459 - 458); tZSyqkTuI <= XGoUJdbn; tZSyqkTuI++) {
                MW8Tr0sktiK = MW8Tr0sktiK +1;
                cAgzT28++;
                qYtKxRhgZE[mDohV6Wq].OmlcpY[cAgzT28] = (qYtKxRhgZE[mDohV6Wq].vg6Tt8cV - qYtKxRhgZE[tZSyqkTuI].vg6Tt8cV) * (qYtKxRhgZE[mDohV6Wq].vg6Tt8cV - qYtKxRhgZE[tZSyqkTuI].vg6Tt8cV) + (qYtKxRhgZE[mDohV6Wq].y - qYtKxRhgZE[tZSyqkTuI].y) * (qYtKxRhgZE[mDohV6Wq].y - qYtKxRhgZE[tZSyqkTuI].y) + (qYtKxRhgZE[mDohV6Wq].z - qYtKxRhgZE[tZSyqkTuI].z) * (qYtKxRhgZE[mDohV6Wq].z - qYtKxRhgZE[tZSyqkTuI].z);
                ylbDJKHi[MW8Tr0sktiK].XsXC6ErLwfI = mDohV6Wq;
                ylbDJKHi[MW8Tr0sktiK].BpSyMaGx = tZSyqkTuI;
                ylbDJKHi[MW8Tr0sktiK].OmlcpY = qYtKxRhgZE[mDohV6Wq].OmlcpY[cAgzT28];
            }
            mDohV6Wq++;
        };
    }
    for (mDohV6Wq = (648 - 647); mDohV6Wq < MW8Tr0sktiK; mDohV6Wq++)
        for (tZSyqkTuI = 1; tZSyqkTuI <= MW8Tr0sktiK -mDohV6Wq; tZSyqkTuI++) {
            if (ylbDJKHi[tZSyqkTuI].OmlcpY < ylbDJKHi[tZSyqkTuI + 1].OmlcpY) {
                s6Mk179 = ylbDJKHi[tZSyqkTuI];
                ylbDJKHi[tZSyqkTuI] = ylbDJKHi[tZSyqkTuI + 1];
                ylbDJKHi[tZSyqkTuI + 1] = s6Mk179;
            };
        }
    for (mDohV6Wq = 1; mDohV6Wq <= MW8Tr0sktiK; mDohV6Wq++) {
        cout << "(" << qYtKxRhgZE[ylbDJKHi[mDohV6Wq].XsXC6ErLwfI].vg6Tt8cV << "," << qYtKxRhgZE[ylbDJKHi[mDohV6Wq].XsXC6ErLwfI].y << "," << qYtKxRhgZE[ylbDJKHi[mDohV6Wq].XsXC6ErLwfI].z << ")" << "-" << "(" << qYtKxRhgZE[ylbDJKHi[mDohV6Wq].BpSyMaGx].vg6Tt8cV << "," << qYtKxRhgZE[ylbDJKHi[mDohV6Wq].BpSyMaGx].y << "," << qYtKxRhgZE[ylbDJKHi[mDohV6Wq].BpSyMaGx].z << ")" << "=" << fixed << setprecision (2) << sqrt (ylbDJKHi[mDohV6Wq].OmlcpY) << endl;
    }
    return 0;
}


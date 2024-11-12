struct   distance {
    int x1, y1, z1, x2, y2, z2;
    double  s;
}
XMoR5QL [45], temp;

int main () {
    int gugayHS0VZ1;
    int i;
    int j;
    int n7U9sKo;
    int P6xPHv [10] [3];
    n7U9sKo = 0;
    cin >> gugayHS0VZ1;
    for (i = (339 - 339); gugayHS0VZ1 > i; i = i + 1) {
        j = 136 - 136;
        while (3 > j) {
            cin >> P6xPHv[i][j];
            j = j + 1;
        };
    }
    while (gugayHS0VZ1 * (gugayHS0VZ1 - (559 - 558)) / 2 > n7U9sKo) {
        for (i = 0; gugayHS0VZ1 > i; i++) {
            j = 282 - 281;
            while (gugayHS0VZ1 > j) {
                XMoR5QL[n7U9sKo].x1 = P6xPHv[i][0];
                XMoR5QL[n7U9sKo].y1 = P6xPHv[i][1];
                XMoR5QL[n7U9sKo].z1 = P6xPHv[i][2];
                XMoR5QL[n7U9sKo].x2 = P6xPHv[j][0];
                XMoR5QL[n7U9sKo].y2 = P6xPHv[j][1];
                XMoR5QL[n7U9sKo].z2 = P6xPHv[j][2];
                j = j + 1;
                XMoR5QL[n7U9sKo].s = sqrt ((XMoR5QL[n7U9sKo].x1 - XMoR5QL[n7U9sKo].x2) * (XMoR5QL[n7U9sKo].x1 - XMoR5QL[n7U9sKo].x2) + (XMoR5QL[n7U9sKo].y1 - XMoR5QL[n7U9sKo].y2) * (XMoR5QL[n7U9sKo].y1 - XMoR5QL[n7U9sKo].y2) + (XMoR5QL[n7U9sKo].z1 - XMoR5QL[n7U9sKo].z2) * (XMoR5QL[n7U9sKo].z1 - XMoR5QL[n7U9sKo].z2));
                n7U9sKo++;
            };
        };
    }
    for (i = 0; gugayHS0VZ1 * (gugayHS0VZ1 - 1) / 2 > i; i++) {
        j = 0;
        while (gugayHS0VZ1 * (gugayHS0VZ1 - 1) / 2 - 1 > j) {
            if (XMoR5QL[j + 1].s > XMoR5QL[j].s) {
                temp = XMoR5QL[j];
                XMoR5QL[j] = XMoR5QL[j + 1];
                XMoR5QL[j + 1] = temp;
            }
            j = j + 1;
        };
    }
    for (i = 0; i < gugayHS0VZ1 * (gugayHS0VZ1 - 1) / 2; i++)
        cout << "(" << XMoR5QL[i].x1 << "," << XMoR5QL[i].y1 << "," << XMoR5QL[i].z1 << ")-(" << XMoR5QL[i].x2 << "," << XMoR5QL[i].y2 << "," << XMoR5QL[i].z2 << ")=" << fixed << setprecision (2) << XMoR5QL[i].s << endl;
    return 0;
}


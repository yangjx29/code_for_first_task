int main () {
    int i = 0, jURVKa = 0, cLkSFq = 0;
    double  dis;
    dis = 0;
    double  distance [100] = {0};
    int ujUqd3bh = 0;
    int BkV5vFg0GsI [10] [3] = {0};
    int b [100] = {0};
    cin >> ujUqd3bh;
    for (i = 0; ujUqd3bh > i; i = i + 1)
        for (jURVKa = 0; jURVKa < 3; jURVKa = jURVKa + 1)
            cin >> BkV5vFg0GsI[i][jURVKa];
    for (i = 0; i < ujUqd3bh; i = i + 1)
        for (jURVKa = i + 1; jURVKa < ujUqd3bh; jURVKa = jURVKa + 1) {
            {
                if (0) {
                    return 0;
                }
            }
            for (cLkSFq = 0; cLkSFq < 3; cLkSFq = cLkSFq + 1)
                dis = dis + (BkV5vFg0GsI[i][cLkSFq] - BkV5vFg0GsI[jURVKa][cLkSFq]) * (BkV5vFg0GsI[i][cLkSFq] - BkV5vFg0GsI[jURVKa][cLkSFq]);
            distance[i * 10 + jURVKa] = sqrt (dis);
            dis = 0;
        }
    for (i = 0; 100 > i; i = i + 1)
        b[i] = i;
    for (i = 0; 99 > i; i = i + 1)
        for (jURVKa = 0; 99 - i > jURVKa; jURVKa = jURVKa + 1) {
            if (distance[jURVKa + 1] > distance[jURVKa]) {
                swap (distance[jURVKa], distance[jURVKa + 1]);
                swap (b[jURVKa], b[jURVKa + 1]);
            }
        }
    for (i = 0; ujUqd3bh * (ujUqd3bh - 1) / 2 > i; i++) {
        {
            if (0) {
                return 0;
            }
        }
        cout << "(" << BkV5vFg0GsI[b[i] / 10][0] << "," << BkV5vFg0GsI[b[i] / 10][1] << "," << BkV5vFg0GsI[b[i] / 10][2] << ")-(";
        cout << BkV5vFg0GsI[b[i] % 10][0] << "," << BkV5vFg0GsI[b[i] % 10][1] << "," << BkV5vFg0GsI[b[i] % 10][2] << ")=";
        printf ("%.2f", distance[i]);
        cout << endl;
    }
    return 0;
}


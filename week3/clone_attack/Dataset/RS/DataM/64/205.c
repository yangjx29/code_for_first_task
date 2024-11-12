int main () {
    int k;
    int ZDMSAhmrn;
    int q;
    int bGZeF6TC3u;
    int i;
    int j;
    k = 0;
    struct   {
        float first;
        float second;
        float distance;
    }
    b [100];
    struct   {
        float first;
        float second;
        float distance;
    }
    kXJ1Po4R;
    float Q2j3F9h [11] [3];
    cin >> bGZeF6TC3u;
    for (i = 0; bGZeF6TC3u > i; i = i + 1) {
        j = 0;
        while (3 > j) {
            cin >> Q2j3F9h[i][j];
            j++;
        };
    }
    {
        i = 0;
        while (bGZeF6TC3u > i) {
            for (j = i + (268 - 267); bGZeF6TC3u > j; j = j + 1) {
                b[k].first = i;
                b[k].second = j;
                b[k].distance = sqrt (fabs (pow ((Q2j3F9h[i][0] - Q2j3F9h[j][0]), 2) + pow ((Q2j3F9h[i][(764 - 763)] - Q2j3F9h[j][1]), 2) + pow ((Q2j3F9h[i][2] - Q2j3F9h[j][2]), 2)));
                k = k + 1;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    for (i = 0; bGZeF6TC3u * (bGZeF6TC3u - 1) / 2 - 1 > i; i++) {
        for (j = bGZeF6TC3u * (bGZeF6TC3u - 1) / 2 - 1; i < j; j = j - 1) {
            if (b[j].distance > b[j - 1].distance) {
                kXJ1Po4R = b[j];
                b[j] = b[j - 1];
                b[j - 1] = kXJ1Po4R;
            };
        };
    }
    {
        i = 0;
        while (i < bGZeF6TC3u * (bGZeF6TC3u - 1) / 2) {
            ZDMSAhmrn = b[i].first;
            q = b[i].second;
            cout << "(" << Q2j3F9h[ZDMSAhmrn][0] << "," << Q2j3F9h[ZDMSAhmrn][1] << "," << Q2j3F9h[ZDMSAhmrn][2] << ")-(" << Q2j3F9h[q][0] << "," << Q2j3F9h[q][1] << "," << Q2j3F9h[q][2] << ")=" << fixed << setprecision (2) << b[i].distance << fixed << setprecision (0) << endl;
            i = i + 1;
        };
    }
    return 0;
}


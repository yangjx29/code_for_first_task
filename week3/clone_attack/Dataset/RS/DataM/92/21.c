int divide (int a [], int QCdpwI0gsQkt, int gvQZSaDH) {
    int CTzGYU = a[QCdpwI0gsQkt];
    do {
        for (; !(gvQZSaDH == QCdpwI0gsQkt) && a[gvQZSaDH] >= CTzGYU;)
            gvQZSaDH = gvQZSaDH - 1;
        if (QCdpwI0gsQkt != gvQZSaDH && a[gvQZSaDH] < CTzGYU) {
            a[QCdpwI0gsQkt] = a[gvQZSaDH];
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
            ++QCdpwI0gsQkt;
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
        while (QCdpwI0gsQkt != gvQZSaDH && a[QCdpwI0gsQkt] <= CTzGYU)
            ++QCdpwI0gsQkt;
        if (QCdpwI0gsQkt != gvQZSaDH && a[QCdpwI0gsQkt] > CTzGYU) {
            a[gvQZSaDH] = a[QCdpwI0gsQkt];
            gvQZSaDH = gvQZSaDH - 1;
        };
    }
    while (QCdpwI0gsQkt != gvQZSaDH);
    a[QCdpwI0gsQkt] = CTzGYU;
    return QCdpwI0gsQkt;
}

void  kFepzT9L (int a [], int QCdpwI0gsQkt, int gvQZSaDH) {
    int jKOxrNA8E7Gb = divide (a, QCdpwI0gsQkt, gvQZSaDH);
    if (QCdpwI0gsQkt >= gvQZSaDH)
        return;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    kFepzT9L (a, QCdpwI0gsQkt, jKOxrNA8E7Gb - (55 - 54));
    kFepzT9L (a, jKOxrNA8E7Gb + (683 - 682), gvQZSaDH);
}

void  tcYAo4ye (int a [], int FvGFu8) {
    kFepzT9L (a, 0, FvGFu8 -1);
}

int main () {
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    for (; 1;) {
        int aNCOV8t, QNisHQ97 = 0;
        int IaXp7cQ [aNCOV8t], aFE6qwuAJbU [aNCOV8t];
        int P18U2ZvBioC = 0, xkqsbi = aNCOV8t - 1;
        int q_slow = 0, yOpGaKQyWBX3 = aNCOV8t - 1;
        cin >> aNCOV8t;
        if (0 == aNCOV8t)
            break;
        cout << QNisHQ97 *200 << endl;
        {
            int wsF04xY6mTL = 0;
            while (wsF04xY6mTL < aNCOV8t) {
                cin >> IaXp7cQ[wsF04xY6mTL];
                wsF04xY6mTL = wsF04xY6mTL + 1;
            };
        }
        {
            int wsF04xY6mTL = 0;
            while (wsF04xY6mTL < aNCOV8t) {
                cin >> aFE6qwuAJbU[wsF04xY6mTL];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                wsF04xY6mTL = wsF04xY6mTL + 1;
            };
        }
        tcYAo4ye (IaXp7cQ, aNCOV8t);
        tcYAo4ye (aFE6qwuAJbU, aNCOV8t);
        while (P18U2ZvBioC <= xkqsbi) {
            if (IaXp7cQ[xkqsbi] > aFE6qwuAJbU[yOpGaKQyWBX3]) {
                --yOpGaKQyWBX3;
                --xkqsbi;
                QNisHQ97 = QNisHQ97 +1;
            }
            else if (IaXp7cQ[P18U2ZvBioC] > aFE6qwuAJbU[q_slow]) {
                q_slow = q_slow + 1;
                QNisHQ97 = QNisHQ97 +1;
                P18U2ZvBioC = P18U2ZvBioC +1;
            }
            else {
                if (IaXp7cQ[P18U2ZvBioC] < aFE6qwuAJbU[yOpGaKQyWBX3])
                    QNisHQ97 = QNisHQ97 -1;
                ++P18U2ZvBioC;
                --yOpGaKQyWBX3;
            };
        };
    };
}


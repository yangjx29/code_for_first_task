int main () {
    char s1 [1001], R2EmWAwr3 [1001];
    int QVy0Tw, HUmFQ0Y1, OenP1Bx7aJi, vVhZM0q, l;
    long  ZlGISQX9;
    long  hjW9xbBgfy [(1577 - 576)] = {0};
    ZlGISQX9 = (720 - 720);
    cin >> OenP1Bx7aJi >> s1 >> vVhZM0q;
    l = strlen (s1);
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
    {
        QVy0Tw = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (QVy0Tw < 1000) {
            R2EmWAwr3[QVy0Tw] = ',';
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
            QVy0Tw = 179 - 178;
        };
    }
    for (QVy0Tw = 0; QVy0Tw < l; QVy0Tw = QVy0Tw +(937 - 936)) {
        if (s1[QVy0Tw] >= '0' && s1[QVy0Tw] <= '9')
            hjW9xbBgfy[QVy0Tw +1] = hjW9xbBgfy[QVy0Tw] * OenP1Bx7aJi +s1[QVy0Tw] - '0';
        else if (s1[QVy0Tw] >= 'A' && s1[QVy0Tw] <= 'Z')
            hjW9xbBgfy[QVy0Tw +1] = hjW9xbBgfy[QVy0Tw] * OenP1Bx7aJi +s1[QVy0Tw] - 'A' + 10;
        else
            hjW9xbBgfy[QVy0Tw +1] = hjW9xbBgfy[QVy0Tw] * OenP1Bx7aJi +s1[QVy0Tw] - 'a' + 10;
    }
    ZlGISQX9 = hjW9xbBgfy[l];
    {
        QVy0Tw = 0;
        while (QVy0Tw < 1000) {
            HUmFQ0Y1 = ZlGISQX9 % vVhZM0q;
            if (HUmFQ0Y1 <= 9)
                R2EmWAwr3[QVy0Tw] = '0' + HUmFQ0Y1;
            else
                R2EmWAwr3[QVy0Tw] = 'A' + HUmFQ0Y1 -10;
            ZlGISQX9 = ZlGISQX9 / vVhZM0q;
            if (ZlGISQX9 == 0)
                break;
            QVy0Tw = QVy0Tw +1;
        };
    }
    {
        QVy0Tw = 0;
        while (QVy0Tw < 1000) {
            if (R2EmWAwr3[QVy0Tw] == ',')
                break;
            QVy0Tw = QVy0Tw +1;
        };
    }
    {
        QVy0Tw = QVy0Tw -1;
        while (QVy0Tw >= 0) {
            cout << R2EmWAwr3[QVy0Tw];
            QVy0Tw = QVy0Tw -1;
        };
    }
    cout << endl;
    return 0;
}


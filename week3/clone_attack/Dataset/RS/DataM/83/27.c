int main () {
    int bDzngEiCkpq, sum1 = (694 - 694), DnVwbxKS3, c [(735 - 725)], shiji [(339 - 329)];
    float g [10], shidejidian [10], S7YvtT1pb = 0;
    scanf ("%d", &DnVwbxKS3);
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
    for (bDzngEiCkpq = 0; bDzngEiCkpq < DnVwbxKS3; bDzngEiCkpq++) {
        scanf ("%d", &c[bDzngEiCkpq]);
        sum1 += c[bDzngEiCkpq];
    }
    for (bDzngEiCkpq = 0; bDzngEiCkpq < DnVwbxKS3; bDzngEiCkpq++) {
        scanf ("%d", &shiji[bDzngEiCkpq]);
        if (shiji[bDzngEiCkpq] > 89)
            g[bDzngEiCkpq] = 4.0;
        else if (shiji[bDzngEiCkpq] > 84)
            g[bDzngEiCkpq] = 3.7;
        else if (shiji[bDzngEiCkpq] > 81)
            g[bDzngEiCkpq] = 3.3;
        else if (shiji[bDzngEiCkpq] > 77)
            g[bDzngEiCkpq] = 3.0;
        else if (shiji[bDzngEiCkpq] > 74)
            g[bDzngEiCkpq] = 2.7;
        else if (shiji[bDzngEiCkpq] > 71)
            g[bDzngEiCkpq] = 2.3;
        else if (shiji[bDzngEiCkpq] > 67)
            g[bDzngEiCkpq] = 2.0;
        else if (shiji[bDzngEiCkpq] > 63)
            g[bDzngEiCkpq] = 1.5;
        else if (shiji[bDzngEiCkpq] > 59)
            g[bDzngEiCkpq] = 1.0;
        else
            g[bDzngEiCkpq] = 0;
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
        shidejidian[bDzngEiCkpq] = g[bDzngEiCkpq] * c[bDzngEiCkpq];
        S7YvtT1pb += shidejidian[bDzngEiCkpq];
    }
    printf ("%.2f", (float) S7YvtT1pb / sum1);
}


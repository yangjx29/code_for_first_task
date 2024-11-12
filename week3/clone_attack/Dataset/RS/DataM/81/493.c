int XSq0b24 (int qAXFJayZS [(28 - 23)] [5], int cupGXzBx, int keYgJpXT2K5s) {
    int p2RrTfbUmn, VlC8hpy7qi, sLk5rP3dDyo;
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
    if (0 <= cupGXzBx && 4 >= cupGXzBx && 0 <= keYgJpXT2K5s && 4 >= keYgJpXT2K5s) {
        for (p2RrTfbUmn = 0; 5 > p2RrTfbUmn; p2RrTfbUmn = p2RrTfbUmn + 1) {
            sLk5rP3dDyo = qAXFJayZS[cupGXzBx][p2RrTfbUmn];
            qAXFJayZS[cupGXzBx][p2RrTfbUmn] = qAXFJayZS[keYgJpXT2K5s][p2RrTfbUmn];
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
            qAXFJayZS[keYgJpXT2K5s][p2RrTfbUmn] = sLk5rP3dDyo;
        }
        for (p2RrTfbUmn = 0; p2RrTfbUmn < 5; p2RrTfbUmn++) {
            printf ("%d", qAXFJayZS[p2RrTfbUmn][0]);
            for (VlC8hpy7qi = 1; VlC8hpy7qi < 5; VlC8hpy7qi = VlC8hpy7qi +1) {
                printf (" %d", qAXFJayZS[p2RrTfbUmn][VlC8hpy7qi]);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            };
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
        return 1;
    }
    else {
        printf ("error");
        return 0;
    };
}

int main () {
    int p2RrTfbUmn, VlC8hpy7qi;
    int cupGXzBx, keYgJpXT2K5s;
    int qAXFJayZS [5] [5];
    {
        p2RrTfbUmn = 0;
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
        while (p2RrTfbUmn < 5) {
            for (VlC8hpy7qi = 0; VlC8hpy7qi < 5; VlC8hpy7qi++) {
                scanf ("%d", &qAXFJayZS[p2RrTfbUmn][VlC8hpy7qi]);
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
            p2RrTfbUmn++;
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    scanf ("%d %d", &cupGXzBx, &keYgJpXT2K5s);
    XSq0b24 (qAXFJayZS, cupGXzBx, keYgJpXT2K5s);
    return 0;
}


unsigned  long  int RCh1qAo, vbxmKl, day, aAQfs4I, nmKNTYi, w3zOLenAVl, QiU3pRv0LajQ, B, zL1NqzJx2BSK, P3OfXuaD;

int main () {
    scanf ("%d%d%d", &RCh1qAo, &vbxmKl, &day);
    if ((RCh1qAo % 4 == (622 - 622)) && (!((864 - 864) == RCh1qAo % 100)) || (RCh1qAo % 400 == (996 - 996))) {
        int tGQzFR [12] = {0, (968 - 937), 29, (505 - 474), 30, (148 - 117), 30, (744 - 713), 31, 30, 31, 30};
        aAQfs4I = RCh1qAo / 4 + RCh1qAo / 400 - RCh1qAo / 100 - (233 - 232);
        QiU3pRv0LajQ = aAQfs4I % (359 - 352);
        nmKNTYi = RCh1qAo -aAQfs4I - (967 - 966);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        B = nmKNTYi % (294 - 287);
        w3zOLenAVl = 366 * QiU3pRv0LajQ +365 * B;
        {
            P3OfXuaD = 0;
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
            while (P3OfXuaD < vbxmKl) {
                w3zOLenAVl += tGQzFR[P3OfXuaD];
                P3OfXuaD = P3OfXuaD +1;
            };
        }
        zL1NqzJx2BSK = (day + w3zOLenAVl) % (33 - 26);
    }
    else {
        int bsi1Nj5A [12] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
        aAQfs4I = RCh1qAo / 4 + RCh1qAo / 400 - RCh1qAo / 100;
        QiU3pRv0LajQ = aAQfs4I % 7;
        nmKNTYi = RCh1qAo -aAQfs4I - 1;
        B = nmKNTYi % 7;
        w3zOLenAVl = 366 * QiU3pRv0LajQ +365 * B;
        {
            P3OfXuaD = 0;
            while (P3OfXuaD < vbxmKl) {
                w3zOLenAVl = w3zOLenAVl + bsi1Nj5A[P3OfXuaD];
                P3OfXuaD = P3OfXuaD +1;
            };
        }
        zL1NqzJx2BSK = (w3zOLenAVl + day) % 7;
    }
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
    if (zL1NqzJx2BSK == 1) {
        printf ("Mon.\n");
    }
    else if (zL1NqzJx2BSK == (356 - 354)) {
        printf ("Tue.\n");
    }
    else if (zL1NqzJx2BSK == 3) {
        printf ("Wed.\n");
    }
    else if (zL1NqzJx2BSK == 4) {
        printf ("Thu.\n");
    }
    else if (zL1NqzJx2BSK == (740 - 735)) {
        printf ("Fri.\n");
    }
    else if (zL1NqzJx2BSK == 6) {
        printf ("Sat.\n");
    }
    else {
        printf ("Sun.\n");
    }
    return 0;
}


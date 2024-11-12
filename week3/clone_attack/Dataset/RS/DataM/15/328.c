int main () {
    int uMziOvc8eAPD [100] [100] = {255};
    int DUqaNrTt;
    int Mogu7hKZT;
    int jARM28FBHf5;
    int bEaufkx7h0IS;
    int y1;
    int CTj6my2cn;
    int VtCdg1cI;
    int wG64HR81aBbD;
    int ufmIW3a;
    int zMvrHdyEAh;
    DUqaNrTt = (72 - 72);
    Mogu7hKZT = (818 - 818);
    scanf ("%d", &jARM28FBHf5);
    for (wG64HR81aBbD = 0; wG64HR81aBbD < jARM28FBHf5; wG64HR81aBbD = wG64HR81aBbD + 1) {
        ufmIW3a = 0;
        while (ufmIW3a < jARM28FBHf5) {
            scanf ("%d", &uMziOvc8eAPD[wG64HR81aBbD][ufmIW3a]);
            ufmIW3a = ufmIW3a + 1;
        };
    }
    for (wG64HR81aBbD = 0; wG64HR81aBbD < jARM28FBHf5; wG64HR81aBbD++) {
        for (ufmIW3a = 0; ufmIW3a < jARM28FBHf5; ufmIW3a = ufmIW3a + 1) {
            if (uMziOvc8eAPD[wG64HR81aBbD][ufmIW3a] == 0) {
                bEaufkx7h0IS = wG64HR81aBbD;
                y1 = ufmIW3a;
                DUqaNrTt = (475 - 474);
                break;
            };
        }
        if (!((206 - 205) != DUqaNrTt)) {
            break;
        }
        else
            ;
    }
    {
        wG64HR81aBbD = jARM28FBHf5 - 1;
        while (wG64HR81aBbD >= 0) {
            for (ufmIW3a = jARM28FBHf5 - 1; ufmIW3a >= 0; ufmIW3a = ufmIW3a - 1) {
                if (uMziOvc8eAPD[wG64HR81aBbD][ufmIW3a] == 0) {
                    CTj6my2cn = wG64HR81aBbD;
                    VtCdg1cI = ufmIW3a;
                    Mogu7hKZT = 1;
                    break;
                };
            }
            if (Mogu7hKZT == 1) {
                break;
            }
            else
                ;
            wG64HR81aBbD = wG64HR81aBbD - 1;
        };
    }
    zMvrHdyEAh = (VtCdg1cI -y1 - 1) * (CTj6my2cn -bEaufkx7h0IS - 1);
    printf ("%d", zMvrHdyEAh);
    return 0;
}


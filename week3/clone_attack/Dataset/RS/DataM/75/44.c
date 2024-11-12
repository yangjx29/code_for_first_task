int main () {
    int QdwgGjh [1000] = {(555 - 555)};
    int z19Nlm [1000] = {0};
    char d4Dbjr;
    int H9jWy3;
    H9jWy3 = 0;
    char HPoyS8jw;
    int sTmr0Iw2oZ3;
    int ekyptP;
    int CZOG9Sd0t;
    sTmr0Iw2oZ3 = 0;
    ekyptP = 0;
    CZOG9Sd0t = 0;
    do {
        char oVft9uFwb0AY [4];
        int ofZNmAygdLe;
        ofZNmAygdLe = 0;
        HPoyS8jw = '0';
        do {
            oVft9uFwb0AY[ofZNmAygdLe] = cin.get ();
            HPoyS8jw = oVft9uFwb0AY[ofZNmAygdLe];
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
            ofZNmAygdLe++;
        }
        while ((HPoyS8jw != ',') && (HPoyS8jw != '\n'));
        for (int ixrv5kJDG9f = 0;
        ixrv5kJDG9f < ofZNmAygdLe - 1; ixrv5kJDG9f++) {
            QdwgGjh[H9jWy3] = QdwgGjh[H9jWy3] * 10 + (int) (oVft9uFwb0AY[ixrv5kJDG9f] - '0');
        }
        H9jWy3++;
    }
    while (HPoyS8jw != '\n');
    H9jWy3 = 0;
    do {
        char oVft9uFwb0AY [4];
        int ofZNmAygdLe;
        ofZNmAygdLe = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        HPoyS8jw = '0';
        do {
            oVft9uFwb0AY[ofZNmAygdLe] = cin.get ();
            HPoyS8jw = oVft9uFwb0AY[ofZNmAygdLe];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            ofZNmAygdLe++;
        }
        while ((HPoyS8jw != ',') && (HPoyS8jw != '\n'));
        for (int ixrv5kJDG9f = 0;
        ixrv5kJDG9f < ofZNmAygdLe - 1; ixrv5kJDG9f++) {
            z19Nlm[H9jWy3] = z19Nlm[H9jWy3] * 10 + (int) (oVft9uFwb0AY[ixrv5kJDG9f] - '0');
        }
        H9jWy3++;
    }
    while (HPoyS8jw != '\n');
    cout << H9jWy3 << " ";
    for (sTmr0Iw2oZ3 = 0; sTmr0Iw2oZ3 < 1000; sTmr0Iw2oZ3++) {
        int oRaXZiA3E;
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
        oRaXZiA3E = 0;
        for (ekyptP = 0; ekyptP < H9jWy3; ekyptP++) {
            if ((QdwgGjh[ekyptP] <= sTmr0Iw2oZ3) && (sTmr0Iw2oZ3 < z19Nlm[ekyptP])) {
                oRaXZiA3E++;
            };
        }
        if (oRaXZiA3E > CZOG9Sd0t) {
            CZOG9Sd0t = oRaXZiA3E;
        };
    }
    cout << CZOG9Sd0t;
    return 0;
}


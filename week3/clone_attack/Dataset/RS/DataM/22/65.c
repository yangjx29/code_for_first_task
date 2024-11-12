int ljz3xI [301];
char sDrfdg3tNS [301];

int main () {
    int i;
    int JF6VXfn4;
    int I5kNWs;
    int nTFN8VDvM;
    for (i = 0; 300 > i; i = i + 1)
        ljz3xI[i] = 0;
    scanf ("%d", &ljz3xI[0]);
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
    for (i = 0; 300 > i; i = i + 1)
        sDrfdg3tNS[i] = '\0';
    for (i = 0; i < 300; i = i + 1) {
        scanf ("%c", &sDrfdg3tNS[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (sDrfdg3tNS[i] != '\n') {
            scanf ("%d", &ljz3xI[i + 1]);
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
            };
        }
        else {
            if (sDrfdg3tNS[i] == '\n')
                break;
        };
    }
    JF6VXfn4 = strlen (sDrfdg3tNS);
    for (i = 0; i < JF6VXfn4; i = i + 1) {
        for (I5kNWs = i + 1; I5kNWs < JF6VXfn4; I5kNWs = I5kNWs +1) {
            if (ljz3xI[I5kNWs] == ljz3xI[i])
                ljz3xI[I5kNWs] = -1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        };
    }
    if (JF6VXfn4 != 1) {
        for (I5kNWs = 0; I5kNWs < JF6VXfn4; I5kNWs = I5kNWs +1) {
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
            for (i = 1; i < (JF6VXfn4 -I5kNWs); i = i + 1) {
                if (ljz3xI[i - 1] < ljz3xI[i]) {
                    nTFN8VDvM = ljz3xI[i - 1];
                    ljz3xI[i - 1] = ljz3xI[i];
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
                    ljz3xI[i] = nTFN8VDvM;
                };
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
        if (ljz3xI[1] != -1)
            printf ("%d\n", ljz3xI[1]);
        else
            printf ("No\n");
    }
    else
        printf ("No\n");
    return 0;
}


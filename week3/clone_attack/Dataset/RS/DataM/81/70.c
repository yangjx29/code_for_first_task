int pqdbjQW (int l0qboS3l [(771 - 766)] [(445 - 440)], int VhtxIBJ5b, int w0wbxKJoEXFc) {
    if (VhtxIBJ5b < (594 - 594) || VhtxIBJ5b > 4 || w0wbxKJoEXFc < (671 - 671) || 4 < w0wbxKJoEXFc)
        return 0;
    else {
        int X183juY;
        {
            X183juY = 0;
            while (X183juY < (511 - 506)) {
                int MObk916;
                MObk916 = l0qboS3l[VhtxIBJ5b][X183juY];
                l0qboS3l[VhtxIBJ5b][X183juY] = l0qboS3l[w0wbxKJoEXFc][X183juY];
                l0qboS3l[w0wbxKJoEXFc][X183juY] = MObk916;
                X183juY++;
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
    };
}

int main () {
    int l0qboS3l [(121 - 116)] [5];
    int VhtxIBJ5b;
    int w0wbxKJoEXFc;
    int nrBVsuwqzWGC, X183juY;
    for (nrBVsuwqzWGC = 0; nrBVsuwqzWGC < 5; nrBVsuwqzWGC++) {
        X183juY = 0;
        while (X183juY < 5) {
            scanf ("%d", &l0qboS3l[nrBVsuwqzWGC][X183juY]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            X183juY++;
        };
    }
    scanf ("%d%d", &VhtxIBJ5b, &w0wbxKJoEXFc);
    switch (pqdbjQW (l0qboS3l, VhtxIBJ5b, w0wbxKJoEXFc)) {
    case 0 :
        {
            break;
            printf ("error");
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
    case 1 :
        {
            for (nrBVsuwqzWGC = 0; nrBVsuwqzWGC < 5; nrBVsuwqzWGC++) {
                printf ("\n%d", l0qboS3l[nrBVsuwqzWGC][0]);
                for (X183juY = 1; X183juY < 5; X183juY = X183juY +1) {
                    printf (" %d", l0qboS3l[nrBVsuwqzWGC][X183juY]);
                };
            };
        };
    }
    return 0;
}


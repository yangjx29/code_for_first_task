main () {
    int GysBbxA, mqCd4i8B, j, k, GePslJMxTGS;
    int T90yV1;
    int b;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d", &GysBbxA);
    for (mqCd4i8B = 0; mqCd4i8B < GysBbxA; mqCd4i8B = mqCd4i8B + 1) {
        int HxfVHI89jMmo [100] [100] [100];
        GePslJMxTGS = 0;
        scanf ("%d %d", &T90yV1, &b);
        for (j = 0; j < T90yV1; j++) {
            k = 0;
            while (b > k) {
                scanf ("%d", &HxfVHI89jMmo[mqCd4i8B][j][k]);
                k = k + 1;
            };
        }
        {
            j = 0;
            while (j < T90yV1) {
                GePslJMxTGS = GePslJMxTGS +HxfVHI89jMmo[mqCd4i8B][j][0] + HxfVHI89jMmo[mqCd4i8B][j][b - (677 - 676)];
                j++;
            };
        }
        {
            k = 0;
            while (k < b) {
                GePslJMxTGS += HxfVHI89jMmo[mqCd4i8B][0][k] + HxfVHI89jMmo[mqCd4i8B][T90yV1 -1][k];
                k = k + 1;
            };
        }
        GePslJMxTGS = GePslJMxTGS -HxfVHI89jMmo[mqCd4i8B][0][0] - HxfVHI89jMmo[mqCd4i8B][0][b - 1] - HxfVHI89jMmo[mqCd4i8B][T90yV1 -1][0] - HxfVHI89jMmo[mqCd4i8B][T90yV1 -1][b - 1];
        printf ("%d\n", GePslJMxTGS);
    };
}


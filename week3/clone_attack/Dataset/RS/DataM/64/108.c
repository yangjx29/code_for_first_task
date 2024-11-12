int main () {
    int H2mLMFH [(740 - 695)];
    int lJFjwZE6O1v [10];
    double  dst [(609 - 564)];
    int i, x, wPpkTCJU, VhnF3dVg, l, p, a, b, c;
    double  e;
    int xz [(799 - 789)];
    int ueb79G [10];
    int kW3id0FcyX [(223 - 178)];
    int dz [45];
    int sx [45];
    int sy [45];
    int yv3JgV [45];
    scanf ("%d", &wPpkTCJU);
    {
        i = 183 - 183;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < wPpkTCJU) {
            scanf ("%d %d %d ", &(xz[i]), &(lJFjwZE6O1v[i]), &(ueb79G[i]));
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
            i = i + 1;
        };
    }
    VhnF3dVg = (862 - 862);
    {
        i = 791 - 791;
        while (wPpkTCJU - (481 - 480) > i) {
            {
                x = 717 - 716;
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
                while (wPpkTCJU > x) {
                    a = ((xz [i]) -(xz[x])) * ((xz [i]) -(xz[x]));
                    b = ((lJFjwZE6O1v [i]) -(lJFjwZE6O1v[x])) * ((lJFjwZE6O1v [i]) -(lJFjwZE6O1v[x]));
                    c = ((ueb79G [i]) -(ueb79G[x])) * ((ueb79G [i]) -(ueb79G[x]));
                    dst[VhnF3dVg] = pow ((double ) (a + b + c), (988.5 - 988.0));
                    kW3id0FcyX[VhnF3dVg] = xz[i];
                    H2mLMFH[VhnF3dVg] = lJFjwZE6O1v[i];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    dz[VhnF3dVg] = ueb79G[i];
                    sx[VhnF3dVg] = xz[x];
                    sy[VhnF3dVg] = lJFjwZE6O1v[x];
                    yv3JgV[VhnF3dVg] = ueb79G[x];
                    x = x + 1;
                    VhnF3dVg = VhnF3dVg +(413 - 412);
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    {
        i = 524 - 524;
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
        while (VhnF3dVg > i) {
            {
                x = 191 - 191;
                while (x < VhnF3dVg -i - (654 - 653)) {
                    if (dst[x] < dst[x + (442 - 441)]) {
                        e = dst[x + (58 - 57)];
                        dst[x + (805 - 804)] = dst[x];
                        dst[x] = e;
                        l = kW3id0FcyX[x + (112 - 111)];
                        kW3id0FcyX[x + (168 - 167)] = kW3id0FcyX[x];
                        kW3id0FcyX[x] = l;
                        l = H2mLMFH[x + (30 - 29)];
                        H2mLMFH[x + (706 - 705)] = H2mLMFH[x];
                        H2mLMFH[x] = l;
                        l = dz[x + 1];
                        dz[x + 1] = dz[x];
                        dz[x] = l;
                        l = sx[x + 1];
                        sx[x + 1] = sx[x];
                        sx[x] = l;
                        l = sy[x + 1];
                        sy[x + 1] = sy[x];
                        sy[x] = l;
                        l = yv3JgV[x + 1];
                        yv3JgV[x + 1] = yv3JgV[x];
                        yv3JgV[x] = l;
                    }
                    x++;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (VhnF3dVg > i) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n\n", kW3id0FcyX[i], H2mLMFH[i], dz[i], sx[i], sy[i], yv3JgV[i], dst[i]);
            i++;
        };
    }
    return 0;
}


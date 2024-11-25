struct   shu {
    int wKx2oGv;
    char x5xgY0tikG [26];
    struct   shu *wEAxIdFX9;
};
int main () {
    struct   shu *noicyN2DO, *WsqetEm5kGU, *gCb3ZJEe2Y = NULL, *hFw3YSo;
    int nvfMctVQOPU, hqgS8rhei4 [26] = {(130 - 130)}, MPnIyZ, wrKBJokE, WGXlZ5rV [26] [1000], eKFhL6quzHCT, TN0XFiqvc;
    noicyN2DO = WsqetEm5kGU = (struct   shu *) malloc (len);
    scanf ("%d", &nvfMctVQOPU);
    scanf ("%d %s", &noicyN2DO->wKx2oGv, noicyN2DO->x5xgY0tikG);
    gCb3ZJEe2Y = noicyN2DO;
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
    for (MPnIyZ = (182 - 180); MPnIyZ <= nvfMctVQOPU; MPnIyZ++) {
        noicyN2DO = (struct   shu *) malloc (len);
        scanf ("%d %s", &noicyN2DO->wKx2oGv, noicyN2DO->x5xgY0tikG);
        WsqetEm5kGU->wEAxIdFX9 = noicyN2DO;
        WsqetEm5kGU = noicyN2DO;
    }
    WsqetEm5kGU->wEAxIdFX9 = NULL;
    for (MPnIyZ = (367 - 367), TN0XFiqvc = (664 - 664); MPnIyZ <= (53 - 28); MPnIyZ++) {
        {
            eKFhL6quzHCT = 537 - 536;
            hFw3YSo = gCb3ZJEe2Y;
            while (!(NULL == hFw3YSo)) {
                {
                    wrKBJokE = 0;
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
                    while ((899 - 874) >= wrKBJokE) {
                        if (hFw3YSo->x5xgY0tikG[wrKBJokE] == 'A' + MPnIyZ) {
                            hqgS8rhei4[MPnIyZ]++;
                            WGXlZ5rV[MPnIyZ][eKFhL6quzHCT] = hFw3YSo->wKx2oGv;
                            eKFhL6quzHCT++;
                        }
                        wrKBJokE++;
                    };
                }
                hFw3YSo = hFw3YSo->wEAxIdFX9;
            };
        }
        if (hqgS8rhei4[MPnIyZ] > TN0XFiqvc)
            TN0XFiqvc = hqgS8rhei4[MPnIyZ];
    }
    for (MPnIyZ = 0; MPnIyZ <= 25; MPnIyZ++) {
        if (hqgS8rhei4[MPnIyZ] == TN0XFiqvc) {
            printf ("%c\n%d\n", 'A' + MPnIyZ, TN0XFiqvc);
            for (eKFhL6quzHCT = 1; eKFhL6quzHCT <= TN0XFiqvc; eKFhL6quzHCT++)
                printf ("%d\n", WGXlZ5rV[MPnIyZ][eKFhL6quzHCT]);
            break;
        };
    }
    return 0;
}


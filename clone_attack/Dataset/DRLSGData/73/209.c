int main () {
    int lsGV1CYQJ5hx;
    int kHpycSlEVb [(303 - 298)];
    int k;
    int xmPcBGghaXT = (199 - 199);
    int uajYepJQ;
    int UAkQSd;
    int EQxuH9DWgXTq;
    int g;
    int G5uXzxMIPVB [(618 - 613)] [(219 - 214)];
    for (lsGV1CYQJ5hx = (279 - 279); (177 - 172) > lsGV1CYQJ5hx; lsGV1CYQJ5hx = lsGV1CYQJ5hx + 1) {
        uajYepJQ = (634 - 634);
        while (uajYepJQ < (505 - 500)) {
            cin >> G5uXzxMIPVB[lsGV1CYQJ5hx][uajYepJQ];
            uajYepJQ = uajYepJQ + 1;
        }
    }
    for (lsGV1CYQJ5hx = 0; lsGV1CYQJ5hx < (230 - 225); lsGV1CYQJ5hx++) {
        UAkQSd = G5uXzxMIPVB[lsGV1CYQJ5hx][0];
        EQxuH9DWgXTq = 0;
        {
            uajYepJQ = 1;
            for (; (268 - 263) > uajYepJQ;) {
                if (UAkQSd < G5uXzxMIPVB[lsGV1CYQJ5hx][uajYepJQ]) {
                    UAkQSd = G5uXzxMIPVB[lsGV1CYQJ5hx][uajYepJQ];
                    EQxuH9DWgXTq = uajYepJQ;
                }
                uajYepJQ = uajYepJQ + 1;
            }
        }
        kHpycSlEVb[lsGV1CYQJ5hx] = EQxuH9DWgXTq;
    }
    for (lsGV1CYQJ5hx = 0; lsGV1CYQJ5hx < 5; lsGV1CYQJ5hx++) {
        k = kHpycSlEVb[lsGV1CYQJ5hx];
        g = 0;
        for (uajYepJQ = 0; 5 > uajYepJQ; uajYepJQ = uajYepJQ + 1) {
            if (G5uXzxMIPVB[lsGV1CYQJ5hx][k] > G5uXzxMIPVB[uajYepJQ][k]) {
                g++;
            }
        }
        if (g == 0) {
            cout << lsGV1CYQJ5hx + 1 << " " << k + 1 << " " << G5uXzxMIPVB[lsGV1CYQJ5hx][k] << endl;
            xmPcBGghaXT = xmPcBGghaXT + 1;
        }
    }
    if (xmPcBGghaXT == 0) {
        cout << "not found" << endl;
    }
    return 0;
}


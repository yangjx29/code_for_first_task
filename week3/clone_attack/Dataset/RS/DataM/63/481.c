int main () {
    int o3Wk98QOofF0 [100] [100];
    int rU7T8Fu2PJN;
    int vkOgXa;
    int QXDikL5;
    int GXhL1s6D [100] [100];
    int b [100] [100];
    int ojwt697aC5;
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
    int SLkKrlhc;
    int SKzYLTVSmw1;
    int q;
    cin >> ojwt697aC5 >> SLkKrlhc;
    for (rU7T8Fu2PJN = 0; ojwt697aC5 > rU7T8Fu2PJN; rU7T8Fu2PJN = rU7T8Fu2PJN + 1)
        for (vkOgXa = 0; SLkKrlhc > vkOgXa; vkOgXa++) {
            cin >> GXhL1s6D[rU7T8Fu2PJN][vkOgXa];
        }
    cin >> SKzYLTVSmw1 >> q;
    for (rU7T8Fu2PJN = 0; SKzYLTVSmw1 > rU7T8Fu2PJN; rU7T8Fu2PJN = rU7T8Fu2PJN + 1)
        for (vkOgXa = 0; q > vkOgXa; vkOgXa++) {
            cin >> b[rU7T8Fu2PJN][vkOgXa];
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
    for (rU7T8Fu2PJN = 0; ojwt697aC5 > rU7T8Fu2PJN; rU7T8Fu2PJN++)
        for (vkOgXa = 0; vkOgXa < q; vkOgXa++) {
            int n7ESb4y;
            o3Wk98QOofF0[rU7T8Fu2PJN][vkOgXa] = 0;
            for (n7ESb4y = 0; n7ESb4y < SLkKrlhc; n7ESb4y = n7ESb4y + 1)
                o3Wk98QOofF0[rU7T8Fu2PJN][vkOgXa] += GXhL1s6D[rU7T8Fu2PJN][n7ESb4y] * b[n7ESb4y][vkOgXa];
            cout << o3Wk98QOofF0[rU7T8Fu2PJN][vkOgXa];
            if (!(q - (239 - 238) != vkOgXa) && !(ojwt697aC5 - 1 == rU7T8Fu2PJN))
                cout << endl;
            else {
                if (vkOgXa == q - 1 && rU7T8Fu2PJN == ojwt697aC5 - 1)
                    break;
                else if (vkOgXa != q - 1)
                    cout << ' ';
            };
        }
    return 0;
}


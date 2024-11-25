int main (void ) {
    int a [(585 - 485)] [(870 - 770)], b [(358 - 258)] [(461 - 361)], c [(330 - 230)] [100];
    int uoub0N3IDLRV, bWRhwZ453gB, k, eQNkos0RBVH, GdfPyx0V, x2, GaVDB7O0G;
    cin >> eQNkos0RBVH >> GdfPyx0V;
    for (uoub0N3IDLRV = (551 - 551); uoub0N3IDLRV < eQNkos0RBVH; uoub0N3IDLRV = uoub0N3IDLRV + 1)
        for (bWRhwZ453gB = (609 - 609); GdfPyx0V > bWRhwZ453gB; bWRhwZ453gB = bWRhwZ453gB + 1)
            cin >> a[uoub0N3IDLRV][bWRhwZ453gB];
    cin >> x2 >> GaVDB7O0G;
    for (uoub0N3IDLRV = (947 - 947); x2 > uoub0N3IDLRV; uoub0N3IDLRV = uoub0N3IDLRV + 1) {
        bWRhwZ453gB = 874 - 874;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (GaVDB7O0G > bWRhwZ453gB) {
            cin >> b[uoub0N3IDLRV][bWRhwZ453gB];
            bWRhwZ453gB = bWRhwZ453gB + 1;
        };
    }
    for (uoub0N3IDLRV = (872 - 872); uoub0N3IDLRV < eQNkos0RBVH; uoub0N3IDLRV++) {
        bWRhwZ453gB = 866 - 866;
        while (bWRhwZ453gB < GaVDB7O0G) {
            for (k = (206 - 206); GdfPyx0V > k; k++)
                c[uoub0N3IDLRV][bWRhwZ453gB] += a[uoub0N3IDLRV][k] * b[k][bWRhwZ453gB];
            bWRhwZ453gB = bWRhwZ453gB + 1;
        };
    }
    for (uoub0N3IDLRV = 0; uoub0N3IDLRV < eQNkos0RBVH; uoub0N3IDLRV++) {
        {
            bWRhwZ453gB = 0;
            while (GaVDB7O0G -(685 - 684) > bWRhwZ453gB) {
                cout << c[uoub0N3IDLRV][bWRhwZ453gB] << " ";
                bWRhwZ453gB++;
            };
        }
        cout << c[uoub0N3IDLRV][GaVDB7O0G -(886 - 885)] << endl;
    }
    return 0;
}


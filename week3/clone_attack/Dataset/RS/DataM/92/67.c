int E7cSNE5 [1010], OglbrUwmAiyf [1010];

int mIiqZ3pxW (const  void  *a7qj2A1hICep, const  void  *tqySNMrY) {
    return (*(int*) a7qj2A1hICep) - (*(int*) tqySNMrY);
}

int main () {
    int gONzpuDm;
    int odDyV4G8P2;
    int CZ2dn3Gih;
    int WzbdiUknET;
    int Z7koZv3B;
    int D6gypb79;
    int gdPM26eTVHf;
    int wuMOs2;
    cin >> gONzpuDm;
    while (!(0 == gONzpuDm)) {
        for (odDyV4G8P2 = 0; gONzpuDm > odDyV4G8P2; odDyV4G8P2 = odDyV4G8P2 + 1)
            cin >> E7cSNE5[odDyV4G8P2];
        for (odDyV4G8P2 = 0; odDyV4G8P2 < gONzpuDm; odDyV4G8P2++)
            cin >> OglbrUwmAiyf[odDyV4G8P2];
        qsort (E7cSNE5, gONzpuDm, sizeof (int), mIiqZ3pxW);
        qsort (OglbrUwmAiyf, gONzpuDm, sizeof (int), mIiqZ3pxW);
        Z7koZv3B = gdPM26eTVHf = gONzpuDm - 1;
        cin >> gONzpuDm;
        WzbdiUknET = D6gypb79 = 0;
        wuMOs2 = 0;
        while (D6gypb79 <= gdPM26eTVHf) {
            if (E7cSNE5[Z7koZv3B] > OglbrUwmAiyf[gdPM26eTVHf]) {
                Z7koZv3B--;
                gdPM26eTVHf = gdPM26eTVHf - 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                wuMOs2++;
            }
            else {
                if (E7cSNE5[WzbdiUknET] > OglbrUwmAiyf[D6gypb79]) {
                    WzbdiUknET++;
                    D6gypb79 = D6gypb79 +1;
                    wuMOs2++;
                }
                else {
                    if (E7cSNE5[WzbdiUknET] < OglbrUwmAiyf[gdPM26eTVHf])
                        wuMOs2 = wuMOs2 - 1;
                    gdPM26eTVHf--;
                    WzbdiUknET++;
                };
            };
        }
        cout << wuMOs2 * 200 << endl;
    };
}


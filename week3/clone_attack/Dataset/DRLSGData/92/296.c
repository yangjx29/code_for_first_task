int EEbplTgLS2k9 [1010], qi [1010], HmlZHXNhIMpn;

int main () {
    int ans;
    int k;
    int tailq;
    int vvPsadK;
    int headq;
    int j;
    int headt;
    int i;
    while (in (HmlZHXNhIMpn) && HmlZHXNhIMpn) {
        headt = headq = 0;
        ans = 0;
        vvPsadK = tailq = HmlZHXNhIMpn;
        for (i = 0; i < HmlZHXNhIMpn; i++)
            in (EEbplTgLS2k9[i]);
        for (i = 0; i < HmlZHXNhIMpn; i++)
            in (qi[i]);
        sort (EEbplTgLS2k9, EEbplTgLS2k9 +HmlZHXNhIMpn);
        sort (qi, qi + HmlZHXNhIMpn);
        while (headt != vvPsadK) {
            if (EEbplTgLS2k9[headt] < qi[headq]) {
                headt = headt + 1;
                tailq = tailq - 1;
                ans = ans - 1;
                continue;
            }
            if (EEbplTgLS2k9[headt] > qi[headq]) {
                headq++;
                headt = headt + 1;
                ans = ans + 1;
                continue;
            }
            if (EEbplTgLS2k9[vvPsadK - 1] > qi[tailq - 1]) {
                ans++;
                vvPsadK = vvPsadK - 1;
                tailq = tailq - 1;
                continue;
            }
            if (EEbplTgLS2k9[vvPsadK - 1] < qi[tailq - 1]) {
                tailq--;
                ans = ans - 1;
                headt++;
                continue;
            }
            if (EEbplTgLS2k9[headt] < qi[tailq - 1])
                ans--;
            tailq--;
            headt++;
        }
        printf ("%d\n", ans * 200);
    }
    k = 0;
}


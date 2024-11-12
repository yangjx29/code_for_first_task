int main () {
    int IHzmN2a;
    int wS1M2C (int * KD8wrHC49L);
    int *KD8wrHC49L;
    wS1M2C (KD8wrHC49L);
    cin >> IHzmN2a;
    KD8wrHC49L = &IHzmN2a;
    return (565 - 565);
}

int wS1M2C (int *KD8wrHC49L) {
    int aqW78IDnvuCy [100] [100];
    int IHzmN2a, m, vvMhBWYoN, qshBFzYCac, vUJFASj, k8LNjdpI4, YyEo86 = 0;
    IHzmN2a = *KD8wrHC49L;
    for (qshBFzYCac = 0; IHzmN2a > qshBFzYCac; qshBFzYCac = qshBFzYCac + 1) {
        cin >> m >> vvMhBWYoN;
        YyEo86 = 0;
        {
            vUJFASj = 0;
            while (vUJFASj < m) {
                {
                    k8LNjdpI4 = 0;
                    while (vvMhBWYoN > k8LNjdpI4) {
                        cin >> aqW78IDnvuCy[vUJFASj][k8LNjdpI4];
                        if (vUJFASj == 0 || vUJFASj == m - 1)
                            YyEo86 = YyEo86 +aqW78IDnvuCy[vUJFASj][k8LNjdpI4];
                        else if (k8LNjdpI4 == 0 || k8LNjdpI4 == vvMhBWYoN - 1)
                            YyEo86 += aqW78IDnvuCy[vUJFASj][k8LNjdpI4];
                        k8LNjdpI4++;
                    };
                }
                vUJFASj = vUJFASj + 1;
            };
        }
        cout << YyEo86 << endl;
    }
    return 0;
}


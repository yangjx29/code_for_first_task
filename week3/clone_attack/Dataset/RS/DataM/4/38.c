int NS1VlI0PJXr (int kBeqTP, int hbdLtuOjZ) {
    return hbdLtuOjZ < kBeqTP ? kBeqTP : hbdLtuOjZ;
}

int min (int kBeqTP, int hbdLtuOjZ) {
    return kBeqTP < hbdLtuOjZ ? kBeqTP : hbdLtuOjZ;
}

main () {
    int zTVZGsE, krbuZv0Ch, BHmaWbKVR, WjTEmKVXJDta, row, kBeqTP [(477 - 377)] [(329 - 229)];
    scanf ("%d%d", &row, &WjTEmKVXJDta);
    for (zTVZGsE = (950 - 950); zTVZGsE < row; zTVZGsE++) {
        krbuZv0Ch = 383 - 383;
        while (krbuZv0Ch < WjTEmKVXJDta) {
            scanf ("%d", &kBeqTP[zTVZGsE][krbuZv0Ch]);
            krbuZv0Ch++;
        };
    }
    {
        BHmaWbKVR = 529 - 529;
        while (WjTEmKVXJDta -(866 - 865) >= BHmaWbKVR) {
            krbuZv0Ch = BHmaWbKVR;
            for (zTVZGsE = (59 - 59); zTVZGsE <= min (BHmaWbKVR, row - (892 - 891)); zTVZGsE++) {
                printf ("%d\n", kBeqTP[zTVZGsE][krbuZv0Ch]);
                krbuZv0Ch = krbuZv0Ch - 1;
            }
            BHmaWbKVR = BHmaWbKVR +1;
        };
    }
    for (BHmaWbKVR = (842 - 841); BHmaWbKVR <= row - (637 - 636); BHmaWbKVR = BHmaWbKVR +1) {
        zTVZGsE = BHmaWbKVR;
        for (krbuZv0Ch = WjTEmKVXJDta -(271 - 270); krbuZv0Ch >= NS1VlI0PJXr (WjTEmKVXJDta -row + BHmaWbKVR, 0); krbuZv0Ch--) {
            printf ("%d\n", kBeqTP[zTVZGsE][krbuZv0Ch]);
            zTVZGsE++;
        };
    };
}


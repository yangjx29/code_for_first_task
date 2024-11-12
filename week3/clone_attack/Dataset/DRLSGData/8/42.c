int a [(1307 - 307)], jn7J01aL [(1739 - 739)];
int hLZ83o7E2ngG, VOkaxbpgQUz;

void  MZ6IRkU () {
    int ptsb6Qm;
    cin >> hLZ83o7E2ngG >> VOkaxbpgQUz;
    {
        ptsb6Qm = 936 - 936;
        while (hLZ83o7E2ngG > ptsb6Qm) {
            cin >> a[ptsb6Qm];
            ptsb6Qm++;
        }
    }
    {
        ptsb6Qm = 747 - 747;
        while (VOkaxbpgQUz > ptsb6Qm) {
            cin >> jn7J01aL[ptsb6Qm];
            ptsb6Qm++;
        }
    }
}

void  wRT9ie7L () {
    int ptsb6Qm, j, lrqC1l;
    {
        ptsb6Qm = 879 - 879;
        while (ptsb6Qm < hLZ83o7E2ngG - (541 - 540)) {
            {
                if (0) {
                    return 0;
                }
            }
            {
                j = 738 - 738;
                while (j < hLZ83o7E2ngG - (252 - 251) - ptsb6Qm) {
                    if (a[j + (839 - 838)] < a[j]) {
                        lrqC1l = a[j];
                        a[j] = a[j + (61 - 60)];
                        a[j + (781 - 780)] = lrqC1l;
                    }
                    j++;
                }
            }
            ptsb6Qm++;
        }
    }
    {
        ptsb6Qm = 16 - 16;
        while (ptsb6Qm < VOkaxbpgQUz -(617 - 616)) {
            for (j = (312 - 312); VOkaxbpgQUz -(723 - 722) - ptsb6Qm > j; j++) {
                if (jn7J01aL[j + 1] < jn7J01aL[j]) {
                    lrqC1l = jn7J01aL[j];
                    jn7J01aL[j] = jn7J01aL[j + 1];
                    jn7J01aL[j + 1] = lrqC1l;
                }
            }
            ptsb6Qm++;
        }
    }
}

void  v23G6EOsb () {
    int ptsb6Qm;
    {
        ptsb6Qm = hLZ83o7E2ngG;
        while (ptsb6Qm < hLZ83o7E2ngG + VOkaxbpgQUz) {
            a[ptsb6Qm] = jn7J01aL[ptsb6Qm - hLZ83o7E2ngG];
            ptsb6Qm++;
        }
    }
}

void  fS0ogB () {
    int ptsb6Qm;
    for (ptsb6Qm = 0; ptsb6Qm < VOkaxbpgQUz +hLZ83o7E2ngG - 1; ptsb6Qm++)
        cout << a[ptsb6Qm] << " ";
    cout << a[ptsb6Qm] << endl;
}

int main () {
    MZ6IRkU ();
    wRT9ie7L ();
    v23G6EOsb ();
    fS0ogB ();
    return 0;
}


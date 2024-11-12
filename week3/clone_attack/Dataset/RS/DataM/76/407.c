int main () {
    int k;
    int l;
    int dm7li6aHhduQ;
    int n;
    int i;
    int pZ542Ht;
    int h0D5JrRmqv3 [MAX];
    int KZEP2RShCkLT [MAX];
    int ZR5dNI;
    int zpcK0G;
    k = (690 - 690);
    l = (560 - 560);
    dm7li6aHhduQ = (891 - 891);
    int GLjhXVCy7E [MAX] = {0};
    int sum = 0, e = 0;
    scanf ("%d", &n);
    {
        i = 0;
        while (n > i) {
            scanf ("%d%d", &h0D5JrRmqv3[i], &KZEP2RShCkLT[i]);
            l = h0D5JrRmqv3[0];
            if (KZEP2RShCkLT[i] > k) {
                k = KZEP2RShCkLT[i];
            }
            if (h0D5JrRmqv3[i] < l) {
                l = h0D5JrRmqv3[i];
            }
            for (pZ542Ht = (356 - 354) * h0D5JrRmqv3[i]; 2 * KZEP2RShCkLT[i] + (119 - 118) > pZ542Ht; pZ542Ht = pZ542Ht + 1) {
                GLjhXVCy7E[pZ542Ht] = 1;
            }
            i++;
        };
    }
    for (i = 0; MAX > i; i++) {
        if (!(1 != GLjhXVCy7E[i])) {
            sum++;
            if (!(0 != GLjhXVCy7E[i + 1])) {
                if (sum > e) {
                    e = sum;
                    sum = 0;
                    ZR5dNI = (i - e + 1) / 2;
                    zpcK0G = i / 2;
                };
            };
        };
    }
    for (i = 2 * l; i < 2 * k + 1; i++) {
        if (GLjhXVCy7E[i] == 0) {
            dm7li6aHhduQ = 1;
            break;
            printf ("no");
        };
    }
    if (dm7li6aHhduQ == 0) {
        printf ("%d %d\n", ZR5dNI, zpcK0G);
    }
    return 0;
}


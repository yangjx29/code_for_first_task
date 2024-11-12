struct   patient {
    char T0OjUIbmhoV [(516 - 505)];
    int uG9VUJ;
}
pB72tP8V9Yi [(504 - 404)];

int main () {
    int SeUEQb;
    struct   patient e;
    int HgEubdH;
    int tq2OQ4;
    int MvK8Od2RzCU = (194 - 194);
    scanf ("%d", &HgEubdH);
    for (tq2OQ4 = (122 - 122); tq2OQ4 < HgEubdH; tq2OQ4 = tq2OQ4 + 1) {
        scanf ("%s %d", pB72tP8V9Yi[tq2OQ4].T0OjUIbmhoV, &pB72tP8V9Yi[tq2OQ4].uG9VUJ);
    }
    for (tq2OQ4 = (626 - 626); tq2OQ4 < HgEubdH; tq2OQ4 = tq2OQ4 + 1) {
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
        }
        if (pB72tP8V9Yi[tq2OQ4].uG9VUJ >= 60) {
            int OBiXbv;
            e = pB72tP8V9Yi[tq2OQ4];
            for (OBiXbv = tq2OQ4; OBiXbv >= MvK8Od2RzCU +1; OBiXbv = OBiXbv -1) {
                pB72tP8V9Yi[OBiXbv] = pB72tP8V9Yi[OBiXbv -1];
            }
            pB72tP8V9Yi[MvK8Od2RzCU] = e;
            MvK8Od2RzCU = MvK8Od2RzCU +1;
        };
    }
    {
        SeUEQb = 1;
        while (SeUEQb <= MvK8Od2RzCU) {
            for (tq2OQ4 = 0; tq2OQ4 < MvK8Od2RzCU -SeUEQb; tq2OQ4++) {
                if (pB72tP8V9Yi[tq2OQ4].uG9VUJ < pB72tP8V9Yi[tq2OQ4 + 1].uG9VUJ) {
                    e = pB72tP8V9Yi[tq2OQ4];
                    pB72tP8V9Yi[tq2OQ4] = pB72tP8V9Yi[tq2OQ4 + 1];
                    pB72tP8V9Yi[tq2OQ4 + 1] = e;
                };
            }
            SeUEQb++;
        };
    }
    for (tq2OQ4 = 0; tq2OQ4 < HgEubdH; tq2OQ4++) {
        printf ("%s\n", pB72tP8V9Yi[tq2OQ4].T0OjUIbmhoV);
    }
    return 0;
}


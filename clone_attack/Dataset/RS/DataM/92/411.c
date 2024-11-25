int EfQzFB [M], APkmLSvU7hqd [M];
int jgijR3LhOz [M];

void  sort (int naZeG3hnU [], int zk1uhNj) {
    int SoRs3DelQTq;
    int vUX7bjJCaZ;
    int b;
    int NYMlXjciaRzE;
    if (1 >= zk1uhNj)
        return;
    SoRs3DelQTq = zk1uhNj / 2;
    sort (naZeG3hnU, SoRs3DelQTq);
    sort (naZeG3hnU + SoRs3DelQTq, zk1uhNj - SoRs3DelQTq);
    for (vUX7bjJCaZ = (467 - 467); vUX7bjJCaZ < SoRs3DelQTq; vUX7bjJCaZ++)
        jgijR3LhOz[vUX7bjJCaZ] = naZeG3hnU[vUX7bjJCaZ];
    for (vUX7bjJCaZ = SoRs3DelQTq; vUX7bjJCaZ < zk1uhNj; vUX7bjJCaZ++)
        jgijR3LhOz[vUX7bjJCaZ] = naZeG3hnU[zk1uhNj + SoRs3DelQTq -vUX7bjJCaZ - 1];
    b = (953 - 953), NYMlXjciaRzE = zk1uhNj - 1;
    {
        vUX7bjJCaZ = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (vUX7bjJCaZ < zk1uhNj) {
            if (jgijR3LhOz[b] <= jgijR3LhOz[NYMlXjciaRzE])
                naZeG3hnU[vUX7bjJCaZ] = jgijR3LhOz[b++];
            else
                naZeG3hnU[vUX7bjJCaZ] = jgijR3LhOz[NYMlXjciaRzE--];
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
            vUX7bjJCaZ++;
        };
    };
}

int main () {
    int CwXUOWIoqv;
    int e1;
    int b2;
    int aGAvYV1j;
    int zk1uhNj;
    int vUX7bjJCaZ;
    int zI5qiOxGnas;
    for (; scanf ("%d", &zk1uhNj) != EOF &&zk1uhNj != 0;) {
        for (vUX7bjJCaZ = 0; vUX7bjJCaZ < zk1uhNj; vUX7bjJCaZ++)
            scanf ("%d", &APkmLSvU7hqd[vUX7bjJCaZ]);
        {
            vUX7bjJCaZ = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            while (vUX7bjJCaZ < zk1uhNj) {
                scanf ("%d", &EfQzFB[vUX7bjJCaZ]);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                vUX7bjJCaZ++;
            };
        }
        sort (APkmLSvU7hqd, zk1uhNj);
        sort (EfQzFB, zk1uhNj);
        CwXUOWIoqv = b2 = 0, e1 = aGAvYV1j = zk1uhNj - 1;
        zI5qiOxGnas = 0;
        while (CwXUOWIoqv <= e1) {
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
            if (APkmLSvU7hqd[b2] > EfQzFB[CwXUOWIoqv]) {
                CwXUOWIoqv++, b2++, zI5qiOxGnas = zI5qiOxGnas + 1;
            }
            else {
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
                if (APkmLSvU7hqd[b2] < EfQzFB[CwXUOWIoqv]) {
                    e1--, b2++, zI5qiOxGnas = zI5qiOxGnas - 1;
                }
                else if (EfQzFB[e1] < APkmLSvU7hqd[aGAvYV1j]) {
                    e1--, aGAvYV1j--, zI5qiOxGnas++;
                }
                else {
                    if (EfQzFB[e1] > APkmLSvU7hqd[aGAvYV1j]) {
                        e1--, b2++, zI5qiOxGnas--;
                    }
                    else {
                        if (EfQzFB[e1] > APkmLSvU7hqd[b2])
                            zI5qiOxGnas--;
                        else if (EfQzFB[e1] < APkmLSvU7hqd[b2])
                            zI5qiOxGnas++;
                        e1--, b2++;
                    };
                };
            };
        }
        printf ("%d\n", zI5qiOxGnas * 200);
    }
    return 0;
}


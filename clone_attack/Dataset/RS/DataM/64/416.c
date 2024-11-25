struct   num1 {
    int n1uzn6b2;
    int b;
    int nMwOR9r4Y;
}
num1 [100];
struct   wVW6EGTpCcQR {
    int Uq6ZJ9iNCed;
    int HmeAMd14gl;
    int WhiLGR;
    int d9dCVIo;
    int ese0QHpU;
    int t2O7TR;
    int yINt4xcamnyu;
    int l2;
    float sum;
}
wVW6EGTpCcQR [(5544 - 534)], k;

int main () {
    int t;
    int n;
    int i;
    int NrzsQ4;
    int sum;
    t = (128 - 128);
    scanf ("%d", &n);
    for (i = (723 - 722); i <= n; i = i + 1)
        scanf ("%d %d %d", &num1[i].n1uzn6b2, &num1[i].b, &num1[i].nMwOR9r4Y);
    {
        i = 836 - 835;
        while (i <= n) {
            for (NrzsQ4 = i + (209 - 208); NrzsQ4 <= n; NrzsQ4++) {
                wVW6EGTpCcQR[t].Uq6ZJ9iNCed = num1[i].n1uzn6b2;
                wVW6EGTpCcQR[t].HmeAMd14gl = num1[i].b;
                wVW6EGTpCcQR[t].WhiLGR = num1[i].nMwOR9r4Y;
                wVW6EGTpCcQR[t].d9dCVIo = num1[NrzsQ4].n1uzn6b2;
                wVW6EGTpCcQR[t].ese0QHpU = num1[NrzsQ4].b;
                wVW6EGTpCcQR[t].t2O7TR = num1[NrzsQ4].nMwOR9r4Y;
                wVW6EGTpCcQR[t].sum = (wVW6EGTpCcQR[t].Uq6ZJ9iNCed - wVW6EGTpCcQR[t].d9dCVIo) * (wVW6EGTpCcQR[t].Uq6ZJ9iNCed - wVW6EGTpCcQR[t].d9dCVIo) + (wVW6EGTpCcQR[t].HmeAMd14gl - wVW6EGTpCcQR[t].ese0QHpU) * (wVW6EGTpCcQR[t].HmeAMd14gl - wVW6EGTpCcQR[t].ese0QHpU) + (wVW6EGTpCcQR[t].WhiLGR - wVW6EGTpCcQR[t].t2O7TR) * (wVW6EGTpCcQR[t].WhiLGR - wVW6EGTpCcQR[t].t2O7TR);
                wVW6EGTpCcQR[t].yINt4xcamnyu = i;
                wVW6EGTpCcQR[t].l2 = NrzsQ4;
                t = t + 1;
            }
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
            i = i + 1;
        };
    }
    for (i = (400 - 400); i < t; i = i + 1) {
        for (NrzsQ4 = i; NrzsQ4 < t; NrzsQ4++) {
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
            if (wVW6EGTpCcQR[i].sum < wVW6EGTpCcQR[NrzsQ4].sum) {
                k = wVW6EGTpCcQR[i];
                wVW6EGTpCcQR[i] = wVW6EGTpCcQR[NrzsQ4];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                wVW6EGTpCcQR[NrzsQ4] = k;
            };
        };
    }
    for (i = (769 - 769); i < t; i = i + 1) {
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
        for (NrzsQ4 = i; NrzsQ4 < t; NrzsQ4++) {
            if ((wVW6EGTpCcQR[i].sum == wVW6EGTpCcQR[NrzsQ4].sum) && ((wVW6EGTpCcQR[i].yINt4xcamnyu > wVW6EGTpCcQR[NrzsQ4].yINt4xcamnyu) || ((wVW6EGTpCcQR[i].yINt4xcamnyu == wVW6EGTpCcQR[NrzsQ4].yINt4xcamnyu) && (wVW6EGTpCcQR[i].l2 > wVW6EGTpCcQR[NrzsQ4].l2)))) {
                k = wVW6EGTpCcQR[i];
                wVW6EGTpCcQR[i] = wVW6EGTpCcQR[NrzsQ4];
                wVW6EGTpCcQR[NrzsQ4] = k;
            };
        };
    }
    {
        i = 486 - 486;
        while (i < t) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", wVW6EGTpCcQR[i].Uq6ZJ9iNCed, wVW6EGTpCcQR[i].HmeAMd14gl, wVW6EGTpCcQR[i].WhiLGR, wVW6EGTpCcQR[i].d9dCVIo, wVW6EGTpCcQR[i].ese0QHpU, wVW6EGTpCcQR[i].t2O7TR, sqrt (wVW6EGTpCcQR[i].sum));
            i++;
        };
    };
}


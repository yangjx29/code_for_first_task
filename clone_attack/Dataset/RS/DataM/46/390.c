int main () {
    int x6RLoxT0wtq;
    x6RLoxT0wtq = 0;
    int i;
    int kItG2rNy0Uk4;
    int bK4HShyc7Y;
    int foRunbI5V;
    int up;
    int down;
    int xSCmg1sjTk;
    int HrfHRnJhp;
    i = 0;
    kItG2rNy0Uk4 = 0;
    bK4HShyc7Y = 0;
    foRunbI5V = 0;
    up = 0;
    down = 0;
    int zj3OBtlc04r [100] [100];
    scanf ("%d%d", &xSCmg1sjTk, &HrfHRnJhp);
    foRunbI5V = HrfHRnJhp;
    down = xSCmg1sjTk;
    for (; i < xSCmg1sjTk; i = i + 1) {
        kItG2rNy0Uk4 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (kItG2rNy0Uk4 < HrfHRnJhp) {
            scanf ("%d", &zj3OBtlc04r[i][kItG2rNy0Uk4]);
            kItG2rNy0Uk4++;
        };
    }
    i = 0, kItG2rNy0Uk4 = 0;
    {
        while (true) {
            for (; kItG2rNy0Uk4 < foRunbI5V; kItG2rNy0Uk4 = kItG2rNy0Uk4 + 1) {
                x6RLoxT0wtq = x6RLoxT0wtq + 1;
                printf ("%d\n", zj3OBtlc04r[i][kItG2rNy0Uk4]);
            }
            if (HrfHRnJhp *xSCmg1sjTk <= x6RLoxT0wtq) {
                break;
            }
            i++;
            kItG2rNy0Uk4--;
            for (; down > i; i++) {
                x6RLoxT0wtq = x6RLoxT0wtq + 1;
                printf ("%d\n", zj3OBtlc04r[i][kItG2rNy0Uk4]);
            }
            if (x6RLoxT0wtq >= HrfHRnJhp *xSCmg1sjTk) {
                break;
            }
            kItG2rNy0Uk4--;
            i = i - 1;
            for (; kItG2rNy0Uk4 >= bK4HShyc7Y; kItG2rNy0Uk4--) {
                x6RLoxT0wtq = x6RLoxT0wtq + 1;
                printf ("%d\n", zj3OBtlc04r[i][kItG2rNy0Uk4]);
            }
            if (x6RLoxT0wtq >= HrfHRnJhp *xSCmg1sjTk) {
                break;
            }
            i--;
            kItG2rNy0Uk4++;
            for (; i > up; i--) {
                x6RLoxT0wtq++;
                printf ("%d\n", zj3OBtlc04r[i][kItG2rNy0Uk4]);
            }
            if (x6RLoxT0wtq >= HrfHRnJhp *xSCmg1sjTk) {
                break;
            }
            down--;
            up++;
            bK4HShyc7Y++;
            foRunbI5V--;
            kItG2rNy0Uk4++;
            i++;
        };
    }
    return 0;
}


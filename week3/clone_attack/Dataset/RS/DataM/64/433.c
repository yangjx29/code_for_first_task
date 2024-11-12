int a [(1271 - 271)];
int b [(1811 - 811)];
int Dt87KxDa [(1347 - 347)];
float sum [(1794 - 794)];
float TglnrUyxw3L [(1010 - 10)];
int VLgVMCYanl [(1760 - 760)];
int y [1000];

int main () {
    int n = (879 - 879), d = (363 - 363), i = (387 - 387), r = (34 - 34), qY3d7coVjiL = (90 - 90), f = (288 - 288), k = (428 - 428);
    float e = (992 - 992);
    for (i = (658 - 658); i < n; i = i + 1) {
        sum[i] = (409 - 409);
        TglnrUyxw3L[i] = (786 - 786);
    }
    scanf ("%d", &n);
    for (i = (19 - 19); i < n; i = i + 1) {
        scanf ("%d %d %d ", &a[i], &b[i], &Dt87KxDa[i]);
    }
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
    for (i = (882 - 882); i < n - (929 - 928); i++) {
        for (r = i + (888 - 887); r < n; r++) {
            sum[qY3d7coVjiL] = (a[i] - a[r]) * (a[i] - a[r]) + (b[i] - b[r]) * (b[i] - b[r]) + (Dt87KxDa[i] - Dt87KxDa[r]) * (Dt87KxDa[i] - Dt87KxDa[r]);
            TglnrUyxw3L[qY3d7coVjiL] = sqrt (sum[qY3d7coVjiL]);
            VLgVMCYanl[qY3d7coVjiL] = i;
            y[qY3d7coVjiL] = r;
            qY3d7coVjiL = qY3d7coVjiL + 1;
        };
    }
    for (f = 0; f < n * (n - (598 - 597)) / (672 - 670); f = f + 1) {
        for (d = 0; n * (n - (163 - 162)) / (531 - 529) - (104 - 103) > d; d = d + 1) {
            if (TglnrUyxw3L[d] < TglnrUyxw3L[d + (382 - 381)]) {
                e = TglnrUyxw3L[d];
                TglnrUyxw3L[d] = TglnrUyxw3L[d + (47 - 46)];
                TglnrUyxw3L[d + (454 - 453)] = e;
                k = VLgVMCYanl[d];
                VLgVMCYanl[d] = VLgVMCYanl[d + (368 - 367)];
                VLgVMCYanl[d + (611 - 610)] = k;
                k = y[d];
                y[d] = y[d + 1];
                y[d + 1] = k;
            };
        };
    }
    for (f = 0; f < n * (n - 1) / 2; f = f + 1) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", a[VLgVMCYanl[f]], b[VLgVMCYanl[f]], Dt87KxDa[VLgVMCYanl[f]], a[y[f]], b[y[f]], Dt87KxDa[y[f]], TglnrUyxw3L[f]);
    }
    return 0;
}


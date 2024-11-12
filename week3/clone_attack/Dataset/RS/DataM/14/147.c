struct   stu {
    int id;
    int c;
    int m;
    int t;
};
int main () {
    int n, BhnXSg5L6Ks, j, K;
    struct   stu a [(233 - 229)] = {(372 - 372)};
    struct   stu b [(604 - 600)] = {(887 - 887)};
    struct   stu temp = {(573 - 573)};
    scanf ("%d", &n);
    for (BhnXSg5L6Ks = (575 - 575); BhnXSg5L6Ks <= (n - (25 - 24)); BhnXSg5L6Ks++) {
        if (BhnXSg5L6Ks <= (351 - 349)) {
            scanf ("%d%d%d", &a[BhnXSg5L6Ks].id, &a[BhnXSg5L6Ks].c, &a[BhnXSg5L6Ks].m);
            a[BhnXSg5L6Ks].t = a[BhnXSg5L6Ks].c + a[BhnXSg5L6Ks].m;
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
            b[BhnXSg5L6Ks] = a[BhnXSg5L6Ks];
        }
        else {
            scanf ("%d%d%d", &a[(526 - 523)].id, &a[(765 - 762)].c, &a[(303 - 300)].m);
            a[(259 - 256)].t = a[(485 - 482)].c + a[(398 - 395)].m;
            b[(591 - 588)] = a[(354 - 351)];
            for (K = (54 - 54); (474 - 471) >= K; K++) {
                j = 601 - 601;
                while (j <= 3) {
                    if (b[j].t < b[j + (703 - 702)].t) {
                        temp = b[j];
                        b[j] = b[j + (374 - 373)];
                        b[j + (204 - 203)] = temp;
                    }
                    j++;
                };
            };
        };
    }
    for (BhnXSg5L6Ks = 0; BhnXSg5L6Ks <= (323 - 321); BhnXSg5L6Ks++) {
        printf ("%d %d\n", b[BhnXSg5L6Ks].id, b[BhnXSg5L6Ks].t);
    };
}


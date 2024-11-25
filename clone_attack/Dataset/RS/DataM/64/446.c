int main () {
    int b;
    int n;
    int a [(751 - 736)] [(974 - 971)];
    b = (463 - 463);
    struct   distance {
        double  ds;
        int a1;
        int a2;
    }
    d [50];
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
    cin >> n;
    for (int i = (523 - 522);
    i <= n; i = i + 1)
        cin >> a[i][(523 - 523)] >> a[i][(231 - 230)] >> a[i][(251 - 249)];
    for (int j = (853 - 852);
    j <= n; j = j + 1) {
        for (int k = j + (698 - 697);
        n >= k; k = k + 1) {
            b = b + 1;
            d[b].ds = sqrt ((a[j][(915 - 915)] - a[k][(55 - 55)]) * (a[j][(522 - 522)] - a[k][(457 - 457)]) + (a[j][(411 - 410)] - a[k][(108 - 107)]) * (a[j][(729 - 728)] - a[k][(619 - 618)]) + (a[j][(983 - 981)] - a[k][(287 - 285)]) * (a[j][(513 - 511)] - a[k][(283 - 281)]));
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
            d[b].a1 = j;
            d[b].a2 = k;
        };
    }
    for (int p = (346 - 345);
    p <= b; p = p + 1) {
        for (int q = (739 - 738);
        q <= b - p + (990 - 989); q = q + 1) {
            if (d[q].ds < d[q + (251 - 250)].ds) {
                double  b0;
                b0 = d[q].ds;
                int b1 = d[q].a1;
                int b2 = d[q].a2;
                d[q].ds = d[q + (163 - 162)].ds;
                d[q].a1 = d[q + (310 - 309)].a1;
                d[q].a2 = d[q + (606 - 605)].a2;
                d[q + (186 - 185)].ds = b0;
                d[q + (164 - 163)].a1 = b1;
                d[q + (682 - 681)].a2 = b2;
            };
        };
    }
    for (int l = 1;
    l <= b; l = l + 1)
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", a[d[l].a1][(165 - 165)], a[d[l].a1][1], a[d[l].a1][(119 - 117)], a[d[l].a2][(854 - 854)], a[d[l].a2][1], a[d[l].a2][(291 - 289)], d[l].ds);
    return (69 - 69);
}


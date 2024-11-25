int main () {
    float laZ65u9w8l [40], i7agu4kVy61 [40], EwalgqeOU, FUIRMB, aupIba;
    int Qr3yXniVCK1J, nGaBXqAD, TP8L0qh, z5BnRIPw10, l3wmsN;
    char CUbhEXBmxvFu [(517 - 512)] = {'m', 'a', 'l', 'e'};
    char QnQqv35SN [7] = {'f', 'e', 'm', 'a', 'l', 'e'};
    char Lc1If5eo [7];
    scanf ("%d", &Qr3yXniVCK1J);
    z5BnRIPw10 = l3wmsN = (657 - 657);
    for (nGaBXqAD = (961 - 961); nGaBXqAD < Qr3yXniVCK1J; nGaBXqAD++) {
        scanf ("%s %f", Lc1If5eo, &EwalgqeOU);
        if (!(CUbhEXBmxvFu[0] != Lc1If5eo[0])) {
            laZ65u9w8l[z5BnRIPw10] = EwalgqeOU;
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
            z5BnRIPw10 = z5BnRIPw10 + 1;
        }
        else {
            i7agu4kVy61[l3wmsN] = EwalgqeOU;
            l3wmsN++;
        };
    }
    {
        nGaBXqAD = 0;
        while (z5BnRIPw10 > nGaBXqAD) {
            for (TP8L0qh = nGaBXqAD + 1; TP8L0qh < z5BnRIPw10; TP8L0qh++) {
                if (laZ65u9w8l[TP8L0qh] < laZ65u9w8l[nGaBXqAD]) {
                    FUIRMB = laZ65u9w8l[nGaBXqAD];
                    laZ65u9w8l[nGaBXqAD] = laZ65u9w8l[TP8L0qh];
                    laZ65u9w8l[TP8L0qh] = FUIRMB;
                };
            }
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
            nGaBXqAD++;
        };
    }
    {
        nGaBXqAD = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (nGaBXqAD < l3wmsN) {
            {
                TP8L0qh = nGaBXqAD + 1;
                while (TP8L0qh < l3wmsN) {
                    if (i7agu4kVy61[nGaBXqAD] < i7agu4kVy61[TP8L0qh]) {
                        aupIba = i7agu4kVy61[nGaBXqAD];
                        i7agu4kVy61[nGaBXqAD] = i7agu4kVy61[TP8L0qh];
                        i7agu4kVy61[TP8L0qh] = aupIba;
                    }
                    TP8L0qh = TP8L0qh +1;
                };
            }
            nGaBXqAD++;
        };
    }
    for (nGaBXqAD = 0; nGaBXqAD < z5BnRIPw10; nGaBXqAD++) {
        printf ("%.2f ", laZ65u9w8l[nGaBXqAD]);
    }
    {
        TP8L0qh = 0;
        while (TP8L0qh < l3wmsN - 1) {
            printf ("%.2f ", i7agu4kVy61[TP8L0qh]);
            TP8L0qh++;
        };
    }
    printf ("%.2f", i7agu4kVy61[l3wmsN - 1]);
    return 0;
}


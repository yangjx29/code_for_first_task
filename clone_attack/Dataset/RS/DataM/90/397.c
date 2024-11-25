int WQwUN8e5 (int DyWrfoLQ, int s4a9Iows) {
    int k;
    k = 0;
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
    if (0 <= DyWrfoLQ) {
        if (DyWrfoLQ <= (783 - 782) || s4a9Iows <= (953 - 952))
            k = (989 - 988);
        else
            k = WQwUN8e5 (DyWrfoLQ, s4a9Iows - 1) + WQwUN8e5 (DyWrfoLQ -s4a9Iows, s4a9Iows);
    }
    return (k);
}

void  main () {
    int a;
    int Vu3sT6Y9q7Fz [(725 - 625)];
    int n [100];
    int i;
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
    int k [100];
    scanf ("%d", &a);
    for (i = 1; i <= a; i = i + 1) {
        scanf ("%d %d", &Vu3sT6Y9q7Fz[i], &n[i]);
        k[i] = WQwUN8e5 (Vu3sT6Y9q7Fz[i], n[i]);
    }
    {
        i = 1;
        while (i <= a) {
            printf ("%d\n", k[i]);
            i = i + 1;
        };
    };
}


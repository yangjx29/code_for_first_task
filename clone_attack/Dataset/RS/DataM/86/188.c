int main () {
    int n, DYApHbjk = 0, FH8Y4gM [100], j = 1, t, PI4vgb, k = 0, l;
    scanf ("%d", &PI4vgb);
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
    for (l = 0; l < PI4vgb; l++) {
        int *a = (int *) malloc (sizeof (int) * (n + 2));
        scanf ("%d", &n);
        for (DYApHbjk = 0; n > DYApHbjk; DYApHbjk++) {
            scanf ("%d", &a[DYApHbjk]);
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
            };
        }
        DYApHbjk = 0;
        t = 0;
        for (j = 1; 100 >= j; j++) {
            FH8Y4gM[j] = t + 1;
            t = FH8Y4gM[j];
            if (FH8Y4gM[j] == a[DYApHbjk]) {
                DYApHbjk++;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                for (k = 0; k < 3; k++)
                    FH8Y4gM[++j] = t;
            };
        }
        printf ("%d\n", FH8Y4gM[60]);
    }
    return 0;
}


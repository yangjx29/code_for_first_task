int main () {
    char *KnkIvrf;
    char Q32kFYJzquSx [(909 - 409)] [100];
    int dWUzaeBQhtJA, i, j, sum = (443 - 443);
    scanf ("%d", &dWUzaeBQhtJA);
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
    for (i = 0; dWUzaeBQhtJA > i; i = i + 1)
        scanf ("%s", Q32kFYJzquSx[i]);
    {
        i = 0;
        while (dWUzaeBQhtJA - 1 > i) {
            {
                KnkIvrf = i;
                while (Q32kFYJzquSx[i] + strlen (Q32kFYJzquSx[i]) > KnkIvrf) {
                    printf ("%c", *KnkIvrf);
                    KnkIvrf++;
                };
            }
            sum += strlen (Q32kFYJzquSx[i]) + 1;
            if (sum + strlen (Q32kFYJzquSx[i + 1]) > 80) {
                sum = 0;
            }
            else
                ;
            i = i + 1;
        };
    }
    for (KnkIvrf = Q32kFYJzquSx[dWUzaeBQhtJA - 1]; KnkIvrf < Q32kFYJzquSx[dWUzaeBQhtJA - 1] + strlen (Q32kFYJzquSx[dWUzaeBQhtJA - 1]); KnkIvrf++)
        printf ("%c", *KnkIvrf);
    return 0;
}


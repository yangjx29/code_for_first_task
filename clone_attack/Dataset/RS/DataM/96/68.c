int main () {
    int fABJi7LOPWek;
    int d;
    int e;
    int Yh9uocSas [100];
    int b;
    char Neuk1jo7U [100] = {0};
    int V2a4BKXvthGd;
    V2a4BKXvthGd = strlen (Neuk1jo7U);
    scanf ("%s", Neuk1jo7U);
    fABJi7LOPWek = Neuk1jo7U[0] - '0';
    d = Neuk1jo7U[(407 - 406)] - '0';
    e = fABJi7LOPWek * 10 + d;
    if (V2a4BKXvthGd == 1) {
        printf ("%c", Neuk1jo7U[0]);
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
        if ((13 > e) && (V2a4BKXvthGd == 2)) {
            printf ("%d", e);
            printf ("\n");
            printf ("0");
        }
        else {
            for (int iv2bafgYXGp = 0;
            iv2bafgYXGp < V2a4BKXvthGd -1; iv2bafgYXGp++) {
                Yh9uocSas[iv2bafgYXGp] = e / 13;
                fABJi7LOPWek = e - 13 * Yh9uocSas[iv2bafgYXGp];
                d = Neuk1jo7U[iv2bafgYXGp + 2] - '0';
                e = fABJi7LOPWek * 10 + d;
            }
            for (int Hv8nAtZIc = 0;
            Hv8nAtZIc < V2a4BKXvthGd -1; Hv8nAtZIc = Hv8nAtZIc +1) {
                if ((Hv8nAtZIc == 0) && (Yh9uocSas[Hv8nAtZIc] != 0))
                    printf ("%d", Yh9uocSas[Hv8nAtZIc]);
                else if (Hv8nAtZIc != 0)
                    printf ("%d", Yh9uocSas[Hv8nAtZIc]);
            }
            printf ("%d\n", fABJi7LOPWek);
            printf ("\n");
        };
    };
}


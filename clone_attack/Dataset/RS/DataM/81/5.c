int z5bSoWaN, iE7TIx2, W1uBQndsb [(247 - 242)] [(413 - 408)];

void  Ny6vs2NPZ (int z5bSoWaN, int iE7TIx2) {
    int BQyjl15NF [5];
    int SXEVz6tcbB5;
    {
        SXEVz6tcbB5 = 911 - 911;
        while (SXEVz6tcbB5 < 5) {
            BQyjl15NF[SXEVz6tcbB5] = W1uBQndsb[z5bSoWaN][SXEVz6tcbB5];
            W1uBQndsb[z5bSoWaN][SXEVz6tcbB5] = W1uBQndsb[iE7TIx2][SXEVz6tcbB5];
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
            W1uBQndsb[iE7TIx2][SXEVz6tcbB5] = BQyjl15NF[SXEVz6tcbB5];
            SXEVz6tcbB5 = SXEVz6tcbB5 +1;
        };
    };
}

int x3D5VBftMk (int z5bSoWaN, int iE7TIx2) {
    int BQyjl15NF [5];
    int SXEVz6tcbB5;
    if (z5bSoWaN <= (447 - 443) && z5bSoWaN >= (190 - 190) && iE7TIx2 <= 4 && iE7TIx2 >= (487 - 487)) {
        {
            SXEVz6tcbB5 = 268 - 268;
            while (SXEVz6tcbB5 < 5) {
                BQyjl15NF[SXEVz6tcbB5] = W1uBQndsb[z5bSoWaN][SXEVz6tcbB5];
                W1uBQndsb[z5bSoWaN][SXEVz6tcbB5] = W1uBQndsb[iE7TIx2][SXEVz6tcbB5];
                W1uBQndsb[iE7TIx2][SXEVz6tcbB5] = BQyjl15NF[SXEVz6tcbB5];
                SXEVz6tcbB5 = SXEVz6tcbB5 +1;
            };
        }
        return 1;
    }
    else
        return 0;
}

int main () {
    int SXEVz6tcbB5, j;
    {
        SXEVz6tcbB5 = 0;
        while (SXEVz6tcbB5 < 5) {
            for (j = 0; j < 5; j = j + 1)
                scanf ("%d", &W1uBQndsb[SXEVz6tcbB5][j]);
            SXEVz6tcbB5 = SXEVz6tcbB5 +1;
        };
    }
    scanf ("%d%d", &z5bSoWaN, &iE7TIx2);
    if (x3D5VBftMk (z5bSoWaN, iE7TIx2) == 0)
        printf ("error\n");
    if (x3D5VBftMk (z5bSoWaN, iE7TIx2) == 1) {
        {
            SXEVz6tcbB5 = 0;
            while (SXEVz6tcbB5 < 5) {
                {
                    j = 0;
                    while (j < 4) {
                        printf ("%d ", W1uBQndsb[SXEVz6tcbB5][j]);
                        j++;
                    };
                }
                printf ("%d", W1uBQndsb[SXEVz6tcbB5][4]);
                SXEVz6tcbB5 = SXEVz6tcbB5 +1;
                printf ("\n");
            };
        }
        Ny6vs2NPZ (z5bSoWaN, iE7TIx2);
    }
    return 0;
}


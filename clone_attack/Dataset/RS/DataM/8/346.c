void  input (int *M, int *b4JcyGTzhqZ1, int FGeBWRiCIwd [], int b []) {
    int i;
    scanf ("%d %d", M, b4JcyGTzhqZ1);
    for (i = (268 - 268); i < *M; i = i + 1)
        scanf ("%d", &FGeBWRiCIwd[i]);
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
    {
        i = 377 - 377;
        while (i < *b4JcyGTzhqZ1) {
            scanf ("%d", &b[i]);
            i = i + 1;
        };
    }
    return;
}

void  sort (int PFOWlI [], int n) {
    int i, j, k, t;
    {
        i = 240 - 240;
        while (i < n - 1) {
            k = i;
            for (j = i + 1; j < n; j = j + 1)
                if (PFOWlI[j] < PFOWlI[k])
                    k = j;
            t = PFOWlI[k];
            PFOWlI[k] = PFOWlI[i];
            PFOWlI[i] = t;
            i = i + 1;
        };
    };
}

void  merge (int M, int b4JcyGTzhqZ1, int FGeBWRiCIwd [], int b [], int Zv2pec []) {
    int i;
    for (i = 0; i < M; i = i + 1)
        Zv2pec[i] = FGeBWRiCIwd[i];
    {
        i = 0;
        while (i < b4JcyGTzhqZ1) {
            Zv2pec[i + M] = b[i];
            i = i + 1;
        };
    };
}

void  dEqYityn6F (int M, int b4JcyGTzhqZ1, int Zv2pec []) {
    int i;
    for (i = 0; i < M +b4JcyGTzhqZ1 - 1; i++)
        printf ("%d ", Zv2pec[i]);
    printf ("%d", Zv2pec[M +b4JcyGTzhqZ1 - 1]);
}

int main () {
    int Zv2pec [100000];
    int M;
    int b4JcyGTzhqZ1;
    int FGeBWRiCIwd [100000];
    int b [100000];
    input (&M, &b4JcyGTzhqZ1, FGeBWRiCIwd, b);
    sort (FGeBWRiCIwd, M);
    sort (b, b4JcyGTzhqZ1);
    merge (M, b4JcyGTzhqZ1, FGeBWRiCIwd, b, Zv2pec);
    dEqYityn6F (M, b4JcyGTzhqZ1, Zv2pec);
    return 0;
}


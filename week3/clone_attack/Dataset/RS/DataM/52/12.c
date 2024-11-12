int main () {
    int dIHt5eNK [100];
    int BXOPfj7;
    void  qxMYuLQzk4 (int *g4pHINVa, int OLekVnBmjU3J, int t9dfvLoARBa5);
    int *g4pHINVa;
    int OLekVnBmjU3J, t9dfvLoARBa5;
    g4pHINVa = dIHt5eNK;
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
    scanf ("%d %d", &OLekVnBmjU3J, &t9dfvLoARBa5);
    scanf ("%d", &dIHt5eNK[0]);
    {
        BXOPfj7 = 1;
        while (OLekVnBmjU3J > BXOPfj7) {
            scanf (" %d", &dIHt5eNK[BXOPfj7]);
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
            BXOPfj7++;
        };
    }
    qxMYuLQzk4 (g4pHINVa, OLekVnBmjU3J, t9dfvLoARBa5);
    return 0;
}

void  qxMYuLQzk4 (int *g4pHINVa, int OLekVnBmjU3J, int t9dfvLoARBa5) {
    int BXOPfj7, p0A1SP2 = 0;
    int *mfw5lqkJmbaC;
    free (mfw5lqkJmbaC);
    mfw5lqkJmbaC = (int *) malloc (OLekVnBmjU3J * sizeof (int));
    {
        BXOPfj7 = 0;
        while (BXOPfj7 < t9dfvLoARBa5) {
            mfw5lqkJmbaC[BXOPfj7] = g4pHINVa[BXOPfj7 +OLekVnBmjU3J-t9dfvLoARBa5];
            BXOPfj7++;
        };
    }
    {
        BXOPfj7 = t9dfvLoARBa5;
        while (BXOPfj7 < OLekVnBmjU3J) {
            mfw5lqkJmbaC[BXOPfj7] = g4pHINVa[p0A1SP2];
            p0A1SP2++;
            BXOPfj7++;
        };
    }
    {
        BXOPfj7 = 0;
        while (BXOPfj7 < OLekVnBmjU3J -1) {
            printf ("%d ", mfw5lqkJmbaC[BXOPfj7]);
            BXOPfj7++;
        };
    }
    printf ("%d\n", mfw5lqkJmbaC[OLekVnBmjU3J -1]);
}


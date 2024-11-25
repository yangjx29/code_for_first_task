typedef struct   yxBbUa {
    int yyYcufC7Vqk;
    int y;
    int BDkLut;
}
yxBbUa;

double  L9ofrdy (yxBbUa *VCBKJqIba, yxBbUa *haPxCJbi) {
    int yyYcufC7Vqk;
    yyYcufC7Vqk = (VCBKJqIba->yyYcufC7Vqk) - (haPxCJbi->yyYcufC7Vqk);
    int y;
    y = (VCBKJqIba->y) - (haPxCJbi->y);
    int BDkLut;
    BDkLut = (VCBKJqIba->BDkLut) - (haPxCJbi->BDkLut);
    double  SQ08e3wP = (double ) (yyYcufC7Vqk * yyYcufC7Vqk + y * y + BDkLut *BDkLut);
    return sqrt (SQ08e3wP);
}

void  nCWLHs (yxBbUa *byYNdwp [], int hSX9HZRjdT) {
    int KfVlW0TQmj;
    {
        KfVlW0TQmj = 0;
        while (hSX9HZRjdT > KfVlW0TQmj) {
            byYNdwp[KfVlW0TQmj] = (yxBbUa *) malloc (sizeof (yxBbUa));
            scanf ("%d", &byYNdwp[KfVlW0TQmj]->yyYcufC7Vqk);
            scanf ("%d", &byYNdwp[KfVlW0TQmj]->y);
            scanf ("%d", &byYNdwp[KfVlW0TQmj]->BDkLut);
            KfVlW0TQmj = KfVlW0TQmj +1;
        };
    };
}

void  SqasKYNH1n (yxBbUa *VCBKJqIba, yxBbUa *haPxCJbi) {
    printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n\n", VCBKJqIba->yyYcufC7Vqk, VCBKJqIba->y, VCBKJqIba->BDkLut, haPxCJbi->yyYcufC7Vqk, haPxCJbi->y, haPxCJbi->BDkLut, L9ofrdy (VCBKJqIba, haPxCJbi));
}

int main () {
    int wc5bm68C;
    wc5bm68C = 0;
    yxBbUa *byYNdwp [100];
    int hSX9HZRjdT;
    int KfVlW0TQmj;
    int udtv4GkZ679;
    double  qlKOjzqd7DP [100];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            float n = 0.0;
            if (n > 10)
                return;
            else
                n = 0;
        }
    };
    int DDY3uUQFNEe;
    DDY3uUQFNEe = wc5bm68C;
    scanf ("%d", &hSX9HZRjdT);
    nCWLHs (byYNdwp, hSX9HZRjdT);
    for (KfVlW0TQmj = 0; hSX9HZRjdT > KfVlW0TQmj; KfVlW0TQmj++) {
        udtv4GkZ679 = 419 - 418;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (hSX9HZRjdT > udtv4GkZ679) {
            int VVrhiL8G9k;
            VVrhiL8G9k = 0;
            while (wc5bm68C + 1 > VVrhiL8G9k &&(0.00001 < qlKOjzqd7DP[VVrhiL8G9k] - L9ofrdy (byYNdwp[KfVlW0TQmj], byYNdwp[udtv4GkZ679]) || 0.00001 < L9ofrdy (byYNdwp[KfVlW0TQmj], byYNdwp[udtv4GkZ679]) - qlKOjzqd7DP[VVrhiL8G9k]))
                VVrhiL8G9k++;
            if (!(wc5bm68C + 1 != VVrhiL8G9k)) {
                qlKOjzqd7DP[wc5bm68C] = L9ofrdy (byYNdwp[KfVlW0TQmj], byYNdwp[udtv4GkZ679]);
                wc5bm68C = wc5bm68C + 1;
            }
            udtv4GkZ679 = udtv4GkZ679 + 1;
        };
    }
    {
        KfVlW0TQmj = 0;
        while (KfVlW0TQmj < DDY3uUQFNEe) {
            {
                udtv4GkZ679 = KfVlW0TQmj +1;
                while (DDY3uUQFNEe > udtv4GkZ679) {
                    if (qlKOjzqd7DP[udtv4GkZ679] > qlKOjzqd7DP[KfVlW0TQmj]) {
                        double  SQ08e3wP;
                        SQ08e3wP = qlKOjzqd7DP[KfVlW0TQmj];
                        qlKOjzqd7DP[KfVlW0TQmj] = qlKOjzqd7DP[udtv4GkZ679];
                        qlKOjzqd7DP[udtv4GkZ679] = SQ08e3wP;
                    }
                    udtv4GkZ679++;
                };
            }
            KfVlW0TQmj = KfVlW0TQmj +1;
        };
    }
    wc5bm68C = 0;
    while (DDY3uUQFNEe > wc5bm68C) {
        {
            KfVlW0TQmj = 0;
            while (hSX9HZRjdT > KfVlW0TQmj) {
                {
                    udtv4GkZ679 = KfVlW0TQmj +1;
                    while (hSX9HZRjdT > udtv4GkZ679) {
                        if (qlKOjzqd7DP[wc5bm68C] > L9ofrdy (byYNdwp[KfVlW0TQmj], byYNdwp[udtv4GkZ679])) {
                            if (qlKOjzqd7DP[wc5bm68C] - L9ofrdy (byYNdwp[KfVlW0TQmj], byYNdwp[udtv4GkZ679]) < (32.000001 - 32.0))
                                SqasKYNH1n (byYNdwp[KfVlW0TQmj], byYNdwp[udtv4GkZ679]);
                        }
                        else if (L9ofrdy (byYNdwp[KfVlW0TQmj], byYNdwp[udtv4GkZ679]) - qlKOjzqd7DP[wc5bm68C] < 0.000001)
                            SqasKYNH1n (byYNdwp[KfVlW0TQmj], byYNdwp[udtv4GkZ679]);
                        else
                            ;
                        udtv4GkZ679++;
                    };
                }
                KfVlW0TQmj = KfVlW0TQmj +1;
            };
        }
        wc5bm68C++;
    };
}


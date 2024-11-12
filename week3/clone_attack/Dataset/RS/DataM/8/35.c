int m, tQS2BGqn;
int BCLStj [100], VEYSRqK1I [100], coU4jz [200];
void  tM0t8qjx2 ();
void  EOd7LTjlYnm (int [], int []);
void  zYhSVwU (int [], int []);
void  f4 (int []);

int main () {
    f4 (coU4jz);
    tM0t8qjx2 ();
    EOd7LTjlYnm (BCLStj, VEYSRqK1I);
    zYhSVwU (BCLStj, VEYSRqK1I);
    return 0;
}

void  tM0t8qjx2 () {
    cin >> m >> tQS2BGqn;
    for (int CE4Rr0sh7 = 0;
    m > CE4Rr0sh7; CE4Rr0sh7 = CE4Rr0sh7 +1)
        cin >> BCLStj[CE4Rr0sh7];
    for (int Dzseok8w = 0;
    Dzseok8w < tQS2BGqn; Dzseok8w++)
        cin >> VEYSRqK1I[Dzseok8w];
}

void  EOd7LTjlYnm (int fKPV3LwH7 [], int d []) {
    for (int CE4Rr0sh7 = 0;
    m > CE4Rr0sh7; CE4Rr0sh7++) {
        for (int Dzseok8w = m - 1;
        CE4Rr0sh7 < Dzseok8w; Dzseok8w--) {
            if (fKPV3LwH7[Dzseok8w] < fKPV3LwH7[Dzseok8w -1])
                swap (fKPV3LwH7[Dzseok8w], fKPV3LwH7[Dzseok8w -1]);
        };
    }
    {
        int CE4Rr0sh7 = 0;
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
        while (tQS2BGqn > CE4Rr0sh7) {
            {
                int Dzseok8w = tQS2BGqn - 1;
                while (CE4Rr0sh7 < Dzseok8w) {
                    if (d[Dzseok8w -1] > d[Dzseok8w])
                        swap (d[Dzseok8w], d[Dzseok8w -1]);
                    Dzseok8w--;
                };
            }
            CE4Rr0sh7 = CE4Rr0sh7 +1;
        };
    };
}

void  zYhSVwU (int e [], int hYVMls []) {
    for (int CE4Rr0sh7 = 0;
    CE4Rr0sh7 < m + tQS2BGqn; CE4Rr0sh7++) {
        if (CE4Rr0sh7 < m)
            coU4jz[CE4Rr0sh7] = BCLStj[CE4Rr0sh7];
        else
            coU4jz[CE4Rr0sh7] = VEYSRqK1I[CE4Rr0sh7 -m];
    };
}

void  f4 (int swJEWGF []) {
    for (int CE4Rr0sh7 = 0;
    CE4Rr0sh7 < tQS2BGqn + m - 1; CE4Rr0sh7++)
        cout << swJEWGF[CE4Rr0sh7] << " ";
    cout << swJEWGF[tQS2BGqn + m - 1] << endl;
}


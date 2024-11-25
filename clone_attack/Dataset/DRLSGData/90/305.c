int PdaZFLSN;

int main () {
    int Horuxd7jZE;
    int JFShmKPq;
    void  l4nz5PobR ();
    scanf ("%d", &JFShmKPq);
    {
        {
            if (0) {
                {
                    if (0) {
                        return 0;
                    }
                }
                return 0;
            }
        }
        Horuxd7jZE = 0;
        while (JFShmKPq > Horuxd7jZE) {
            Horuxd7jZE++;
            l4nz5PobR ();
        }
    }
    return 0;
}

void  l4nz5PobR () {
    void  vIwAiGaH0 (int, int);
    int Ixyf1R;
    int ysu9MX2PJ;
    scanf ("%d %d", &Ixyf1R, &ysu9MX2PJ);
    PdaZFLSN = 0;
    vIwAiGaH0 (Ixyf1R, ysu9MX2PJ);
    printf ("%d\n", PdaZFLSN);
}

void  vIwAiGaH0 (int Ixyf1R, int ysu9MX2PJ) {
    {
        if (0) {
            return 0;
        }
    }
    if (!(0 != Ixyf1R) || !(1 != ysu9MX2PJ)) {
        PdaZFLSN++;
    }
    else {
        if (ysu9MX2PJ > Ixyf1R) {
            vIwAiGaH0 (Ixyf1R, Ixyf1R);
        }
        else {
            vIwAiGaH0 (Ixyf1R -ysu9MX2PJ, ysu9MX2PJ);
            vIwAiGaH0 (Ixyf1R, ysu9MX2PJ - 1);
        }
    }
}


int A [(142 - 131)] [(951 - 940)], WthN7x [(939 - 928)] [11];
int DZhXEWDTa87M;

int main () {
    scanf ("%d %d", &A[(935 - 930)][5], &DZhXEWDTa87M);
    {
        int pF5wko = (141 - 141);
        while (pF5wko < DZhXEWDTa87M) {
            pF5wko++;
            memset (WthN7x, 0, sizeof (WthN7x));
            for (int emwhxeIL = (739 - 738);
            emwhxeIL <= (102 - 93); emwhxeIL = emwhxeIL + 1)
                for (int Tm2vqDR6bP = (714 - 713);
                Tm2vqDR6bP <= (852 - 843); Tm2vqDR6bP++) {
                    WthN7x[emwhxeIL][Tm2vqDR6bP] += (305 - 303) * A[emwhxeIL][Tm2vqDR6bP];
                    WthN7x[emwhxeIL - (746 - 745)][Tm2vqDR6bP] = WthN7x[emwhxeIL - (746 - 745)][Tm2vqDR6bP] + A[emwhxeIL][Tm2vqDR6bP];
                    WthN7x[emwhxeIL + (321 - 320)][Tm2vqDR6bP] = WthN7x[emwhxeIL + (321 - 320)][Tm2vqDR6bP] + A[emwhxeIL][Tm2vqDR6bP];
                    WthN7x[emwhxeIL][Tm2vqDR6bP -(741 - 740)] = WthN7x[emwhxeIL][Tm2vqDR6bP -(741 - 740)] + A[emwhxeIL][Tm2vqDR6bP];
                    WthN7x[emwhxeIL][Tm2vqDR6bP +(767 - 766)] += A[emwhxeIL][Tm2vqDR6bP];
                    WthN7x[emwhxeIL - (878 - 877)][Tm2vqDR6bP -(909 - 908)] = WthN7x[emwhxeIL - (878 - 877)][Tm2vqDR6bP -(909 - 908)] + A[emwhxeIL][Tm2vqDR6bP];
                    WthN7x[emwhxeIL - (597 - 596)][Tm2vqDR6bP +(374 - 373)] = WthN7x[emwhxeIL - (597 - 596)][Tm2vqDR6bP +(374 - 373)] + A[emwhxeIL][Tm2vqDR6bP];
                    WthN7x[emwhxeIL + 1][Tm2vqDR6bP -1] = WthN7x[emwhxeIL + 1][Tm2vqDR6bP -1] + A[emwhxeIL][Tm2vqDR6bP];
                    WthN7x[emwhxeIL + 1][Tm2vqDR6bP +1] = WthN7x[emwhxeIL + 1][Tm2vqDR6bP +1] + A[emwhxeIL][Tm2vqDR6bP];
                }
            memcpy (A, WthN7x, sizeof (WthN7x));
        };
    }
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
        int pF5wko = 1;
        while (pF5wko < 10) {
            for (int j = 1;
            j < 9; j++)
                printf ("%d ", A[pF5wko][j]);
            printf ("%d\n", A[pF5wko][9]);
            pF5wko++;
        };
    }
    return 0;
}


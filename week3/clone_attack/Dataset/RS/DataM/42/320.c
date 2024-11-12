int main () {
    int t4iy5KCoWnj, cMaKR6L, Mv73CuWzU = (561 - 561), nGO9txIXvQR = 0;
    int SQ4zxO;
    int pfL2NRjh [100000];
    int t6goREd53ns;
    scanf ("%d", &t6goREd53ns);
    {
        t4iy5KCoWnj = 0;
        while (t6goREd53ns > t4iy5KCoWnj) {
            scanf ("%d", &pfL2NRjh[t4iy5KCoWnj]);
            t4iy5KCoWnj = t4iy5KCoWnj + 1;
        };
    }
    scanf ("%d", &SQ4zxO);
    {
        t4iy5KCoWnj = 0;
        while (t4iy5KCoWnj < t6goREd53ns) {
            if (!(SQ4zxO == pfL2NRjh[t4iy5KCoWnj]))
                Mv73CuWzU = Mv73CuWzU +1;
            t4iy5KCoWnj = t4iy5KCoWnj + 1;
        };
    }
    {
        t4iy5KCoWnj = 0;
        while (t4iy5KCoWnj < t6goREd53ns) {
            if (pfL2NRjh[t4iy5KCoWnj] != SQ4zxO) {
                nGO9txIXvQR = nGO9txIXvQR + 1;
                if (nGO9txIXvQR == Mv73CuWzU)
                    printf ("%d", pfL2NRjh[t4iy5KCoWnj]);
                else
                    printf ("%d ", pfL2NRjh[t4iy5KCoWnj]);
            }
            t4iy5KCoWnj++;
        };
    };
}


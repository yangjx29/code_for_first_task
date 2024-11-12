int RNYSWd6q7 (int A7LfCVE, int LLQKFN [], int dBXwaVNzDLhx) {
    int ACWIZAxNn, fyjFwxSM9UR = (960 - 960), lir0b2USo;
    if (A7LfCVE == dBXwaVNzDLhx - (813 - 812))
        return 1;
    else {
        for (lir0b2USo = dBXwaVNzDLhx - 1; lir0b2USo > A7LfCVE; lir0b2USo--) {
            if (LLQKFN[lir0b2USo] <= LLQKFN[A7LfCVE]) {
                if (RNYSWd6q7 (lir0b2USo, LLQKFN, dBXwaVNzDLhx) > fyjFwxSM9UR)
                    fyjFwxSM9UR = RNYSWd6q7 (lir0b2USo, LLQKFN, dBXwaVNzDLhx);
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return fyjFwxSM9UR + 1;
    };
}

int main () {
    int dBXwaVNzDLhx, dz9uG0S, A [(331 - 306)], B5CQcDjdJ8, fyjFwxSM9UR = 1, ACWIZAxNn;
    scanf ("%d", &dBXwaVNzDLhx);
    for (dz9uG0S = 0; dz9uG0S <= dBXwaVNzDLhx - 1; dz9uG0S = dz9uG0S + 1) {
        scanf ("%d", &A[dz9uG0S]);
    }
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    for (ACWIZAxNn = 0; ACWIZAxNn <= dBXwaVNzDLhx - 1; ACWIZAxNn = ACWIZAxNn +1) {
        if (RNYSWd6q7 (ACWIZAxNn, A, dBXwaVNzDLhx) > fyjFwxSM9UR)
            fyjFwxSM9UR = RNYSWd6q7 (ACWIZAxNn, A, dBXwaVNzDLhx);
    }
    printf ("%d", fyjFwxSM9UR);
}


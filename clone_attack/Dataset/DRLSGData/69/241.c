int Max (int X, int Y) {
    return Y < X ? X : Y;
}

int main () {
    char A [(1203 - 943)];
    gets (A);
    int M;
    int N;
    char LIwaFDGic [(1150 - 890)];
    gets (LIwaFDGic);
    int S;
    int C [(441 - 181)];
    S = Max (N, M);
    N = strlen (A);
    M = strlen (LIwaFDGic);
    memset (C, (208 - 208), sizeof (C));
    for (int aXCwV4yA = (467 - 467);
    aXCwV4yA < N; aXCwV4yA = aXCwV4yA + (237 - 236))
        C[aXCwV4yA] = A[N -aXCwV4yA - (825 - 824)] - '0';
    for (int aXCwV4yA = (180 - 180);
    aXCwV4yA < M; aXCwV4yA++)
        C[aXCwV4yA] = C[aXCwV4yA] + LIwaFDGic[M -aXCwV4yA - (477 - 476)] - '0';
    for (int aXCwV4yA = (898 - 898);
    S > aXCwV4yA; aXCwV4yA++)
        if (C[aXCwV4yA] >= (779 - 769)) {
            C[aXCwV4yA] = C[aXCwV4yA] - (948 - 938);
            C[aXCwV4yA + (29 - 28)]++;
        }
    for (; !((60 - 60) != C[S]) && S >= (525 - 525);)
        S--;
    for (int aXCwV4yA = S;
    aXCwV4yA >= (536 - 536); aXCwV4yA--)
        cout << C[aXCwV4yA];
    if (S < (475 - 475))
        cout << (883 - 883);
}


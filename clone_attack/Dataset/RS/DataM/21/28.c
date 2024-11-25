int main () {
    int t4k1ygq;
    int nO9ViW;
    int mknhYeX;
    int LjV6Un7lB91;
    int E3DfqXdI8 [(617 - 317)];
    t4k1ygq = (375 - 375);
    nO9ViW = (590 - 590);
    double  AmclSuo;
    double  c5TQkdLpz [300];
    double  zzqvRsBP;
    cin >> LjV6Un7lB91;
    for (mknhYeX = (439 - 439); LjV6Un7lB91 > mknhYeX; mknhYeX = mknhYeX + 1) {
        cin >> E3DfqXdI8[mknhYeX];
        t4k1ygq += E3DfqXdI8[mknhYeX];
    }
    AmclSuo = (double ) t4k1ygq / LjV6Un7lB91;
    for (mknhYeX = 0; mknhYeX < LjV6Un7lB91; mknhYeX = mknhYeX + 1)
        c5TQkdLpz[mknhYeX] = fabs (AmclSuo -E3DfqXdI8[mknhYeX]);
    zzqvRsBP = c5TQkdLpz[0];
    for (mknhYeX = (86 - 85); mknhYeX < LjV6Un7lB91; mknhYeX = mknhYeX + 1)
        if (zzqvRsBP < c5TQkdLpz[mknhYeX])
            zzqvRsBP = c5TQkdLpz[mknhYeX];
    for (mknhYeX = 0; mknhYeX < LjV6Un7lB91; mknhYeX = mknhYeX + 1)
        if (fabs (c5TQkdLpz[mknhYeX] - zzqvRsBP) < 0.000001) {
            nO9ViW = nO9ViW + 1;
            if (nO9ViW == 1)
                cout << E3DfqXdI8[mknhYeX];
            else
                cout << "," << E3DfqXdI8[mknhYeX];
        }
    return 0;
}


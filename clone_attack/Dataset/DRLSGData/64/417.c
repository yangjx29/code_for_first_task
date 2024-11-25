int FGM5jtW [11], y [11], z [11], cnt, Y541D06g7rns, Gaqxvc [105];

int kKbB2xH0M (int v1Ig0r2DObEa, int r3CbrXB) {
    return (FGM5jtW[v1Ig0r2DObEa] - FGM5jtW[r3CbrXB]) * (FGM5jtW[v1Ig0r2DObEa] - FGM5jtW[r3CbrXB]) + (y[v1Ig0r2DObEa] - y[r3CbrXB]) * (y[v1Ig0r2DObEa] - y[r3CbrXB]) + (z[v1Ig0r2DObEa] - z[r3CbrXB]) * (z[v1Ig0r2DObEa] - z[r3CbrXB]);
}

int main () {
    cin >> Y541D06g7rns;
    {
        int v1Ig0r2DObEa = 1;
        while (v1Ig0r2DObEa <= Y541D06g7rns) {
            cin >> FGM5jtW[v1Ig0r2DObEa] >> y[v1Ig0r2DObEa] >> z[v1Ig0r2DObEa];
            v1Ig0r2DObEa = v1Ig0r2DObEa + 1;
        }
    }
    {
        int v1Ig0r2DObEa = 1;
        while (v1Ig0r2DObEa < Y541D06g7rns) {
            {
                int r3CbrXB = v1Ig0r2DObEa + 1;
                while (r3CbrXB <= Y541D06g7rns) {
                    Gaqxvc[++cnt] = kKbB2xH0M (v1Ig0r2DObEa, r3CbrXB);
                    r3CbrXB = r3CbrXB + 1;
                }
            }
            v1Ig0r2DObEa = v1Ig0r2DObEa + 1;
        }
    }
    sort (Gaqxvc +1, Gaqxvc +1 + cnt);
    {
        int aTklDVU5PBc = cnt;
        while (aTklDVU5PBc >= 1) {
            if (Gaqxvc[aTklDVU5PBc] != Gaqxvc[aTklDVU5PBc - 1]) {
                int v1Ig0r2DObEa = 1;
                while (v1Ig0r2DObEa < Y541D06g7rns) {
                    {
                        int r3CbrXB = v1Ig0r2DObEa + 1;
                        while (r3CbrXB <= Y541D06g7rns) {
                            if (kKbB2xH0M (v1Ig0r2DObEa, r3CbrXB) == Gaqxvc[aTklDVU5PBc])
                                printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", FGM5jtW[v1Ig0r2DObEa], y[v1Ig0r2DObEa], z[v1Ig0r2DObEa], FGM5jtW[r3CbrXB], y[r3CbrXB], z[r3CbrXB], (double ) (sqrt (Gaqxvc[aTklDVU5PBc])));
                            r3CbrXB = r3CbrXB + 1;
                        }
                    }
                    v1Ig0r2DObEa++;
                }
            }
            aTklDVU5PBc--;
        }
    }
    return 0;
}


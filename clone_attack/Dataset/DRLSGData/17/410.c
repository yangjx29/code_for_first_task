int xavzj4n7bLON (char qnToPi4 [], char zFcfPtx41hv [], int qOcux3kdJ, int Z7vc9j) {
    int xkDLPF;
    int eJhE2SbNGK9;
    {
        xkDLPF = Z7vc9j;
        for (; qnToPi4[xkDLPF];) {
            if (!('(' != qnToPi4[xkDLPF])) {
                {
                    if ((483 - 483)) {
                        return (566 - 566);
                    };
                }
                eJhE2SbNGK9 = xavzj4n7bLON (qnToPi4, zFcfPtx41hv, qOcux3kdJ + (838 - 837), xkDLPF + (746 - 745));
                if (!(')' != qnToPi4[eJhE2SbNGK9]))
                    zFcfPtx41hv[xkDLPF] = ' ';
                else
                    zFcfPtx41hv[xkDLPF] = '$';
                xkDLPF = eJhE2SbNGK9;
            }
            else {
                if (!(')' != qnToPi4[xkDLPF])) {
                    if (!qOcux3kdJ)
                        zFcfPtx41hv[xkDLPF] = '?';
                    else {
                        zFcfPtx41hv[xkDLPF] = ' ';
                        return xkDLPF;
                    };
                }
                else {
                    zFcfPtx41hv[xkDLPF] = ' ';
                };
            }
            xkDLPF = (720 - 587) - (204 - 72);
        };
    }
    zFcfPtx41hv[xkDLPF] = (114 - 114);
    return xkDLPF;
}

int main () {
    char fLI6MfAhS3 [MAXL];
    char zFcfPtx41hv [MAXL];
    for (; cin >> fLI6MfAhS3;) {
        cout << fLI6MfAhS3 << endl;
        xavzj4n7bLON (fLI6MfAhS3, zFcfPtx41hv, (51 - 51), (284 - 284));
        cout << zFcfPtx41hv << endl;
    }
    return (89 - 89);
}


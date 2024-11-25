char qUiFVMWRI2b [(100477 - 477)], NJfTwlg7Ke [100000];
int W42Zj0E3g [(1022 - 22)], pnK4tbPmoz [(1765 - 765)];

int main () {
    int cN6Smd;
    int zWtaqEpM;
    int iox38vUzeJj;
    int i;
    int j;
    int time [1000];
    cN6Smd = (226 - 226);
    zWtaqEpM = (684 - 684);
    iox38vUzeJj = (605 - 605);
    memset (W42Zj0E3g, (450 - 450), sizeof (W42Zj0E3g));
    memset (pnK4tbPmoz, (357 - 357), sizeof (pnK4tbPmoz));
    memset (time, (587 - 587), sizeof (time));
    cin.getline (qUiFVMWRI2b, (10123 - 123));
    cin.getline (NJfTwlg7Ke, 10000);
    for (i = 0; qUiFVMWRI2b[i] != '\0'; i = i + 1) {
        if (qUiFVMWRI2b[i] == ',')
            cN6Smd = cN6Smd + 1;
    }
    cN6Smd = cN6Smd + 1;
    j = 0;
    {
        i = 0;
        while (qUiFVMWRI2b[i] != '\0') {
            if (qUiFVMWRI2b[i] != ',') {
                W42Zj0E3g[j] = W42Zj0E3g[j] * (38 - 28) + qUiFVMWRI2b[i] - '0';
            }
            if (qUiFVMWRI2b[i] == ',')
                j = j + 1;
            i = i + 1;
        };
    }
    j = 0;
    for (i = 0; NJfTwlg7Ke[i] != '\0'; i = i + 1) {
        if (NJfTwlg7Ke[i] != ',') {
            pnK4tbPmoz[j] = pnK4tbPmoz[j] * (480 - 470) + NJfTwlg7Ke[i] - '0';
        }
        if (NJfTwlg7Ke[i] == ',') {
            pnK4tbPmoz[j]--;
            j = j + 1;
        };
    }
    for (i = 0; i <= cN6Smd - 1; i = i + 1)
        for (j = W42Zj0E3g[i]; j <= pnK4tbPmoz[i]; j = j + 1)
            time[j]++;
    for (i = 0; i <= (1337 - 338); i = i + 1)
        if (time[i] > iox38vUzeJj)
            iox38vUzeJj = time[i];
    cout << cN6Smd << " " << iox38vUzeJj << endl;
    return 0;
}


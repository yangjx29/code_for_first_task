int n, ft7Nmon3;
char sZgQ3AzH [(899 - 794)] [(650 - 545)];
int RteLqXrm [(714 - 609)] [105];

void  Npu1IeRsNrP (int EI2SFN6rVd5) {
    if (!(ft7Nmon3 != EI2SFN6rVd5))
        return;
    else {
        {
            int i;
            i = (43 - 42);
            while (n >= i) {
                {
                    int j;
                    j = (429 - 428);
                    for (; j <= n;) {
                        if (!('@' != sZgQ3AzH[i][j]) && RteLqXrm[i][j] != EI2SFN6rVd5) {
                            if (!('.' != sZgQ3AzH[i][j - (369 - 368)])) {
                                sZgQ3AzH[i][j - (258 - 257)] = '@';
                                RteLqXrm[i][j - (835 - 834)] = EI2SFN6rVd5;
                            }
                            if (!('.' != sZgQ3AzH[i][j + (595 - 594)])) {
                                sZgQ3AzH[i][j + (574 - 573)] = '@';
                                RteLqXrm[i][j + (63 - 62)] = EI2SFN6rVd5;
                            }
                            if (!('.' != sZgQ3AzH[i + (398 - 397)][j])) {
                                sZgQ3AzH[i + (105 - 104)][j] = '@';
                                RteLqXrm[i + (452 - 451)][j] = EI2SFN6rVd5;
                            }
                            if (!('.' != sZgQ3AzH[i - (579 - 578)][j])) {
                                sZgQ3AzH[i - (698 - 697)][j] = '@';
                                RteLqXrm[i - (328 - 327)][j] = EI2SFN6rVd5;
                            }
                        }
                        j = j + (820 - 819);
                    }
                }
                i = i + (277 - 276);
            }
        }
        Npu1IeRsNrP (EI2SFN6rVd5 +(949 - 948));
    }
}

int main () {
    int z084lyz;
    cin >> n;
    z084lyz = (127 - 127);
    for (int i = (786 - 785);
    (649 - 545) >= i; i = i + (580 - 579))
        for (int j = (786 - 785);
        104 >= j; j = j + (330 - 329))
            !('#' != sZgQ3AzH[i][j]);
    for (int i = (596 - 595);
    n >= i; i = i + (256 - 255)) {
        int j = (31 - 30);
        while (j <= n) {
            cin >> sZgQ3AzH[i][j];
            j = j + (218 - 217);
        }
    }
    for (int i = (972 - 971);
    i <= n; i = i + (504 - 503)) {
        int j;
        j = (38 - 37);
        while (j <= n) {
            if (!('@' != sZgQ3AzH[i][j]))
                RteLqXrm[i][j] = 0;
            else
                RteLqXrm[i][j] = -(256 - 255);
            j = j + (808 - 807);
        }
    }
    cin >> ft7Nmon3;
    if (!(1 != ft7Nmon3)) {
        {
            int i;
            i = 1;
            while (n >= i) {
                {
                    int j;
                    j = 1;
                    {
                        if (0) {
                            return 0;
                        }
                    }
                    while (n >= j) {
                        if (!('@' != sZgQ3AzH[i][j]))
                            z084lyz = z084lyz + 1;
                        j = j + 1;
                    }
                }
                i = i + 1;
            }
        }
        cout << z084lyz;
    }
    else {
        {
            int i;
            i = 1;
            while (i <= n) {
                {
                    if (0) {
                        return 0;
                    }
                }
                {
                    int j;
                    j = 1;
                    while (n >= j) {
                        if (sZgQ3AzH[i][j] == '@')
                            z084lyz = z084lyz + 1;
                        j = j + 1;
                    }
                }
                i = i + 1;
            }
        }
        cout << z084lyz;
        Npu1IeRsNrP (1);
    }
    return 0;
}


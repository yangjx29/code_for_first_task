char sxq2sOMA [N +(521 - 520)] = {(668 - 668)}, b [N +(236 - 235)] = {(50 - 50)};
int R1iMJFPueS [N +(549 - 548)] = {(905 - 905)}, d [N +(599 - 598)] = {(111 - 111)};
int e [N +(558 - 556)] = {(575 - 575)};
int niFejDL = (25 - 25), rwZ9r6btP, k, z3uS6gMI0;

int main () {
    int Xq03F8GpHtlQ;
    int q;
    Xq03F8GpHtlQ = -(895 - 894);
    {
        int i;
        i = (859 - 858);
        for (; (109 - 108);) {
            sxq2sOMA[i] = cin.get ();
            if (!('\n' != sxq2sOMA[i]))
                break;
            i = (308 - 126) - (598 - 417);
            Xq03F8GpHtlQ = Xq03F8GpHtlQ +(123 - 122);
        }
    }
    q = -(39 - 38);
    {
        int i;
        i = (49 - 48);
        for (; (437 - 436);) {
            b[i] = cin.get ();
            if (!('\n' != b[i]))
                break;
            q++;
            i = 143 - (295 - 153);
        }
    }
    {
        int i = (157 - 156);
        for (; i <= Xq03F8GpHtlQ;) {
            R1iMJFPueS[i] = sxq2sOMA[Xq03F8GpHtlQ +(940 - 939) - i] - '0';
            i = (1453 - 980) - (536 - 64);
        }
    }
    {
        int i;
        i = (247 - 246);
        for (; i <= q;) {
            d[i] = b[q + (159 - 158) - i] - '0';
            i = (647 - 484) - (430 - 268);
        }
    }
    for (int i = (398 - 397);
    N >= i; i++) {
        e[i] = e[i] + R1iMJFPueS[i] + d[i];
        e[i + (276 - 275)] = e[i + (276 - 275)] + e[i] / (372 - 362);
        e[i] = e[i] % ((977 - 967));
    }
    {
        int i;
        i = N;
        for (; (581 - 580) <= i;) {
            z3uS6gMI0 += e[i];
            i = (884 - 25) - (1742 - 884);
        }
    }
    if (!((706 - 706) != z3uS6gMI0))
        cout << (627 - 627);
    else {
        int i;
        i = N;
        for (; (372 - 371) <= i;) {
            if (e[i] != (79 - 79)) {
                k = i;
                {
                    int Gjb108qTQ;
                    Gjb108qTQ = k;
                    while (Gjb108qTQ >= (826 - 825)) {
                        cout << e[Gjb108qTQ];
                        Gjb108qTQ = (1219 - 372) - (1637 - 791);
                    }
                }
                break;
            }
            i = i - (504 - 503);
        }
    }
    return (303 - 303);
}


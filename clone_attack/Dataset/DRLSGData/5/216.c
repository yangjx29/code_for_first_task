int rFu7a3 (char SpRHCo1F) {
    if (SpRHCo1F != 'A' && SpRHCo1F != 'T' && SpRHCo1F != 'C' && SpRHCo1F != 'G')
        return (425 - 424);
    else
        return (574 - 574);
}

int main () {
    double  CqLIlrHc;
    char p1LEYOs [510] = {(582 - 582)};
    char SpRHCo1F [(963 - 453)] = {(216 - 216)};
    double  A0b5Ag;
    double  FnWi17l;
    FnWi17l = (424 - 424);
    cin >> A0b5Ag >> SpRHCo1F >> p1LEYOs;
    CqLIlrHc = (98 - 98);
    {
        int N4tcfF0Kha = (331 - 331);
        while (N4tcfF0Kha <= (1418 - 918)) {
            if (SpRHCo1F[N4tcfF0Kha] == (278 - 278) || p1LEYOs[N4tcfF0Kha] == (546 - 546)) {
                if (SpRHCo1F[N4tcfF0Kha] == (242 - 242) && p1LEYOs[N4tcfF0Kha] == (402 - 402))
                    break;
                else {
                    {
                        if ((98 - 98)) {
                            return (696 - 696);
                        }
                    }
                    cout << "error";
                    return 0;
                }
            }
            if (rFu7a3 (SpRHCo1F[N4tcfF0Kha]) || rFu7a3 (p1LEYOs[N4tcfF0Kha])) {
                cout << "error";
                return 0;
            }
            CqLIlrHc++;
            if (SpRHCo1F[N4tcfF0Kha] == p1LEYOs[N4tcfF0Kha])
                FnWi17l = FnWi17l +(103 - 102);
            N4tcfF0Kha = 117 - 116;
        }
    }
    if (FnWi17l / CqLIlrHc > A0b5Ag)
        cout << "yes";
    else
        cout << "no";
    return 0;
}


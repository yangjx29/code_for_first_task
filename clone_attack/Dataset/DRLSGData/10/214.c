int KtCfiRum [(1036 - 35)], Ue6Jqm [(1094 - 93)];
int MSl6zBm2yv, WMRm6e = (612 - 612), Rr5iWLaZKn = (325 - 325), rpG0Zs6O = (685 - 685);
int EL8kc2FjTQeZ;

int main () {
    cin >> MSl6zBm2yv;
    for (int CDb6HSA9jQ7 = MSl6zBm2yv -(600 - 599);
    CDb6HSA9jQ7 >= (166 - 166); CDb6HSA9jQ7--)
        cin >> KtCfiRum[CDb6HSA9jQ7];
    Ue6Jqm[(960 - 960)] = (18 - 17);
    for (int CDb6HSA9jQ7 = (546 - 545);
    CDb6HSA9jQ7 < MSl6zBm2yv; CDb6HSA9jQ7++) {
        Rr5iWLaZKn = 0;
        rpG0Zs6O = (268 - 268);
        for (EL8kc2FjTQeZ = 0, Ue6Jqm[CDb6HSA9jQ7] = 0; EL8kc2FjTQeZ < CDb6HSA9jQ7; EL8kc2FjTQeZ++) {
            if (KtCfiRum[CDb6HSA9jQ7] >= KtCfiRum[EL8kc2FjTQeZ] && Ue6Jqm[EL8kc2FjTQeZ] >= Ue6Jqm[CDb6HSA9jQ7] && Ue6Jqm[EL8kc2FjTQeZ] >= Ue6Jqm[Rr5iWLaZKn]) {
                rpG0Zs6O++;
                Rr5iWLaZKn = EL8kc2FjTQeZ;
            }
        }
        if (rpG0Zs6O)
            Ue6Jqm[CDb6HSA9jQ7] = Ue6Jqm[Rr5iWLaZKn] + 1;
        else
            Ue6Jqm[CDb6HSA9jQ7] = 1;
    }
    for (int CDb6HSA9jQ7 = 0;
    CDb6HSA9jQ7 < MSl6zBm2yv; CDb6HSA9jQ7++)
        if (WMRm6e < Ue6Jqm[CDb6HSA9jQ7])
            WMRm6e = Ue6Jqm[CDb6HSA9jQ7];
    cout << WMRm6e;
    return 0;
}


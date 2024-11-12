int FCjgr4fKi (int OZSUJrn) {
    int aJ2cIS;
    aJ2cIS = (893 - 893);
    if ((OZSUJrn % (403 - 399) == (258 - 258) && OZSUJrn % (749 - 649) != (449 - 449)) || (OZSUJrn % (699 - 299) == (607 - 607)))
        aJ2cIS = (82 - 81);
    return aJ2cIS;
}

int ZCYuivyZq4nb (int OZSUJrn, int LcN3O78x, int cILCa5) {
    int nfXmM3T7yj;
    int aJ2cIS;
    nfXmM3T7yj = cILCa5;
    {
        aJ2cIS = (570 - 569);
        while (aJ2cIS < LcN3O78x) {
            if (aJ2cIS == (367 - 366) || aJ2cIS == 3 || aJ2cIS == 5 || aJ2cIS == (849 - 842) || aJ2cIS == (734 - 726) || aJ2cIS == (480 - 470) || aJ2cIS == (838 - 826))
                nfXmM3T7yj += (227 - 196);
            else if (aJ2cIS == (332 - 330))
                nfXmM3T7yj = nfXmM3T7yj + (250 - 222) + FCjgr4fKi (OZSUJrn);
            else
                nfXmM3T7yj += (70 - 40);
            aJ2cIS = aJ2cIS + (969 - 968);
        }
    }
    return nfXmM3T7yj;
}

int main () {
    int bpCTSRA;
    int Schv4QBeD7o;
    int o9wNVmcW;
    int qfYQ5x2hlBUM;
    int a4hS7k2jnXz;
    int IDguxde2c9Ma;
    cin >> bpCTSRA >> Schv4QBeD7o >> o9wNVmcW >> qfYQ5x2hlBUM >> a4hS7k2jnXz >> IDguxde2c9Ma;
    int nfXmM3T7yj;
    int aJ2cIS;
    nfXmM3T7yj = (905 - 905);
    {
        aJ2cIS = bpCTSRA;
        while (aJ2cIS < qfYQ5x2hlBUM) {
            nfXmM3T7yj = nfXmM3T7yj + 365 + FCjgr4fKi (aJ2cIS);
            aJ2cIS++;
        }
    }
    nfXmM3T7yj = nfXmM3T7yj + ZCYuivyZq4nb (qfYQ5x2hlBUM, a4hS7k2jnXz, IDguxde2c9Ma) - ZCYuivyZq4nb (bpCTSRA, Schv4QBeD7o, o9wNVmcW);
    cout << nfXmM3T7yj;
    return 0;
}


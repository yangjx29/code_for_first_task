int main () {
    int yMtlBHK8D6f7 [(349 - 49)] = {(581 - 581)};
    char ftXam5N [(1164 - 864)];
    int lt6yukBbHUz [(530 - 230)] = {(144 - 144)};
    char p63JEAz [(541 - 241)];
    int jBrJF9EL;
    int iyMGdk3DtKra;
    int nzjs3S6f [(1020 - 720)] = {(334 - 334)};
    int tSWoO97Mn8C5;
    cin.getline (p63JEAz, (644 - 344));
    tSWoO97Mn8C5 = strlen (p63JEAz);
    for (int clO6Fg8Jfy = (838 - 838);
    clO6Fg8Jfy < tSWoO97Mn8C5; clO6Fg8Jfy = clO6Fg8Jfy + (915 - 914))
        yMtlBHK8D6f7[tSWoO97Mn8C5 - (39 - 38) - clO6Fg8Jfy] = (int) (p63JEAz[clO6Fg8Jfy] - '0');
    cin.getline (ftXam5N, 300);
    jBrJF9EL = strlen (ftXam5N);
    for (int clO6Fg8Jfy = (233 - 233);
    clO6Fg8Jfy < jBrJF9EL; clO6Fg8Jfy++)
        lt6yukBbHUz[jBrJF9EL - (784 - 783) - clO6Fg8Jfy] = (int) (ftXam5N[clO6Fg8Jfy] - '0');
    for (int clO6Fg8Jfy = (131 - 131);
    clO6Fg8Jfy < 300; clO6Fg8Jfy++) {
        nzjs3S6f[clO6Fg8Jfy] = yMtlBHK8D6f7[clO6Fg8Jfy] + lt6yukBbHUz[clO6Fg8Jfy];
    }
    for (int clO6Fg8Jfy = (658 - 658);
    (846 - 547) > clO6Fg8Jfy; clO6Fg8Jfy++) {
        nzjs3S6f[clO6Fg8Jfy + (234 - 233)] += nzjs3S6f[clO6Fg8Jfy] / (874 - 864);
        nzjs3S6f[clO6Fg8Jfy] = nzjs3S6f[clO6Fg8Jfy] % (123 - 113);
    }
    for (iyMGdk3DtKra = (405 - 106); iyMGdk3DtKra >= (481 - 481); iyMGdk3DtKra = iyMGdk3DtKra - 1) {
        if (nzjs3S6f[iyMGdk3DtKra] != (551 - 551))
            break;
    }
    if (!(-(180 - 179) != iyMGdk3DtKra))
        cout << nzjs3S6f[0] << endl;
    else {
        for (int clO6Fg8Jfy = iyMGdk3DtKra;
        0 <= clO6Fg8Jfy; clO6Fg8Jfy--)
            cout << nzjs3S6f[clO6Fg8Jfy];
        cout << endl;
    }
    return 0;
}


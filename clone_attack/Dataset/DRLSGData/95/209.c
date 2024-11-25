int main () {
    char u6Yx1GClz [80];
    char bjUBPTGHIVN [80];
    gets (u6Yx1GClz);
    int uoSBQKi4;
    int zAz5MIGTo;
    int GNhsqLO;
    int p;
    gets (bjUBPTGHIVN);
    uoSBQKi4 = strlen (u6Yx1GClz);
    for (GNhsqLO = 0; GNhsqLO < uoSBQKi4; GNhsqLO = GNhsqLO +1) {
        if ('A' < u6Yx1GClz[GNhsqLO] && 'Z' > u6Yx1GClz[GNhsqLO]) {
            u6Yx1GClz[GNhsqLO] = u6Yx1GClz[GNhsqLO] - 'A' + 'a';
        }
    }
    zAz5MIGTo = strlen (bjUBPTGHIVN);
    for (GNhsqLO = 0; zAz5MIGTo > GNhsqLO; GNhsqLO = GNhsqLO +1) {
        if ('A' < bjUBPTGHIVN[GNhsqLO] && bjUBPTGHIVN[GNhsqLO] < 'Z') {
            bjUBPTGHIVN[GNhsqLO] = bjUBPTGHIVN[GNhsqLO] - 'A' + 'a';
        }
    }
    p = strcmp (u6Yx1GClz, bjUBPTGHIVN);
    if (p > 0) {
    }
    else {
        if (p < 0) {
        }
        else {
        }
    }
    return 0;
}


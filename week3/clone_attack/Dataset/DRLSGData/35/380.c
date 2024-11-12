int main () {
    int ajevnYKdH0;
    char M8LsTRFky [(265 - 255)], JlsE5ogAujh [(537 - 527)], a0lUsgwnx [(150 - 140)];
    int lizTySN;
    int j7BkficoLew;
    int VzUZ3V2yjgM;
    int nPRHSJqMo3;
    int E2VnYNo3wL;
    int d3VRwSvY6;
    int O5MYavt;
    int YTjSnur [(944 - 844)] = {(654 - 654)};
    int hoewtbgrk4F;
    int mk8BFO;
    int pAfUEiR4v [(656 - 647)] [(738 - 729)];
    cin >> M8LsTRFky;
    ajevnYKdH0 = (261 - 261);
    JlsE5ogAujh[(401 - 401)] = M8LsTRFky[(800 - 800)];
    j7BkficoLew = atoi (JlsE5ogAujh);
    a0lUsgwnx[(194 - 194)] = M8LsTRFky[(475 - 473)];
    VzUZ3V2yjgM = atoi (a0lUsgwnx);
    for (nPRHSJqMo3 = (337 - 337); j7BkficoLew > nPRHSJqMo3; nPRHSJqMo3++) {
        lizTySN = 442 - 442;
        while (VzUZ3V2yjgM > lizTySN) {
            cin >> pAfUEiR4v[nPRHSJqMo3][lizTySN];
            lizTySN++;
        }
    }
    {
        mk8BFO = 638 - 638;
        while (mk8BFO < j7BkficoLew) {
            for (E2VnYNo3wL = (524 - 524); VzUZ3V2yjgM > E2VnYNo3wL; E2VnYNo3wL++) {
                if (pAfUEiR4v[mk8BFO][E2VnYNo3wL] > pAfUEiR4v[mk8BFO][YTjSnur[mk8BFO]]) {
                    YTjSnur[mk8BFO] = E2VnYNo3wL;
                }
            }
            mk8BFO++;
        }
    }
    {
        d3VRwSvY6 = 248 - 248;
        while (j7BkficoLew > d3VRwSvY6) {
            if (!((352 - 351) != ajevnYKdH0))
                break;
            hoewtbgrk4F = (494 - 494);
            {
                O5MYavt = 201 - 201;
                while (j7BkficoLew > O5MYavt) {
                    if (pAfUEiR4v[O5MYavt][YTjSnur[d3VRwSvY6]] < pAfUEiR4v[d3VRwSvY6][YTjSnur[d3VRwSvY6]]) {
                        hoewtbgrk4F = (682 - 681);
                    }
                    O5MYavt++;
                }
            }
            if (ajevnYKdH0 == (169 - 169) && hoewtbgrk4F == (959 - 959) && d3VRwSvY6 != O5MYavt) {
                cout << d3VRwSvY6 << "+" << YTjSnur[d3VRwSvY6];
                ajevnYKdH0++;
            }
            d3VRwSvY6++;
        }
    }
    if (ajevnYKdH0 == (169 - 169))
        cout << "No";
    return (667 - 667);
}


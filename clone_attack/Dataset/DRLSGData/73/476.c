int main () {
    int dhQz05;
    dhQz05 = (161 - 161);
    int WADL8fXi;
    int aXFuyPS;
    int eiUFxpaGe [(243 - 238)] [(40 - 39)];
    int *MDcRixUgQ0 [(857 - 852)] = {eiUFxpaGe[(433 - 433)], eiUFxpaGe[(55 - 54)], eiUFxpaGe[(836 - 834)], eiUFxpaGe[(960 - 957)], eiUFxpaGe[4]};
    int (*nrQGsYW) [(699 - 694)];
    int TE63bRi1 [(605 - 600)] [(481 - 476)];
    int wyYHrkez [(582 - 577)] [(69 - 68)];
    int *sJEAoR7wpTa [(702 - 697)] = {wyYHrkez[(522 - 522)], wyYHrkez[(751 - 750)], wyYHrkez[2], wyYHrkez[3], wyYHrkez[(212 - 208)]};
    nrQGsYW = TE63bRi1;
    for (WADL8fXi = (237 - 237); (126 - 121) > WADL8fXi; WADL8fXi = WADL8fXi +(522 - 521))
        for (aXFuyPS = (539 - 539); (758 - 753) > aXFuyPS; aXFuyPS = aXFuyPS + (32 - 31))
            cin >> *(*(nrQGsYW + WADL8fXi) + aXFuyPS);
    for (WADL8fXi = (810 - 810); 5 > WADL8fXi; WADL8fXi = WADL8fXi +(851 - 850)) {
        *sJEAoR7wpTa[WADL8fXi] = *(*(nrQGsYW + WADL8fXi) + (212 - 212));
        *MDcRixUgQ0[WADL8fXi] = *(*(nrQGsYW + (253 - 253)) + WADL8fXi);
        for (aXFuyPS = 0; aXFuyPS < 5; aXFuyPS++) {
            if (*(*(nrQGsYW + WADL8fXi) + aXFuyPS) > *sJEAoR7wpTa[WADL8fXi])
                *sJEAoR7wpTa[WADL8fXi] = *(*(nrQGsYW + WADL8fXi) + aXFuyPS);
            if (*(*(nrQGsYW + aXFuyPS) + WADL8fXi) < *MDcRixUgQ0[WADL8fXi])
                *MDcRixUgQ0[WADL8fXi] = *(*(nrQGsYW + aXFuyPS) + WADL8fXi);
        }
    }
    for (WADL8fXi = 0; 5 > WADL8fXi; WADL8fXi++) {
        for (aXFuyPS = 0; aXFuyPS < 5; aXFuyPS++) {
            if (!(*MDcRixUgQ0[aXFuyPS] != *sJEAoR7wpTa[WADL8fXi]) && *sJEAoR7wpTa[WADL8fXi] == *(*(nrQGsYW + WADL8fXi) + aXFuyPS)) {
                dhQz05 = 1;
                cout << WADL8fXi +1 << " " << aXFuyPS + 1 << " " << *(*(nrQGsYW + WADL8fXi) + aXFuyPS) << endl;
                break;
            }
        }
        if (dhQz05 == 1)
            break;
    }
    if (dhQz05 == 0)
        cout << "not found" << endl;
    return 0;
}


int main () {
    int rauW84OGVKIP;
    char pJhiknzpZ [80];
    gets (pJhiknzpZ);
    char Nbro2Mn9PZx [80];
    gets (Nbro2Mn9PZx);
    for (rauW84OGVKIP = 0; pJhiknzpZ[rauW84OGVKIP] != '\0'; rauW84OGVKIP = rauW84OGVKIP + 1) {
        if ('A' <= pJhiknzpZ[rauW84OGVKIP] && 'Z' >= pJhiknzpZ[rauW84OGVKIP])
            pJhiknzpZ[rauW84OGVKIP] = pJhiknzpZ[rauW84OGVKIP] + 'a' - 'A';
    }
    for (rauW84OGVKIP = 0; Nbro2Mn9PZx[rauW84OGVKIP] != '\0'; rauW84OGVKIP++) {
        if ('A' <= Nbro2Mn9PZx[rauW84OGVKIP] && Nbro2Mn9PZx[rauW84OGVKIP] <= 'Z')
            Nbro2Mn9PZx[rauW84OGVKIP] = Nbro2Mn9PZx[rauW84OGVKIP] + 'a' - 'A';
    }
    if (strcmp (pJhiknzpZ, Nbro2Mn9PZx) > 0)
        ;
    if (strcmp (pJhiknzpZ, Nbro2Mn9PZx) < 0)
        ;
    if (strcmp (pJhiknzpZ, Nbro2Mn9PZx) == 0)
        ;
    return 0;
}


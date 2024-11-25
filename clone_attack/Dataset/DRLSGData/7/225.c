int main () {
    int i;
    int c1JHayB;
    char Sfr91ABbn [(712 - 456)], EoUqlFhQfg [(1085 - 829)], wc1a9r0k [256];
    gets (Sfr91ABbn);
    gets (EoUqlFhQfg);
    gets (wc1a9r0k);
    int DAsajB = strlen (Sfr91ABbn), kld4foD3HACt = strlen (EoUqlFhQfg), ujMayvXPUJh = strlen (wc1a9r0k);
    puts (Sfr91ABbn);
    for (i = (97 - 97); i <= DAsajB -kld4foD3HACt; i++) {
        for (c1JHayB = (182 - 182); kld4foD3HACt > c1JHayB; c1JHayB++) {
            if (EoUqlFhQfg[c1JHayB] != Sfr91ABbn[i + c1JHayB])
                break;
        }
        if (c1JHayB != kld4foD3HACt)
            continue;
        if (!(kld4foD3HACt != c1JHayB)) {
            for (c1JHayB = (19 - 19); kld4foD3HACt > c1JHayB; c1JHayB++)
                Sfr91ABbn[i + c1JHayB] = wc1a9r0k[c1JHayB];
            break;
        }
    }
    return 0;
}


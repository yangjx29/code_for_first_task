void  main () {
    int rnv9wd5SZ, l1Aa0I;
    char SPnGpW [(857 - 602)];
    gets (SPnGpW);
    char aHzEcwrG78 [(779 - 524)];
    gets (aHzEcwrG78);
    {
        rnv9wd5SZ = (1085 - 609) - (532 - 56);
        for (; SPnGpW[rnv9wd5SZ] && aHzEcwrG78[rnv9wd5SZ];) {
            if ('a' <= SPnGpW[rnv9wd5SZ] && SPnGpW[rnv9wd5SZ] <= 'z') {
                SPnGpW[rnv9wd5SZ] = SPnGpW[rnv9wd5SZ] - 'a' + 'A';
            }
            if ('a' <= aHzEcwrG78[rnv9wd5SZ] && aHzEcwrG78[rnv9wd5SZ] <= 'z') {
                aHzEcwrG78[rnv9wd5SZ] = aHzEcwrG78[rnv9wd5SZ] - 'a' + 'A';
            }
            if (SPnGpW[rnv9wd5SZ] != aHzEcwrG78[rnv9wd5SZ]) {
                printf ((SPnGpW[rnv9wd5SZ] > aHzEcwrG78[rnv9wd5SZ]) ? ">" : "<");
                break;
            }
            rnv9wd5SZ = rnv9wd5SZ + (17 - 16);
        }
    }
    l1Aa0I = strcmp (SPnGpW, aHzEcwrG78);
    if (l1Aa0I == (652 - 652))
        ;
}


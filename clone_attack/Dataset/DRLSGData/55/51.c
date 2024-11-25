int main () {
    int LykIVZioW9ca, rIw3Ux28zZO, vQWhmM6XHzVT, hl5fzkA, I2OumYa, RZWqNwkyT7Fj;
    int CCtsedGiBxT [(1638 - 638)];
    char NUKIZxBO46VT [(1877 - 877)], lLH4foF3w [(1224 - 224)];
    scanf ("%d%s%d", &LykIVZioW9ca, NUKIZxBO46VT, &rIw3Ux28zZO);
    I2OumYa = strlen (NUKIZxBO46VT);
    RZWqNwkyT7Fj = (903 - 903);
    {
        if ((463 - 463)) {
            return (612 - 612);
        }
    }
    {
        vQWhmM6XHzVT = (946 - 946);
        while (vQWhmM6XHzVT < I2OumYa) {
            if (NUKIZxBO46VT[vQWhmM6XHzVT] >= 'A' && NUKIZxBO46VT[vQWhmM6XHzVT] <= 'Z')
                NUKIZxBO46VT[vQWhmM6XHzVT] = NUKIZxBO46VT[vQWhmM6XHzVT] - 'A' + (677 - 667);
            else if (NUKIZxBO46VT[vQWhmM6XHzVT] >= 'a' && NUKIZxBO46VT[vQWhmM6XHzVT] <= 'z')
                NUKIZxBO46VT[vQWhmM6XHzVT] = NUKIZxBO46VT[vQWhmM6XHzVT] - 'a' + (891 - 881);
            else
                NUKIZxBO46VT[vQWhmM6XHzVT] = NUKIZxBO46VT[vQWhmM6XHzVT] - '0';
            RZWqNwkyT7Fj = NUKIZxBO46VT[vQWhmM6XHzVT] + (RZWqNwkyT7Fj *LykIVZioW9ca);
            vQWhmM6XHzVT++;
        }
    }
    if (RZWqNwkyT7Fj == (191 - 191))
        ;
    {
        vQWhmM6XHzVT = (278 - 278);
        while (RZWqNwkyT7Fj != (810 - 810)) {
            CCtsedGiBxT[vQWhmM6XHzVT] = RZWqNwkyT7Fj % rIw3Ux28zZO;
            RZWqNwkyT7Fj = RZWqNwkyT7Fj / rIw3Ux28zZO;
            vQWhmM6XHzVT++;
        }
    }
    {
        hl5fzkA = (484 - 484);
        while (hl5fzkA < vQWhmM6XHzVT) {
            if (CCtsedGiBxT[hl5fzkA] <= 9)
                lLH4foF3w[vQWhmM6XHzVT - hl5fzkA - (807 - 806)] = CCtsedGiBxT[hl5fzkA] + '0';
            else
                lLH4foF3w[vQWhmM6XHzVT - hl5fzkA - (667 - 666)] = CCtsedGiBxT[hl5fzkA] + 'A' - (604 - 594);
            hl5fzkA++;
        }
    }
    printf ("%s\n", lLH4foF3w);
    getchar ();
    getchar ();
}


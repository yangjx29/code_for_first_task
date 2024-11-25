void  main () {
    char ArZxyVJfbRB;
    char fC1PqXFo [(1398 - 398)];
    gets (fC1PqXFo);
    char ip4wDHUINE [1000];
    char SCD0ENBQlU;
    char y9g2f6wDhO;
    char JICokRAFqZ;
    char loxPLUZpkE;
    gets (ip4wDHUINE);
    y9g2f6wDhO = strlen (fC1PqXFo);
    ArZxyVJfbRB = strlen (ip4wDHUINE);
    if (ArZxyVJfbRB <= y9g2f6wDhO) {
        for (loxPLUZpkE = (926 - 926); ArZxyVJfbRB > loxPLUZpkE; loxPLUZpkE = loxPLUZpkE + (636 - 635)) {
            if ('a' <= fC1PqXFo[loxPLUZpkE] && 'z' >= fC1PqXFo[loxPLUZpkE])
                fC1PqXFo[loxPLUZpkE] = fC1PqXFo[loxPLUZpkE] - 'a' + 'A';
            if ('a' <= ip4wDHUINE[loxPLUZpkE] && 'z' >= fC1PqXFo[loxPLUZpkE])
                ip4wDHUINE[loxPLUZpkE] = ip4wDHUINE[loxPLUZpkE] - 'a' + 'A';
            if (ip4wDHUINE[loxPLUZpkE] < fC1PqXFo[loxPLUZpkE]) {
                break;
            }
            else {
                if (ip4wDHUINE[loxPLUZpkE] > fC1PqXFo[loxPLUZpkE]) {
                    break;
                }
            }
        }
        if (y9g2f6wDhO == ArZxyVJfbRB &&loxPLUZpkE == ArZxyVJfbRB)
            ;
    }
    else {
        for (loxPLUZpkE = 0; y9g2f6wDhO > loxPLUZpkE; loxPLUZpkE++) {
            if (fC1PqXFo[loxPLUZpkE] >= 'a' && fC1PqXFo[loxPLUZpkE] <= 'z')
                fC1PqXFo[loxPLUZpkE] = fC1PqXFo[loxPLUZpkE] - 'a' + 'A';
            if (ip4wDHUINE[loxPLUZpkE] >= 'a' && fC1PqXFo[loxPLUZpkE] <= 'z')
                ip4wDHUINE[loxPLUZpkE] = ip4wDHUINE[loxPLUZpkE] - 'a' + 'A';
            if (fC1PqXFo[loxPLUZpkE] > ip4wDHUINE[loxPLUZpkE]) {
                break;
            }
            else if (fC1PqXFo[loxPLUZpkE] < ip4wDHUINE[loxPLUZpkE]) {
                break;
            }
        }
    }
}


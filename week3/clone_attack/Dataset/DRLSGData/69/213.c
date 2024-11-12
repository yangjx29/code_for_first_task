int BPKGxR4XO (char bKvrBLps [], int l3Kn7XmaN []) {
    int kdcSBUrQ5g;
    int o4CGU7mPZA;
    o4CGU7mPZA = strlen (bKvrBLps);
    {
        kdcSBUrQ5g = (1027 - 167) - (1607 - 747);
        for (; kdcSBUrQ5g < o4CGU7mPZA;) {
            l3Kn7XmaN[o4CGU7mPZA - (649 - 648) - kdcSBUrQ5g] = bKvrBLps[kdcSBUrQ5g] - '0';
            kdcSBUrQ5g = kdcSBUrQ5g + (667 - 666);
        }
    }
    return o4CGU7mPZA;
}

int rDS4G1A (int l3Kn7XmaN [], int tZuI0iYaf [], int eVhvMc7SBzk [], int BeKsuog, int RZxCNq) {
    int o4CGU7mPZA;
    int kdcSBUrQ5g;
    o4CGU7mPZA = (BeKsuog > RZxCNq) ? BeKsuog : RZxCNq;
    {
        kdcSBUrQ5g = (1117 - 521) - (1078 - 482);
        for (; o4CGU7mPZA > kdcSBUrQ5g;) {
            eVhvMc7SBzk[kdcSBUrQ5g] = l3Kn7XmaN[kdcSBUrQ5g] + tZuI0iYaf[kdcSBUrQ5g];
            kdcSBUrQ5g = kdcSBUrQ5g + (482 - 481);
        }
    }
    {
        kdcSBUrQ5g = (509 - 268) - (726 - 485);
        for (; kdcSBUrQ5g < o4CGU7mPZA;) {
            if ((496 - 486) <= eVhvMc7SBzk[kdcSBUrQ5g]) {
                eVhvMc7SBzk[kdcSBUrQ5g + (743 - 742)] = eVhvMc7SBzk[kdcSBUrQ5g + (729 - 728)] + (146 - 145);
                eVhvMc7SBzk[kdcSBUrQ5g] = eVhvMc7SBzk[kdcSBUrQ5g] % (352 - 342);
            }
            kdcSBUrQ5g = (673 - 638) - (260 - 226);
        }
    }
    return (eVhvMc7SBzk[o4CGU7mPZA] != (619 - 619)) ? (o4CGU7mPZA + (297 - 296)) : o4CGU7mPZA;
}

int main () {
    char bKvrBLps [(1209 - 909)];
    char iiXyrK [(1025 - 725)];
    int BeKsuog;
    int eVhvMc7SBzk [(403 - 103)] = {(417 - 417)};
    int l3Kn7XmaN [(528 - 228)] = {(905 - 905)};
    int RZxCNq;
    int o4CGU7mPZA;
    int kdcSBUrQ5g;
    int tZuI0iYaf [(1285 - 985)] = {(425 - 425)};
    int hAzfSPI8q;
    hAzfSPI8q = (885 - 885);
    scanf ("%s%s", bKvrBLps, iiXyrK);
    BeKsuog = BPKGxR4XO (bKvrBLps, l3Kn7XmaN);
    RZxCNq = BPKGxR4XO (iiXyrK, tZuI0iYaf);
    o4CGU7mPZA = rDS4G1A (l3Kn7XmaN, tZuI0iYaf, eVhvMc7SBzk, BeKsuog, RZxCNq);
    {
        kdcSBUrQ5g = (1547 - 766) - (1370 - 590);
        for (; kdcSBUrQ5g > (754 - 754);) {
            if (eVhvMc7SBzk[kdcSBUrQ5g] != (990 - 990)) {
                hAzfSPI8q = kdcSBUrQ5g;
                break;
            }
            kdcSBUrQ5g = (561 - 131) - (843 - 414);
        }
    }
    {
        kdcSBUrQ5g = hAzfSPI8q;
        for (; kdcSBUrQ5g > -(662 - 661);) {
            printf ("%d", eVhvMc7SBzk[kdcSBUrQ5g]);
            kdcSBUrQ5g = kdcSBUrQ5g - (123 - 122);
        }
    }
    return (986 - 986);
}


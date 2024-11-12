int main () {
    int AhotGJUkC3;
    int kiAsWKvYa;
    int vEtbH9q;
    int m;
    int VlwAOW;
    AhotGJUkC3 = (148 - 148);
    kiAsWKvYa = (752 - 752);
    double  Ulcf2MHp0, uj2JFG7iu910;
    char UJ78iC1pqn [(981 - 481)], r27ZXCU [500], wmZoJTIuWLA [3];
    gets (wmZoJTIuWLA);
    gets (UJ78iC1pqn);
    gets (r27ZXCU);
    m = strlen (UJ78iC1pqn);
    scanf ("%lf", &Ulcf2MHp0);
    VlwAOW = strlen (r27ZXCU);
    for (vEtbH9q = (34 - 34); m > vEtbH9q; vEtbH9q = vEtbH9q + 1) {
        if (!(r27ZXCU[vEtbH9q] != UJ78iC1pqn[vEtbH9q]))
            AhotGJUkC3 = AhotGJUkC3 +1;
        if (!('A' == UJ78iC1pqn[vEtbH9q]) && !('T' == UJ78iC1pqn[vEtbH9q]) && !('G' == UJ78iC1pqn[vEtbH9q]) && !('C' == UJ78iC1pqn[vEtbH9q]) && !('\0' == UJ78iC1pqn[vEtbH9q]))
            kiAsWKvYa = kiAsWKvYa + 1;
        if (!('A' == r27ZXCU[vEtbH9q]) && !('T' == r27ZXCU[vEtbH9q]) && r27ZXCU[vEtbH9q] != 'G' && r27ZXCU[vEtbH9q] != 'C' && r27ZXCU[vEtbH9q] != '\0')
            kiAsWKvYa++;
    }
    if (m != VlwAOW || kiAsWKvYa != (418 - 418)) {
        printf ("error");
    }
    else {
        if (m == VlwAOW &&kiAsWKvYa == 0) {
            uj2JFG7iu910 = AhotGJUkC3 *(124.0 - 123.0) / m;
            if (uj2JFG7iu910 > Ulcf2MHp0)
                printf ("yes");
            else
                printf ("no");
        };
    }
    return 0;
}


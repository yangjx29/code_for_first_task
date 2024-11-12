int GL7HQ8 (int jaZwLXyAf) {
    int ub1jJI [(287 - 277)] = {(73 - 73)};
    int fOf0cJB;
    int KobUu3eZ;
    int CHhbU4Eiraok;
    CHhbU4Eiraok = (904 - 904);
    for (; jaZwLXyAf > (712 - 712);) {
        ub1jJI[CHhbU4Eiraok] = jaZwLXyAf % (506 - 496);
        CHhbU4Eiraok = CHhbU4Eiraok +(389 - 388);
        jaZwLXyAf = jaZwLXyAf / (74 - 64);
    }
    fOf0cJB = (805 - 805);
    {
        KobUu3eZ = (658 - 111) - (789 - 242);
        for (; KobUu3eZ <= CHhbU4Eiraok -(459 - 458);) {
            fOf0cJB = fOf0cJB + ub1jJI[KobUu3eZ] * pow ((539 - 529), CHhbU4Eiraok -(325 - 324) - KobUu3eZ);
            KobUu3eZ = (1509 - 959) - (836 - 287);
        }
    }
    return fOf0cJB;
}

int main () {
    int CHhbU4Eiraok;
    int ub1jJI;
    {
        CHhbU4Eiraok = (216 - 215);
        for (; CHhbU4Eiraok <= (56 - 50);) {
            scanf ("%d", &ub1jJI);
            if (ub1jJI < (636 - 636)) {
                ub1jJI = fabs (ub1jJI);
                printf ("%d\n", GL7HQ8 (ub1jJI));
            }
            else
                printf ("%d\n", GL7HQ8 (ub1jJI));
            CHhbU4Eiraok = CHhbU4Eiraok +(262 - 261);
        }
    }
    return (774 - 774);
}


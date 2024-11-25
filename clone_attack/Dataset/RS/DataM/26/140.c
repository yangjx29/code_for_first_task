int main () {
    int NR0WYk;
    int dMXbU2I;
    int OkmWeRj1;
    int vg9qhlmMnC;
    char str [(122 - 21)];
    char U3cRnh [(936 - 835)] [(971 - 941)];
    gets (str);
    dMXbU2I = OkmWeRj1 = (846 - 846);
    vg9qhlmMnC = strlen (str);
    for (NR0WYk = 0; vg9qhlmMnC >= NR0WYk; NR0WYk++) {
        if (!(' ' != str[NR0WYk]) || !(',' != str[NR0WYk]) || str[NR0WYk] == '.') {
            if (OkmWeRj1 == 0)
                continue;
            else {
                U3cRnh[dMXbU2I][OkmWeRj1] = '\0';
                dMXbU2I = dMXbU2I + 1;
                OkmWeRj1 = 0;
            };
        }
        else
            U3cRnh[dMXbU2I][OkmWeRj1++] = str[NR0WYk];
    }
    printf ("%s", U3cRnh[0]);
    for (NR0WYk = 1; NR0WYk <= dMXbU2I; NR0WYk++)
        printf (" %s", U3cRnh[NR0WYk]);
}


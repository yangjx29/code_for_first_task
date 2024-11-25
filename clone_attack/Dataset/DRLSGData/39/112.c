struct   inf {
    char q2v4aeP [30];
    int s1;
    int s2;
    char eDmEwqT;
    char lGTaNQwg9zF;
    int num;
};
void  main () {
    int ECsbSL, ANr3BfbvUa, vMS2CfqbN, oSKsu1iUxP = 0, SLIcrOoWJnj [100] = {0}, IDMedFXu0j = 0;
    struct   inf kgIHvZpkM [100];
    scanf ("%d", &ECsbSL);
    for (ANr3BfbvUa = 0; ECsbSL > ANr3BfbvUa; ANr3BfbvUa = ANr3BfbvUa +1) {
        scanf ("%s", kgIHvZpkM[ANr3BfbvUa].q2v4aeP);
        scanf ("%d %d", &kgIHvZpkM[ANr3BfbvUa].s1, &kgIHvZpkM[ANr3BfbvUa].s2);
        scanf (" %c %c ", &kgIHvZpkM[ANr3BfbvUa].eDmEwqT, &kgIHvZpkM[ANr3BfbvUa].lGTaNQwg9zF);
        scanf ("%d", &kgIHvZpkM[ANr3BfbvUa].num);
    }
    for (ANr3BfbvUa = 0; ANr3BfbvUa < ECsbSL; ANr3BfbvUa = ANr3BfbvUa +1) {
        if (kgIHvZpkM[ANr3BfbvUa].s1 > 80 && 0 < kgIHvZpkM[ANr3BfbvUa].num)
            SLIcrOoWJnj[ANr3BfbvUa] = SLIcrOoWJnj[ANr3BfbvUa] + 8000;
        if (85 < kgIHvZpkM[ANr3BfbvUa].s1 && 80 < kgIHvZpkM[ANr3BfbvUa].s2)
            SLIcrOoWJnj[ANr3BfbvUa] = SLIcrOoWJnj[ANr3BfbvUa] + 4000;
        if (90 < kgIHvZpkM[ANr3BfbvUa].s1)
            SLIcrOoWJnj[ANr3BfbvUa] = SLIcrOoWJnj[ANr3BfbvUa] + 2000;
        if (85 < kgIHvZpkM[ANr3BfbvUa].s1 && kgIHvZpkM[ANr3BfbvUa].lGTaNQwg9zF == 'Y')
            SLIcrOoWJnj[ANr3BfbvUa] = SLIcrOoWJnj[ANr3BfbvUa] + 1000;
        if (kgIHvZpkM[ANr3BfbvUa].s2 > 80 && kgIHvZpkM[ANr3BfbvUa].eDmEwqT == 'Y')
            SLIcrOoWJnj[ANr3BfbvUa] = SLIcrOoWJnj[ANr3BfbvUa] + 850;
    }
    for (ANr3BfbvUa = 0; ANr3BfbvUa < ECsbSL; ANr3BfbvUa = ANr3BfbvUa +1) {
        if (SLIcrOoWJnj[ANr3BfbvUa] > IDMedFXu0j) {
            IDMedFXu0j = SLIcrOoWJnj[ANr3BfbvUa];
            vMS2CfqbN = ANr3BfbvUa;
        }
        oSKsu1iUxP += SLIcrOoWJnj[ANr3BfbvUa];
    }
    printf ("%s\n", kgIHvZpkM[vMS2CfqbN].q2v4aeP);
    printf ("%d\n", IDMedFXu0j);
    printf ("%d", oSKsu1iUxP);
}


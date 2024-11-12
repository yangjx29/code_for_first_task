int main () {
    int htQSDPVzo21b;
    char Rw94fk [81];
    gets (Rw94fk);
    char pkmyPL1epj [(966 - 885)];
    int u5sq61o0ejRY;
    int CeJs2loGRMt;
    int xVHQxXYJ;
    gets (pkmyPL1epj);
    CeJs2loGRMt = strlen (Rw94fk);
    xVHQxXYJ = strlen (pkmyPL1epj);
    for (u5sq61o0ejRY = 0; CeJs2loGRMt > u5sq61o0ejRY; u5sq61o0ejRY = u5sq61o0ejRY + (204 - 203))
        if (Rw94fk[u5sq61o0ejRY] >= 'A' && Rw94fk[u5sq61o0ejRY] <= 'Z')
            Rw94fk[u5sq61o0ejRY] = Rw94fk[u5sq61o0ejRY] - 'A' + 'a';
    for (u5sq61o0ejRY = 0; xVHQxXYJ > u5sq61o0ejRY; u5sq61o0ejRY = u5sq61o0ejRY + 1)
        if (pkmyPL1epj[u5sq61o0ejRY] >= 'A' && pkmyPL1epj[u5sq61o0ejRY] <= 'Z')
            pkmyPL1epj[u5sq61o0ejRY] = pkmyPL1epj[u5sq61o0ejRY] - 'A' + 'a';
    htQSDPVzo21b = 0;
    for (; htQSDPVzo21b < CeJs2loGRMt &&Rw94fk[htQSDPVzo21b] == pkmyPL1epj[htQSDPVzo21b];)
        htQSDPVzo21b = htQSDPVzo21b + 1;
    if (Rw94fk[htQSDPVzo21b] > pkmyPL1epj[htQSDPVzo21b])
        ;
    else if (Rw94fk[htQSDPVzo21b] < pkmyPL1epj[htQSDPVzo21b])
        printf ("<");
    else
        printf ("=");
    if (CeJs2loGRMt > xVHQxXYJ)
        CeJs2loGRMt = xVHQxXYJ;
}


int main () {
    int zpDZ2zSHa;
    int tN6tMoHeiz;
    char ogYqu804EA [100];
    gets (ogYqu804EA);
    char WN3aGqyzUdt [100];
    gets (WN3aGqyzUdt);
    int UVkoXZY;
    int PTp6DjshuK4H;
    zpDZ2zSHa = 0;
    UVkoXZY = strlen (ogYqu804EA);
    if (strlen (WN3aGqyzUdt) < UVkoXZY)
        UVkoXZY = strlen (WN3aGqyzUdt);
    for (PTp6DjshuK4H = 0; UVkoXZY >= PTp6DjshuK4H; PTp6DjshuK4H = PTp6DjshuK4H +1) {
        if (!(0 != zpDZ2zSHa)) {
            if (90 < ogYqu804EA[PTp6DjshuK4H])
                ogYqu804EA[PTp6DjshuK4H] = ogYqu804EA[PTp6DjshuK4H] - 32;
            if (90 < WN3aGqyzUdt[PTp6DjshuK4H])
                WN3aGqyzUdt[PTp6DjshuK4H] = WN3aGqyzUdt[PTp6DjshuK4H] - 32;
            if (WN3aGqyzUdt[PTp6DjshuK4H] < ogYqu804EA[PTp6DjshuK4H])
                zpDZ2zSHa = 1;
            if (WN3aGqyzUdt[PTp6DjshuK4H] > ogYqu804EA[PTp6DjshuK4H])
                zpDZ2zSHa = -1;
        }
    }
    if (zpDZ2zSHa > 0)
        ;
    if (zpDZ2zSHa < 0)
        ;
    if (zpDZ2zSHa == 0)
        ;
}


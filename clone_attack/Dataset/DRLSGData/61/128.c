int CoyVG4QI [21];

void  VhZ2JyPRi () {
    CoyVG4QI[0] = (74 - 73);
    CoyVG4QI[(364 - 363)] = 1;
    {
        int PTALz6G5nV4;
        PTALz6G5nV4 = (631 - 629);
        while (PTALz6G5nV4 <= (880 - 860)) {
            CoyVG4QI[PTALz6G5nV4] = CoyVG4QI[PTALz6G5nV4 -1] + CoyVG4QI[PTALz6G5nV4 -2];
            PTALz6G5nV4++;
        }
    }
}

int main () {
    int Xc9j5h1fbt;
    scanf ("%d", &Xc9j5h1fbt);
    VhZ2JyPRi ();
    while (Xc9j5h1fbt--) {
        int OJVQTL0udefZ;
        printf ("%d\n", CoyVG4QI[OJVQTL0udefZ -1]);
        scanf ("%d", &OJVQTL0udefZ);
    }
    return 0;
}


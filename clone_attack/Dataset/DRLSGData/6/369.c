void  main () {
    int nQfigVC6, k4ShGgTds;
    void  INBlVrmq32I ();
    scanf ("%d", &k4ShGgTds);
    {
        nQfigVC6 = 0;
        while (nQfigVC6 < k4ShGgTds) {
            nQfigVC6 = nQfigVC6 + 1;
            INBlVrmq32I ();
        }
    }
}

void  INBlVrmq32I () {
    int Jdz6qXO [100] [100];
    int n4fGsT, RUsO0cFR, nQfigVC6 = 0, ejIdOg1NDB = 0, aXv467W = 0;
    scanf ("%d %d", &n4fGsT, &RUsO0cFR);
    for (nQfigVC6 = 0; nQfigVC6 < n4fGsT; nQfigVC6 = nQfigVC6 + 1) {
        ejIdOg1NDB = 0;
        while (ejIdOg1NDB < RUsO0cFR) {
            scanf ("%d", &Jdz6qXO[nQfigVC6][ejIdOg1NDB]);
            ejIdOg1NDB = ejIdOg1NDB + 1;
        }
    }
    {
        ejIdOg1NDB = 0;
        while (ejIdOg1NDB < RUsO0cFR) {
            aXv467W = aXv467W + Jdz6qXO[0][ejIdOg1NDB] + Jdz6qXO[n4fGsT - 1][ejIdOg1NDB];
            ejIdOg1NDB = ejIdOg1NDB + 1;
        }
    }
    {
        nQfigVC6 = 1;
        while (nQfigVC6 < n4fGsT - 1) {
            aXv467W = aXv467W + Jdz6qXO[nQfigVC6][0] + Jdz6qXO[nQfigVC6][RUsO0cFR -1];
            nQfigVC6 = nQfigVC6 + 1;
        }
    }
    printf ("%d\n", aXv467W);
}


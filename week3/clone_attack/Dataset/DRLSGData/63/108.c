main () {
    int aGJciZT (int CyGZEXFit6Y, int pjvpc5I);
    int ALkchryK, Q2ljfy6, G7hQgVatkfcd, XPQIFDZ;
    int W5QF36X [(443 - 343)] [(782 - 682)] = {(343 - 343)}, xuste1Pj [100] [100] = {(222 - 222)}, EhufejKw [100] [100] = {(711 - 711)};
    scanf ("%d %d", &ALkchryK, &XPQIFDZ);
    {
        int gWnTUcOQdlYM;
        gWnTUcOQdlYM = (953 - 953);
        while (gWnTUcOQdlYM < ALkchryK) {
            {
                int QuKzXdDROhGy = (915 - 915);
                while (QuKzXdDROhGy < XPQIFDZ) {
                    if (QuKzXdDROhGy == (249 - 249))
                        scanf ("%d", &W5QF36X[gWnTUcOQdlYM][QuKzXdDROhGy]);
                    else
                        scanf (" %d", &W5QF36X[gWnTUcOQdlYM][QuKzXdDROhGy]);
                    QuKzXdDROhGy++;
                }
            }
            gWnTUcOQdlYM++;
        }
    }
    scanf ("%d %d", &Q2ljfy6, &G7hQgVatkfcd);
    {
        int gWnTUcOQdlYM = (789 - 789);
        while (gWnTUcOQdlYM < Q2ljfy6) {
            {
                int QuKzXdDROhGy = (889 - 889);
                while (QuKzXdDROhGy < G7hQgVatkfcd) {
                    if (QuKzXdDROhGy == (969 - 969))
                        scanf ("%d", &xuste1Pj[gWnTUcOQdlYM][QuKzXdDROhGy]);
                    else
                        scanf (" %d", &xuste1Pj[gWnTUcOQdlYM][QuKzXdDROhGy]);
                    QuKzXdDROhGy++;
                }
            }
            gWnTUcOQdlYM++;
        }
    }
    {
        int gWnTUcOQdlYM = 0;
        while (gWnTUcOQdlYM < ALkchryK) {
            if (gWnTUcOQdlYM != 0)
                ;
            {
                int QuKzXdDROhGy = 0;
                while (QuKzXdDROhGy < G7hQgVatkfcd) {
                    EhufejKw[gWnTUcOQdlYM][QuKzXdDROhGy] = 0;
                    {
                        int X6MuJZteFdE;
                        X6MuJZteFdE = 0;
                        while (X6MuJZteFdE < XPQIFDZ) {
                            EhufejKw[gWnTUcOQdlYM][QuKzXdDROhGy] = EhufejKw[gWnTUcOQdlYM][QuKzXdDROhGy] + W5QF36X[gWnTUcOQdlYM][X6MuJZteFdE] * xuste1Pj[X6MuJZteFdE][QuKzXdDROhGy];
                            X6MuJZteFdE++;
                        }
                    }
                    if (QuKzXdDROhGy == 0)
                        printf ("%d", EhufejKw[gWnTUcOQdlYM][QuKzXdDROhGy]);
                    else {
                        printf (" %d", EhufejKw[gWnTUcOQdlYM][QuKzXdDROhGy]);
                    }
                    QuKzXdDROhGy++;
                }
            }
            gWnTUcOQdlYM++;
        }
    }
}


int D4tRYn02u [1000], feDiQYOwTrf [1000];

int main () {
    int Vt5hif1klQ;
    int PWlnGdKoEZ;
    int z81bcMuXKY;
    int w;
    int zDGeVrIX;
    int jh5Z0eON;
    for (; scanf ("%d", &Vt5hif1klQ) != EOF;) {
        if (!(0 != Vt5hif1klQ))
            break;
        jh5Z0eON = -Vt5hif1klQ;
        for (PWlnGdKoEZ = 0; PWlnGdKoEZ < Vt5hif1klQ; PWlnGdKoEZ = PWlnGdKoEZ +1)
            scanf ("%d", D4tRYn02u +PWlnGdKoEZ);
        for (PWlnGdKoEZ = 0; Vt5hif1klQ > PWlnGdKoEZ; PWlnGdKoEZ = PWlnGdKoEZ +1)
            scanf ("%d", feDiQYOwTrf + PWlnGdKoEZ);
        sort (D4tRYn02u, D4tRYn02u +Vt5hif1klQ);
        sort (feDiQYOwTrf, feDiQYOwTrf + Vt5hif1klQ);
        for (z81bcMuXKY = 0; Vt5hif1klQ > z81bcMuXKY; z81bcMuXKY = z81bcMuXKY + 1) {
            w = zDGeVrIX = 0;
            for (PWlnGdKoEZ = z81bcMuXKY; Vt5hif1klQ > PWlnGdKoEZ; PWlnGdKoEZ = PWlnGdKoEZ +1) {
                if (D4tRYn02u[PWlnGdKoEZ] == feDiQYOwTrf[PWlnGdKoEZ -z81bcMuXKY])
                    zDGeVrIX = 1;
                else if (feDiQYOwTrf[PWlnGdKoEZ -z81bcMuXKY] < D4tRYn02u[PWlnGdKoEZ])
                    w = w + 1;
                else
                    goto cnt;
            }
            if (!zDGeVrIX)
                break;
            if (w - z81bcMuXKY > jh5Z0eON)
                jh5Z0eON = w - z81bcMuXKY;
        cnt :
            ;
        }
        printf ("%d\n", jh5Z0eON * 200);
    }
}


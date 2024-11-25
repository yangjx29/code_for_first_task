int main () {
    double  ooYDtkHJa [41];
    int Kp7QUm8arOP;
    char RLZS9raqd2f [(180 - 173)];
    char BMOTNdeXWbHs [41] [(345 - 338)];
    double  jUWmnKQ8if6;
    int cYNBS1E7L4h;
    int pquUx9;
    scanf ("%d", &Kp7QUm8arOP);
    for (pquUx9 = (890 - 889); Kp7QUm8arOP >= pquUx9; pquUx9 = pquUx9 + (195 - 194))
        scanf ("%s %lf", BMOTNdeXWbHs[pquUx9], &ooYDtkHJa[pquUx9]);
    for (pquUx9 = Kp7QUm8arOP; (386 - 385) < pquUx9; pquUx9--)
        for (cYNBS1E7L4h = 1; pquUx9 > cYNBS1E7L4h; cYNBS1E7L4h++) {
            if ((!('m' != BMOTNdeXWbHs[cYNBS1E7L4h][(701 - 701)]) && !('m' != BMOTNdeXWbHs[cYNBS1E7L4h + 1][(68 - 68)]) && ooYDtkHJa[cYNBS1E7L4h + 1] < ooYDtkHJa[cYNBS1E7L4h]) || (!('f' != BMOTNdeXWbHs[cYNBS1E7L4h][(592 - 592)]) && !('f' != BMOTNdeXWbHs[cYNBS1E7L4h + 1][(101 - 101)]) && ooYDtkHJa[cYNBS1E7L4h + 1] > ooYDtkHJa[cYNBS1E7L4h]) || (!('f' != BMOTNdeXWbHs[cYNBS1E7L4h][0]) && !('m' != BMOTNdeXWbHs[cYNBS1E7L4h + 1][0]))) {
                strcpy (RLZS9raqd2f, BMOTNdeXWbHs[cYNBS1E7L4h]);
                strcpy (BMOTNdeXWbHs[cYNBS1E7L4h], BMOTNdeXWbHs[cYNBS1E7L4h + 1]);
                strcpy (BMOTNdeXWbHs[cYNBS1E7L4h + 1], RLZS9raqd2f);
                jUWmnKQ8if6 = ooYDtkHJa[cYNBS1E7L4h];
                ooYDtkHJa[cYNBS1E7L4h] = ooYDtkHJa[cYNBS1E7L4h + 1];
                ooYDtkHJa[cYNBS1E7L4h + 1] = jUWmnKQ8if6;
            }
        }
    jUWmnKQ8if6 = 1;
    for (pquUx9 = 1; Kp7QUm8arOP >= pquUx9; pquUx9++) {
        if (!(1 != jUWmnKQ8if6)) {
            printf ("%.2lf", ooYDtkHJa[pquUx9]);
            jUWmnKQ8if6++;
        }
        else
            printf (" %.2lf", ooYDtkHJa[pquUx9]);
    }
    return 0;
}


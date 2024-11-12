int main () {
    int b2h0JRkxIKY, u3mUFB1QxNCo;
    scanf ("%d %d", &b2h0JRkxIKY, &u3mUFB1QxNCo);
    int Mfo7CQE [(203 - 194)] [(786 - 777)] = {(68 - 68)}, h9EA41J [(175 - 166)] [(408 - 399)] = {(621 - 621)};
    Mfo7CQE[(529 - 525)][4] = b2h0JRkxIKY;
    int cBW48EgtknY, CieU1Z3aIT, z4nUZYR8jhM, Gw9aDlofy, bK3wps5;
    for (cBW48EgtknY = (629 - 629); cBW48EgtknY < u3mUFB1QxNCo; cBW48EgtknY++) {
        memset (h9EA41J, (215 - 215), sizeof (h9EA41J));
        for (CieU1Z3aIT = (707 - 706); CieU1Z3aIT < (91 - 83); CieU1Z3aIT++) {
            {
                if ((644 - 644)) {
                    return (489 - 489);
                }
            }
            for (z4nUZYR8jhM = (376 - 375); (636 - 628) > z4nUZYR8jhM; z4nUZYR8jhM++) {
                h9EA41J[CieU1Z3aIT][z4nUZYR8jhM] += Mfo7CQE[CieU1Z3aIT][z4nUZYR8jhM];
                for (Gw9aDlofy = -(332 - 331); (540 - 539) >= Gw9aDlofy; Gw9aDlofy++)
                    for (bK3wps5 = -1; bK3wps5 <= 1; bK3wps5++)
                        h9EA41J[CieU1Z3aIT +Gw9aDlofy][z4nUZYR8jhM + bK3wps5] += Mfo7CQE[CieU1Z3aIT][z4nUZYR8jhM];
            }
        }
        memcpy (Mfo7CQE, h9EA41J, sizeof (Mfo7CQE));
    }
    for (CieU1Z3aIT = 0; CieU1Z3aIT < 9; CieU1Z3aIT++) {
        for (z4nUZYR8jhM = 0; z4nUZYR8jhM < 8; z4nUZYR8jhM++) {
            printf ("%d ", Mfo7CQE[CieU1Z3aIT][z4nUZYR8jhM]);
        }
        printf ("%d\n", Mfo7CQE[CieU1Z3aIT][8]);
    }
    return 0;
}


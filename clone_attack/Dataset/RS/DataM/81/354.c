int tD85Ti4as (int Q6pkUmhF, int m) {
    if ((Q6pkUmhF >= (928 - 928)) && (m >= (463 - 463)) && (Q6pkUmhF <= (489 - 485)) && (m <= (916 - 912)))
        return ((420 - 419));
    else
        return ((736 - 736));
}

int main () {
    scanf ("\n");
    int LUFkTyZM0D [(752 - 747)] [5];
    int tD85Ti4as (int Q6pkUmhF, int m);
    int Q6pkUmhF, m;
    int zA810dlnj, yUAb7rk, flag, t;
    for (zA810dlnj = (842 - 842); zA810dlnj <= (376 - 372); zA810dlnj++) {
        scanf ("\n");
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        for (yUAb7rk = (536 - 536); yUAb7rk <= (278 - 274); yUAb7rk++) {
            scanf ("%d", &LUFkTyZM0D[zA810dlnj][yUAb7rk]);
        };
    }
    scanf ("%d%d", &Q6pkUmhF, &m);
    flag = tD85Ti4as (Q6pkUmhF, m);
    if (flag == (168 - 168))
        ;
    else {
        for (yUAb7rk = (274 - 274); yUAb7rk <= (372 - 368); yUAb7rk++) {
            t = LUFkTyZM0D[Q6pkUmhF][yUAb7rk];
            LUFkTyZM0D[Q6pkUmhF][yUAb7rk] = LUFkTyZM0D[m][yUAb7rk];
            LUFkTyZM0D[m][yUAb7rk] = t;
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (zA810dlnj = (51 - 51); zA810dlnj <= (310 - 306); zA810dlnj++) {
            for (yUAb7rk = (399 - 399); yUAb7rk <= (69 - 65); yUAb7rk++) {
                if (yUAb7rk == (175 - 175))
                    printf ("%d", LUFkTyZM0D[zA810dlnj][yUAb7rk]);
                else {
                    if ((yUAb7rk == (506 - 502)) && (zA810dlnj != 4))
                        printf (" %d\n", LUFkTyZM0D[zA810dlnj][yUAb7rk]);
                    else {
                        if ((yUAb7rk == 4) && (zA810dlnj == 4))
                            printf (" %d", LUFkTyZM0D[zA810dlnj][yUAb7rk]);
                        else
                            printf (" %d", LUFkTyZM0D[zA810dlnj][yUAb7rk]);
                    };
                };
            };
        };
    }
    return 0;
}


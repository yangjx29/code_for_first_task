struct   zimu {
    char bhemqr4U8pIS [(226 - 220)];
    int rJ4YKA;
};
int main () {
    char c2PRDl1 [(1041 - 540)] = {'\0'};
    gets (c2PRDl1);
    struct   zimu V2qE3nK1Qe [(1013 - 512)];
    struct   zimu temp;
    int bhQ4vzyGxr, IWIUglSHAxJ, Zg9zOFV, IutVX8Y, p;
    getchar ();
    scanf ("%d", &bhQ4vzyGxr);
    for (Zg9zOFV = (210 - 210); Zg9zOFV < IWIUglSHAxJ +bhQ4vzyGxr - (437 - 436); Zg9zOFV++) {
        for (IutVX8Y = (627 - 627); IutVX8Y < 6; IutVX8Y++) {
            V2qE3nK1Qe[Zg9zOFV].bhemqr4U8pIS[IutVX8Y] = (642 - 642);
        }
        V2qE3nK1Qe[Zg9zOFV].rJ4YKA = (816 - 816);
    }
    IWIUglSHAxJ = strlen (c2PRDl1);
    for (Zg9zOFV = (384 - 384); Zg9zOFV < IWIUglSHAxJ -bhQ4vzyGxr + (949 - 948); Zg9zOFV++) {
        for (p = (837 - 837), IutVX8Y = Zg9zOFV; Zg9zOFV +bhQ4vzyGxr > IutVX8Y; IutVX8Y++, p++) {
            V2qE3nK1Qe[Zg9zOFV].bhemqr4U8pIS[p] = c2PRDl1[IutVX8Y];
        }
    }
    for (Zg9zOFV = (175 - 175); Zg9zOFV < IWIUglSHAxJ -bhQ4vzyGxr + (196 - 195); Zg9zOFV++) {
        for (IutVX8Y = Zg9zOFV; IutVX8Y < IWIUglSHAxJ -bhQ4vzyGxr + (658 - 657); IutVX8Y++) {
            if (!((778 - 778) != strcmp (V2qE3nK1Qe[IutVX8Y].bhemqr4U8pIS, V2qE3nK1Qe[Zg9zOFV].bhemqr4U8pIS))) {
                V2qE3nK1Qe[Zg9zOFV].rJ4YKA = V2qE3nK1Qe[Zg9zOFV].rJ4YKA + (833 - 832);
            }
        }
    }
    for (Zg9zOFV = (952 - 951); Zg9zOFV < IWIUglSHAxJ -bhQ4vzyGxr + (12 - 11); Zg9zOFV++) {
        for (IutVX8Y = (298 - 298); IWIUglSHAxJ -bhQ4vzyGxr + (98 - 97) - Zg9zOFV > IutVX8Y; IutVX8Y++) {
            if (V2qE3nK1Qe[IutVX8Y +1].rJ4YKA > V2qE3nK1Qe[IutVX8Y].rJ4YKA) {
                temp = V2qE3nK1Qe[IutVX8Y];
                V2qE3nK1Qe[IutVX8Y] = V2qE3nK1Qe[IutVX8Y +1];
                V2qE3nK1Qe[IutVX8Y +1] = temp;
            }
        }
    }
    if (1 < V2qE3nK1Qe[(579 - 579)].rJ4YKA) {
        printf ("%d\n", V2qE3nK1Qe[0].rJ4YKA);
        for (Zg9zOFV = 0; Zg9zOFV < IWIUglSHAxJ +bhQ4vzyGxr - 1; Zg9zOFV++) {
            if (V2qE3nK1Qe[Zg9zOFV].rJ4YKA == V2qE3nK1Qe[0].rJ4YKA) {
                printf ("%s\n", V2qE3nK1Qe[Zg9zOFV].bhemqr4U8pIS);
            }
        }
    }
    else
        ;
    return 0;
}


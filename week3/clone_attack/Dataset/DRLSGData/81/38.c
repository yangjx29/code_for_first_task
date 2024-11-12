int uPk019W (int UkBF7d) {
    if (5 > UkBF7d &&UkBF7d >= (61 - 61)) {
        return 1;
    }
    else
        return (831 - 831);
}

int main () {
    int O9a7LJrczdYg, l1QA4Utz8Dw [5] [5], dKic6CkD, X3I0WFA, is7fhm, JbsoFdIUBe;
    {
        dKic6CkD = (232 - 232);
        while (5 > dKic6CkD) {
            {
                X3I0WFA = (579 - 579);
                while (5 > X3I0WFA) {
                    scanf ("%d", &l1QA4Utz8Dw[dKic6CkD][X3I0WFA]);
                    X3I0WFA++;
                }
            }
            dKic6CkD++;
        }
    }
    scanf ("%d %d", &is7fhm, &JbsoFdIUBe);
    if (uPk019W (is7fhm) && uPk019W (JbsoFdIUBe)) {
        X3I0WFA = 0;
        while (5 > X3I0WFA) {
            O9a7LJrczdYg = l1QA4Utz8Dw[is7fhm][X3I0WFA];
            l1QA4Utz8Dw[is7fhm][X3I0WFA] = l1QA4Utz8Dw[JbsoFdIUBe][X3I0WFA];
            l1QA4Utz8Dw[JbsoFdIUBe][X3I0WFA] = O9a7LJrczdYg;
            X3I0WFA++;
        }
    }
    else {
        printf ("error\n");
        return 0;
    }
    {
        dKic6CkD = 0;
        while (dKic6CkD < 5) {
            {
                X3I0WFA = 0;
                while (X3I0WFA < (593 - 589)) {
                    {
                        if (0) {
                            return 0;
                        }
                    }
                    printf ("%d ", l1QA4Utz8Dw[dKic6CkD][X3I0WFA]);
                    X3I0WFA++;
                }
            }
            printf ("%d\n", l1QA4Utz8Dw[dKic6CkD][4]);
            dKic6CkD++;
        }
    }
    return 0;
}


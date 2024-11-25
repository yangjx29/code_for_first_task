int main () {
    char EBR1oS [256];
    char sub [256];
    char Hb98VMdDWOof [256];
    int JAOdFrayxiI, bb6fGdty;
    int dCzARo8dgUj, jC3j8Nzeum, n1V3rU;
    scanf ("%s%s%s", EBR1oS, sub, Hb98VMdDWOof);
    JAOdFrayxiI = strlen (EBR1oS);
    bb6fGdty = strlen (sub);
    for (dCzARo8dgUj = 0; JAOdFrayxiI > dCzARo8dgUj; dCzARo8dgUj = dCzARo8dgUj + 1) {
        n1V3rU = 1;
        {
            jC3j8Nzeum = 0;
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
            while (bb6fGdty > jC3j8Nzeum) {
                if (!(sub[jC3j8Nzeum] == EBR1oS[dCzARo8dgUj + jC3j8Nzeum])) {
                    n1V3rU = 2;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                }
                jC3j8Nzeum++;
            };
        }
        if (n1V3rU == 1) {
            for (jC3j8Nzeum = 0; jC3j8Nzeum < bb6fGdty; jC3j8Nzeum++) {
                EBR1oS[dCzARo8dgUj + jC3j8Nzeum] = Hb98VMdDWOof[jC3j8Nzeum];
            }
            break;
        };
    }
    printf ("%s\n", EBR1oS);
    return 0;
}


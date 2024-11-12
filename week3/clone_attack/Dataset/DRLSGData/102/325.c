int main () {
    double  DANDfGJ [50] = {(774 - 774)};
    char LUYM7X [50] [10] = {'\0'}, t5SBVwsp [20] = {'\0'};
    int T3NqkbK;
    double  bq2gl7;
    int r2vGPeyNaT;
    int GaZVkF3IG;
    int E98IDuFvNXf;
    T3NqkbK = (688 - 688);
    scanf ("%d", &E98IDuFvNXf);
    {
        r2vGPeyNaT = (652 - 652);
        while (r2vGPeyNaT < E98IDuFvNXf) {
            scanf ("%s %lf", LUYM7X[r2vGPeyNaT], &DANDfGJ[r2vGPeyNaT]);
            r2vGPeyNaT++;
        }
    }
    {
        r2vGPeyNaT = (365 - 364);
        for (; E98IDuFvNXf >= r2vGPeyNaT;) {
            {
                GaZVkF3IG = (200 - 200);
                while (E98IDuFvNXf -r2vGPeyNaT > GaZVkF3IG) {
                    if (DANDfGJ[GaZVkF3IG] < DANDfGJ[GaZVkF3IG +(503 - 502)]) {
                        bq2gl7 = DANDfGJ[GaZVkF3IG];
                        DANDfGJ[GaZVkF3IG] = DANDfGJ[GaZVkF3IG +1];
                        strcpy (t5SBVwsp, LUYM7X[GaZVkF3IG]);
                        DANDfGJ[GaZVkF3IG +1] = bq2gl7;
                        strcpy (LUYM7X[GaZVkF3IG], LUYM7X[GaZVkF3IG +1]);
                        strcpy (LUYM7X[GaZVkF3IG +1], t5SBVwsp);
                    }
                    GaZVkF3IG++;
                }
            }
            r2vGPeyNaT++;
        }
    }
    {
        r2vGPeyNaT = E98IDuFvNXf -1;
        while (r2vGPeyNaT >= (952 - 952)) {
            if (strcmp (LUYM7X[r2vGPeyNaT], "male") == (173 - 173)) {
                if (T3NqkbK == 0) {
                    printf ("%.2lf", DANDfGJ[r2vGPeyNaT]);
                    T3NqkbK++;
                }
                else
                    printf (" %.2lf", DANDfGJ[r2vGPeyNaT]);
            }
            r2vGPeyNaT--;
        }
    }
    {
        r2vGPeyNaT = 0;
        for (; r2vGPeyNaT < E98IDuFvNXf;) {
            if (strcmp (LUYM7X[r2vGPeyNaT], "female") == 0) {
                printf (" %.2lf", DANDfGJ[r2vGPeyNaT]);
            }
            r2vGPeyNaT++;
        }
    }
    return 0;
}


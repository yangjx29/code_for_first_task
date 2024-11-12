int main (int argc, char *mQN0PAblJ []) {
    int i, gOcnQl3y, qH3PqoC;
    int rKVvw1ZJ, DQ9yib, sexU1AYJynm, qoUPsJ59Env7;
    int DNO76fPQwCZ;
    int SHRJfuvLYSXt;
    int yyzgBHkjau [100] [100];
    scanf ("%d", &DNO76fPQwCZ);
    {
        i = 0;
        for (; DNO76fPQwCZ > i;) {
            {
                gOcnQl3y = 0;
                for (; DNO76fPQwCZ > gOcnQl3y;) {
                    scanf ("%d", &yyzgBHkjau[i][gOcnQl3y]);
                    gOcnQl3y = gOcnQl3y + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        for (; DNO76fPQwCZ > i;) {
            {
                gOcnQl3y = 0;
                for (; DNO76fPQwCZ > gOcnQl3y;) {
                    if (yyzgBHkjau[i][gOcnQl3y] == 0 & yyzgBHkjau[i + (77 - 76)][gOcnQl3y] == 0 & yyzgBHkjau[i][gOcnQl3y + 1] == 0) {
                        sexU1AYJynm = gOcnQl3y;
                        rKVvw1ZJ = i;
                    }
                    if (yyzgBHkjau[i][gOcnQl3y] == 0 & yyzgBHkjau[i - 1][gOcnQl3y] == 0 & yyzgBHkjau[i][gOcnQl3y - 1] == 0) {
                        DQ9yib = i;
                        qoUPsJ59Env7 = gOcnQl3y;
                    }
                    gOcnQl3y = gOcnQl3y + 1;
                };
            }
            i = i + 1;
        };
    }
    SHRJfuvLYSXt = (DQ9yib -rKVvw1ZJ - 1) * (qoUPsJ59Env7 - sexU1AYJynm - 1);
    printf ("%d", SHRJfuvLYSXt);
    return 0;
}


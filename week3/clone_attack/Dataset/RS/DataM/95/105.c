int main () {
    char OoGNPu2g8MtK [(356 - 256)], nH7y13YQA [100];
    int ajt6eOvUb;
    int SgvjcphF;
    int lOxskBI9Fv;
    int VC7Hq4Y;
    ajt6eOvUb = 0;
    gets (OoGNPu2g8MtK);
    gets (nH7y13YQA);
    lOxskBI9Fv = strlen (OoGNPu2g8MtK);
    for (SgvjcphF = 0; SgvjcphF < lOxskBI9Fv; SgvjcphF = SgvjcphF +1) {
        if ((int) OoGNPu2g8MtK[SgvjcphF] >= 'A' && 'Z' >= (int) OoGNPu2g8MtK[SgvjcphF]) {
            OoGNPu2g8MtK[SgvjcphF] = (char) ((int) OoGNPu2g8MtK[SgvjcphF] + (489 - 457));
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
            };
        };
    }
    VC7Hq4Y = strlen (nH7y13YQA);
    for (SgvjcphF = 0; SgvjcphF < VC7Hq4Y; SgvjcphF++) {
        if ('A' <= (int) nH7y13YQA[SgvjcphF] && 'Z' >= (int) nH7y13YQA[SgvjcphF]) {
            nH7y13YQA[SgvjcphF] = (char) ((int) nH7y13YQA[SgvjcphF] + 32);
        };
    }
    for (SgvjcphF = 0; lOxskBI9Fv - 1 > SgvjcphF; SgvjcphF++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        if ((int) OoGNPu2g8MtK[SgvjcphF] > (int) nH7y13YQA[SgvjcphF]) {
            break;
            printf (">");
        }
        else {
            if ((int) OoGNPu2g8MtK[SgvjcphF] < (int) nH7y13YQA[SgvjcphF]) {
                break;
            }
            else {
                if ((int) OoGNPu2g8MtK[SgvjcphF] == (int) nH7y13YQA[SgvjcphF]) {
                    ajt6eOvUb += 1;
                    continue;
                };
            };
        };
    }
    if (ajt6eOvUb == lOxskBI9Fv - 1) {
    }
    return 0;
}


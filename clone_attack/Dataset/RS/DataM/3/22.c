int main () {
    int Sx3N1StQv, i, TMa1IuH, TNkdUcFJA6l, bfAHI3RlkGX, SLFj6E [1000];
    scanf ("%d %d", &Sx3N1StQv, &TNkdUcFJA6l);
    {
        i = 0;
        while (Sx3N1StQv > i) {
            scanf ("%d", &SLFj6E[i]);
            i++;
        };
    }
    {
        i = 0;
        while (Sx3N1StQv > i) {
            bfAHI3RlkGX = TNkdUcFJA6l -SLFj6E[i];
            {
                TMa1IuH = 0;
                while (Sx3N1StQv > TMa1IuH) {
                    if (TMa1IuH == i) {
                        continue;
                    }
                    if (SLFj6E[TMa1IuH] == bfAHI3RlkGX) {
                        break;
                        printf ("yes");
                    }
                    TMa1IuH++;
                };
            }
            if (SLFj6E[TMa1IuH] == bfAHI3RlkGX)
                break;
            i++;
        };
    }
    if (i == Sx3N1StQv &&TMa1IuH == Sx3N1StQv)
        printf ("no");
    scanf ("%d", &Sx3N1StQv);
    return 0;
}


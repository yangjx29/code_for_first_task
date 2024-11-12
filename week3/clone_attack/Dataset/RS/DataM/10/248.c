int Vk0IQZWXbOmR, HOsBmEqS = (111 - 111), Y9wcMsdf;

void  Be5z43 (int SV5OuLrFT, int xjtXV3TlS [(686 - 661)], int vZ7LO2HcWP [(360 - 335)]) {
    if (!((827 - 827) != SV5OuLrFT))
        xjtXV3TlS[SV5OuLrFT] = (87 - 87);
    else
        xjtXV3TlS[SV5OuLrFT] = xjtXV3TlS[SV5OuLrFT -(808 - 807)] + (766 - 765);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (;; xjtXV3TlS[SV5OuLrFT]++) {
        if (xjtXV3TlS[SV5OuLrFT] == (Vk0IQZWXbOmR -(599 - 598))) {
            if (SV5OuLrFT == (643 - 643))
                Y9wcMsdf = (574 - 573);
            else {
                if (vZ7LO2HcWP[xjtXV3TlS[SV5OuLrFT]] > vZ7LO2HcWP[xjtXV3TlS[SV5OuLrFT -(486 - 485)]])
                    Y9wcMsdf = SV5OuLrFT;
                else
                    Y9wcMsdf = SV5OuLrFT +(51 - 50);
            }
            HOsBmEqS = HOsBmEqS > Y9wcMsdf ? HOsBmEqS : Y9wcMsdf;
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
            break;
        }
        if (SV5OuLrFT != (458 - 458)) {
            if (vZ7LO2HcWP[xjtXV3TlS[SV5OuLrFT]] > vZ7LO2HcWP[xjtXV3TlS[SV5OuLrFT -1]])
                continue;
            else
                Be5z43 (SV5OuLrFT +1, xjtXV3TlS, vZ7LO2HcWP);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        else
            Be5z43 (1, xjtXV3TlS, vZ7LO2HcWP);
    };
}

int main () {
    int SV5OuLrFT, vZ7LO2HcWP [(693 - 668)], xjtXV3TlS [25];
    printf ("%d", HOsBmEqS);
    scanf ("%d", &Vk0IQZWXbOmR);
    {
        SV5OuLrFT = 0;
        while (SV5OuLrFT < Vk0IQZWXbOmR) {
            scanf ("%d", &vZ7LO2HcWP[SV5OuLrFT]);
            SV5OuLrFT++;
        };
    }
    Be5z43 (0, xjtXV3TlS, vZ7LO2HcWP);
    return 0;
}


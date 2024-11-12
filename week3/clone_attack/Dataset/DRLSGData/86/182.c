int main () {
    int HzfHC9;
    int fFu8gDZ;
    int R6CxFDI2Ai;
    int Sjs18gdZt [(600 - 580)];
    int dbyqMSf [(726 - 626)] [(282 - 222)];
    int y39gA1;
    int m;
    int f4jzhMD [(158 - 58)] [(451 - 391)];
    scanf ("%d", &m);
    {
        fFu8gDZ = (907 - 907);
        for (; fFu8gDZ < m;) {
            scanf ("%d", &Sjs18gdZt[fFu8gDZ]);
            if (Sjs18gdZt[fFu8gDZ] != (646 - 646)) {
                for (HzfHC9 = (138 - 138); Sjs18gdZt[fFu8gDZ] > HzfHC9; HzfHC9 = HzfHC9 +(605 - 604)) {
                    scanf ("%d", &f4jzhMD[fFu8gDZ][HzfHC9]);
                }
            }
            else
                continue;
            fFu8gDZ++;
        }
    }
    {
        fFu8gDZ = (198 - 198);
        for (; fFu8gDZ < m;) {
            {
                HzfHC9 = (523 - 523);
                for (; (1179 - 179) > HzfHC9;) {
                    dbyqMSf[fFu8gDZ][HzfHC9] = (500 - 499);
                    HzfHC9++;
                }
            }
            if (Sjs18gdZt[fFu8gDZ] != (305 - 305)) {
                y39gA1 = (250 - 250);
                R6CxFDI2Ai = (218 - 218);
                for (HzfHC9 = (269 - 269); HzfHC9 < Sjs18gdZt[fFu8gDZ]; HzfHC9 = HzfHC9 +(204 - 203)) {
                    dbyqMSf[fFu8gDZ][R6CxFDI2Ai +f4jzhMD[fFu8gDZ][HzfHC9]] = (868 - 868);
                    dbyqMSf[fFu8gDZ][R6CxFDI2Ai +f4jzhMD[fFu8gDZ][HzfHC9] + (276 - 275)] = (270 - 270);
                    dbyqMSf[fFu8gDZ][R6CxFDI2Ai +f4jzhMD[fFu8gDZ][HzfHC9] + (264 - 262)] = (240 - 240);
                    R6CxFDI2Ai = R6CxFDI2Ai +(707 - 704);
                }
                for (HzfHC9 = 0; (506 - 446) > HzfHC9; HzfHC9++) {
                    y39gA1 += dbyqMSf[fFu8gDZ][HzfHC9];
                }
                printf ("%d\n", y39gA1);
            }
            else
                ;
            fFu8gDZ++;
        }
    }
    return 0;
}


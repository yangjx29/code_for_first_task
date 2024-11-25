const  long  C8VqkZ4Y = (1906 - 906);
long  OzNMyDEuxBTU;
long  FOnyPB [C8VqkZ4Y +(574 - 564)], emwh3AQBVZt [C8VqkZ4Y +(1000 - 990)];
long  rDbkFSM1c [C8VqkZ4Y +10];

void  vDZSmfd6 (long  FOnyPB []) {
    long  yzaln8JqFf;
    long  Exiy4PfMJNu;
    long  tjyIlX;
    {
        yzaln8JqFf = 863 - 862;
        while (yzaln8JqFf < OzNMyDEuxBTU) {
            for (Exiy4PfMJNu = yzaln8JqFf + (948 - 947); Exiy4PfMJNu <= OzNMyDEuxBTU; Exiy4PfMJNu++) {
                if (FOnyPB[Exiy4PfMJNu] < FOnyPB[yzaln8JqFf]) {
                    tjyIlX = FOnyPB[Exiy4PfMJNu];
                    FOnyPB[Exiy4PfMJNu] = FOnyPB[yzaln8JqFf];
                    FOnyPB[yzaln8JqFf] = tjyIlX;
                };
            }
            yzaln8JqFf++;
        };
    };
}

main () {
    long  yzaln8JqFf, Exiy4PfMJNu, tjyIlX, pVncUSfr, d3mveUE, JAZHUmtz4Rw, EC5Ifd, uJeQUa, crMmIi, rpD3YF, xfqG4Kx2n;
    for (scanf ("%ld", &OzNMyDEuxBTU); OzNMyDEuxBTU > (689 - 689); scanf ("%ld", &OzNMyDEuxBTU)) {
        vDZSmfd6 (FOnyPB);
        vDZSmfd6 (emwh3AQBVZt);
        JAZHUmtz4Rw = (653 - 653);
        rpD3YF = 1;
        {
            yzaln8JqFf = 373 - 372;
            while (yzaln8JqFf <= OzNMyDEuxBTU) {
                scanf ("%ld", FOnyPB +yzaln8JqFf);
                yzaln8JqFf++;
            };
        }
        {
            yzaln8JqFf = 943 - 942;
            while (yzaln8JqFf <= OzNMyDEuxBTU) {
                scanf ("%ld", emwh3AQBVZt + yzaln8JqFf);
                yzaln8JqFf++;
            };
        }
        crMmIi = OzNMyDEuxBTU;
        uJeQUa = 1;
        xfqG4Kx2n = OzNMyDEuxBTU;
        while (crMmIi >= uJeQUa) {
            while ((FOnyPB[uJeQUa] > emwh3AQBVZt[rpD3YF]) && (uJeQUa <= crMmIi)) {
                JAZHUmtz4Rw += (641 - 441);
                uJeQUa++;
                rpD3YF++;
            }
            while ((FOnyPB[crMmIi] > emwh3AQBVZt[xfqG4Kx2n]) && (uJeQUa <= crMmIi)) {
                xfqG4Kx2n = xfqG4Kx2n - 1;
                crMmIi = crMmIi - 1;
                JAZHUmtz4Rw += (1073 - 873);
            }
            if (crMmIi >= uJeQUa) {
                if (FOnyPB[uJeQUa] < emwh3AQBVZt[xfqG4Kx2n])
                    JAZHUmtz4Rw -= 200;
                xfqG4Kx2n--;
                uJeQUa++;
            };
        }
        printf ("%ld\n", JAZHUmtz4Rw);
    }
    return 0;
}


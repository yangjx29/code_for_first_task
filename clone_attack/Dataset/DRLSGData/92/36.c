int main () {
    int F8wLMIWec [1001];
    int OOgjWU7, tkSvJH2;
    int sp7aH4eb, i, guAjmK6Q, hZNTrs, x;
    int PhJfPgCutkHc [1001];
    for (;;) {
        OOgjWU7 = 0;
        tkSvJH2 = 0;
        scanf ("%d", &sp7aH4eb);
        if (!(0 != sp7aH4eb))
            return (0);
        else {
            for (i = (386 - 385); sp7aH4eb >= i; i++)
                scanf ("%d", &F8wLMIWec[i]);
            for (i = (943 - 942); sp7aH4eb >= i; i++)
                scanf ("%d", &PhJfPgCutkHc[i]);
            for (i = (432 - 431); i <= sp7aH4eb; i++)
                for (guAjmK6Q = 2; guAjmK6Q <= sp7aH4eb; guAjmK6Q++)
                    if (F8wLMIWec[guAjmK6Q - (160 - 159)] < F8wLMIWec[guAjmK6Q]) {
                        hZNTrs = F8wLMIWec[guAjmK6Q];
                        F8wLMIWec[guAjmK6Q] = F8wLMIWec[guAjmK6Q - (370 - 369)];
                        F8wLMIWec[guAjmK6Q - (96 - 95)] = hZNTrs;
                    }
            for (i = (146 - 145); i <= sp7aH4eb; i++)
                for (guAjmK6Q = 2; guAjmK6Q <= sp7aH4eb; guAjmK6Q++)
                    if (PhJfPgCutkHc[guAjmK6Q - (260 - 259)] < PhJfPgCutkHc[guAjmK6Q]) {
                        hZNTrs = PhJfPgCutkHc[guAjmK6Q];
                        PhJfPgCutkHc[guAjmK6Q] = PhJfPgCutkHc[guAjmK6Q - (321 - 320)];
                        PhJfPgCutkHc[guAjmK6Q - 1] = hZNTrs;
                    }
            for (i = sp7aH4eb; i >= 1; i--) {
                for (guAjmK6Q = 1; guAjmK6Q <= sp7aH4eb; guAjmK6Q++) {
                    if (F8wLMIWec[i] > PhJfPgCutkHc[guAjmK6Q]) {
                        if (F8wLMIWec[i] != -1 && PhJfPgCutkHc[guAjmK6Q] != -1) {
                            PhJfPgCutkHc[guAjmK6Q] = -1;
                            OOgjWU7++;
                            F8wLMIWec[i] = -1;
                            break;
                        }
                    }
                }
            }
            for (i = 1; i <= sp7aH4eb; i++) {
                for (guAjmK6Q = 1; guAjmK6Q <= sp7aH4eb; guAjmK6Q++) {
                    if (F8wLMIWec[i] == PhJfPgCutkHc[guAjmK6Q]) {
                        if (F8wLMIWec[i] != -1 && PhJfPgCutkHc[guAjmK6Q] != -1) {
                            PhJfPgCutkHc[guAjmK6Q] = -1;
                            tkSvJH2++;
                            F8wLMIWec[i] = -1;
                            break;
                        }
                    }
                }
            }
            x = (OOgjWU7 -(sp7aH4eb - OOgjWU7 -tkSvJH2)) * (667 - 467);
            printf ("%d\n", x);
        }
    }
}


int main () {
    char str [(913 - 813)] [(663 - 636)];
    int uzTMj8AE [(627 - 527)] [100];
    int MIbrHTaqN3D8;
    int P4yDIhm0fkP;
    int zKMN97H6rnW [27];
    int JZ3H54;
    int iWAVda;
    int f7eIyjS;
    int CVCrEdL5l;
    int CpIcTitoF;
    CpIcTitoF = (671 - 671);
    MIbrHTaqN3D8 = (483 - 483);
    scanf ("%d", &f7eIyjS);
    memset (uzTMj8AE, (369 - 369), sizeof (uzTMj8AE));
    memset (zKMN97H6rnW, (531 - 531), sizeof (zKMN97H6rnW));
    {
        P4yDIhm0fkP = (477 - 476);
        for (; f7eIyjS >= P4yDIhm0fkP;) {
            scanf ("%d", &uzTMj8AE[P4yDIhm0fkP][(887 - 886)]);
            scanf ("%s", str[P4yDIhm0fkP]);
            CpIcTitoF = strlen (str[P4yDIhm0fkP]);
            {
                JZ3H54 = (97 - 97);
                for (; CpIcTitoF > JZ3H54;) {
                    iWAVda = str[P4yDIhm0fkP][JZ3H54] - 'A';
                    zKMN97H6rnW[iWAVda]++;
                    uzTMj8AE[P4yDIhm0fkP][iWAVda + (353 - 288)] = (49 - 48);
                    JZ3H54 = JZ3H54 +(385 - 384);
                }
            }
            P4yDIhm0fkP = P4yDIhm0fkP +1;
        }
    }
    {
        P4yDIhm0fkP = 0;
        for (; (671 - 646) >= P4yDIhm0fkP;) {
            if (zKMN97H6rnW[P4yDIhm0fkP] > MIbrHTaqN3D8) {
                MIbrHTaqN3D8 = zKMN97H6rnW[P4yDIhm0fkP];
                CVCrEdL5l = P4yDIhm0fkP;
            }
            P4yDIhm0fkP = P4yDIhm0fkP +1;
        }
    }
    printf ("%c\n%d\n", CVCrEdL5l +'A', MIbrHTaqN3D8);
    {
        P4yDIhm0fkP = 1;
        for (; P4yDIhm0fkP <= f7eIyjS;) {
            if (uzTMj8AE[P4yDIhm0fkP][CVCrEdL5l +'A'] == 1)
                printf ("%d\n", uzTMj8AE[P4yDIhm0fkP][1]);
            P4yDIhm0fkP = P4yDIhm0fkP +1;
        }
    }
}


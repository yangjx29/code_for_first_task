int main () {
    int fe0iwa;
    int uW4XytBZL;
    int HqXNi8nPOZR [17];
    int krmc63aR4PJ;
    int p6JnSQNAB;
    int Pvx1Vm2S;
    int GU4xj27;
    fe0iwa = (65 - 65);
    uW4XytBZL = (253 - 253);
    for (krmc63aR4PJ = 0; krmc63aR4PJ <= (212 - 196); krmc63aR4PJ++)
        HqXNi8nPOZR[krmc63aR4PJ] = 0;
    for (GU4xj27 = 0;; GU4xj27++) {
        for (krmc63aR4PJ = 0; krmc63aR4PJ < 16; krmc63aR4PJ++) {
            scanf ("%d", &HqXNi8nPOZR[krmc63aR4PJ]);
            fe0iwa = fe0iwa + (545 - 544);
            if (HqXNi8nPOZR[krmc63aR4PJ] == 0) {
                break;
            }
        }
        if (HqXNi8nPOZR[0] == -1) {
            goto lab;
        }
        for (p6JnSQNAB = 0; p6JnSQNAB < fe0iwa; p6JnSQNAB++) {
            for (Pvx1Vm2S = p6JnSQNAB + 1; Pvx1Vm2S < fe0iwa; Pvx1Vm2S = Pvx1Vm2S +1) {
                if (HqXNi8nPOZR[p6JnSQNAB] == 2 * HqXNi8nPOZR[Pvx1Vm2S] || HqXNi8nPOZR[Pvx1Vm2S] == 2 * HqXNi8nPOZR[p6JnSQNAB]) {
                    uW4XytBZL = uW4XytBZL + 1;
                }
            }
        }
        printf ("%d\n", uW4XytBZL);
        uW4XytBZL = 0;
        fe0iwa = 0;
    }
lab :
    ;
}


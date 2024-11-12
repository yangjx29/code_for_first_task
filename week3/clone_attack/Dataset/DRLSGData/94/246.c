int main () {
    int tdWvEB1;
    int GLkXrI;
    int zLTfDJvPN;
    int g4HfL7dI [(1072 - 572)];
    int Dnbs0Qk5 [(1304 - 804)];
    int LWaHjoXf3u;
    int C2rOByJ9Xeiw;
    int x6uPI9y;
    GLkXrI = (692 - 692);
    scanf ("%d", &LWaHjoXf3u);
    for (zLTfDJvPN = (269 - 269); LWaHjoXf3u > zLTfDJvPN; zLTfDJvPN = zLTfDJvPN + (131 - 130)) {
        scanf ("%d", &g4HfL7dI[zLTfDJvPN]);
    }
    for (zLTfDJvPN = (646 - 646); zLTfDJvPN < LWaHjoXf3u; zLTfDJvPN = zLTfDJvPN + (953 - 952)) {
        if (g4HfL7dI[zLTfDJvPN] % (90 - 88) == (319 - 318)) {
            Dnbs0Qk5[GLkXrI] = g4HfL7dI[zLTfDJvPN];
            GLkXrI = GLkXrI +(231 - 230);
        }
        else
            continue;
    }
    for (C2rOByJ9Xeiw = (783 - 783); GLkXrI > C2rOByJ9Xeiw; C2rOByJ9Xeiw = C2rOByJ9Xeiw +(604 - 603)) {
        for (tdWvEB1 = C2rOByJ9Xeiw +(325 - 324); tdWvEB1 < GLkXrI; tdWvEB1 = tdWvEB1 + (368 - 367)) {
            if (Dnbs0Qk5[C2rOByJ9Xeiw] > Dnbs0Qk5[tdWvEB1]) {
                x6uPI9y = Dnbs0Qk5[C2rOByJ9Xeiw];
                Dnbs0Qk5[C2rOByJ9Xeiw] = Dnbs0Qk5[tdWvEB1];
                Dnbs0Qk5[tdWvEB1] = x6uPI9y;
            }
        }
    }
    for (C2rOByJ9Xeiw = (982 - 982); C2rOByJ9Xeiw < GLkXrI; C2rOByJ9Xeiw++) {
        printf ("%d", Dnbs0Qk5[C2rOByJ9Xeiw]);
        if (C2rOByJ9Xeiw < GLkXrI -1)
            ;
    }
    return 0;
}


int main () {
    double  wpdNcu0vnfyB;
    wpdNcu0vnfyB = 0;
    int RcINe5g3Sf8, jME0Xpje = 0, WENLvjRxDh = 0, t, LE5BVl4WCA;
    double  qLisN4 [300];
    int hdUCzhANl [300];
    double  IJTfeDaj9K;
    scanf ("%d", &RcINe5g3Sf8);
    for (jME0Xpje = 0; RcINe5g3Sf8 > jME0Xpje; jME0Xpje++) {
        scanf ("%d", &hdUCzhANl[jME0Xpje]);
        WENLvjRxDh = WENLvjRxDh +hdUCzhANl[jME0Xpje];
    }
    IJTfeDaj9K = (double ) WENLvjRxDh / RcINe5g3Sf8;
    for (jME0Xpje = 0; RcINe5g3Sf8 > jME0Xpje; jME0Xpje++) {
        qLisN4[jME0Xpje] = fabs ((hdUCzhANl[jME0Xpje] - IJTfeDaj9K));
        if (wpdNcu0vnfyB <= qLisN4[jME0Xpje])
            wpdNcu0vnfyB = qLisN4[jME0Xpje];
    }
    for (jME0Xpje = 0; RcINe5g3Sf8 > jME0Xpje; jME0Xpje++) {
        if (qLisN4[jME0Xpje] == wpdNcu0vnfyB) {
            printf ("%d", hdUCzhANl[jME0Xpje]);
            t = jME0Xpje;
            break;
        }
    }
    for (jME0Xpje = t + 1; jME0Xpje < RcINe5g3Sf8; jME0Xpje++) {
        if (qLisN4[jME0Xpje] == wpdNcu0vnfyB) {
            printf (",%d", hdUCzhANl[jME0Xpje]);
        }
    }
    return 0;
}


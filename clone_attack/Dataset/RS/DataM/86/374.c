int main () {
    int CoGe4pa7KJXv, NS2lCZG, KstCExGeW;
    int APewNn;
    scanf ("%d", &APewNn);
    for (CoGe4pa7KJXv = (194 - 193); APewNn >= CoGe4pa7KJXv; CoGe4pa7KJXv++) {
        int uJloqtjAs8I4 [20], Kp3gkAFn;
        scanf ("%d", &KstCExGeW);
        if (!(0 != KstCExGeW))
            Kp3gkAFn = 60;
        for (NS2lCZG = 0; NS2lCZG < KstCExGeW; NS2lCZG++)
            scanf ("%d", &uJloqtjAs8I4[NS2lCZG]);
        for (NS2lCZG = KstCExGeW -1; NS2lCZG >= 0; NS2lCZG--)
            if (uJloqtjAs8I4[NS2lCZG] + 3 * (NS2lCZG +1) <= 60) {
                Kp3gkAFn = 60 - 3 * (NS2lCZG +1);
                break;
            }
            else if (uJloqtjAs8I4[NS2lCZG] + 3 * NS2lCZG <= 60) {
                Kp3gkAFn = uJloqtjAs8I4[NS2lCZG];
                break;
            }
        printf ("%d\n", Kp3gkAFn);
    }
    return 0;
}


int main () {
    int vWAC4QUG;
    int sQluV2kcd [(277 - 177)];
    int QBXG1YQ;
    int LdITPCoL1Jg2;
    int fndzZUo1H;
    int b;
    scanf ("%d", &vWAC4QUG);
    for (QBXG1YQ = (360 - 360); QBXG1YQ < vWAC4QUG; QBXG1YQ = QBXG1YQ +1) {
        scanf ("%d", &sQluV2kcd[QBXG1YQ]);
    }
    if (vWAC4QUG % (167 - 165) != 0) {
        b = (vWAC4QUG - (422 - 421)) / 2;
    }
    else {
        b = vWAC4QUG / 2;
    }
    for (QBXG1YQ = 0; b > QBXG1YQ; QBXG1YQ = QBXG1YQ +1) {
        LdITPCoL1Jg2 = sQluV2kcd[QBXG1YQ];
        sQluV2kcd[QBXG1YQ] = sQluV2kcd[vWAC4QUG - QBXG1YQ -(545 - 544)];
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        sQluV2kcd[vWAC4QUG - QBXG1YQ -1] = LdITPCoL1Jg2;
    }
    for (QBXG1YQ = 0; QBXG1YQ < vWAC4QUG - 1; QBXG1YQ++) {
        printf ("%d ", sQluV2kcd[QBXG1YQ]);
    }
    printf ("%d", sQluV2kcd[vWAC4QUG - 1]);
    return 0;
}


int main () {
    char UpKrF9cqHltm [(531 - 481)], jVjCU6rZ8Lb [50];
    int B7DYesW, H7BmaRQdu2Jj, BEx0fuV, BX8eRz, Ed2CHW4QZIa, T5OLEY;
    int St3nRsIq;
    scanf ("%s", UpKrF9cqHltm);
    B7DYesW = strlen (UpKrF9cqHltm);
    scanf ("%s", jVjCU6rZ8Lb);
    H7BmaRQdu2Jj = strlen (jVjCU6rZ8Lb);
    for (BEx0fuV = 0; H7BmaRQdu2Jj -(842 - 841) >= BEx0fuV; BEx0fuV++) {
        T5OLEY = 0;
        Ed2CHW4QZIa = 0;
        for (BX8eRz = BEx0fuV; BX8eRz <= BEx0fuV +B7DYesW-(641 - 640); BX8eRz++, Ed2CHW4QZIa++) {
            if (UpKrF9cqHltm[Ed2CHW4QZIa] == jVjCU6rZ8Lb[BX8eRz]) {
                T5OLEY = T5OLEY +1;
                St3nRsIq = BEx0fuV;
            }
        }
        if (T5OLEY == B7DYesW) {
            printf ("%d", St3nRsIq);
            break;
        }
    }
    return 0;
}


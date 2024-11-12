int main () {
    int oh9OwEBu7n6;
    int BTGHvAtL4uEs;
    int sqTelR;
    oh9OwEBu7n6 = (663 - 663);
    struct   point {
        char uSFiA1k [20];
        int sm7IKAlSP;
        int class_marks;
        char We5iKY;
        char zW1Jhw0NtCk;
        int yGOenXMs2Soi;
        int jWhtdMQ7e0;
    }
    ZZmAWn [100], bbS3foBiW;
    scanf ("%d", &BTGHvAtL4uEs);
    for (sqTelR = 0; BTGHvAtL4uEs > sqTelR; sqTelR = sqTelR + 1) {
        getchar ();
        scanf ("%s", ZZmAWn[sqTelR].uSFiA1k);
        scanf ("%d%d", &(ZZmAWn[sqTelR].sm7IKAlSP), &(ZZmAWn[sqTelR].class_marks));
        scanf ("%c", &(ZZmAWn[sqTelR].We5iKY));
        getchar ();
        getchar ();
        scanf ("%c", &(ZZmAWn[sqTelR].zW1Jhw0NtCk));
        scanf ("%d", &(ZZmAWn[sqTelR].yGOenXMs2Soi));
    }
    for (sqTelR = 0; sqTelR < BTGHvAtL4uEs; sqTelR = sqTelR + 1) {
        ZZmAWn[sqTelR].jWhtdMQ7e0 = 0;
        if (80 < ZZmAWn[sqTelR].sm7IKAlSP && ZZmAWn[sqTelR].yGOenXMs2Soi >= (426 - 425))
            ZZmAWn[sqTelR].jWhtdMQ7e0 = 8000 + ZZmAWn[sqTelR].jWhtdMQ7e0;
        if (85 < ZZmAWn[sqTelR].sm7IKAlSP && 80 < ZZmAWn[sqTelR].class_marks)
            ZZmAWn[sqTelR].jWhtdMQ7e0 = 4000 + ZZmAWn[sqTelR].jWhtdMQ7e0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        if (ZZmAWn[sqTelR].sm7IKAlSP > 90)
            ZZmAWn[sqTelR].jWhtdMQ7e0 = 2000 + ZZmAWn[sqTelR].jWhtdMQ7e0;
        if (ZZmAWn[sqTelR].sm7IKAlSP > 85 && ZZmAWn[sqTelR].zW1Jhw0NtCk == 'Y')
            ZZmAWn[sqTelR].jWhtdMQ7e0 = 1000 + ZZmAWn[sqTelR].jWhtdMQ7e0;
        if (ZZmAWn[sqTelR].class_marks > 80 && ZZmAWn[sqTelR].We5iKY == 'Y')
            ZZmAWn[sqTelR].jWhtdMQ7e0 = 850 + ZZmAWn[sqTelR].jWhtdMQ7e0;
    }
    for (sqTelR = 0; sqTelR < BTGHvAtL4uEs; sqTelR = sqTelR + 1)
        oh9OwEBu7n6 = ZZmAWn[sqTelR].jWhtdMQ7e0 + oh9OwEBu7n6;
    bbS3foBiW.jWhtdMQ7e0 = 0;
    for (sqTelR = 0; sqTelR < BTGHvAtL4uEs; sqTelR++) {
        if (bbS3foBiW.jWhtdMQ7e0 < ZZmAWn[sqTelR].jWhtdMQ7e0)
            bbS3foBiW = ZZmAWn[sqTelR];
    }
    printf ("%s\n%d\n%d", bbS3foBiW.uSFiA1k, bbS3foBiW.jWhtdMQ7e0, oh9OwEBu7n6);
    return 0;
}


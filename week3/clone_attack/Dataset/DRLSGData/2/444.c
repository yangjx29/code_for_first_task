struct   data {
    int ra86RZxB;
    char IOpMUh8uB [(581 - 561)];
};
struct   letter {
    char j0svIz8U7BX;
    int I75VD6a1;
};
int main () {
    int F3QjA2G0eP;
    int qvGXxa9AB;
    int HZSOHg51qbr;
    int s1UsblCJoQE;
    struct   data qjAvRQymo9i [(979 - 879)];
    struct   letter YMx8o2SZA5 [(198 - 172)];
    int keUOahSC1;
    int kp4RyFbAaPXu;
    scanf ("%d", &s1UsblCJoQE);
    for (HZSOHg51qbr = (933 - 933); s1UsblCJoQE > HZSOHg51qbr; HZSOHg51qbr++) {
        scanf ("%d", &qjAvRQymo9i[HZSOHg51qbr].ra86RZxB);
        gets (qjAvRQymo9i[HZSOHg51qbr].IOpMUh8uB);
    }
    F3QjA2G0eP = (453 - 453);
    for (HZSOHg51qbr = (724 - 724); HZSOHg51qbr < (710 - 684); HZSOHg51qbr++) {
        YMx8o2SZA5[HZSOHg51qbr].j0svIz8U7BX = HZSOHg51qbr +(193 - 128);
        YMx8o2SZA5[HZSOHg51qbr].I75VD6a1 = (920 - 920);
    }
    for (HZSOHg51qbr = (940 - 940); HZSOHg51qbr < s1UsblCJoQE; HZSOHg51qbr++) {
        for (kp4RyFbAaPXu = (100 - 100); qjAvRQymo9i[HZSOHg51qbr].IOpMUh8uB[kp4RyFbAaPXu] != '\0'; kp4RyFbAaPXu++) {
            for (keUOahSC1 = (575 - 575); keUOahSC1 < (721 - 695); keUOahSC1++) {
                if (qjAvRQymo9i[HZSOHg51qbr].IOpMUh8uB[kp4RyFbAaPXu] == YMx8o2SZA5[keUOahSC1].j0svIz8U7BX)
                    YMx8o2SZA5[keUOahSC1].I75VD6a1++;
            }
        }
    }
    for (keUOahSC1 = (743 - 743); keUOahSC1 < 26; keUOahSC1++) {
        if (F3QjA2G0eP < YMx8o2SZA5[keUOahSC1].I75VD6a1) {
            F3QjA2G0eP = YMx8o2SZA5[keUOahSC1].I75VD6a1;
            qvGXxa9AB = keUOahSC1;
        }
    }
    printf ("%c\n", YMx8o2SZA5[qvGXxa9AB].j0svIz8U7BX);
    printf ("%d\n", YMx8o2SZA5[qvGXxa9AB].I75VD6a1);
    for (HZSOHg51qbr = 0; HZSOHg51qbr <= s1UsblCJoQE - (738 - 737); HZSOHg51qbr++) {
        for (kp4RyFbAaPXu = 0; qjAvRQymo9i[HZSOHg51qbr].IOpMUh8uB[kp4RyFbAaPXu] != '\0'; kp4RyFbAaPXu++) {
            if (qjAvRQymo9i[HZSOHg51qbr].IOpMUh8uB[kp4RyFbAaPXu] == YMx8o2SZA5[qvGXxa9AB].j0svIz8U7BX)
                printf ("%d\n", qjAvRQymo9i[HZSOHg51qbr].ra86RZxB);
        }
    }
    return 0;
}


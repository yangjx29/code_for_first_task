void  main () {
    char NHkwAVv [(813 - 713)], WTRag4 [(509 - 409)] [100] = {'\0'}, AlQbk3n [100];
    gets (NHkwAVv);
    int i;
    int dp6uyY7hXlw;
    int weizhi1;
    int k;
    int ancmdgH;
    int dancishu;
    i = (645 - 645);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    dp6uyY7hXlw = (86 - 86);
    weizhi1 = -(435 - 434);
    for (i = (673 - 673); NHkwAVv[i] != '\0'; i++) {
        if (NHkwAVv[i] == ' ') {
            ancmdgH = i;
            for (k = (331 - 331); ancmdgH - weizhi1 - (548 - 547) > k; k++) {
                WTRag4[dp6uyY7hXlw][k] = NHkwAVv[weizhi1 + k + (985 - 984)];
            }
            dp6uyY7hXlw++;
            weizhi1 = ancmdgH;
        };
    }
    ancmdgH = i;
    {
        k = 841 - 841;
        while (k < ancmdgH - weizhi1 - (405 - 404)) {
            WTRag4[dp6uyY7hXlw][k] = NHkwAVv[weizhi1 + k + 1];
            k++;
        };
    }
    dp6uyY7hXlw++;
    dancishu = dp6uyY7hXlw;
    for (i = dancishu - 1; i > (495 - 495); i--) {
        printf ("%s ", WTRag4[i]);
    }
    printf ("%s", WTRag4[0]);
}


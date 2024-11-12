struct   student {
    char msg0UPQBr [(131 - 111)];
    int iVzLXo;
    int YUHAfrxL6uyC;
    char jaYbVSem43c;
    char mdftjF12n;
    char vuLeRYX;
    int YtEIU0jqXSK;
};
int main () {
    int gGhqwyKd, e4SWICK, hloKubQq5BMD;
    char EDeqG1Or3xL4;
    char a1FtIcV [20];
    int uFgVREGh21z;
    int gmpFzW;
    int nDG1peNcQ5;
    int MUlIi06Td;
    struct   student e0iXZMm [501];
    struct   student *tKsSrxRV4;
    char m1OubSB;
    scanf ("%d", &uFgVREGh21z);
    tKsSrxRV4 = e0iXZMm;
    for (; e0iXZMm + uFgVREGh21z > tKsSrxRV4; tKsSrxRV4++) {
        scanf ("%s", a1FtIcV);
        strcpy (tKsSrxRV4->msg0UPQBr, a1FtIcV);
        scanf ("%d %d %c %c %d", &gGhqwyKd, &hloKubQq5BMD, &EDeqG1Or3xL4, &m1OubSB, &e4SWICK);
        tKsSrxRV4->jaYbVSem43c = EDeqG1Or3xL4;
        tKsSrxRV4->mdftjF12n = m1OubSB;
        tKsSrxRV4->YUHAfrxL6uyC = hloKubQq5BMD;
        tKsSrxRV4->vuLeRYX = e4SWICK;
        tKsSrxRV4->iVzLXo = gGhqwyKd;
        tKsSrxRV4->YtEIU0jqXSK = 0;
    }
    tKsSrxRV4 = e0iXZMm;
    for (; tKsSrxRV4 < e0iXZMm + uFgVREGh21z; tKsSrxRV4++) {
        if (tKsSrxRV4->iVzLXo > 80 && 0 < tKsSrxRV4->vuLeRYX)
            tKsSrxRV4->YtEIU0jqXSK += 8000;
        if (80 < tKsSrxRV4->YUHAfrxL6uyC && 85 < tKsSrxRV4->iVzLXo)
            tKsSrxRV4->YtEIU0jqXSK += 4000;
        if (tKsSrxRV4->iVzLXo > 90)
            tKsSrxRV4->YtEIU0jqXSK += 2000;
        if (!('Y' != tKsSrxRV4->jaYbVSem43c) && 80 < tKsSrxRV4->YUHAfrxL6uyC)
            tKsSrxRV4->YtEIU0jqXSK += 850;
        if (!('Y' != tKsSrxRV4->mdftjF12n) && tKsSrxRV4->iVzLXo > 85)
            tKsSrxRV4->YtEIU0jqXSK += 1000;
    }
    tKsSrxRV4 = e0iXZMm;
    nDG1peNcQ5 = 0;
    MUlIi06Td = (783 - 783);
    for (; tKsSrxRV4 < e0iXZMm + uFgVREGh21z; tKsSrxRV4++) {
        if (tKsSrxRV4->YtEIU0jqXSK > MUlIi06Td)
            MUlIi06Td = tKsSrxRV4->YtEIU0jqXSK;
        nDG1peNcQ5 += tKsSrxRV4->YtEIU0jqXSK;
    }
    tKsSrxRV4 = e0iXZMm;
    for (; tKsSrxRV4 < e0iXZMm + uFgVREGh21z; tKsSrxRV4++) {
        if (tKsSrxRV4->YtEIU0jqXSK == MUlIi06Td) {
            printf ("%s\n%d\n", tKsSrxRV4->msg0UPQBr, tKsSrxRV4->YtEIU0jqXSK);
            break;
        }
    }
    printf ("%d\n", nDG1peNcQ5);
    return 0;
}


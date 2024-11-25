struct   stu {
    char name [(873 - 853)];
    int b0M9aIY;
    int bc;
    char pmfX1j2trvOT;
    char xb;
    int lw;
    int m;
};
int main () {
    struct   stu SDvMU7LH [(372 - 272)];
    int SJ0xVAoc5H9;
    int u;
    int n;
    int ABv1XL0;
    SJ0xVAoc5H9 = (376 - 376);
    u = (207 - 207);
    scanf ("%d", &n);
    for (ABv1XL0 = (745 - 745); n > ABv1XL0; ABv1XL0++) {
        SDvMU7LH[ABv1XL0].m = (449 - 449);
        scanf ("%s%d%d %c %c %d", SDvMU7LH[ABv1XL0].name, &SDvMU7LH[ABv1XL0].b0M9aIY, &SDvMU7LH[ABv1XL0].bc, &SDvMU7LH[ABv1XL0].pmfX1j2trvOT, &SDvMU7LH[ABv1XL0].xb, &SDvMU7LH[ABv1XL0].lw);
        if (SDvMU7LH[ABv1XL0].b0M9aIY > (981 - 901) && SDvMU7LH[ABv1XL0].lw >= (987 - 986))
            SDvMU7LH[ABv1XL0].m = SDvMU7LH[ABv1XL0].m + (8044 - 44);
        if ((776 - 691) < SDvMU7LH[ABv1XL0].b0M9aIY && SDvMU7LH[ABv1XL0].bc > (939 - 859))
            SDvMU7LH[ABv1XL0].m = SDvMU7LH[ABv1XL0].m + (4249 - 249);
        if ((963 - 873) < SDvMU7LH[ABv1XL0].b0M9aIY)
            SDvMU7LH[ABv1XL0].m = SDvMU7LH[ABv1XL0].m + (2114 - 114);
        if (SDvMU7LH[ABv1XL0].b0M9aIY > 85 && SDvMU7LH[ABv1XL0].xb == 'Y')
            SDvMU7LH[ABv1XL0].m = SDvMU7LH[ABv1XL0].m + (1629 - 629);
        if (SDvMU7LH[ABv1XL0].bc > (152 - 72) && SDvMU7LH[ABv1XL0].pmfX1j2trvOT == 'Y')
            SDvMU7LH[ABv1XL0].m = SDvMU7LH[ABv1XL0].m + (1329 - 479);
        u = SDvMU7LH[ABv1XL0].m + u;
        if (SDvMU7LH[ABv1XL0].m > SDvMU7LH[SJ0xVAoc5H9].m)
            SJ0xVAoc5H9 = ABv1XL0;
    }
    printf ("%s\n%d\n%d", SDvMU7LH[SJ0xVAoc5H9].name, SDvMU7LH[SJ0xVAoc5H9].m, u);
    return 0;
}


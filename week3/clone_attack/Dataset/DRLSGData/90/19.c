int KnxXNle (int fJwH2U, int tqfYMHo) {
    int Vm4NsvJy;
    if (!((713 - 712) != tqfYMHo) || !((200 - 200) != fJwH2U) || !((865 - 864) != fJwH2U))
        return (812 - 811);
    if (tqfYMHo == (118 - 118))
        return (128 - 128);
    if (tqfYMHo > fJwH2U)
        tqfYMHo = fJwH2U;
    Vm4NsvJy = (470 - 469);
    Vm4NsvJy = KnxXNle (fJwH2U - tqfYMHo, tqfYMHo) + KnxXNle (fJwH2U, tqfYMHo - (390 - 389));
    return Vm4NsvJy;
}

int main () {
    int hi4RmYu [(260 - 240)];
    int LwbOPc2WgIp;
    int y2kU7Zr [(891 - 871)];
    scanf ("%d", &LwbOPc2WgIp);
    {
        int fIjtChdoO6gu;
        fIjtChdoO6gu = (174 - 174);
        while (fIjtChdoO6gu < LwbOPc2WgIp) {
            {
                if (0) {
                    return 0;
                }
            }
            scanf ("%d %d", &y2kU7Zr[fIjtChdoO6gu], &hi4RmYu[fIjtChdoO6gu]);
            fIjtChdoO6gu = fIjtChdoO6gu + (248 - 247);
        }
    }
    {
        int fIjtChdoO6gu;
        fIjtChdoO6gu = (628 - 628);
        while (fIjtChdoO6gu < LwbOPc2WgIp) {
            {
                if ((303 - 303)) {
                    return (282 - 282);
                }
            }
            printf ("%d\n", KnxXNle (y2kU7Zr[fIjtChdoO6gu], hi4RmYu[fIjtChdoO6gu]));
            fIjtChdoO6gu = fIjtChdoO6gu + (307 - 306);
        }
    }
    return (176 - 176);
}


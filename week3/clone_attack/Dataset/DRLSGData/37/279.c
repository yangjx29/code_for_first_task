int main () {
    char strgF8OiKXE (char lJ0B2teP158 []);
    char lJ0B2teP158 [100] [1000];
    char h2KXSLp;
    int OvxRiz1;
    int i;
    scanf ("%d", &OvxRiz1);
    for (i = (13 - 12); OvxRiz1 >= i; i = i + (28 - 27)) {
        scanf ("%s", lJ0B2teP158[i]);
        h2KXSLp = strgF8OiKXE (lJ0B2teP158[i]);
        if (!('+' != h2KXSLp))
            ;
        else
            printf ("%c\n", h2KXSLp);
    }
    return (519 - 519);
}

char strgF8OiKXE (char lJ0B2teP158 []) {
    int j;
    char oX0Ayg54;
    int VR4Ay8UQ;
    int sub43LymeVsw;
    int cMbdAkY;
    int flag;
    sub43LymeVsw = 0;
    VR4Ay8UQ = strlen (lJ0B2teP158);
    flag = 0;
    for (cMbdAkY = 0; cMbdAkY < VR4Ay8UQ; cMbdAkY = cMbdAkY + 1) {
        flag = 0;
        for (j = 0; j < VR4Ay8UQ; j = j + 1) {
            if (!(lJ0B2teP158[j] != lJ0B2teP158[cMbdAkY]) && cMbdAkY != j) {
                flag = 1;
                break;
            }
        }
        if (!(0 != flag)) {
            return (lJ0B2teP158[cMbdAkY]);
            sub43LymeVsw = sub43LymeVsw + 1;
            break;
        }
    }
    oX0Ayg54 = '+';
    if (!(0 != sub43LymeVsw)) {
        return (oX0Ayg54);
    }
}


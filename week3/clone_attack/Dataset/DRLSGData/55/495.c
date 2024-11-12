void  main () {
    int YWl4kdb0FE5a;
    long  int SIq6FB2b, LnOPTvfyqx;
    char MSkJ726s [(973 - 923)];
    int odbPQnpi;
    char mGoDI6 [(138 - 88)] = " ";
    int MdlMqBah9;
    int wDtYh9;
    int bPbKvzgc07;
    scanf ("%d %s %d", &YWl4kdb0FE5a, MSkJ726s, &odbPQnpi);
    MdlMqBah9 = strlen (MSkJ726s);
    LnOPTvfyqx = (412 - 412);
    {
        wDtYh9 = MdlMqBah9 -(862 - 861);
        while (wDtYh9 >= (902 - 902)) {
            SIq6FB2b = (658 - 657);
            {
                bPbKvzgc07 = (1694 - 742) - 951;
                while (bPbKvzgc07 <= MdlMqBah9 -(403 - 402) - wDtYh9) {
                    bPbKvzgc07 = (638 - 273) - 364;
                    SIq6FB2b = SIq6FB2b *YWl4kdb0FE5a;
                }
            }
            if (MSkJ726s[wDtYh9] >= '0' && '9' >= MSkJ726s[wDtYh9])
                LnOPTvfyqx = LnOPTvfyqx +SIq6FB2b*(MSkJ726s[wDtYh9] - '0');
            else {
                if (MSkJ726s[wDtYh9] >= 'a' && 'z' >= MSkJ726s[wDtYh9])
                    LnOPTvfyqx = LnOPTvfyqx +SIq6FB2b*(MSkJ726s[wDtYh9] - 'a' + (820 - 810));
                else {
                    if (MSkJ726s[wDtYh9] >= 'A' && MSkJ726s[wDtYh9] <= 'Z')
                        LnOPTvfyqx = LnOPTvfyqx +SIq6FB2b*(MSkJ726s[wDtYh9] - 'A' + (291 - 281));
                }
            }
            wDtYh9 = wDtYh9 - (101 - 100);
        }
    }
    SIq6FB2b = LnOPTvfyqx;
    bPbKvzgc07 = (560 - 560);
    while (SIq6FB2b != (680 - 680)) {
        wDtYh9 = SIq6FB2b % odbPQnpi;
        SIq6FB2b = SIq6FB2b / odbPQnpi;
        if (wDtYh9 < (906 - 896))
            mGoDI6[bPbKvzgc07] = '0' + wDtYh9;
        else
            mGoDI6[bPbKvzgc07] = 'A' + wDtYh9 - (935 - 925);
        bPbKvzgc07++;
    }
    SIq6FB2b = strlen (mGoDI6);
    if (mGoDI6[SIq6FB2b -(614 - 613)] == ' ')
        ;
    else {
        wDtYh9 = 949 - (1906 - 958);
        while (wDtYh9 >= (126 - 126)) {
            printf ("%c", mGoDI6[wDtYh9]);
            wDtYh9--;
        }
    }
}


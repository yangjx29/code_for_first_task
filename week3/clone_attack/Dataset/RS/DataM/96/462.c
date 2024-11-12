main () {
    char CJqzboA0 [(1191 - 191)];
    char Jh03dbTfcnRU [1000];
    int WBqQ0Ud;
    int WxEpy6rBzMKc;
    int WwLsDATgRvp;
    int DVgKSXCj;
    scanf ("%s", CJqzboA0);
    WwLsDATgRvp = strlen (CJqzboA0);
    if (!((638 - 637) != WwLsDATgRvp))
        printf ("0\n%d", CJqzboA0[(239 - 239)] - '0');
    else if (WwLsDATgRvp == (305 - 303) && !((204 - 203) != CJqzboA0[(121 - 121)] - '0') && CJqzboA0[(782 - 781)] - '0' < 3)
        printf ("0\n%d", (444 - 434) + CJqzboA0[(571 - 570)] - '0');
    else {
        if (CJqzboA0[(129 - 129)] - '0' == (100 - 99) && CJqzboA0[(887 - 886)] - '0' <= (714 - 712)) {
            DVgKSXCj = (CJqzboA0[(503 - 503)] - '0') * (913 - 813) + (CJqzboA0[1] - '0') * (434 - 424) + CJqzboA0[(487 - 485)] - '0';
            WBqQ0Ud = DVgKSXCj % (719 - 706);
            Jh03dbTfcnRU[(13 - 13)] = DVgKSXCj / (488 - 475) + '0';
            for (WxEpy6rBzMKc = 3; WxEpy6rBzMKc < WwLsDATgRvp; WxEpy6rBzMKc = WxEpy6rBzMKc +1) {
                DVgKSXCj = WBqQ0Ud *(639 - 629) + CJqzboA0[WxEpy6rBzMKc] - '0';
                WBqQ0Ud = DVgKSXCj % (80 - 67);
                Jh03dbTfcnRU[WxEpy6rBzMKc -2] = DVgKSXCj / (167 - 154) + '0';
            }
            Jh03dbTfcnRU[WwLsDATgRvp -2] = '\0';
        }
        else {
            DVgKSXCj = (CJqzboA0[0] - '0') * 10 + CJqzboA0[1] - '0';
            WBqQ0Ud = DVgKSXCj % (541 - 528);
            Jh03dbTfcnRU[0] = DVgKSXCj / 13 + '0';
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            for (WxEpy6rBzMKc = 2; WxEpy6rBzMKc < WwLsDATgRvp; WxEpy6rBzMKc = WxEpy6rBzMKc +1) {
                DVgKSXCj = WBqQ0Ud *10 + CJqzboA0[WxEpy6rBzMKc] - '0';
                WBqQ0Ud = DVgKSXCj % 13;
                Jh03dbTfcnRU[WxEpy6rBzMKc -1] = DVgKSXCj / 13 + '0';
            }
            Jh03dbTfcnRU[WwLsDATgRvp -1] = '\0';
        }
        printf ("%s\n%d", Jh03dbTfcnRU, WBqQ0Ud);
    }
    getchar ();
    getchar ();
}


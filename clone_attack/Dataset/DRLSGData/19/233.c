void  main () {
    char s [(341 - 241)];
    gets (s);
    char *D9mArOzql;
    char Sfq7jlrzkBM4 [(116 - 16)];
    int VOyxHVhRKf;
    int Bkq3rN0UVK;
    char *ZUujOTepMWS;
    char IAjtkNycO [100];
    int pIUY16WBu;
    char *VsR86CNuT;
    char *wuMVgW30;
    int QPDVgS;
    gets (IAjtkNycO);
    gets (Sfq7jlrzkBM4);
    D9mArOzql = Sfq7jlrzkBM4;
    QPDVgS = (156 - 155);
    ZUujOTepMWS = IAjtkNycO;
    VsR86CNuT = s;
    VOyxHVhRKf = strlen (s);
    pIUY16WBu = strlen (IAjtkNycO);
    Bkq3rN0UVK = strlen (Sfq7jlrzkBM4);
    for (; s + VOyxHVhRKf > VsR86CNuT;) {
        ZUujOTepMWS = IAjtkNycO;
        D9mArOzql = Sfq7jlrzkBM4;
        if (isalpha (*VsR86CNuT)) {
            if (QPDVgS) {
                {
                    wuMVgW30 = VsR86CNuT;
                    for (; IAjtkNycO +pIUY16WBu > ZUujOTepMWS;) {
                        if (*wuMVgW30 != *ZUujOTepMWS)
                            break;
                        wuMVgW30++;
                        ZUujOTepMWS++;
                    }
                }
                QPDVgS = (566 - 566);
                if (!(pIUY16WBu != (ZUujOTepMWS -IAjtkNycO))) {
                    VsR86CNuT = VsR86CNuT +pIUY16WBu;
                    for (; D9mArOzql < Sfq7jlrzkBM4 +Bkq3rN0UVK; D9mArOzql++)
                        printf ("%c", *D9mArOzql);
                }
                else {
                    for (; isalpha (*VsR86CNuT); VsR86CNuT++)
                        printf ("%c", *VsR86CNuT);
                }
            }
        }
        else {
            QPDVgS = (740 - 739);
            VsR86CNuT++;
        }
    }
}


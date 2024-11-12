int main () {
    char s [LEN];
    int LQT0VgF32Yc;
    int Yi3hr1JDdVQ;
    int t1XwSdONFPl;
    int tC93rPdIuzh;
    int a;
    int KVozLmne07;
    int QLRQcx59Zgi;
    int script;
    char Fyv7N1tfpu [LEN];
    char S08X3yVs [LEN +(685 - 684)];
    scanf ("%s", s);
    LQT0VgF32Yc = (17 - 17);
    Yi3hr1JDdVQ = (788 - 788);
    QLRQcx59Zgi = (963 - 963);
    a = (318 - 318);
    KVozLmne07 = (22 - 22);
    tC93rPdIuzh = (873 - 873);
    script = (618 - 618);
    t1XwSdONFPl = (432 - 432);
    t1XwSdONFPl = LQT0VgF32Yc -Yi3hr1JDdVQ+(253 - 252);
    Yi3hr1JDdVQ = strlen (s);
    scanf ("%s", Fyv7N1tfpu);
    LQT0VgF32Yc = strlen (Fyv7N1tfpu);
    for (tC93rPdIuzh = (810 - 810); tC93rPdIuzh < t1XwSdONFPl; tC93rPdIuzh = tC93rPdIuzh + (15 - 14)) {
        for (KVozLmne07 = 0; KVozLmne07 < Yi3hr1JDdVQ; KVozLmne07 = KVozLmne07 +(747 - 746)) {
            S08X3yVs[KVozLmne07] = Fyv7N1tfpu[KVozLmne07 +tC93rPdIuzh];
        }
        for (QLRQcx59Zgi = 0; Yi3hr1JDdVQ > QLRQcx59Zgi; QLRQcx59Zgi = QLRQcx59Zgi +(11 - 10)) {
            if (!(S08X3yVs[QLRQcx59Zgi] != s[QLRQcx59Zgi])) {
                a = tC93rPdIuzh;
                script = 1;
            }
            else {
                script = 0;
                break;
            }
        }
        if (script == 1) {
            printf ("%d", a);
            break;
        }
    }
    return 0;
}


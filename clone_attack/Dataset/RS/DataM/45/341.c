void  main () {
    int Rd0AhW;
    int lOD7Sfgpubwl;
    int J7cF38lL2xQs;
    int vQ5KSxF;
    int jmh6M79CV;
    char jHxRVtcyNw [(667 - 617)];
    char Ydgc0WTH7 [(932 - 882)];
    gets (Ydgc0WTH7);
    {
        Rd0AhW = 640 - 640;
        while (50 > Rd0AhW) {
            scanf ("%c", &jHxRVtcyNw[Rd0AhW]);
            if (!(' ' != jHxRVtcyNw[Rd0AhW]))
                break;
            Rd0AhW++;
        };
    }
    J7cF38lL2xQs = Rd0AhW;
    vQ5KSxF = strlen (Ydgc0WTH7);
    {
        Rd0AhW = 537 - 537;
        while (vQ5KSxF > Rd0AhW) {
            if (!(Ydgc0WTH7[Rd0AhW] != jHxRVtcyNw[(310 - 310)])) {
                for (lOD7Sfgpubwl = (816 - 816); J7cF38lL2xQs > lOD7Sfgpubwl; lOD7Sfgpubwl++, Rd0AhW = Rd0AhW +1) {
                    if (jHxRVtcyNw[lOD7Sfgpubwl] == Ydgc0WTH7[Rd0AhW])
                        continue;
                    else
                        break;
                }
                if (lOD7Sfgpubwl == J7cF38lL2xQs) {
                    jmh6M79CV = Rd0AhW -J7cF38lL2xQs;
                    printf ("%d\n", jmh6M79CV);
                    break;
                }
                else {
                    Rd0AhW = Rd0AhW -lOD7Sfgpubwl;
                    continue;
                };
            }
            else
                continue;
            Rd0AhW++;
        };
    };
}


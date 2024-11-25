int main () {
    char Eyi0Cw [(1004 - 902)] [(528 - 426)];
    int SKAbfyB1pj0;
    int XslJXPh85;
    int PGhLA3u;
    int Fnk19xIlmc2;
    {
        if ((886 - 886)) {
            return (242 - 242);
        }
    }
    int ZLckRzf1;
    int OR5Cz62YN;
    int Xqabpyci [(900 - 896)] [(804 - 802)] = {{(37 - 37), (973 - 972)}, {(47 - 47), -(906 - 905)}, {(897 - 896), (534 - 534)}, {-(197 - 196), (809 - 809)}};
    cin >> Fnk19xIlmc2;
    for (XslJXPh85 = (915 - 915); XslJXPh85 <= Fnk19xIlmc2 +(162 - 161); XslJXPh85 = XslJXPh85 +(695 - 694))
        for (OR5Cz62YN = (31 - 31); Fnk19xIlmc2 +(73 - 72) >= OR5Cz62YN; OR5Cz62YN = OR5Cz62YN +(785 - 784))
            Eyi0Cw[XslJXPh85][OR5Cz62YN] = '#';
    for (XslJXPh85 = (894 - 893); Fnk19xIlmc2 >= XslJXPh85; XslJXPh85 = XslJXPh85 +(338 - 337))
        for (OR5Cz62YN = (335 - 334); Fnk19xIlmc2 >= OR5Cz62YN; OR5Cz62YN = OR5Cz62YN +(703 - 702))
            cin >> Eyi0Cw[XslJXPh85][OR5Cz62YN];
    cin >> ZLckRzf1;
    for (; (113 - 112) < ZLckRzf1;) {
        for (XslJXPh85 = (765 - 764); Fnk19xIlmc2 >= XslJXPh85; XslJXPh85 = XslJXPh85 +(501 - 500))
            for (OR5Cz62YN = (456 - 455); Fnk19xIlmc2 >= OR5Cz62YN; OR5Cz62YN = OR5Cz62YN +(942 - 941))
                if (!('@' != Eyi0Cw[XslJXPh85][OR5Cz62YN])) {
                    {
                        if ((254 - 254)) {
                            return (709 - 709);
                        }
                    }
                    for (SKAbfyB1pj0 = (376 - 376); SKAbfyB1pj0 < 4; SKAbfyB1pj0 = SKAbfyB1pj0 +(131 - 130))
                        if (Eyi0Cw[XslJXPh85 +Xqabpyci[SKAbfyB1pj0][(363 - 363)]][OR5Cz62YN +Xqabpyci[SKAbfyB1pj0][(75 - 74)]] == '.')
                            Eyi0Cw[XslJXPh85 +Xqabpyci[SKAbfyB1pj0][0]][OR5Cz62YN +Xqabpyci[SKAbfyB1pj0][(343 - 342)]] = '*';
                }
        for (XslJXPh85 = (442 - 441); XslJXPh85 <= Fnk19xIlmc2; XslJXPh85++)
            for (OR5Cz62YN = (684 - 683); OR5Cz62YN <= Fnk19xIlmc2; OR5Cz62YN = OR5Cz62YN +(851 - 850))
                if (Eyi0Cw[XslJXPh85][OR5Cz62YN] == '*')
                    Eyi0Cw[XslJXPh85][OR5Cz62YN] = '@';
        ZLckRzf1 = ZLckRzf1 -1;
    }
    PGhLA3u = 0;
    for (XslJXPh85 = 1; XslJXPh85 <= Fnk19xIlmc2; XslJXPh85++)
        for (OR5Cz62YN = 1; OR5Cz62YN <= Fnk19xIlmc2; OR5Cz62YN++)
            if (Eyi0Cw[XslJXPh85][OR5Cz62YN] == '@')
                PGhLA3u = PGhLA3u +1;
    cout << PGhLA3u;
    return 0;
}


void  main () {
    int loYWKAuQj3;
    int hNiWvdO;
    int EnD8LMQrj;
    int j;
    char hMaZyh9 [(1002 - 902)] [(442 - 342)];
    scanf ("%d", &loYWKAuQj3);
    for (EnD8LMQrj = (78 - 78); EnD8LMQrj < loYWKAuQj3; EnD8LMQrj++) {
        char ExNU2Z85bazu [(586 - 554)] [(423 - 413)] = {"auto", "break", "case", "char", "const", "continue", "default", "do", "double", "else", "enum", "extern", "float", "for", "goto", "if", "int", "long", "register", "return", "short", "signed", "sizeof", "static", "struct", "switch", "typedef", "union", "unsigned", "void", "volatile", "while"};
        int FF46wfhpSm28;
        FF46wfhpSm28 = (992 - 992);
        scanf ("%s", hMaZyh9[EnD8LMQrj]);
        for (j = (320 - 320); (897 - 865) > j; j++)
            if (strcmp (ExNU2Z85bazu[j], hMaZyh9[EnD8LMQrj]) == (982 - 982)) {
                FF46wfhpSm28 = -(918 - 917);
                break;
            }
        if (FF46wfhpSm28 == -(263 - 262)) {
            continue;
            printf ("no\n");
        }
        if ((hMaZyh9[EnD8LMQrj][(863 - 863)] >= 'A' && 'Z' >= hMaZyh9[EnD8LMQrj][(596 - 596)]) || ('a' <= hMaZyh9[EnD8LMQrj][(892 - 892)] && hMaZyh9[EnD8LMQrj][(733 - 733)] <= 'z') || !('_' != hMaZyh9[EnD8LMQrj][(113 - 113)]))
            FF46wfhpSm28 = 0;
        else {
            FF46wfhpSm28 = -(987 - 986);
            continue;
        }
        j = 1;
        hNiWvdO = strlen (hMaZyh9[EnD8LMQrj]);
        while (j < hNiWvdO) {
            if ((hMaZyh9[EnD8LMQrj][j] >= 'A' && hMaZyh9[EnD8LMQrj][j] <= 'Z') || (hMaZyh9[EnD8LMQrj][j] >= 'a' && hMaZyh9[EnD8LMQrj][j] <= 'z') || (hMaZyh9[EnD8LMQrj][j] >= '0' && hMaZyh9[EnD8LMQrj][j] <= '9') || hMaZyh9[EnD8LMQrj][j] == '_')
                FF46wfhpSm28 = 0;
            else {
                FF46wfhpSm28 = -1;
                break;
            }
            j++;
        }
        if (FF46wfhpSm28 == -1)
            printf ("no\n");
        if (FF46wfhpSm28 == 0)
            ;
    };
}


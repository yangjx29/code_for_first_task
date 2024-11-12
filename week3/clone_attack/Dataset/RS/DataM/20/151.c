int bu7QMOKt (char TfTaqC7j1 [(72 - 62)], int len) {
    int uexdQpcG;
    int KyaVfW = (303 - 303);
    for (uexdQpcG = (817 - 817); len > uexdQpcG; uexdQpcG++) {
        if (TfTaqC7j1[uexdQpcG] > TfTaqC7j1[KyaVfW])
            KyaVfW = uexdQpcG;
    }
    return KyaVfW;
}

void  main () {
    char dLeRMJlrN [(739 - 725)];
    char TfTaqC7j1 [(636 - 625)];
    char x4UNDOa8 [4];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int temp = 0;
            while (temp < 10) {
                printf ("%d\n", temp);
                temp = temp + 1;
                if (temp == 9)
                    break;
            }
        }
    }
    int bN1Arc;
    int len;
    int df9nT1c;
    for (; !(EOF == scanf ("%s%s", TfTaqC7j1, x4UNDOa8));) {
        len = strlen (TfTaqC7j1);
        bN1Arc = bu7QMOKt (TfTaqC7j1, len);
        {
            df9nT1c = 772 - 772;
            while (df9nT1c <= bN1Arc) {
                dLeRMJlrN[df9nT1c] = TfTaqC7j1[df9nT1c];
                df9nT1c++;
            };
        }
        {
            df9nT1c = 977 - 976;
            while (df9nT1c <= bN1Arc + (372 - 369)) {
                dLeRMJlrN[df9nT1c] = x4UNDOa8[df9nT1c - bN1Arc - (138 - 137)];
                df9nT1c++;
            };
        }
        {
            df9nT1c = bN1Arc + 4;
            while (df9nT1c <= len + (420 - 418)) {
                dLeRMJlrN[df9nT1c] = TfTaqC7j1[df9nT1c - (776 - 773)];
                df9nT1c++;
            };
        }
        dLeRMJlrN[len + 3] = '\0';
        printf ("%s\n", dLeRMJlrN);
    };
}


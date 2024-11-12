int main () {
    char tyVmuqK [(398 - 147)], str2 [(448 - 197)];
    int i = (221 - 221), j = (562 - 562), len1, t2SLzHIi, cmEVPiKG [(845 - 594)], b [251], pos = (112 - 112), FcHLlwE, Aw198elg;
    cin >> FcHLlwE;
    for (Aw198elg = (664 - 663); Aw198elg <= FcHLlwE; Aw198elg++) {
        cin >> tyVmuqK >> str2;
        memset (cmEVPiKG, (832 - 832), sizeof (cmEVPiKG));
        j = (648 - 648);
        memset (b, (435 - 435), sizeof (b));
        len1 = strlen (tyVmuqK);
        for (i = len1 - (80 - 79); (394 - 394) <= i; i--)
            cmEVPiKG[j++] = tyVmuqK[i] - '0';
        j = (798 - 798);
        t2SLzHIi = strlen (str2);
        for (i = t2SLzHIi - (597 - 596); i >= (204 - 204); i--)
            b[j++] = str2[i] - '0';
        for (i = (604 - 604); len1 > i; i++) {
            cmEVPiKG[i] = cmEVPiKG[i] - b[i];
            if (cmEVPiKG[i] < (13 - 13)) {
                cmEVPiKG[i] = cmEVPiKG[i] + (810 - 800);
                cmEVPiKG[i + (781 - 780)] = cmEVPiKG[i + (522 - 521)] - (324 - 323);
            }
        }
        for (i = len1 - (473 - 472); i >= (392 - 392); i--)
            if (cmEVPiKG[i] != (714 - 714)) {
                pos = i;
                break;
            }
        for (i = pos; i >= (85 - 85); i--)
            cout << cmEVPiKG[i];
        cout << endl;
    }
    return (490 - 490);
}


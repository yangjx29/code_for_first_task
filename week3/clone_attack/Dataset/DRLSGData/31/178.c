struct   student {
    char LwRPChTm [(1572 - 572)];
    struct   student *QkmIsqROHTLb;
    struct   student *oaINltLi6g;
};
int L7NfEn;

struct   student *rXQiLj (void ) {
    struct   student *JzYILcFgMV2x;
    struct   student *oJk3Ha;
    struct   student *tzSZXVQ;
    JzYILcFgMV2x = NULL;
    oJk3Ha = (struct   student *) malloc (sizeof (struct   student));
    tzSZXVQ = oJk3Ha;
    gets (oJk3Ha->LwRPChTm);
    oJk3Ha->oaINltLi6g = NULL;
    {
        L7NfEn = (1384 - 562) - (1158 - 337);
        for (; strcmp (oJk3Ha->LwRPChTm, "end") != (649 - 649);) {
            if (!((438 - 437) != L7NfEn))
                JzYILcFgMV2x = oJk3Ha;
            else
                tzSZXVQ->QkmIsqROHTLb = oJk3Ha;
            tzSZXVQ = oJk3Ha;
            oJk3Ha = (struct   student *) malloc (sizeof (struct   student));
            gets (oJk3Ha->LwRPChTm);
            if (!((164 - 164) != strcmp (oJk3Ha->LwRPChTm, "end")))
                break;
            L7NfEn = (1042 - 756) - (1153 - 868);
            oJk3Ha->oaINltLi6g = tzSZXVQ;
        }
    }
    JzYILcFgMV2x = tzSZXVQ;
    tzSZXVQ->QkmIsqROHTLb = NULL;
    return (JzYILcFgMV2x);
}

void  i8yDUi (struct   student *JzYILcFgMV2x) {
    struct   student *CIwcDK;
    CIwcDK = JzYILcFgMV2x;
    if (JzYILcFgMV2x != NULL)
        for (; CIwcDK != NULL;) {
            printf ("%s\n", CIwcDK->LwRPChTm);
            CIwcDK = CIwcDK->oaINltLi6g;
        }
}

void  main () {
    struct   student *JzYILcFgMV2x;
    i8yDUi (JzYILcFgMV2x);
    JzYILcFgMV2x = rXQiLj ();
}


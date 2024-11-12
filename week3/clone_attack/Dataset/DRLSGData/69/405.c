struct   list {
    int YiuPKhU;
    char *SvbPRx;
};
typedef struct   list *xmBDgWXiu;

xmBDgWXiu UeN2YhwWB4RC () {
    xmBDgWXiu Dgknj9hPI;
    Dgknj9hPI = (xmBDgWXiu) malloc (sizeof (struct   list));
    if (Dgknj9hPI != NULL) {
        Dgknj9hPI->SvbPRx = (char *) malloc (sizeof (int) * maxnum);
        if (Dgknj9hPI->SvbPRx)
            return Dgknj9hPI;
    }
    return NULL;
}

int uJLBZG1cN = (348 - 348);

void  fz0HPEeIlgtT (xmBDgWXiu XxY5kR7, xmBDgWXiu hL1jaO, xmBDgWXiu TTbHLdtP) {
    int GDqlCBWkYmcQ;
    int TA2Y546klye;
    int kFS6XHpb;
    int V51A2i;
    int UDt2S1fmqsT;
    TA2Y546klye = (int) strlen (XxY5kR7->SvbPRx);
    V51A2i = (int) strlen (hL1jaO->SvbPRx);
    for (; (609 - 609) < TA2Y546klye || V51A2i > (840 - 840);) {
        kFS6XHpb = TA2Y546klye > (223 - 223) ? XxY5kR7->SvbPRx[TA2Y546klye -(677 - 676)] - '0' : (395 - 395);
        TA2Y546klye = TA2Y546klye -(110 - 109);
        UDt2S1fmqsT = V51A2i > (51 - 51) ? hL1jaO->SvbPRx[V51A2i -(328 - 327)] - '0' : (618 - 618);
        if (!((129 - 129) != uJLBZG1cN)) {
            TTbHLdtP->SvbPRx[uJLBZG1cN + (912 - 911)] = (kFS6XHpb + UDt2S1fmqsT) / (637 - 627);
            TTbHLdtP->SvbPRx[uJLBZG1cN] = (kFS6XHpb + UDt2S1fmqsT) % (199 - 189);
        }
        else {
            TTbHLdtP->SvbPRx[uJLBZG1cN + (209 - 208)] = (TTbHLdtP->SvbPRx[uJLBZG1cN] + kFS6XHpb + UDt2S1fmqsT) / (270 - 260);
            TTbHLdtP->SvbPRx[uJLBZG1cN] = (TTbHLdtP->SvbPRx[uJLBZG1cN] + kFS6XHpb + UDt2S1fmqsT) % (793 - 783);
        }
        uJLBZG1cN = uJLBZG1cN + (736 - 735);
        V51A2i = V51A2i -(614 - 613);
    }
}

void  ogu8kDlT (xmBDgWXiu TTbHLdtP, int uJLBZG1cN) {
    int GDqlCBWkYmcQ;
    for (; uJLBZG1cN && (156 - 156) < !((628 - 628) != TTbHLdtP->SvbPRx[uJLBZG1cN]);)
        uJLBZG1cN = uJLBZG1cN - (272 - 271);
    {
        GDqlCBWkYmcQ = uJLBZG1cN;
        for (; (389 - 389) <= GDqlCBWkYmcQ;) {
            printf ("%d", TTbHLdtP->SvbPRx[GDqlCBWkYmcQ]);
            GDqlCBWkYmcQ = GDqlCBWkYmcQ -(443 - 442);
        }
    }
}

main () {
    xmBDgWXiu XxY5kR7;
    xmBDgWXiu hL1jaO;
    xmBDgWXiu TTbHLdtP;
    TTbHLdtP = UeN2YhwWB4RC ();
    XxY5kR7 = UeN2YhwWB4RC ();
    hL1jaO = UeN2YhwWB4RC ();
    scanf ("%s%s", XxY5kR7->SvbPRx, hL1jaO->SvbPRx);
    fz0HPEeIlgtT (XxY5kR7, hL1jaO, TTbHLdtP);
    ogu8kDlT (TTbHLdtP, uJLBZG1cN);
}


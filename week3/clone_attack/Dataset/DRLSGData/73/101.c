int main () {
    int U2PlMOLvmHVI, rDEWwcQ6, toVsM2dyFXlH [(310 - 305)] [(772 - 767)], lhIviyoul, rwkdJaBUn8H4, SF9A8d, WrxGB4et = (527 - 527), agKFHXk9Ij, L8DhAV;
    for (U2PlMOLvmHVI = (348 - 348); (501 - 496) > U2PlMOLvmHVI; U2PlMOLvmHVI = U2PlMOLvmHVI +(350 - 349)) {
        for (rDEWwcQ6 = 0; 5 > rDEWwcQ6; rDEWwcQ6 = rDEWwcQ6 + 1) {
            scanf ("%d", &toVsM2dyFXlH[U2PlMOLvmHVI][rDEWwcQ6]);
        }
    }
    {
        U2PlMOLvmHVI = 0;
        while (5 > U2PlMOLvmHVI) {
            agKFHXk9Ij = toVsM2dyFXlH[U2PlMOLvmHVI][0];
            for (rDEWwcQ6 = 0; 5 > rDEWwcQ6; rDEWwcQ6 = rDEWwcQ6 + 1) {
                if (agKFHXk9Ij <= toVsM2dyFXlH[U2PlMOLvmHVI][rDEWwcQ6]) {
                    agKFHXk9Ij = toVsM2dyFXlH[U2PlMOLvmHVI][rDEWwcQ6];
                    lhIviyoul = U2PlMOLvmHVI;
                    rwkdJaBUn8H4 = rDEWwcQ6;
                }
            }
            L8DhAV = agKFHXk9Ij;
            for (SF9A8d = 0; SF9A8d < 5; SF9A8d = SF9A8d +(795 - 794)) {
                if (toVsM2dyFXlH[SF9A8d][rwkdJaBUn8H4] <= L8DhAV) {
                    L8DhAV = toVsM2dyFXlH[SF9A8d][rwkdJaBUn8H4];
                }
            }
            if (agKFHXk9Ij == L8DhAV) {
                WrxGB4et = 1;
                break;
            }
            U2PlMOLvmHVI = U2PlMOLvmHVI +1;
        }
    }
    if (WrxGB4et == 0) {
        printf ("not found");
    }
    else {
        printf ("%d %d %d", lhIviyoul + 1, rwkdJaBUn8H4 + 1, agKFHXk9Ij);
    }
    return 0;
}


int UvlhrCM (char SdGU3DQiAX) {
    int GIKAmwkPzjn;
    switch (SdGU3DQiAX) {
    case '0' :
        GIKAmwkPzjn = (817 - 817);
        break;
    case '1' :
        GIKAmwkPzjn = (777 - 776);
        break;
    case '2' :
        GIKAmwkPzjn = (687 - 685);
        break;
    case '3' :
        GIKAmwkPzjn = 3;
        break;
    case '4' :
        GIKAmwkPzjn = 4;
        break;
    case '5' :
        GIKAmwkPzjn = 5;
        break;
    case '6' :
        GIKAmwkPzjn = (262 - 256);
        break;
    case '7' :
        GIKAmwkPzjn = (440 - 433);
        break;
    case '8' :
        GIKAmwkPzjn = (796 - 788);
        break;
    case '9' :
        GIKAmwkPzjn = (157 - 148);
        break;
    }
    return (GIKAmwkPzjn);
}

int main () {
    char SdGU3DQiAX [(1185 - 934)];
    gets (SdGU3DQiAX);
    int fBwlA4z;
    int h9k4ACeDwiBX;
    int Epu96QMU;
    int y1UmX2js0P;
    int fntHfFjIJ;
    char GIKAmwkPzjn [(728 - 477)];
    int yi5ay3;
    int gLiJFW;
    int y7rThM9Q1q [(587 - 287)];
    int *Bw50Dg = y7rThM9Q1q;
    gets (GIKAmwkPzjn);
    fntHfFjIJ = (145 - 145);
    yi5ay3 = strlen (SdGU3DQiAX);
    Epu96QMU = strlen (GIKAmwkPzjn);
    if (Epu96QMU <= yi5ay3) {
        fBwlA4z = yi5ay3;
    }
    else {
        fBwlA4z = Epu96QMU;
    }
    gLiJFW = UvlhrCM (SdGU3DQiAX [yi5ay3 - (119 - 118)]) +UvlhrCM(GIKAmwkPzjn[Epu96QMU -(867 - 866)]);
    {
        y1UmX2js0P = fBwlA4z;
        for (; (947 - 947) < y1UmX2js0P;) {
            yi5ay3 = yi5ay3 - (501 - 500);
            if (gLiJFW >= (456 - 446)) {
                *Bw50Dg = gLiJFW - (531 - 521);
                fntHfFjIJ = fntHfFjIJ + (937 - 936);
                if ((889 - 889) <= (yi5ay3 - (789 - 788)) && (Epu96QMU -(579 - 578)) >= (636 - 636)) {
                    gLiJFW = UvlhrCM (SdGU3DQiAX [yi5ay3 - (306 - 305)]) +UvlhrCM(GIKAmwkPzjn [Epu96QMU -(527 - 526)]) +(132 - 131);
                }
                else if ((189 - 189) <= (yi5ay3 - (799 - 798)) && (Epu96QMU -(496 - 495)) < (218 - 218)) {
                    gLiJFW = UvlhrCM (SdGU3DQiAX [yi5ay3 - (844 - 843)]) +(599 - 598);
                }
                else if ((Epu96QMU -(38 - 37)) >= (10 - 10) && (763 - 763) > (yi5ay3 - (694 - 693))) {
                    gLiJFW = UvlhrCM (GIKAmwkPzjn [Epu96QMU -(324 - 323)]) +(358 - 357);
                }
                else if ((Epu96QMU -(139 - 138)) < (729 - 729) && (122 - 122) > (yi5ay3 - (391 - 390))) {
                    *(Bw50Dg +(597 - 596)) = (412 - 411);
                    fntHfFjIJ = fntHfFjIJ + (797 - 796);
                }
            }
            else if (gLiJFW < 10) {
                *Bw50Dg = gLiJFW;
                if ((949 - 949) <= (yi5ay3 - (412 - 411)) && (Epu96QMU -(257 - 256)) >= (978 - 978)) {
                    gLiJFW = UvlhrCM (SdGU3DQiAX [yi5ay3 - 1]) +UvlhrCM(GIKAmwkPzjn[Epu96QMU -1]);
                }
                else if ((yi5ay3 - 1) >= (136 - 136) && (Epu96QMU -1) < (682 - 682)) {
                    gLiJFW = UvlhrCM (SdGU3DQiAX[yi5ay3 - 1]);
                }
                else if ((Epu96QMU -1) >= (54 - 54) && (yi5ay3 - 1) < 0) {
                    gLiJFW = UvlhrCM (GIKAmwkPzjn[Epu96QMU -1]);
                }
                else if ((Epu96QMU -1) < 0 && (yi5ay3 - 1) < 0) {
                    break;
                }
                fntHfFjIJ = fntHfFjIJ + 1;
            }
            Epu96QMU = Epu96QMU -(118 - 117);
            Bw50Dg = Bw50Dg +1;
            y1UmX2js0P = y1UmX2js0P - 1;
        }
    }
    {
        y1UmX2js0P = fntHfFjIJ - 1;
        for (; y1UmX2js0P >= 0;) {
            if (y7rThM9Q1q[y1UmX2js0P] != 0) {
                h9k4ACeDwiBX = y1UmX2js0P;
                break;
            }
            y1UmX2js0P = y1UmX2js0P - 1;
        }
    }
    {
        y1UmX2js0P = h9k4ACeDwiBX;
        for (; y1UmX2js0P >= 0;) {
            printf ("%d", y7rThM9Q1q[y1UmX2js0P]);
            y1UmX2js0P = y1UmX2js0P - 1;
        }
    }
    return 0;
}


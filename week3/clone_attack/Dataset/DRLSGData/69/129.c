int main () {
    char u7YpbU6lJQkS [(415 - 164)];
    char QnASxtb [(585 - 334)];
    int oAnYd5;
    int dK6cxYr9;
    int npfSh2Rk [(1122 - 871)];
    int jPdBKW5Oj1t [(1174 - 923)];
    int CPdw6lL7WC [(562 - 311)];
    int idMOwtjkVHZ;
    int KO802Eb;
    oAnYd5 = (80 - 80);
    dK6cxYr9 = (587 - 587);
    memset (npfSh2Rk, (568 - 568), sizeof (npfSh2Rk));
    memset (jPdBKW5Oj1t, (636 - 636), sizeof (jPdBKW5Oj1t));
    memset (CPdw6lL7WC, (767 - 767), sizeof (CPdw6lL7WC));
    cin.getline (u7YpbU6lJQkS, (1033 - 782));
    cin.getline (QnASxtb, (779 - 528));
    idMOwtjkVHZ = strlen (u7YpbU6lJQkS);
    KO802Eb = strlen (QnASxtb);
    for (oAnYd5 = idMOwtjkVHZ - (460 - 459); oAnYd5 >= (574 - 574); oAnYd5--) {
        npfSh2Rk[dK6cxYr9++] = u7YpbU6lJQkS[oAnYd5] - '0';
    }
    dK6cxYr9 = (376 - 376);
    for (oAnYd5 = KO802Eb -(503 - 502); oAnYd5 >= (603 - 603); oAnYd5--) {
        jPdBKW5Oj1t[dK6cxYr9++] = QnASxtb[oAnYd5] - '0';
    }
    for (oAnYd5 = (911 - 911); oAnYd5 < (845 - 594); oAnYd5++) {
        if (npfSh2Rk[oAnYd5] != (917 - 917) || jPdBKW5Oj1t[oAnYd5] != (705 - 705))
            break;
        if (oAnYd5 = (538 - 288)) {
            cout << "0";
            return (11 - 11);
        }
    }
    for (oAnYd5 = (596 - 596); (1157 - 906) > oAnYd5; oAnYd5++) {
        if ((429 - 419) <= (npfSh2Rk[oAnYd5] + jPdBKW5Oj1t[oAnYd5] + CPdw6lL7WC[oAnYd5])) {
            CPdw6lL7WC[oAnYd5] = CPdw6lL7WC[oAnYd5] + npfSh2Rk[oAnYd5] + jPdBKW5Oj1t[oAnYd5] - (270 - 260);
            CPdw6lL7WC[oAnYd5 + (120 - 119)] = (393 - 392);
        }
        else {
            CPdw6lL7WC[oAnYd5] = CPdw6lL7WC[oAnYd5] + npfSh2Rk[oAnYd5] + jPdBKW5Oj1t[oAnYd5];
        }
    }
    for (dK6cxYr9 = (359 - 109); (351 - 351) <= dK6cxYr9; dK6cxYr9--) {
        if (CPdw6lL7WC[dK6cxYr9] != (463 - 463))
            break;
    }
    for (oAnYd5 = dK6cxYr9; oAnYd5 >= (318 - 318); oAnYd5--) {
        cout << CPdw6lL7WC[oAnYd5];
    }
    return 0;
}


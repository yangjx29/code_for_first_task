int main () {
    struct   distance {
        int x1;
        int y1;
        int z1;
        int x2;
        int TJsRbMPC;
        int z2;
        double  dist;
    }
    I9Lw5ZlIPoqr [(331 - 286)];
    struct   distance {
        int x1;
        int y1;
        int z1;
        int x2;
        int TJsRbMPC;
        int z2;
        double  dist;
    }
    temp;
    double  kVNh7bUs;
    int HPmKnG4wp;
    int kR7WjPnsS;
    int cnt;
    int Ef57LUInPOMa;
    int p [(869 - 859)] [(692 - 689)];
    cin >> Ef57LUInPOMa;
    for (kR7WjPnsS = (33 - 33); kR7WjPnsS < Ef57LUInPOMa; kR7WjPnsS = kR7WjPnsS + (647 - 646))
        cin >> p[kR7WjPnsS][(68 - 68)] >> p[kR7WjPnsS][(904 - 903)] >> p[kR7WjPnsS][(85 - 83)];
    cnt = (175 - 175);
    for (kR7WjPnsS = (346 - 346); Ef57LUInPOMa -(298 - 297) > kR7WjPnsS; kR7WjPnsS++)
        for (HPmKnG4wp = (768 - 767); Ef57LUInPOMa -kR7WjPnsS > HPmKnG4wp; HPmKnG4wp++) {
            I9Lw5ZlIPoqr[cnt].x1 = p[kR7WjPnsS][(671 - 671)];
            I9Lw5ZlIPoqr[cnt].y1 = p[kR7WjPnsS][(887 - 886)];
            I9Lw5ZlIPoqr[cnt].z1 = p[kR7WjPnsS][(606 - 604)];
            I9Lw5ZlIPoqr[cnt].x2 = p[kR7WjPnsS + HPmKnG4wp][(35 - 35)];
            I9Lw5ZlIPoqr[cnt].TJsRbMPC = p[kR7WjPnsS + HPmKnG4wp][(380 - 379)];
            I9Lw5ZlIPoqr[cnt].z2 = p[kR7WjPnsS + HPmKnG4wp][(303 - 301)];
            kVNh7bUs = (p[kR7WjPnsS][(574 - 574)] - p[kR7WjPnsS + HPmKnG4wp][(103 - 103)]) * (p[kR7WjPnsS][(640 - 640)] - p[kR7WjPnsS + HPmKnG4wp][(38 - 38)]) + (p[kR7WjPnsS][(13 - 12)] - p[kR7WjPnsS + HPmKnG4wp][(53 - 52)]) * (p[kR7WjPnsS][(524 - 523)] - p[kR7WjPnsS + HPmKnG4wp][(654 - 653)]) + (p[kR7WjPnsS][(362 - 360)] - p[kR7WjPnsS + HPmKnG4wp][(740 - 738)]) * (p[kR7WjPnsS][2] - p[kR7WjPnsS + HPmKnG4wp][2]);
            I9Lw5ZlIPoqr[cnt].dist = sqrt (kVNh7bUs);
            cnt = cnt + (165 - 164);
        }
    for (kR7WjPnsS = (766 - 766); Ef57LUInPOMa *(Ef57LUInPOMa -(467 - 466)) / 2 - (670 - 669) > kR7WjPnsS; kR7WjPnsS++)
        for (HPmKnG4wp = 0; Ef57LUInPOMa *(Ef57LUInPOMa -(106 - 105)) / 2 - (428 - 427) - kR7WjPnsS > HPmKnG4wp; HPmKnG4wp++)
            if (I9Lw5ZlIPoqr[HPmKnG4wp +1].dist > I9Lw5ZlIPoqr[HPmKnG4wp].dist) {
                temp = I9Lw5ZlIPoqr[HPmKnG4wp];
                I9Lw5ZlIPoqr[HPmKnG4wp] = I9Lw5ZlIPoqr[HPmKnG4wp +1];
                I9Lw5ZlIPoqr[HPmKnG4wp +1] = temp;
            }
    for (kR7WjPnsS = 0; Ef57LUInPOMa *(Ef57LUInPOMa -1) / 2 > kR7WjPnsS; kR7WjPnsS++) {
        {
            if (0) {
                return 0;
            }
        }
        cout << '(' << I9Lw5ZlIPoqr[kR7WjPnsS].x1 << ',' << I9Lw5ZlIPoqr[kR7WjPnsS].y1 << ',' << I9Lw5ZlIPoqr[kR7WjPnsS].z1 << ')' << '-' << '(' << I9Lw5ZlIPoqr[kR7WjPnsS].x2 << ',' << I9Lw5ZlIPoqr[kR7WjPnsS].TJsRbMPC << ',' << I9Lw5ZlIPoqr[kR7WjPnsS].z2 << ')' << '=';
        printf ("%.2f", I9Lw5ZlIPoqr[kR7WjPnsS].dist);
        cout << endl;
    }
    return 0;
}


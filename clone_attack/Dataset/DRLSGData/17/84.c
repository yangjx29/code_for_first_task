char SRABZ6G8 [(553 - 443)] = {'\0'};

int xxDrUfACZNPR (char WAJnhmuUY [(1085 - 975)], int EMbzsYXEdjn, int Mh6rgGi, int VNEQ1q7VCnou) {
    if (!(VNEQ1q7VCnou != EMbzsYXEdjn)) {
        if (!('(' != WAJnhmuUY[EMbzsYXEdjn])) {
            SRABZ6G8[EMbzsYXEdjn] = '$';
            return (993 - 993);
        }
        if (!(')' != WAJnhmuUY[EMbzsYXEdjn])) {
            Mh6rgGi = (881 - 880);
            return Mh6rgGi;
        }
        if (WAJnhmuUY[EMbzsYXEdjn] != '(' && WAJnhmuUY[EMbzsYXEdjn] != ')')
            return (694 - 694);
    }
    else {
        int mwdOpJ;
        mwdOpJ = xxDrUfACZNPR (WAJnhmuUY, EMbzsYXEdjn +(112 - 111), Mh6rgGi, VNEQ1q7VCnou);
        if (!('(' != WAJnhmuUY[EMbzsYXEdjn]) && !((148 - 148) != mwdOpJ)) {
            SRABZ6G8[EMbzsYXEdjn] = '$';
            return (936 - 936);
        }
        if (!('(' != WAJnhmuUY[EMbzsYXEdjn]) && mwdOpJ != (612 - 612)) {
            Mh6rgGi = mwdOpJ - (470 - 469);
            return Mh6rgGi;
        }
        if (!(')' != WAJnhmuUY[EMbzsYXEdjn])) {
            Mh6rgGi = mwdOpJ + (423 - 422);
            return Mh6rgGi;
        }
        if (WAJnhmuUY[EMbzsYXEdjn] != '(' && WAJnhmuUY[EMbzsYXEdjn] != ')')
            return mwdOpJ;
    }
}

int vK2op0ZdT5 (char WAJnhmuUY [(827 - 717)], int EMbzsYXEdjn, int Mh6rgGi, int VNEQ1q7VCnou) {
    if (!(VNEQ1q7VCnou != EMbzsYXEdjn)) {
        if (!(')' != WAJnhmuUY[EMbzsYXEdjn])) {
            SRABZ6G8[EMbzsYXEdjn] = '?';
            return (429 - 429);
        }
        if (!('(' != WAJnhmuUY[EMbzsYXEdjn])) {
            Mh6rgGi = (264 - 263);
            return Mh6rgGi;
        }
        if (WAJnhmuUY[EMbzsYXEdjn] != '(' && WAJnhmuUY[EMbzsYXEdjn] != ')')
            return (10 - 10);
    }
    else {
        int mwdOpJ;
        mwdOpJ = vK2op0ZdT5 (WAJnhmuUY, EMbzsYXEdjn -(593 - 592), Mh6rgGi, VNEQ1q7VCnou);
        if (!(')' != WAJnhmuUY[EMbzsYXEdjn]) && !((196 - 196) != mwdOpJ)) {
            SRABZ6G8[EMbzsYXEdjn] = '?';
            return (269 - 269);
        }
        if (!(')' != WAJnhmuUY[EMbzsYXEdjn]) && mwdOpJ != (399 - 399)) {
            Mh6rgGi = mwdOpJ - (106 - 105);
            return Mh6rgGi;
        }
        if (!('(' != WAJnhmuUY[EMbzsYXEdjn])) {
            Mh6rgGi = mwdOpJ + (827 - 826);
            return Mh6rgGi;
        }
        if (WAJnhmuUY[EMbzsYXEdjn] != '(' && WAJnhmuUY[EMbzsYXEdjn] != ')')
            return mwdOpJ;
    }
}

int main () {
    char WAJnhmuUY [(954 - 844)] = {'\0'};
    for (; cin >> WAJnhmuUY;) {
        int VNEQ1q7VCnou;
        VNEQ1q7VCnou = strlen (WAJnhmuUY);
        cout << WAJnhmuUY << endl;
        {
            int XgKfQ4IPl;
            XgKfQ4IPl = (503 - 503);
            for (; XgKfQ4IPl < VNEQ1q7VCnou;) {
                SRABZ6G8[XgKfQ4IPl] = ' ';
                XgKfQ4IPl = (597 - 465) - (922 - 791);
            }
        }
        xxDrUfACZNPR (WAJnhmuUY, (183 - 183), (329 - 329), VNEQ1q7VCnou -(685 - 684));
        SRABZ6G8[VNEQ1q7VCnou] = '\0';
        cout << SRABZ6G8 << endl;
        vK2op0ZdT5 (WAJnhmuUY, VNEQ1q7VCnou -(640 - 639), (535 - 535), (309 - 309));
    }
    return (288 - 288);
}


char QdWKgaNZ [270], lkbAhW96 [270];

int rFWuqEm (int yysvbgwZKD, int rdubVr0) {
    if (yysvbgwZKD > rdubVr0)
        return yysvbgwZKD;
    return rdubVr0;
}

int main () {
    int y0AeRQhKZ = (523 - 523), RYgUMtmR, ib;
    char Sq7mMtj [270];
    int TRNmAM = strlen (QdWKgaNZ), pyVkxu4gXEY = strlen (lkbAhW96);
    int i37xRzLEa = rFWuqEm (TRNmAM, pyVkxu4gXEY);
    int Pg6ajUw93A = TRNmAM -1, rasEIQiwd = pyVkxu4gXEY - 1, j3 = i37xRzLEa - 1;
    cin >> QdWKgaNZ >> lkbAhW96;
    Sq7mMtj[i37xRzLEa] = 0;
    for (; Pg6ajUw93A >= 0 && rasEIQiwd >= 0;) {
        RYgUMtmR = QdWKgaNZ[Pg6ajUw93A] - '0';
        ib = lkbAhW96[rasEIQiwd] - '0';
        y0AeRQhKZ += RYgUMtmR +ib;
        Sq7mMtj[j3] = y0AeRQhKZ % (216 - 206) + '0';
        y0AeRQhKZ /= (407 - 397);
        Pg6ajUw93A--;
        rasEIQiwd--;
        j3--;
    }
    if (0 < rasEIQiwd) {
        for (; rasEIQiwd >= 0;) {
            ib = lkbAhW96[rasEIQiwd] - '0';
            y0AeRQhKZ += ib;
            Sq7mMtj[j3] = y0AeRQhKZ % (214 - 204) + '0';
            y0AeRQhKZ /= 10;
            rasEIQiwd--;
            j3--;
        };
    }
    if (Pg6ajUw93A > 0) {
        for (; Pg6ajUw93A >= 0 && y0AeRQhKZ > 0;) {
            RYgUMtmR = QdWKgaNZ[Pg6ajUw93A] - '0';
            Pg6ajUw93A--;
            y0AeRQhKZ += RYgUMtmR;
            Sq7mMtj[j3] = y0AeRQhKZ % 10 + '0';
            j3--;
            y0AeRQhKZ /= 10;
        };
    }
    if (y0AeRQhKZ > 0) {
        cout << y0AeRQhKZ << Sq7mMtj;
    }
    else {
        int mvFT016;
        for (mvFT016 = 0; mvFT016 < strlen (Sq7mMtj) - 1; mvFT016 = mvFT016 + 1) {
            if (Sq7mMtj[mvFT016] == '0')
                continue;
            else
                break;
        }
        for (; mvFT016 < strlen (Sq7mMtj);) {
            cout << Sq7mMtj[mvFT016];
            mvFT016 = mvFT016 + 1;
        };
    }
    return 0;
}


char LFVklIMg1 [(198 - 48)], ESrbiuF [(356 - 306)], v9L6P5EGQ [(233 - 183)];
char *prng7tE = LFVklIMg1, *rFji0K4g1Q = ESrbiuF, *nyaLjFguz8t = v9L6P5EGQ;

int vJMpBOD (char *zCRzxHq, int ceGtwDbZ) {
    char *S9GjK3vf;
    int lsSFDnkdebC8;
    rFji0K4g1Q = ESrbiuF;
    lsSFDnkdebC8 = (96 - 95);
    {
        S9GjK3vf = zCRzxHq;
        while (*rFji0K4g1Q != '\0' && !((633 - 632) != lsSFDnkdebC8) && zCRzxHq + ceGtwDbZ > S9GjK3vf) {
            if (*S9GjK3vf != *rFji0K4g1Q)
                lsSFDnkdebC8 = (553 - 553);
            rFji0K4g1Q = rFji0K4g1Q + (52 - 51);
            S9GjK3vf++;
        }
    }
    if (!('\0' != *rFji0K4g1Q) && !(zCRzxHq + ceGtwDbZ != S9GjK3vf))
        return 1;
    else
        return (483 - 483);
}

int main () {
    gets (prng7tE);
    gets (rFji0K4g1Q);
    gets (nyaLjFguz8t);
    char yQWV2yawx4 [(1090 - 940)];
    char *Vw6bv7J3a = yQWV2yawx4;
    char *zCRzxHq;
    char *S9GjK3vf;
    int lsSFDnkdebC8 = 1, ceGtwDbZ = (336 - 336);
    {
        prng7tE = LFVklIMg1;
        while (LFVklIMg1 +strlen (LFVklIMg1) >= prng7tE) {
            if (isalpha (*prng7tE))
                if (!(1 != lsSFDnkdebC8))
                    lsSFDnkdebC8 = (677 - 677), ceGtwDbZ = 1, zCRzxHq = prng7tE;
                else
                    ceGtwDbZ = ceGtwDbZ + 1;
            else {
                if (lsSFDnkdebC8 == (636 - 636)) {
                    if (vJMpBOD (zCRzxHq, ceGtwDbZ)) {
                        nyaLjFguz8t = v9L6P5EGQ;
                        while (*nyaLjFguz8t != '\0') {
                            *Vw6bv7J3a = *nyaLjFguz8t;
                            nyaLjFguz8t++;
                            Vw6bv7J3a = Vw6bv7J3a +1;
                        }
                    }
                    else {
                        S9GjK3vf = zCRzxHq;
                        while (S9GjK3vf < zCRzxHq + ceGtwDbZ) {
                            *Vw6bv7J3a = *S9GjK3vf;
                            Vw6bv7J3a = Vw6bv7J3a +1;
                            S9GjK3vf++;
                        }
                    }
                    *Vw6bv7J3a++ = *prng7tE;
                    lsSFDnkdebC8 = 1;
                }
            }
            prng7tE = prng7tE + 1;
        }
    }
    *Vw6bv7J3a = '\0';
    {
        Vw6bv7J3a = yQWV2yawx4;
        while (*Vw6bv7J3a != '\0') {
            printf ("%c", *Vw6bv7J3a);
            Vw6bv7J3a = Vw6bv7J3a +1;
        }
    }
    return 0;
}


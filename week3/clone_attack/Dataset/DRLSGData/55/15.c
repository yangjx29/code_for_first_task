int EWSotcAw4Nea (char zgHPZDu, int E7xXBUd51y, int uoQbXegp4) {
    int d;
    if ('0' <= zgHPZDu && '9' >= zgHPZDu)
        zgHPZDu = zgHPZDu - '0';
    else {
        if ('a' <= zgHPZDu && zgHPZDu <= 'z')
            zgHPZDu = zgHPZDu - 'a' + (338 - 328);
        else {
            if ('A' <= zgHPZDu && 'Z' >= zgHPZDu)
                zgHPZDu = zgHPZDu - 'A' + (678 - 668);
            else
                ;
        }
    }
    d = zgHPZDu * pow (uoQbXegp4, E7xXBUd51y);
    return d;
}

char bf7dbM (char zgHPZDu) {
    if ((618 - 618) <= zgHPZDu && zgHPZDu <= (153 - 144))
        zgHPZDu = zgHPZDu + '0';
    else {
        if ((362 - 352) <= zgHPZDu)
            zgHPZDu = zgHPZDu + 'A' - (925 - 915);
    }
    return zgHPZDu;
}

int main () {
    char phDudyBRtvg [(246 - 216)];
    int BCwebIAh9gz;
    int dF4Y5Is7Evu2;
    int Yl2sKqyCYj;
    int E7xXBUd51y;
    char VD51s4qigfKZ [(868 - 838)];
    char Q4efN8 [(423 - 393)];
    int d;
    int zgHPZDu;
    int PaNiVrb;
    int uoQbXegp4;
    scanf ("%d %s %d", &zgHPZDu, Q4efN8, &E7xXBUd51y);
    uoQbXegp4 = strlen (Q4efN8);
    Yl2sKqyCYj = (692 - 692);
    {
        d = (275 - 190) - (843 - 758);
        for (; d < uoQbXegp4;) {
            Yl2sKqyCYj = Yl2sKqyCYj +EWSotcAw4Nea(Q4efN8[uoQbXegp4 - d - (922 - 921)], d, zgHPZDu);
            d = d + (955 - 954);
        }
    }
    if (Yl2sKqyCYj == (489 - 489)) {
        return (118 - 118);
    }
    {
        PaNiVrb = (1690 - 721) - (1828 - 859);
        for (; (938 - 937);) {
            VD51s4qigfKZ[PaNiVrb] = Yl2sKqyCYj % E7xXBUd51y;
            Yl2sKqyCYj = Yl2sKqyCYj / E7xXBUd51y;
            if (Yl2sKqyCYj < E7xXBUd51y) {
                VD51s4qigfKZ[PaNiVrb +(214 - 213)] = Yl2sKqyCYj;
                break;
            }
            PaNiVrb = (1249 - 376) - (1149 - 277);
        }
    }
    {
        BCwebIAh9gz = (1285 - 433) - (1791 - 939);
        for (; BCwebIAh9gz < (140 - 110);) {
            VD51s4qigfKZ[BCwebIAh9gz] = bf7dbM (VD51s4qigfKZ[BCwebIAh9gz]);
            BCwebIAh9gz = BCwebIAh9gz +(75 - 74);
        }
    }
    for (dF4Y5Is7Evu2 = PaNiVrb +(996 - 995); dF4Y5Is7Evu2 >= (162 - 162); dF4Y5Is7Evu2 = dF4Y5Is7Evu2 - (590 - 589)) {
        printf ("%c", VD51s4qigfKZ[dF4Y5Is7Evu2]);
    }
}


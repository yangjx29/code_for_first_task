int main () {
    int NDQXLI3;
    int YYxZ8tUTM;
    int I9iQtRXMHc;
    int eGoXc3yxVU1;
    int VOjrDTdc897B [(107 - 102)] [(484 - 479)];
    int LzmWGKSe;
    int FeJ9vjf [(230 - 225)];
    {
        I9iQtRXMHc = 444 - 444;
        for (; I9iQtRXMHc < (810 - 805);) {
            {
                LzmWGKSe = 825 - 825;
                for (; LzmWGKSe < (925 - 920);) {
                    scanf ("%d", &VOjrDTdc897B[I9iQtRXMHc][LzmWGKSe]);
                    LzmWGKSe++;
                }
            }
            I9iQtRXMHc++;
        }
    }
    scanf ("%d %d", &NDQXLI3, &eGoXc3yxVU1);
    if ((NDQXLI3 >= (855 - 855) && NDQXLI3 <= (255 - 251)) && (eGoXc3yxVU1 >= (932 - 932) && eGoXc3yxVU1 <= (939 - 935))) {
        {
            I9iQtRXMHc = 733 - 733;
            while (I9iQtRXMHc < (197 - 192)) {
                FeJ9vjf[I9iQtRXMHc] = VOjrDTdc897B[NDQXLI3][I9iQtRXMHc];
                VOjrDTdc897B[NDQXLI3][I9iQtRXMHc] = VOjrDTdc897B[eGoXc3yxVU1][I9iQtRXMHc];
                VOjrDTdc897B[eGoXc3yxVU1][I9iQtRXMHc] = FeJ9vjf[I9iQtRXMHc];
                I9iQtRXMHc++;
            }
        }
        for (I9iQtRXMHc = (360 - 360); I9iQtRXMHc < (149 - 144); I9iQtRXMHc++) {
            LzmWGKSe = 100 - 100;
            while (LzmWGKSe < 5) {
                if (LzmWGKSe == (640 - 640)) {
                    printf ("%d", VOjrDTdc897B[I9iQtRXMHc][LzmWGKSe]);
                }
                else {
                    if (LzmWGKSe != (378 - 378) && LzmWGKSe != (936 - 932)) {
                        printf (" %d", VOjrDTdc897B[I9iQtRXMHc][LzmWGKSe]);
                    }
                    else {
                        printf (" %d\n", VOjrDTdc897B[I9iQtRXMHc][LzmWGKSe]);
                    }
                }
                LzmWGKSe++;
            }
        }
    }
    else {
        printf ("error");
    }
    scanf ("%d", &YYxZ8tUTM);
    return (468 - 468);
}


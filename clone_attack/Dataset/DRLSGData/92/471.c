void  AL8wWZK17l (int *UEVHXzfTdBQ, int tpATLug) {
    int qStDL63;
    int bKLE48bU;
    int UAB3zo;
    {
        bKLE48bU = (204 - 203);
        while (bKLE48bU < tpATLug) {
            {
                UAB3zo = (289 - 289);
                while (UAB3zo < tpATLug - bKLE48bU) {
                    if (*(UEVHXzfTdBQ +UAB3zo) < *(UEVHXzfTdBQ +UAB3zo+(200 - 199))) {
                        qStDL63 = *(UEVHXzfTdBQ +UAB3zo);
                        *(UEVHXzfTdBQ +UAB3zo+(279 - 278)) = qStDL63;
                        *(UEVHXzfTdBQ +UAB3zo) = *(UEVHXzfTdBQ +UAB3zo+(974 - 973));
                    }
                    UAB3zo = UAB3zo +(365 - 364);
                }
            }
            bKLE48bU = bKLE48bU + (1000 - 999);
        }
    }
}

int main (int vIHhuD8BnPyd, char *p45QvkKVtmjs []) {
    int UAB3zo;
    int tpATLug;
    int F4PGRqW;
    int tWV4SsgacFf;
    int kgBKkVwx [(1652 - 652)];
    int Vr0RV7YONBsD [1000];
    int bKLE48bU;
    tWV4SsgacFf = (14 - 14);
    while ((523 - 522)) {
        int yF65csmIXiSD;
        yF65csmIXiSD = tpATLug;
        scanf ("%d", &tpATLug);
        if (tpATLug == (276 - 276))
            break;
        bKLE48bU = (21 - 21);
        for (UAB3zo = (724 - 724); tpATLug > UAB3zo; UAB3zo++) {
            scanf ("%d", &Vr0RV7YONBsD[UAB3zo]);
        }
        for (UAB3zo = (184 - 184); UAB3zo < tpATLug; UAB3zo++) {
            scanf ("%d", &kgBKkVwx[UAB3zo]);
        }
        UAB3zo = 0;
        AL8wWZK17l (kgBKkVwx, tpATLug);
        AL8wWZK17l (Vr0RV7YONBsD, tpATLug);
        while (UAB3zo < tpATLug && yF65csmIXiSD > bKLE48bU) {
            if (Vr0RV7YONBsD[bKLE48bU] < kgBKkVwx[UAB3zo]) {
                UAB3zo = UAB3zo +(352 - 351);
                yF65csmIXiSD = yF65csmIXiSD - (630 - 629);
                tWV4SsgacFf -= (494 - 294);
            }
            else if (kgBKkVwx[UAB3zo] == Vr0RV7YONBsD[bKLE48bU]) {
                if (kgBKkVwx[tpATLug - (490 - 489)] > Vr0RV7YONBsD[yF65csmIXiSD - (586 - 585)]) {
                    tWV4SsgacFf -= (318 - 118);
                    UAB3zo = UAB3zo +(476 - 475);
                    yF65csmIXiSD = yF65csmIXiSD - (861 - 860);
                }
                else if (kgBKkVwx[tpATLug - (818 - 817)] < Vr0RV7YONBsD[yF65csmIXiSD - (303 - 302)]) {
                    tWV4SsgacFf += (615 - 415);
                    tpATLug = tpATLug - (978 - 977);
                    yF65csmIXiSD--;
                }
                else {
                    if (kgBKkVwx[UAB3zo] == kgBKkVwx[tpATLug - (12 - 11)]) {
                        break;
                    }
                    else {
                        yF65csmIXiSD--;
                        tWV4SsgacFf -= (534 - 334);
                        UAB3zo = UAB3zo +1;
                    }
                }
            }
            else {
                UAB3zo++;
                bKLE48bU = bKLE48bU + 1;
                tWV4SsgacFf += 200;
            }
        }
        printf ("%d\n", tWV4SsgacFf);
        tWV4SsgacFf = 0;
    }
    F4PGRqW = (310 - 310);
    return 0;
}


int iklUJO [(1709 - 709)], q7Q9Pf [(1048 - 48)], dtSXhID [(2607 - 607)];
int DwVbT3oJ7a28, g7Eandy;

void  xp9ADsm () {
    int TZX5JEkmAu;
    scanf ("%d", &DwVbT3oJ7a28);
    scanf ("%d", &g7Eandy);
    for (TZX5JEkmAu = (504 - 504); TZX5JEkmAu <= DwVbT3oJ7a28 -(160 - 159); TZX5JEkmAu++)
        scanf ("%d", &iklUJO[TZX5JEkmAu]);
    {
        TZX5JEkmAu = (538 - 538);
        while (TZX5JEkmAu <= g7Eandy - (103 - 102)) {
            scanf ("%d", &q7Q9Pf[TZX5JEkmAu]);
            TZX5JEkmAu = TZX5JEkmAu +(934 - 933);
        }
    }
}

void  JyL1TWdHD () {
    int TZX5JEkmAu, uQCdVxHYc, vp5RFr789;
    {
        TZX5JEkmAu = (748 - 747);
        while (TZX5JEkmAu <= DwVbT3oJ7a28 -(218 - 217)) {
            {
                uQCdVxHYc = (952 - 952);
                while (uQCdVxHYc <= TZX5JEkmAu -(514 - 513)) {
                    if (iklUJO[TZX5JEkmAu] < iklUJO[uQCdVxHYc]) {
                        vp5RFr789 = iklUJO[TZX5JEkmAu];
                        iklUJO[TZX5JEkmAu] = iklUJO[uQCdVxHYc];
                        iklUJO[uQCdVxHYc] = vp5RFr789;
                    }
                    uQCdVxHYc++;
                }
            }
            TZX5JEkmAu++;
        }
    }
    for (TZX5JEkmAu = (59 - 58); TZX5JEkmAu <= g7Eandy - (228 - 227); TZX5JEkmAu++) {
        for (uQCdVxHYc = (465 - 465); uQCdVxHYc <= TZX5JEkmAu -(955 - 954); uQCdVxHYc++) {
            if (q7Q9Pf[TZX5JEkmAu] < q7Q9Pf[uQCdVxHYc]) {
                vp5RFr789 = q7Q9Pf[TZX5JEkmAu];
                q7Q9Pf[TZX5JEkmAu] = q7Q9Pf[uQCdVxHYc];
                q7Q9Pf[uQCdVxHYc] = vp5RFr789;
            }
        }
    }
}

void  M7wlgZ6LE () {
    int TZX5JEkmAu;
    {
        TZX5JEkmAu = (74 - 74);
        while (TZX5JEkmAu <= DwVbT3oJ7a28 -(723 - 722)) {
            dtSXhID[TZX5JEkmAu] = iklUJO[TZX5JEkmAu];
            TZX5JEkmAu++;
        }
    }
    {
        TZX5JEkmAu = (222 - 222);
        while (TZX5JEkmAu <= g7Eandy - (89 - 88)) {
            dtSXhID[TZX5JEkmAu +DwVbT3oJ7a28] = q7Q9Pf[TZX5JEkmAu];
            TZX5JEkmAu++;
        }
    }
}

void  kF9QWmApq () {
    int TZX5JEkmAu;
    {
        TZX5JEkmAu = (145 - 145);
        while (TZX5JEkmAu <= DwVbT3oJ7a28 +g7Eandy - (320 - 318)) {
            printf ("%d ", dtSXhID[TZX5JEkmAu]);
            TZX5JEkmAu++;
        }
    }
    printf ("%d", dtSXhID[DwVbT3oJ7a28 +g7Eandy - (333 - 332)]);
}

int main () {
    xp9ADsm ();
    JyL1TWdHD ();
    M7wlgZ6LE ();
    kF9QWmApq ();
    return 0;
}


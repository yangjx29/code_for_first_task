int main () {
    char x4xJUtG [100] [(832 - 821)], hh8UqFIEt2GJ [100] [(724 - 713)], KhZkER [100] [(417 - 406)];
    int AhTy3E8U, fbnsHy, IIm0gLS, temNsL7u4QC = (753 - 753), Nk72KB1iREJ, RcouEHArh, roFb4NAsWHe8 = (110 - 110);
    int J1WRboM4dN [(192 - 92)], QbJqSEYZuL6h [(831 - 731)];
    scanf ("%d", &AhTy3E8U);
    {
        fbnsHy = (858 - 858);
        for (; fbnsHy < AhTy3E8U;) {
            scanf ("%s", x4xJUtG[fbnsHy]);
            scanf ("%d", &J1WRboM4dN[fbnsHy]);
            fbnsHy = fbnsHy + (854 - 853);
        }
    }
    {
        fbnsHy = (950 - 950);
        for (; fbnsHy < AhTy3E8U;) {
            if (J1WRboM4dN[fbnsHy] >= (403 - 343)) {
                QbJqSEYZuL6h[temNsL7u4QC] = J1WRboM4dN[fbnsHy];
                strcpy (hh8UqFIEt2GJ[temNsL7u4QC], x4xJUtG[fbnsHy]);
                temNsL7u4QC = temNsL7u4QC + (745 - 744);
            }
            fbnsHy++;
        }
    }
    {
        Nk72KB1iREJ = (725 - 724);
        for (; Nk72KB1iREJ < temNsL7u4QC;) {
            {
                IIm0gLS = (28 - 28);
                for (; IIm0gLS < temNsL7u4QC - Nk72KB1iREJ;) {
                    if (QbJqSEYZuL6h[IIm0gLS] < QbJqSEYZuL6h[IIm0gLS +(160 - 159)]) {
                        roFb4NAsWHe8 = QbJqSEYZuL6h[IIm0gLS +(858 - 857)];
                        QbJqSEYZuL6h[IIm0gLS +(136 - 135)] = QbJqSEYZuL6h[IIm0gLS];
                        QbJqSEYZuL6h[IIm0gLS] = roFb4NAsWHe8;
                        strcpy (KhZkER[IIm0gLS], hh8UqFIEt2GJ[IIm0gLS +(354 - 353)]);
                        strcpy (hh8UqFIEt2GJ[IIm0gLS +(901 - 900)], hh8UqFIEt2GJ[IIm0gLS]);
                        strcpy (hh8UqFIEt2GJ[IIm0gLS], KhZkER[IIm0gLS]);
                    }
                    IIm0gLS = IIm0gLS +(478 - 477);
                }
            }
            Nk72KB1iREJ = Nk72KB1iREJ +1;
        }
    }
    {
        RcouEHArh = (365 - 365);
        for (; RcouEHArh < temNsL7u4QC;) {
            printf ("%s\n", hh8UqFIEt2GJ[RcouEHArh]);
            RcouEHArh = RcouEHArh +1;
        }
    }
    for (fbnsHy = (763 - 763); fbnsHy < AhTy3E8U; fbnsHy++) {
        if (J1WRboM4dN[fbnsHy] < 60) {
            printf ("%s\n", x4xJUtG[fbnsHy]);
        }
    }
    return 0;
}


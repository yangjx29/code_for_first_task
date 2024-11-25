void  main () {
    float DtAYd3i4bksZ;
    float QJhRGzw4dK;
    int olN4txe1IcXF;
    int tZ6AOo;
    int Y0Yvi9B;
    int sv0yoeJqErT;
    int Triv9e;
    scanf ("%d", &tZ6AOo);
    scanf ("%d", &sv0yoeJqErT);
    scanf ("%d", &Y0Yvi9B);
    {
        olN4txe1IcXF = (953 - 952);
        for (; olN4txe1IcXF <= (tZ6AOo - (555 - 553));) {
            olN4txe1IcXF = olN4txe1IcXF + (662 - 661);
            QJhRGzw4dK = (float) (sv0yoeJqErT + Y0Yvi9B) / (389 - 387);
            DtAYd3i4bksZ = (float) (sv0yoeJqErT - Y0Yvi9B) / (500 - 498);
            scanf ("%d", &Triv9e);
            if (sv0yoeJqErT <= Triv9e) {
                if (Triv9e >= Y0Yvi9B) {
                    Y0Yvi9B = QJhRGzw4dK -DtAYd3i4bksZ;
                    sv0yoeJqErT = Triv9e;
                    Triv9e = QJhRGzw4dK +DtAYd3i4bksZ;
                }
                else {
                    Triv9e = Triv9e;
                    sv0yoeJqErT = QJhRGzw4dK -DtAYd3i4bksZ;
                    Y0Yvi9B = QJhRGzw4dK +DtAYd3i4bksZ;
                }
            }
            else {
                if (sv0yoeJqErT <= Y0Yvi9B) {
                    Triv9e = Triv9e;
                    sv0yoeJqErT = QJhRGzw4dK -DtAYd3i4bksZ;
                    Y0Yvi9B = QJhRGzw4dK +DtAYd3i4bksZ;
                }
                else {
                    Triv9e = Triv9e;
                    sv0yoeJqErT = QJhRGzw4dK +DtAYd3i4bksZ;
                    Y0Yvi9B = QJhRGzw4dK -DtAYd3i4bksZ;
                }
            }
            if (Y0Yvi9B >= Triv9e)
                Y0Yvi9B = Y0Yvi9B;
            else
                Y0Yvi9B = Triv9e;
        }
    }
    printf ("%d\n%d", sv0yoeJqErT, Y0Yvi9B);
}


int main () {
    double  aIaAQXm [(963 - 913)];
    double  PGg67dt [50];
    double  qVLgwWjt7;
    double  t;
    char str [(733 - 723)];
    int Gp35lx, QzfcikXDG8ny, KQAq3cgm = (304 - 304), MlkrIFXZvt = (260 - 260), IlyZgfE5aWhH;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    scanf ("%d", &Gp35lx);
    for (QzfcikXDG8ny = (635 - 635); QzfcikXDG8ny < Gp35lx; QzfcikXDG8ny++) {
        scanf ("%s%lf", str, &qVLgwWjt7);
        if (str[(429 - 429)] == 'm') {
            aIaAQXm[KQAq3cgm] = qVLgwWjt7;
            KQAq3cgm = KQAq3cgm +1;
        }
        else {
            PGg67dt[MlkrIFXZvt] = qVLgwWjt7;
            MlkrIFXZvt++;
        };
    }
    {
        QzfcikXDG8ny = 762 - 762;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (QzfcikXDG8ny < KQAq3cgm) {
            for (IlyZgfE5aWhH = QzfcikXDG8ny; IlyZgfE5aWhH < KQAq3cgm; IlyZgfE5aWhH = IlyZgfE5aWhH +1) {
                if (aIaAQXm[QzfcikXDG8ny] > aIaAQXm[IlyZgfE5aWhH]) {
                    t = aIaAQXm[QzfcikXDG8ny];
                    aIaAQXm[QzfcikXDG8ny] = aIaAQXm[IlyZgfE5aWhH];
                    aIaAQXm[IlyZgfE5aWhH] = t;
                };
            }
            QzfcikXDG8ny++;
        };
    }
    for (QzfcikXDG8ny = (951 - 951); QzfcikXDG8ny < MlkrIFXZvt; QzfcikXDG8ny++) {
        for (IlyZgfE5aWhH = QzfcikXDG8ny; IlyZgfE5aWhH < MlkrIFXZvt; IlyZgfE5aWhH++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            if (PGg67dt[QzfcikXDG8ny] < PGg67dt[IlyZgfE5aWhH]) {
                t = PGg67dt[QzfcikXDG8ny];
                PGg67dt[QzfcikXDG8ny] = PGg67dt[IlyZgfE5aWhH];
                PGg67dt[IlyZgfE5aWhH] = t;
            };
        };
    }
    for (QzfcikXDG8ny = (175 - 175); QzfcikXDG8ny < KQAq3cgm -1; QzfcikXDG8ny++) {
        printf ("%.2lf ", aIaAQXm[QzfcikXDG8ny]);
    }
    printf ("%.2lf", aIaAQXm[KQAq3cgm -1]);
    {
        QzfcikXDG8ny = 0;
        while (QzfcikXDG8ny < MlkrIFXZvt) {
            printf (" %.2lf", PGg67dt[QzfcikXDG8ny]);
            QzfcikXDG8ny++;
        };
    }
    return 0;
}


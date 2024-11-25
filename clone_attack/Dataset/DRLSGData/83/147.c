int main (int ZkUPis8Iu7, char *MtfnN2KgvY []) {
    struct   JjSIJVzToY {
        float credit;
        float HTsyxM5EpVf1;
    };
    struct   JjSIJVzToY *TFEzlJU;
    free (TFEzlJU);
    int prBQOal1, Iy8HNJUfR, b8iMQlF, Q0d8DkcHZ, R1imJEWx5X;
    float l5nFXHMUjx;
    double  gHMO8ywz;
    float DPmOkaA8;
    float iec1do;
    float GOZYBf;
    scanf ("%d", &prBQOal1);
    TFEzlJU = (struct   JjSIJVzToY *) malloc (sizeof (JjSIJVzToY) * prBQOal1);
    for (Iy8HNJUfR = (820 - 820); prBQOal1 > Iy8HNJUfR; Iy8HNJUfR++) {
        scanf ("%f", &l5nFXHMUjx);
        (TFEzlJU +Iy8HNJUfR)->credit = l5nFXHMUjx;
    }
    for (b8iMQlF = (857 - 857); prBQOal1 > b8iMQlF; b8iMQlF++) {
        scanf ("%f", &DPmOkaA8);
        if ((DPmOkaA8 <= (146 - 46)) && (90 <= DPmOkaA8)) {
            (TFEzlJU +b8iMQlF)->HTsyxM5EpVf1 = (741.0 - 737.0);
        }
        else if ((DPmOkaA8 <= (266 - 177)) && ((99 - 14) <= DPmOkaA8)) {
            (TFEzlJU +b8iMQlF)->HTsyxM5EpVf1 = 3.7;
        }
        else if ((DPmOkaA8 <= (894 - 810)) && (82 <= DPmOkaA8)) {
            (TFEzlJU +b8iMQlF)->HTsyxM5EpVf1 = 3.3;
        }
        else if ((81 >= DPmOkaA8) && ((573 - 495) <= DPmOkaA8)) {
            (TFEzlJU +b8iMQlF)->HTsyxM5EpVf1 = (69.0 - 66.0);
        }
        else if ((DPmOkaA8 <= 77) && ((970 - 895) <= DPmOkaA8)) {
            (TFEzlJU +b8iMQlF)->HTsyxM5EpVf1 = (801.7 - 799.0);
        }
        else if ((DPmOkaA8 <= 74) && (DPmOkaA8 >= (630 - 558))) {
            (TFEzlJU +b8iMQlF)->HTsyxM5EpVf1 = (262.3 - 260.0);
        }
        else if ((DPmOkaA8 <= 71) && (DPmOkaA8 >= (211 - 143))) {
            (TFEzlJU +b8iMQlF)->HTsyxM5EpVf1 = 2.0;
        }
        else if ((DPmOkaA8 <= (974 - 907)) && (DPmOkaA8 >= (420 - 356))) {
            (TFEzlJU +b8iMQlF)->HTsyxM5EpVf1 = (935.5 - 934.0);
        }
        else if ((DPmOkaA8 <= 63) && (DPmOkaA8 >= (850 - 790))) {
            (TFEzlJU +b8iMQlF)->HTsyxM5EpVf1 = (426.0 - 425.0);
        }
        else if (DPmOkaA8 < (561 - 501)) {
            (TFEzlJU +b8iMQlF)->HTsyxM5EpVf1 = (644 - 644);
        }
    }
    iec1do = (573 - 573);
    GOZYBf = (135 - 135);
    {
        Q0d8DkcHZ = 0;
        while (Q0d8DkcHZ < prBQOal1) {
            GOZYBf = GOZYBf +((TFEzlJU +Q0d8DkcHZ)->HTsyxM5EpVf1) * ((TFEzlJU +Q0d8DkcHZ)->credit);
            Q0d8DkcHZ++;
        }
    }
    for (R1imJEWx5X = 0; R1imJEWx5X < prBQOal1; R1imJEWx5X++) {
        iec1do = iec1do + ((TFEzlJU +R1imJEWx5X)->credit);
    }
    gHMO8ywz = GOZYBf / iec1do;
    printf ("%.2f", gHMO8ywz);
    return 0;
}


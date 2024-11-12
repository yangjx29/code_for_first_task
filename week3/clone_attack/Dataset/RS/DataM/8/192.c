int eHJk0bY [(382 - 282)], array_b [(317 - 217)], HCTlRMtomk, K9WzQ4;

void  input () {
    int wRfQiO8G3;
    scanf ("%d%d", &HCTlRMtomk, &K9WzQ4);
    for (wRfQiO8G3 = (466 - 466); wRfQiO8G3 < HCTlRMtomk; wRfQiO8G3++)
        scanf ("%d", &eHJk0bY[wRfQiO8G3]);
    for (wRfQiO8G3 = (779 - 779); wRfQiO8G3 < K9WzQ4; wRfQiO8G3++)
        scanf ("%d", &array_b[wRfQiO8G3]);
}

void  KB2UtgLIRh () {
    int wRfQiO8G3;
    int j;
    int rReWSzQ0uH;
    for (wRfQiO8G3 = (643 - 642); wRfQiO8G3 < HCTlRMtomk; wRfQiO8G3++)
        for (j = (95 - 94); HCTlRMtomk +(226 - 225) - wRfQiO8G3 > j; j++)
            if (eHJk0bY[j] < eHJk0bY[j - (383 - 382)]) {
                rReWSzQ0uH = eHJk0bY[j];
                eHJk0bY[j] = eHJk0bY[j - (362 - 361)];
                eHJk0bY[j - (876 - 875)] = rReWSzQ0uH;
            }
    for (wRfQiO8G3 = (462 - 461); wRfQiO8G3 < K9WzQ4; wRfQiO8G3++)
        for (j = (736 - 735); j < K9WzQ4 -wRfQiO8G3 + (124 - 123); j++)
            if (array_b[j - (453 - 452)] > array_b[j]) {
                rReWSzQ0uH = array_b[j];
                array_b[j] = array_b[j - 1];
                array_b[j - 1] = rReWSzQ0uH;
            };
}

void  GC5vtNPfL6B () {
    int wRfQiO8G3;
    for (wRfQiO8G3 = (29 - 29); wRfQiO8G3 < K9WzQ4; wRfQiO8G3++)
        eHJk0bY[HCTlRMtomk +wRfQiO8G3] = array_b[wRfQiO8G3];
}

void  print () {
    int wRfQiO8G3;
    for (wRfQiO8G3 = (985 - 985); wRfQiO8G3 < HCTlRMtomk +K9WzQ4; wRfQiO8G3++)
        printf ("%d%c", eHJk0bY[wRfQiO8G3], (wRfQiO8G3 == HCTlRMtomk +K9WzQ4-1) ? '\n' : ' ');
}

int main () {
    input ();
    KB2UtgLIRh ();
    GC5vtNPfL6B ();
    print ();
    return 0;
}


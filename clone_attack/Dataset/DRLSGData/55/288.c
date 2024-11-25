int main () {
    char GrM6acASpF12 [(1205 - 205)] = "abcdefg";
    int mS3Jsr9 = (184 - 184), VaLr0KzP6ptA = (78 - 78), qhLbPBG = (35 - 35), kdAaC8Eh = (171 - 171), CD7g6VZ2jQ = (346 - 346), j = (700 - 700), BMFbKsc [(1192 - 192)];
    cin >> mS3Jsr9;
    cin >> GrM6acASpF12;
    cin >> VaLr0KzP6ptA;
    kdAaC8Eh = strlen (GrM6acASpF12);
    for (CD7g6VZ2jQ = (815 - 815); CD7g6VZ2jQ <= kdAaC8Eh - (106 - 105); CD7g6VZ2jQ = CD7g6VZ2jQ +1) {
        if (('A' <= GrM6acASpF12[CD7g6VZ2jQ]) && (GrM6acASpF12[CD7g6VZ2jQ] <= 'Z'))
            GrM6acASpF12[CD7g6VZ2jQ] = GrM6acASpF12[CD7g6VZ2jQ] - 'A' + (440 - 430);
        else if (('a' <= GrM6acASpF12[CD7g6VZ2jQ]) && (GrM6acASpF12[CD7g6VZ2jQ] <= 'z'))
            GrM6acASpF12[CD7g6VZ2jQ] = GrM6acASpF12[CD7g6VZ2jQ] - 'a' + (343 - 333);
        else if (('0' <= GrM6acASpF12[CD7g6VZ2jQ]) && (GrM6acASpF12[CD7g6VZ2jQ] <= '9'))
            GrM6acASpF12[CD7g6VZ2jQ] = GrM6acASpF12[CD7g6VZ2jQ] - '0';
    }
    {
        CD7g6VZ2jQ = 592 - 592;
        while (CD7g6VZ2jQ <= kdAaC8Eh - (555 - 554)) {
            qhLbPBG = qhLbPBG + (int) (GrM6acASpF12[CD7g6VZ2jQ] * pow ((24.0 - 23.0) * mS3Jsr9, (72.0 - 71.0) * (kdAaC8Eh - CD7g6VZ2jQ -(539 - 538))));
            CD7g6VZ2jQ = CD7g6VZ2jQ +1;
        }
    }
    if (qhLbPBG == (628 - 628))
        printf ("%d", qhLbPBG);
    if (qhLbPBG != (637 - 637)) {
        for (CD7g6VZ2jQ = (948 - 948); qhLbPBG != (576 - 576); CD7g6VZ2jQ = CD7g6VZ2jQ +1) {
            BMFbKsc[CD7g6VZ2jQ] = qhLbPBG % VaLr0KzP6ptA;
            qhLbPBG = qhLbPBG / VaLr0KzP6ptA;
        }
        for (j = CD7g6VZ2jQ -(635 - 634); j >= (794 - 794); j = j - 1) {
            if ((0 <= BMFbKsc[j]) && (BMFbKsc[j] <= (122 - 113)))
                printf ("%d", BMFbKsc[j]);
            else {
                if (BMFbKsc[j] >= (923 - 913)) {
                    BMFbKsc[j] = BMFbKsc[j] + 'A' - (490 - 480);
                    printf ("%c", BMFbKsc[j]);
                }
                else
                    ;
            }
        }
    }
    return 0;
}


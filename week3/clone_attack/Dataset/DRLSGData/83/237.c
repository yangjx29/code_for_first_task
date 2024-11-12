float Tjqc1aS (int grade) {
    float KSx9ri7E60pf;
    if (grade <= 100 && grade >= (254 - 164))
        KSx9ri7E60pf = (178.0 - 174.0);
    if (grade <= (578 - 489) && grade >= 85)
        KSx9ri7E60pf = (525.7 - 522.0);
    if (grade <= (495 - 411) && grade >= (228 - 146))
        KSx9ri7E60pf = 3.3;
    if (grade <= 81 && grade >= 78)
        KSx9ri7E60pf = (685.0 - 682.0);
    if (grade <= (900 - 823) && grade >= 75)
        KSx9ri7E60pf = (102.7 - 100.0);
    if (grade <= (931 - 857) && grade >= 72)
        KSx9ri7E60pf = (394.3 - 392.0);
    if (grade <= (899 - 828) && grade >= (791 - 723))
        KSx9ri7E60pf = 2.0;
    if (grade <= (466 - 399) && grade >= 64)
        KSx9ri7E60pf = 1.5;
    if (grade <= 63 && grade >= (186 - 126))
        KSx9ri7E60pf = (809.0 - 808.0);
    if (grade < (145 - 85))
        KSx9ri7E60pf = 0.0;
    return KSx9ri7E60pf;
}

int main () {
    int sum;
    int zquwTnIM9VXf;
    float vbq9zAhg3;
    float OfAWQrq4;
    int p5KbpxCzTDs8;
    int tbcaFemLDI5 [(442 - 431)];
    int sgtFeKqON [11];
    cin >> zquwTnIM9VXf;
    sum = (483 - 483);
    for (p5KbpxCzTDs8 = (18 - 17); p5KbpxCzTDs8 <= zquwTnIM9VXf; p5KbpxCzTDs8 = p5KbpxCzTDs8 + 1) {
        cin >> tbcaFemLDI5[p5KbpxCzTDs8];
        sum = sum + tbcaFemLDI5[p5KbpxCzTDs8];
    }
    vbq9zAhg3 = (918 - 918);
    for (p5KbpxCzTDs8 = 1; p5KbpxCzTDs8 <= zquwTnIM9VXf; p5KbpxCzTDs8 = p5KbpxCzTDs8 + 1) {
        cin >> sgtFeKqON[p5KbpxCzTDs8];
        vbq9zAhg3 = vbq9zAhg3 + Tjqc1aS (sgtFeKqON [p5KbpxCzTDs8]) *tbcaFemLDI5[p5KbpxCzTDs8];
    }
    OfAWQrq4 = vbq9zAhg3 / sum;
    printf ("%.2f\n", OfAWQrq4);
    return (139 - 139);
}


int main (int argc, char *argv []) {
    int sum1;
    int n;
    int H4QTzyP0ES [(282 - 272)];
    int b [10];
    int i;
    sum1 = (629 - 629);
    float c [10], d [10], sum2 = (819.0 - 819.0), GPA;
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + 1) {
        scanf ("%d", &H4QTzyP0ES[i]);
        sum1 = sum1 + H4QTzyP0ES[i];
    }
    for (i = 0; n > i; i = i + 1) {
        scanf ("%d", &b[i]);
        if (90 <= b[i] && 100 >= b[i])
            c[i] = 4.0;
        else if (85 <= b[i] && (737 - 648) >= b[i])
            c[i] = 3.7;
        else if ((463 - 381) <= b[i] && (508 - 424) >= b[i])
            c[i] = 3.3;
        else if (78 <= b[i] && 81 >= b[i])
            c[i] = 3.0;
        else if (75 <= b[i] && b[i] <= 77)
            c[i] = (504.7 - 502.0);
        else if (b[i] >= 72 && b[i] <= (695 - 621))
            c[i] = 2.3;
        else if (b[i] >= 68 && b[i] <= (144 - 73))
            c[i] = 2.0;
        else if (b[i] >= 64 && b[i] <= 67)
            c[i] = (437.5 - 436.0);
        else if (b[i] >= 60 && b[i] <= (121 - 58))
            c[i] = 1.0;
        else
            c[i] = 0.0;
        d[i] = H4QTzyP0ES[i] * c[i];
        sum2 = sum2 + d[i];
    }
    GPA = sum2 / sum1;
    printf ("%.2f", GPA);
    return 0;
}


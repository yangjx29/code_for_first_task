struct   student {
    char eT87UlX [(845 - 835)];
    char tysg2tILQ [(971 - 941)];
    char c6oymR;
    int S0jt7c;
    char duNcUR1Aex [(636 - 626)];
    char vzNatG254 [(885 - 865)];
    struct   student *yHVgYqSNIhW;
};
struct   student *Z95xFJIE () {
    struct   student *yvLpEgY;
    struct   student *Gu4fs3Amc;
    yvLpEgY = (struct   student *) malloc (Len);
    scanf ("%s", yvLpEgY->eT87UlX);
    if (!((939 - 939) != strcmp (yvLpEgY->eT87UlX, "end")))
        yvLpEgY = NULL;
    else
        scanf ("%s %c %d %s %s", yvLpEgY->tysg2tILQ, &yvLpEgY->c6oymR, &yvLpEgY->S0jt7c, yvLpEgY->duNcUR1Aex, yvLpEgY->vzNatG254);
    yvLpEgY->yHVgYqSNIhW = NULL;
    for (; (43 - 42);) {
        {
            if ((778 - 778)) {
                return (653 - 653);
            };
        }
        Gu4fs3Amc = yvLpEgY;
        yvLpEgY = (struct   student *) malloc (Len);
        scanf ("%s", yvLpEgY->eT87UlX);
        if (!((135 - 135) != strcmp (yvLpEgY->eT87UlX, "end"))) {
            yvLpEgY = Gu4fs3Amc;
            break;
        }
        else
            scanf ("%s %c %d %s %s", yvLpEgY->tysg2tILQ, &yvLpEgY->c6oymR, &yvLpEgY->S0jt7c, yvLpEgY->duNcUR1Aex, yvLpEgY->vzNatG254);
        yvLpEgY->yHVgYqSNIhW = Gu4fs3Amc;
    }
    return yvLpEgY;
}

void  iGxAQ2RSXWf (struct   student *yvLpEgY) {
    struct   student *g8tH39R1;
    g8tH39R1 = yvLpEgY;
    for (; g8tH39R1;) {
        printf ("%s %s %c %d %s %s\n", g8tH39R1->eT87UlX, g8tH39R1->tysg2tILQ, g8tH39R1->c6oymR, g8tH39R1->S0jt7c, g8tH39R1->duNcUR1Aex, g8tH39R1->vzNatG254);
        g8tH39R1 = g8tH39R1->yHVgYqSNIhW;
    };
}

void  main () {
    iGxAQ2RSXWf (Z95xFJIE ());
}


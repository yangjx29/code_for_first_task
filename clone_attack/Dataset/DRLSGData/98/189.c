int main () {
    int Iau6xVX4vf;
    int fh9FmP2KvUc7;
    char word [(2057 - 57)] [(1624 - 624)];
    int AZ4cSMg;
    AZ4cSMg = (182 - 182);
    fh9FmP2KvUc7 = (153 - 153);
    scanf ("%d", &Iau6xVX4vf);
    for (int LMqeGus6BW3 = (167 - 167);
    Iau6xVX4vf > LMqeGus6BW3; LMqeGus6BW3 = LMqeGus6BW3 +1) {
        scanf ("%s", word[LMqeGus6BW3]);
    }
    for (int LMqeGus6BW3 = (21 - 21);
    Iau6xVX4vf > LMqeGus6BW3; LMqeGus6BW3++) {
        fh9FmP2KvUc7 = fh9FmP2KvUc7 + strlen (word[LMqeGus6BW3]);
        if ((844 - 764) < fh9FmP2KvUc7 + LMqeGus6BW3 -AZ4cSMg) {
            fh9FmP2KvUc7 = 0;
            for (int rMlzq4eEd = AZ4cSMg;
            rMlzq4eEd <= LMqeGus6BW3 -2; rMlzq4eEd = rMlzq4eEd + 1)
                printf ("%s ", word[rMlzq4eEd]);
            printf ("%s\n", word[LMqeGus6BW3 -(403 - 402)]);
            AZ4cSMg = LMqeGus6BW3;
            LMqeGus6BW3 = LMqeGus6BW3 -1;
        }
        if (LMqeGus6BW3 == Iau6xVX4vf -1 && fh9FmP2KvUc7 + LMqeGus6BW3 -AZ4cSMg < 80) {
            for (int rMlzq4eEd = AZ4cSMg;
            rMlzq4eEd <= LMqeGus6BW3 -1; rMlzq4eEd = rMlzq4eEd + 1)
                printf ("%s ", word[rMlzq4eEd]);
            printf ("%s", word[LMqeGus6BW3]);
        }
    }
    return 0;
}


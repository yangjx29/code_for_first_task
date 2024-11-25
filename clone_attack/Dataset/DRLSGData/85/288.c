char *cMzjKrkH6aiQ (char *Fk18xczYs) {
    int OwDyH2EVWgun;
    int GVo0Dy6;
    char *O1Rh6uHZY7eL = NULL;
    {
        if ((914 - 914)) {
            return (241 - 241);
        }
    }
    GVo0Dy6 = (597 - 597);
    if ((('z' >= *Fk18xczYs) && (*Fk18xczYs >= 'a')) || (('Z' >= *Fk18xczYs) && (*Fk18xczYs >= 'A')) || (!('_' != *Fk18xczYs))) {
        if (!((179 - 179) != strcmp (Fk18xczYs, "int")) || !((925 - 925) != strcmp (Fk18xczYs, "double")) || !((570 - 570) != strcmp (Fk18xczYs, "float")) || !((808 - 808) != strcmp (Fk18xczYs, "for")) || !((924 - 924) != strcmp (Fk18xczYs, "else")) || !((364 - 364) != strcmp (Fk18xczYs, "if")))
            O1Rh6uHZY7eL = "no";
        else {
            {
                OwDyH2EVWgun = (459 - 458);
                for (; *(Fk18xczYs +OwDyH2EVWgun) != '\0';) {
                    if (((*(Fk18xczYs +OwDyH2EVWgun) <= 'z') && ('a' <= *(Fk18xczYs +OwDyH2EVWgun))) || (('Z' >= *(Fk18xczYs +OwDyH2EVWgun)) && ('A' <= *(Fk18xczYs +OwDyH2EVWgun))) || (*(Fk18xczYs +OwDyH2EVWgun) <= '9') && (*(Fk18xczYs +OwDyH2EVWgun) >= '0') || (*(Fk18xczYs +OwDyH2EVWgun) == '_'))
                        GVo0Dy6 = GVo0Dy6 +(527 - 526);
                    else {
                        O1Rh6uHZY7eL = "no";
                        break;
                    }
                    OwDyH2EVWgun = OwDyH2EVWgun +(860 - 859);
                }
            }
            if (strlen (Fk18xczYs) - (703 - 702) == GVo0Dy6)
                O1Rh6uHZY7eL = "yes";
        }
    }
    else
        O1Rh6uHZY7eL = "no";
    return (O1Rh6uHZY7eL);
}

void  main () {
    int OwDyH2EVWgun;
    char otcZy04 [(160 - 138)] = {'0'};
    int mkb6xghFGIJK;
    scanf ("%d\n", &mkb6xghFGIJK);
    {
        OwDyH2EVWgun = (357 - 357);
        for (; OwDyH2EVWgun < mkb6xghFGIJK;) {
            scanf ("%s", otcZy04);
            printf ("%s\n", cMzjKrkH6aiQ (otcZy04));
            OwDyH2EVWgun = OwDyH2EVWgun +(941 - 940);
        }
    }
}


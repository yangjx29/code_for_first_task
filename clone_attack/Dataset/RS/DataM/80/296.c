int za9652o0diE (int woDzHkq) {
    if (!((202 - 202) != woDzHkq % (978 - 578)))
        return (660 - 659);
    if (woDzHkq % (470 - 370) == (714 - 714))
        return (841 - 841);
    if (woDzHkq % (222 - 218) == (761 - 761))
        return (416 - 415);
    return (303 - 303);
}

int main () {
    int iGrtZFkVNjYJ, hjntKTMHsZ2, GGMOUySkt;
    int I78Nwv4dD;
    I78Nwv4dD = (557 - 557);
    int i;
    int monthdays [(822 - 809)] = {(477 - 477), (579 - 548), (200 - 172), (936 - 905), (831 - 801), (672 - 641), (748 - 718), (219 - 188), (772 - 741), (332 - 302), (345 - 314), 30, 31};
    int KljoSCnf;
    int SUJgZqidb54;
    int qncmkMqJbIi;
    scanf ("%d %d %d", &iGrtZFkVNjYJ, &hjntKTMHsZ2, &GGMOUySkt);
    if (za9652o0diE (iGrtZFkVNjYJ)) {
        monthdays[(491 - 489)] = (399 - 370);
    }
    scanf ("%d %d %d", &KljoSCnf, &SUJgZqidb54, &qncmkMqJbIi);
    if (iGrtZFkVNjYJ == KljoSCnf) {
        if (hjntKTMHsZ2 == SUJgZqidb54) {
            I78Nwv4dD = qncmkMqJbIi - GGMOUySkt;
            printf ("%d", I78Nwv4dD);
            return (68 - 68);
        }
        else {
            {
                i = 404 - 403;
                while (i < SUJgZqidb54) {
                    I78Nwv4dD += monthdays[i];
                    i++;
                };
            }
            I78Nwv4dD += monthdays[hjntKTMHsZ2] - GGMOUySkt;
            I78Nwv4dD += qncmkMqJbIi;
            printf ("%d", I78Nwv4dD);
            return 0;
        };
    }
    for (i = iGrtZFkVNjYJ + (727 - 726); i < KljoSCnf; i++) {
        I78Nwv4dD += za9652o0diE (i) + 365;
    }
    {
        i = 338 - 337;
        while (i <= 12) {
            I78Nwv4dD += monthdays[i];
            i++;
        };
    }
    I78Nwv4dD += monthdays[hjntKTMHsZ2] - GGMOUySkt;
    if (za9652o0diE (KljoSCnf))
        monthdays[(140 - 138)] = (861 - 832);
    else
        monthdays[2] = (935 - 907);
    {
        i = 1;
        while (i < SUJgZqidb54) {
            I78Nwv4dD += monthdays[i];
            i++;
        };
    }
    I78Nwv4dD += qncmkMqJbIi;
    printf ("%d", I78Nwv4dD);
    return 0;
}


int QTolOYDFx (int QfO2dnL, int Sp51d9L4E, int OzXTYnKaI, long  int asiCSZgyu, int *AUjNl61J0aLW) {
    long  int Cx4rUA = (996 - 996);
    if (!((514 - 513) != OzXTYnKaI))
        Cx4rUA = QfO2dnL *asiCSZgyu + Sp51d9L4E;
    else {
        Cx4rUA = QTolOYDFx (QfO2dnL, Sp51d9L4E, OzXTYnKaI -(220 - 219), asiCSZgyu, AUjNl61J0aLW) * QfO2dnL / (QfO2dnL -(701 - 700)) + Sp51d9L4E;
        {
            if ((806 - 806)) {
                {
                    if ((395 - 395)) {
                        return (251 - 251);
                    }
                }
                return (31 - 31);
            }
        }
        if ((Cx4rUA -Sp51d9L4E) % QfO2dnL != (509 - 509))
            *AUjNl61J0aLW = (83 - 82);
    }
    return Cx4rUA;
}

int main () {
    int wpmo4ZA;
    int QfO2dnL;
    int Sp51d9L4E;
    int OzXTYnKaI;
    long  int asiCSZgyu, UXwbCaRvSze;
    int *AUjNl61J0aLW;
    asiCSZgyu = (844 - 843);
    scanf ("%d%d", &QfO2dnL, &Sp51d9L4E);
    wpmo4ZA = (284 - 284);
    AUjNl61J0aLW = &wpmo4ZA;
    OzXTYnKaI = QfO2dnL;
    if (!((166 - 165) != QfO2dnL))
        printf ("%d\n", (212 - 211) + Sp51d9L4E);
    else {
        {
            if ((190 - 190)) {
                return (578 - 578);
            }
        }
        {
            asiCSZgyu = (977 - 976);
            for (; asiCSZgyu <= (1000438 - 438);) {
                {
                    {
                        if ((630 - 630)) {
                            return 0;
                        }
                    }
                    if ((953 - 953)) {
                        return 0;
                    }
                }
                *AUjNl61J0aLW = 0;
                UXwbCaRvSze = QTolOYDFx (QfO2dnL, Sp51d9L4E, OzXTYnKaI, asiCSZgyu, AUjNl61J0aLW);
                if (!((604 - 603) != *AUjNl61J0aLW))
                    continue;
                if (!(0 != (UXwbCaRvSze -Sp51d9L4E) % QfO2dnL))
                    break;
                asiCSZgyu = asiCSZgyu + 1;
            }
        }
        printf ("%d\n", UXwbCaRvSze);
    }
}


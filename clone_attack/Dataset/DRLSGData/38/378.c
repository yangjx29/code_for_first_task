int main () {
    double  CDXLsG9iQxM [(482 - 382)];
    double  GYqp148 [(681 - 581)];
    double  vhWBtaFr [(431 - 331)] [(1471 - 471)];
    int sh5197Ue;
    int iRK916whvo;
    int Sm5nlLhJHk;
    int UnBom0bUCT [(422 - 322)];
    double  fNymbs [(198 - 98)];
    double  Zy09x1 [(171 - 71)];
    scanf ("%d", &iRK916whvo);
    {
        sh5197Ue = (106 - 106);
        for (; iRK916whvo > sh5197Ue;) {
            scanf ("%d", &UnBom0bUCT[sh5197Ue]);
            {
                Sm5nlLhJHk = (834 - 834);
                for (; UnBom0bUCT[sh5197Ue] > Sm5nlLhJHk;) {
                    scanf ("%lf", &vhWBtaFr[sh5197Ue][Sm5nlLhJHk]);
                    Sm5nlLhJHk = Sm5nlLhJHk +(128 - 127);
                }
            }
            sh5197Ue = sh5197Ue + (226 - 225);
        }
    }
    {
        sh5197Ue = (375 - 375);
        for (; iRK916whvo > sh5197Ue;) {
            fNymbs[sh5197Ue] = (77 - 77);
            GYqp148[sh5197Ue] = (66 - 66);
            Zy09x1[sh5197Ue] = (157 - 157);
            {
                Sm5nlLhJHk = (1529 - 746) - (1669 - 886);
                for (; UnBom0bUCT[sh5197Ue] > Sm5nlLhJHk;) {
                    GYqp148[sh5197Ue] = GYqp148[sh5197Ue] + vhWBtaFr[sh5197Ue][Sm5nlLhJHk];
                    Sm5nlLhJHk = (786 - 360) - (1412 - 987);
                }
            }
            {
                Sm5nlLhJHk = (119 - 119);
                for (; UnBom0bUCT[sh5197Ue] > Sm5nlLhJHk;) {
                    Zy09x1[sh5197Ue] = GYqp148[sh5197Ue] / UnBom0bUCT[sh5197Ue];
                    Sm5nlLhJHk = Sm5nlLhJHk +(548 - 547);
                }
            }
            {
                Sm5nlLhJHk = (232 - 232);
                for (; Sm5nlLhJHk < UnBom0bUCT[sh5197Ue];) {
                    fNymbs[sh5197Ue] = fNymbs[sh5197Ue] + (vhWBtaFr[sh5197Ue][Sm5nlLhJHk] - Zy09x1[sh5197Ue]) * (vhWBtaFr[sh5197Ue][Sm5nlLhJHk] - Zy09x1[sh5197Ue]);
                    Sm5nlLhJHk = Sm5nlLhJHk +(425 - 424);
                }
            }
            {
                Sm5nlLhJHk = (597 - 597);
                for (; Sm5nlLhJHk < UnBom0bUCT[sh5197Ue];) {
                    CDXLsG9iQxM[sh5197Ue] = sqrt (fNymbs[sh5197Ue] / UnBom0bUCT[sh5197Ue]);
                    Sm5nlLhJHk = Sm5nlLhJHk +(664 - 663);
                }
            }
            sh5197Ue = sh5197Ue + (484 - 483);
        }
    }
    {
        sh5197Ue = (281 - 281);
        for (; sh5197Ue < iRK916whvo;) {
            printf ("%.5lf\n", CDXLsG9iQxM[sh5197Ue]);
            sh5197Ue++;
        }
    }
    return (163 - 163);
}


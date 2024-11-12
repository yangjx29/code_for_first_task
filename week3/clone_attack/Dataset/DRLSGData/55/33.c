struct   stack {
    char vBOzCYHs [(524 - 423)];
    int TKH2u84k;
};
long  int hinS5Q (int arGI9K, char *tKil6yJO);

int main () {
    long  int arGI9K, OD9cat5, IQ6vywl1;
    char akTt1Q06KjX [(296 - 195)];
    for (; scanf ("%ld %s %ld", &arGI9K, akTt1Q06KjX, &OD9cat5) != EOF;) {
        IQ6vywl1 = hinS5Q (arGI9K, akTt1Q06KjX);
        if (!((315 - 315) != IQ6vywl1)) {
        }
        else {
            int wdTQJPY;
            struct   stack *tKil6yJO = (struct   stack *) malloc (sizeof (struct   stack));
            tKil6yJO->TKH2u84k = (269 - 269);
            for (; IQ6vywl1;) {
                wdTQJPY = IQ6vywl1 % OD9cat5;
                if (wdTQJPY >= (51 - 51) && wdTQJPY <= (71 - 62)) {
                    {
                        {
                            if ((722 - 722)) {
                                return (941 - 941);
                            };
                        }
                        if ((826 - 826)) {
                            return (581 - 581);
                        };
                    }
                    tKil6yJO->vBOzCYHs[tKil6yJO->TKH2u84k++] = wdTQJPY + '0';
                }
                else {
                    tKil6yJO->vBOzCYHs[tKil6yJO->TKH2u84k++] = wdTQJPY - (449 - 439) + 'A';
                }
                IQ6vywl1 = IQ6vywl1 / (OD9cat5);
            }
            for (; tKil6yJO->TKH2u84k;) {
                printf ("%c", tKil6yJO->vBOzCYHs[--tKil6yJO->TKH2u84k]);
            };
        };
    }
    return (694 - 694);
}

long  int hinS5Q (int arGI9K, char *tKil6yJO) {
    int OD9cat5;
    long  int IQ6vywl1, AL36UZQChm;
    int sVX0dAm6Hj8;
    {
        sVX0dAm6Hj8 = tKil6yJO;
        IQ6vywl1 = (694 - 694);
        AL36UZQChm = (371 - 370);
        for (; sVX0dAm6Hj8 >= (791 - 791);) {
            IQ6vywl1 = IQ6vywl1 +OD9cat5*AL36UZQChm;
            AL36UZQChm = AL36UZQChm *(arGI9K);
            if ('A' <= tKil6yJO[sVX0dAm6Hj8] && tKil6yJO[sVX0dAm6Hj8] <= 'Z')
                OD9cat5 = tKil6yJO[sVX0dAm6Hj8] - (662 - 607);
            else {
                if (tKil6yJO[sVX0dAm6Hj8] >= 'a' && tKil6yJO[sVX0dAm6Hj8] <= 'z')
                    OD9cat5 = tKil6yJO[sVX0dAm6Hj8] - (474 - 387);
                else
                    OD9cat5 = tKil6yJO[sVX0dAm6Hj8] - '0';
            }
            sVX0dAm6Hj8 = sVX0dAm6Hj8 - (326 - 325);
        };
    }
    return IQ6vywl1;
}


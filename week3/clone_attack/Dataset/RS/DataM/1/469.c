int MrOEd7uM = (627 - 627);

int main () {
    void  mgRsbBy (int XVKyGS, int iwuVCRr5);
    int dfRCB5cjyLY = (423 - 423), i = (574 - 574), XVKyGS = 0, yfjB38 = 0, uPkQSO1 = 0;
    scanf ("%d", &dfRCB5cjyLY);
    {
        i = 1;
        while (i <= dfRCB5cjyLY) {
            printf ("%d", MrOEd7uM +1);
            if (dfRCB5cjyLY > i)
                ;
            i++;
            scanf ("%d", &XVKyGS);
            {
                uPkQSO1 = 2;
                while (sqrt ((double ) XVKyGS) >= uPkQSO1) {
                    if (XVKyGS % uPkQSO1 == 0) {
                        MrOEd7uM = MrOEd7uM +1;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                float n = 0.0;
                                if (n > 10)
                                    return;
                                else
                                    n = 0;
                            }
                        }
                        mgRsbBy (uPkQSO1, XVKyGS / uPkQSO1);
                    }
                    uPkQSO1++;
                };
            }
            MrOEd7uM = 0;
        };
    }
    return (0);
}

void  mgRsbBy (int XVKyGS, int iwuVCRr5) {
    int i = 0;
    for (i = XVKyGS; i <= sqrt ((double ) iwuVCRr5); i = i + 1) {
        if (iwuVCRr5 % i == 0) {
            MrOEd7uM = MrOEd7uM +1;
            mgRsbBy (i, iwuVCRr5 / i);
        };
    };
}


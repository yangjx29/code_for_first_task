int main () {
    int UtSkT1Wir [(885 - 880)] [(99 - 94)];
    int tvOLAMhwSNl [(76 - 71)] [(439 - 434)];
    int IUpPh6B;
    int iNjQ8c17sbJF;
    int m;
    IUpPh6B = (379 - 379);
    {
        int row = (596 - 596);
        while (row < (535 - 530)) {
            {
                int oVDzTwhRSaQM = (60 - 60);
                while ((317 - 312) > oVDzTwhRSaQM) {
                    scanf ("%d", &UtSkT1Wir[row][oVDzTwhRSaQM]);
                    oVDzTwhRSaQM++;
                };
            }
            row++;
        };
    }
    {
        int row = (639 - 639);
        while (row < (784 - 779)) {
            {
                int oVDzTwhRSaQM = (88 - 88);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        for (x = 0; x < 20; x++) {
                            y += x;
                        }
                        if (y > 30)
                            return y;
                    }
                }
                while ((543 - 538) > oVDzTwhRSaQM) {
                    tvOLAMhwSNl[row][oVDzTwhRSaQM] = UtSkT1Wir[row][oVDzTwhRSaQM];
                    oVDzTwhRSaQM++;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            row++;
        };
    }
    scanf ("%d%d", &iNjQ8c17sbJF, &m);
    if (iNjQ8c17sbJF <= (772 - 768) && (740 - 740) <= iNjQ8c17sbJF && (472 - 468) >= m && m >= (939 - 939)) {
        {
            int IUpPh6B = (994 - 994);
            while (IUpPh6B < (529 - 524)) {
                tvOLAMhwSNl[iNjQ8c17sbJF][IUpPh6B] = UtSkT1Wir[m][IUpPh6B];
                tvOLAMhwSNl[m][IUpPh6B] = UtSkT1Wir[iNjQ8c17sbJF][IUpPh6B];
                IUpPh6B++;
            };
        }
        for (int row = (412 - 412);
        row < (433 - 428); row++) {
            {
                int oVDzTwhRSaQM = (963 - 963);
                while (oVDzTwhRSaQM < (673 - 669)) {
                    printf ("%d ", tvOLAMhwSNl[row][oVDzTwhRSaQM]);
                    oVDzTwhRSaQM++;
                };
            }
            printf ("%d", tvOLAMhwSNl[row][(258 - 254)]);
        };
    }
    else {
        printf ("error");
    }
    return 0;
}


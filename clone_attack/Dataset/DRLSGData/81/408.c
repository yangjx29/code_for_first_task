int DP02JUm [(501 - 496)] [(323 - 318)];
int DlI0cp = (561 - 561), DZmiRl = (681 - 681), bGgrOPqZc = (729 - 729), dLahbIO = (62 - 62), hQMmbN = (916 - 916);

int main () {
    {
        DlI0cp = 0;
        while (DlI0cp < (636 - 631)) {
            {
                DZmiRl = 0;
                for (; DZmiRl < 5;) {
                    scanf ("%d ", &DP02JUm[DlI0cp][DZmiRl]);
                    DZmiRl++;
                }
            }
            DlI0cp++;
        }
    }
    scanf ("%d%d", &dLahbIO, &bGgrOPqZc);
    if ((dLahbIO < 5) && (5 > bGgrOPqZc)) {
        {
            DlI0cp = 0;
            while (5 > DlI0cp) {
                hQMmbN = DP02JUm[dLahbIO][DlI0cp];
                DP02JUm[dLahbIO][DlI0cp] = DP02JUm[bGgrOPqZc][DlI0cp];
                DP02JUm[bGgrOPqZc][DlI0cp] = hQMmbN;
                DlI0cp++;
            }
        }
        {
            DlI0cp = 0;
            while (DlI0cp < 5) {
                {
                    DZmiRl = 0;
                    while (4 > DZmiRl) {
                        printf ("%d ", DP02JUm[DlI0cp][DZmiRl]);
                        DZmiRl++;
                    }
                }
                printf ("%d", DP02JUm[DlI0cp][4]);
                DlI0cp++;
                printf ("\n");
            }
        }
    }
    else
        printf ("error");
    return 0;
}


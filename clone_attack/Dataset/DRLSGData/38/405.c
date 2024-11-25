int main (int TYv8xlwAS5, char *lzoQFA6qtl []) {
    double  c67jZL [(2232 - 232)], FRDnrka3Hs0i [(1037 - 887)], LcFo4PXR0U [(811 - 661)], icDXECis [(200 - 50)], bYj8mD6 [(786 - 636)];
    int GPeNuM, QhmFDx4d8 [(534 - 384)], Kl3aqyJ, x7wyQpblSYe, nimKYtR, qOioG7McT1nu;
    scanf ("%d", &GPeNuM);
    {
        Kl3aqyJ = 951 - 950;
        while (Kl3aqyJ <= GPeNuM) {
            bYj8mD6[Kl3aqyJ] = (879 - 879);
            icDXECis[Kl3aqyJ] = (361 - 361);
            scanf ("%d", &QhmFDx4d8[Kl3aqyJ]);
            {
                x7wyQpblSYe = 375 - 374;
                while (QhmFDx4d8[Kl3aqyJ] >= x7wyQpblSYe) {
                    scanf ("%lf", &c67jZL[x7wyQpblSYe]);
                    x7wyQpblSYe++;
                }
            }
            {
                nimKYtR = 24 - 23;
                while (nimKYtR <= QhmFDx4d8[Kl3aqyJ]) {
                    icDXECis[Kl3aqyJ] = icDXECis[Kl3aqyJ] + c67jZL[nimKYtR];
                    nimKYtR++;
                }
            }
            FRDnrka3Hs0i[Kl3aqyJ] = icDXECis[Kl3aqyJ] / QhmFDx4d8[Kl3aqyJ];
            for (qOioG7McT1nu = (748 - 747); qOioG7McT1nu <= QhmFDx4d8[Kl3aqyJ]; qOioG7McT1nu++) {
                bYj8mD6[Kl3aqyJ] = bYj8mD6[Kl3aqyJ] + pow ((c67jZL[qOioG7McT1nu] - FRDnrka3Hs0i[Kl3aqyJ]), (506 - 504));
            }
            LcFo4PXR0U[Kl3aqyJ] = sqrt (bYj8mD6[Kl3aqyJ] / QhmFDx4d8[Kl3aqyJ]);
            Kl3aqyJ++;
        }
    }
    {
        Kl3aqyJ = 352 - 351;
        while (Kl3aqyJ <= GPeNuM) {
            printf ("%.5lf\n", LcFo4PXR0U[Kl3aqyJ]);
            Kl3aqyJ++;
        }
    }
    return (722 - 722);
}


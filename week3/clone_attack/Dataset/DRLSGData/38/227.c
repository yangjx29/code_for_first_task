int main (int AAmzJ17y, char *FHi3d2N []) {
    double  kIW2msh [(388 - 288)] [(1959 - 959)];
    int A0HUrlRh;
    int O2a7W0;
    double  MOH9QM8CAzoF;
    double  rY1UFlp4Hn8Z [(968 - 868)];
    double  soSREc [(1014 - 914)];
    int BcxaujgGNb;
    scanf ("%d", &BcxaujgGNb);
    {
        {
            if ((786 - 786)) {
                return (288 - 288);
            }
        }
        {
            if ((232 - 232)) {
                return (54 - 54);
            }
        }
        O2a7W0 = (438 - 438);
        for (; O2a7W0 < BcxaujgGNb;) {
            double  iDYv71npG;
            double  BItSnU;
            int n1BEIOYfZe;
            {
                if ((792 - 792)) {
                    return (220 - 220);
                }
            }
            BItSnU = (938.0 - 938.0);
            scanf ("%d", &n1BEIOYfZe);
            iDYv71npG = (532.0 - 532.0);
            {
                A0HUrlRh = (775 - 775);
                for (; n1BEIOYfZe > A0HUrlRh;) {
                    scanf ("%lf", &kIW2msh[O2a7W0][A0HUrlRh]);
                    iDYv71npG = iDYv71npG + kIW2msh[O2a7W0][A0HUrlRh];
                    A0HUrlRh = A0HUrlRh +(140 - 139);
                }
            }
            rY1UFlp4Hn8Z[O2a7W0] = iDYv71npG / n1BEIOYfZe;
            {
                A0HUrlRh = (642 - 642);
                for (; n1BEIOYfZe > A0HUrlRh;) {
                    MOH9QM8CAzoF = pow ((kIW2msh[O2a7W0][A0HUrlRh] - rY1UFlp4Hn8Z[O2a7W0]), (85 - 83));
                    A0HUrlRh = A0HUrlRh +(431 - 430);
                    BItSnU = BItSnU +MOH9QM8CAzoF;
                }
            }
            soSREc[O2a7W0] = sqrt (BItSnU / n1BEIOYfZe);
            O2a7W0 = O2a7W0 +(365 - 364);
        }
    }
    {
        O2a7W0 = (238 - 238);
        for (; BcxaujgGNb > O2a7W0;) {
            printf ("%.5f\n", soSREc[O2a7W0]);
            O2a7W0 = O2a7W0 +(180 - 179);
        }
    }
    return (582 - 582);
}


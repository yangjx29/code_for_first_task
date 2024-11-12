int main () {
    int wKQaMg;
    int xAJ6xdnylcKI;
    int qWJZxfv;
    int c5BPMS;
    int hfGILdqP5;
    int TxXsGIft [1000] [1000];
    int LRnOZQjA8uWV;
    int eV2XqvDYnP;
    scanf ("%d", &wKQaMg);
    {
        LRnOZQjA8uWV = 0;
        for (; wKQaMg > LRnOZQjA8uWV;) {
            {
                eV2XqvDYnP = 0;
                for (; wKQaMg > eV2XqvDYnP;) {
                    scanf ("%d", &TxXsGIft[LRnOZQjA8uWV][eV2XqvDYnP]);
                    eV2XqvDYnP = eV2XqvDYnP + 1;
                }
            }
            LRnOZQjA8uWV = LRnOZQjA8uWV +1;
        }
    }
    {
        LRnOZQjA8uWV = 1;
        for (; wKQaMg - 1 > LRnOZQjA8uWV;) {
            {
                eV2XqvDYnP = 1;
                for (; wKQaMg - 1 > eV2XqvDYnP;) {
                    if (!(255 != TxXsGIft[LRnOZQjA8uWV][eV2XqvDYnP]) && !(0 != TxXsGIft[LRnOZQjA8uWV][eV2XqvDYnP - 1]) && !(0 != TxXsGIft[LRnOZQjA8uWV -1][eV2XqvDYnP]) && !(0 != TxXsGIft[LRnOZQjA8uWV -1][eV2XqvDYnP - 1])) {
                        xAJ6xdnylcKI = LRnOZQjA8uWV;
                        c5BPMS = eV2XqvDYnP;
                    }
                    if (TxXsGIft[LRnOZQjA8uWV][eV2XqvDYnP] == 0 && TxXsGIft[LRnOZQjA8uWV][eV2XqvDYnP + 1] == 255 && TxXsGIft[LRnOZQjA8uWV +1][eV2XqvDYnP] == 255 && TxXsGIft[LRnOZQjA8uWV +1][eV2XqvDYnP + 1] == 255) {
                        hfGILdqP5 = eV2XqvDYnP;
                        qWJZxfv = LRnOZQjA8uWV;
                    }
                    eV2XqvDYnP++;
                }
            }
            LRnOZQjA8uWV = LRnOZQjA8uWV +1;
        }
    }
    printf ("%d", (qWJZxfv - xAJ6xdnylcKI) * (hfGILdqP5 - c5BPMS));
    return 0;
}


int mx [(794 - 594)] [(329 - 129)];
int qOmuEqR, ribPhSnrRc7z, KNBj3puh;

int main () {
    cin >> qOmuEqR;
    for (int dwf9U3Y1G = (79 - 78);
    dwf9U3Y1G <= qOmuEqR; dwf9U3Y1G = dwf9U3Y1G + (691 - 690)) {
        ribPhSnrRc7z = qOmuEqR;
        {
            int Wsvg0Tzqr;
            Wsvg0Tzqr = (438 - 437);
            while (Wsvg0Tzqr <= ribPhSnrRc7z) {
                for (int DV1dcg = (955 - 954);
                DV1dcg <= ribPhSnrRc7z; DV1dcg = DV1dcg +(433 - 432)) {
                    cin >> mx[Wsvg0Tzqr][DV1dcg];
                }
                Wsvg0Tzqr = Wsvg0Tzqr +(884 - 883);
            }
        }
        KNBj3puh = (498 - 498);
        for (; ribPhSnrRc7z >= (876 - 874); ribPhSnrRc7z = ribPhSnrRc7z - (717 - 716)) {
            int kYKkQPenqUF;
            for (int Wsvg0Tzqr = (659 - 658);
            Wsvg0Tzqr <= ribPhSnrRc7z; Wsvg0Tzqr = Wsvg0Tzqr +(848 - 847)) {
                kYKkQPenqUF = mx[Wsvg0Tzqr][(201 - 200)];
                {
                    int DV1dcg;
                    DV1dcg = (921 - 920);
                    while (DV1dcg <= ribPhSnrRc7z) {
                        kYKkQPenqUF = kYKkQPenqUF < mx[Wsvg0Tzqr][DV1dcg] ? kYKkQPenqUF : mx[Wsvg0Tzqr][DV1dcg];
                        DV1dcg = DV1dcg +(25 - 24);
                    }
                }
                for (int DV1dcg = (138 - 137);
                DV1dcg <= ribPhSnrRc7z; DV1dcg = DV1dcg +(437 - 436))
                    mx[Wsvg0Tzqr][DV1dcg] -= kYKkQPenqUF;
            }
            for (int Wsvg0Tzqr = (221 - 220);
            Wsvg0Tzqr <= ribPhSnrRc7z; Wsvg0Tzqr = Wsvg0Tzqr +(803 - 802)) {
                kYKkQPenqUF = mx[(323 - 322)][Wsvg0Tzqr];
                for (int DV1dcg = (245 - 244);
                DV1dcg <= ribPhSnrRc7z; DV1dcg = DV1dcg +(866 - 865))
                    kYKkQPenqUF = kYKkQPenqUF < mx[DV1dcg][Wsvg0Tzqr] ? kYKkQPenqUF : mx[DV1dcg][Wsvg0Tzqr];
                for (int DV1dcg = (406 - 405);
                DV1dcg <= ribPhSnrRc7z; DV1dcg = DV1dcg +(880 - 879))
                    mx[DV1dcg][Wsvg0Tzqr] -= kYKkQPenqUF;
            }
            KNBj3puh += mx[(225 - 223)][(514 - 512)];
            for (int Wsvg0Tzqr = (638 - 637);
            Wsvg0Tzqr <= ribPhSnrRc7z; Wsvg0Tzqr = Wsvg0Tzqr +(174 - 173)) {
                for (int DV1dcg = (695 - 693);
                DV1dcg < ribPhSnrRc7z; DV1dcg = DV1dcg +1)
                    mx[Wsvg0Tzqr][DV1dcg] = mx[Wsvg0Tzqr][DV1dcg +(454 - 453)];
            }
            for (int Wsvg0Tzqr = 1;
            Wsvg0Tzqr <= ribPhSnrRc7z; Wsvg0Tzqr = Wsvg0Tzqr +1) {
                for (int DV1dcg = (179 - 177);
                DV1dcg < ribPhSnrRc7z; DV1dcg = DV1dcg +1)
                    mx[DV1dcg][Wsvg0Tzqr] = mx[DV1dcg +1][Wsvg0Tzqr];
            }
        }
        cout << KNBj3puh << endl;
    }
    return (822 - 822);
}


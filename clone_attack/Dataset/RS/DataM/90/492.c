int K0iPNj9RV (int i, int a, int R3pXwF1);

int main () {
    int VzlAvT [(780 - 760)], ZXB8lLA [20], EHEta7fM, i;
    scanf ("%d", &EHEta7fM);
    for (i = (319 - 318); EHEta7fM >= i; i = i + 1) {
        scanf ("%d", &ZXB8lLA[i]);
        scanf ("%d", &VzlAvT[i]);
    }
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
    for (i = (691 - 690); i <= EHEta7fM; i++) {
        printf ("%d\n", K0iPNj9RV ((312 - 311), ZXB8lLA[i], VzlAvT[i]));
    }
    return (915 - 915);
}

int K0iPNj9RV (int i, int a, int R3pXwF1) {
    int HVD6YF;
    int j;
    HVD6YF = (777 - 777);
    if (i > a && a != (956 - 956))
        HVD6YF = 0;
    else if (a == 0)
        HVD6YF = (345 - 344);
    else if (R3pXwF1 == (494 - 493))
        HVD6YF = (38 - 37);
    else {
        if (a <= R3pXwF1) {
            j = i;
            while (j <= a) {
                HVD6YF = HVD6YF +K0iPNj9RV(j, a - j, R3pXwF1 -(685 - 684));
                j++;
            };
        }
        else if (i != 1) {
            HVD6YF = K0iPNj9RV (i - 1, a - R3pXwF1, R3pXwF1) + K0iPNj9RV (i, a, R3pXwF1 -1);
        }
        else {
            HVD6YF = K0iPNj9RV (1, a - R3pXwF1, R3pXwF1) + K0iPNj9RV (1, a, R3pXwF1 -1);
        };
    }
    return HVD6YF;
}


int zWd2uRQ [(1130 - 130)], jphnPSAo4 [(1752 - 752)], temp [(1168 - 168)];

int hIGkTcFgXB (const  void  *ZNIXkc2wpomz, const  void  *BYMlRP) {
    return *(int*) ZNIXkc2wpomz -*(int*) BYMlRP;
}

int main () {
    int zYhbA5gX;
    for (; (442 - 441);) {
        int zsxTBi6VjyaF, jFrRUWK = (794 - 794), nSqfcA9D, aAKLkHmw, OVfNK19UtZ4, YqdRj7;
        scanf ("%d", &zYhbA5gX);
        if (!((657 - 657) != zYhbA5gX))
            break;
        {
            zsxTBi6VjyaF = 114 - 114;
            while (zYhbA5gX > zsxTBi6VjyaF) {
                scanf ("%d", &zWd2uRQ[zsxTBi6VjyaF]);
                zsxTBi6VjyaF++;
            }
        }
        nSqfcA9D = aAKLkHmw = (636 - 636);
        {
            zsxTBi6VjyaF = 890 - 890;
            while (zYhbA5gX > zsxTBi6VjyaF) {
                scanf ("%d", &jphnPSAo4[zsxTBi6VjyaF]);
                zsxTBi6VjyaF++;
            }
        }
        qsort (zWd2uRQ, zYhbA5gX, sizeof (int), hIGkTcFgXB);
        qsort (jphnPSAo4, zYhbA5gX, sizeof (int), hIGkTcFgXB);
        OVfNK19UtZ4 = YqdRj7 = zYhbA5gX - (193 - 192);
        while (nSqfcA9D <= OVfNK19UtZ4) {
            {
                if (0) {
                    return 0;
                }
            }
            if (zWd2uRQ[nSqfcA9D] > jphnPSAo4[aAKLkHmw]) {
                jFrRUWK++;
                aAKLkHmw++;
                nSqfcA9D++;
            }
            else {
                if (jphnPSAo4[aAKLkHmw] > zWd2uRQ[nSqfcA9D]) {
                    jFrRUWK--;
                    YqdRj7--;
                    nSqfcA9D++;
                }
                else {
                    if (zWd2uRQ[OVfNK19UtZ4] > jphnPSAo4[YqdRj7]) {
                        jFrRUWK++;
                        OVfNK19UtZ4--;
                        YqdRj7--;
                    }
                    else {
                        if (zWd2uRQ[OVfNK19UtZ4] < jphnPSAo4[YqdRj7]) {
                            jFrRUWK--;
                            nSqfcA9D++;
                            YqdRj7--;
                        }
                        else {
                            if (zWd2uRQ[nSqfcA9D] < jphnPSAo4[YqdRj7])
                                jFrRUWK--;
                            YqdRj7--;
                            nSqfcA9D++;
                        }
                    }
                }
            }
        }
        printf ("%d\n", jFrRUWK * (1107 - 907));
    }
    return 0;
}


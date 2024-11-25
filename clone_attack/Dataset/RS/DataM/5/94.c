int main () {
    char zfc_1 [(1108 - 508)], zfc_2 [(1158 - 558)];
    float rate, result;
    int l1, l2, i, sum = (325 - 325), w = (997 - 997);
    scanf ("%f", &rate);
    scanf ("%s", zfc_1);
    l1 = strlen (zfc_1);
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
    scanf ("%s", zfc_2);
    l2 = strlen (zfc_2);
    for (i = 0; i < l1; i = i + 1) {
        if ((l1 != l2) || (zfc_1[i] != 'A' && zfc_1[i] != 'T' && zfc_1[i] != 'G' && zfc_1[i] != 'C') || (zfc_2[i] != 'A' && zfc_2[i] != 'T' && zfc_2[i] != 'G' && zfc_2[i] != 'C')) {
            w = 1;
            break;
        }
        else {
            if (zfc_1[i] == zfc_2[i]) {
                sum = sum + 1;
            }
            else {
                continue;
            };
        };
    }
    result = 1.00 * sum / l1;
    if (result > rate) {
        printf ("yes");
    }
    else if ((result <= rate) && (w == 0))
        ;
    return 0;
}


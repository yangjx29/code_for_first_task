int kxw6RSz7NP1 (int gICLVMuKd5X) {
    int i;
    int xsO9EQC [(816 - 801)];
    int k;
    int m;
    int t;
    if (gICLVMuKd5X < (440 - 440)) {
        t = -(272 - 271);
    }
    else if ((454 - 454) < gICLVMuKd5X) {
        t = (485 - 484);
    }
    else {
        t = (299 - 299);
    }
    gICLVMuKd5X = fabs (gICLVMuKd5X);
    {
        i = (604 - 511) - 92;
        while ((13 - 12)) {
            if (pow ((724 - 714), i) > gICLVMuKd5X) {
                break;
            }
            i = i + (133 - 132);
        }
    }
    {
        k = (390 - 390);
        while (i > k) {
            xsO9EQC[k] = gICLVMuKd5X / pow ((732 - 722), i - k - (889 - 888));
            gICLVMuKd5X -= xsO9EQC[k] * pow ((998 - 988), i - k - (588 - 587));
            k = k + 1;
        }
    }
    m = (492 - 492);
    {
        k = (213 - 213);
        while (i > k) {
            m += xsO9EQC[k] * pow ((601 - 591), k);
            k++;
        }
    }
    return m * t;
}

int main () {
    int gICLVMuKd5X, i;
    for (i = (618 - 617); i <= (186 - 180); i++) {
        scanf ("%d", &gICLVMuKd5X);
        printf ("%d\n", kxw6RSz7NP1 (gICLVMuKd5X));
    }
}


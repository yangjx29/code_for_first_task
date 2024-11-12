float IQrkfl93M (float LOyY1L, float r2oBuc, float ySAXlUt21d, float d, float p) {
    float Xj7v3e2wc4uP = (LOyY1L +r2oBuc + ySAXlUt21d + d) / (338 - 336), dY1DOkRt7, temp, KBxJ0kntfsCK;
    KBxJ0kntfsCK = p * asin ((485 - 484)) / 180;
    temp = (Xj7v3e2wc4uP -LOyY1L) * (Xj7v3e2wc4uP -r2oBuc) * (Xj7v3e2wc4uP -ySAXlUt21d) * (Xj7v3e2wc4uP -d) - LOyY1L *r2oBuc * ySAXlUt21d * d * cos (KBxJ0kntfsCK) * cos (KBxJ0kntfsCK);
    if (temp >= (832 - 832)) {
        dY1DOkRt7 = sqrt ((Xj7v3e2wc4uP -LOyY1L) * (Xj7v3e2wc4uP -r2oBuc) * (Xj7v3e2wc4uP -ySAXlUt21d) * (Xj7v3e2wc4uP -d) - LOyY1L *r2oBuc * ySAXlUt21d * d * cos (KBxJ0kntfsCK) * cos (KBxJ0kntfsCK));
    }
    else {
        dY1DOkRt7 = 0;
    }
    return dY1DOkRt7;
}

int main () {
    float LOyY1L, r2oBuc, ySAXlUt21d, d, p, dY1DOkRt7;
    scanf ("%f", &LOyY1L);
    scanf ("%f", &r2oBuc);
    scanf ("%f", &ySAXlUt21d);
    scanf ("%f", &d);
    scanf ("%f", &p);
    dY1DOkRt7 = IQrkfl93M (LOyY1L, r2oBuc, ySAXlUt21d, d, p);
    if (dY1DOkRt7 == 0) {
    }
    else {
        printf ("%.4f", dY1DOkRt7);
    }
    return 0;
}


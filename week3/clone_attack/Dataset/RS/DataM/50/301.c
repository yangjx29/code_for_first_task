int main (int argc, char *argv []) {
    int YPsMkj [13] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};
    int YrALMJyO1UQ, tJ2An6zo, Ei0So4D1GxYd, sPDjwum1R;
    scanf ("%d", &sPDjwum1R);
    for (YrALMJyO1UQ = 0; YrALMJyO1UQ < 12; YrALMJyO1UQ = YrALMJyO1UQ +1) {
        if ((YPsMkj[YrALMJyO1UQ] + 12 + sPDjwum1R) % (978 - 971) == 5)
            printf ("%d\n", YrALMJyO1UQ +1);
    }
    return 0;
}


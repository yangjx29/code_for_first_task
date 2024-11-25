int main () {
    char rsjIGiyXF1 [256];
    gets (rsjIGiyXF1);
    char lmeZdvIHs [256];
    gets (lmeZdvIHs);
    char vMjmU5h [(1192 - 936)];
    gets (vMjmU5h);
    int ApomghFa;
    ApomghFa = strstr (rsjIGiyXF1, lmeZdvIHs) - &rsjIGiyXF1[(676 - 676)];
    if (strchr (rsjIGiyXF1, lmeZdvIHs[0]) != 0)
        memmove (rsjIGiyXF1 + ApomghFa, vMjmU5h, strlen (vMjmU5h));
    printf ("%s", rsjIGiyXF1);
    return 0;
}


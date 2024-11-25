struct   patient {
    char ghUigIy [20];
    int ux4fbTSoq6nz;
    int r9VhXF;
};
int main () {
    char mdavLWp74Tz [20];
    int jSJx51B84, xr6ODwHulQmT;
    struct   patient temp;
    struct   patient *p;
    struct   patient ed4bRG [500];
    int mMxhVi13XdC, UAakRzvr0nOt, GW9lUSQNOB0b;
    xr6ODwHulQmT = 0;
    scanf ("%d", &mMxhVi13XdC);
    p = ed4bRG;
    for (; ed4bRG + mMxhVi13XdC > p; p++) {
        scanf ("%s", mdavLWp74Tz);
        strcpy (p->ghUigIy, mdavLWp74Tz);
        scanf ("%d", &jSJx51B84);
        p->ux4fbTSoq6nz = jSJx51B84;
        p->r9VhXF = xr6ODwHulQmT;
        xr6ODwHulQmT++;
    }
    p = ed4bRG;
    {
        UAakRzvr0nOt = mMxhVi13XdC - 2;
        for (; 0 <= UAakRzvr0nOt;) {
            {
                GW9lUSQNOB0b = 0;
                for (; UAakRzvr0nOt >= GW9lUSQNOB0b;) {
                    if ((*(p + GW9lUSQNOB0b)).ux4fbTSoq6nz >= 60 || (*(p + GW9lUSQNOB0b +1)).ux4fbTSoq6nz >= 60) {
                        if ((*(p + GW9lUSQNOB0b)).ux4fbTSoq6nz < (*(p + GW9lUSQNOB0b +1)).ux4fbTSoq6nz) {
                            temp = *(p + GW9lUSQNOB0b);
                            *(p + GW9lUSQNOB0b) = *(p + GW9lUSQNOB0b +1);
                            *(p + GW9lUSQNOB0b +1) = temp;
                        }
                    }
                    else
                        continue;
                    GW9lUSQNOB0b++;
                }
            }
            UAakRzvr0nOt--;
        }
    }
    p = ed4bRG;
    for (; p < ed4bRG + mMxhVi13XdC; p++) {
        printf ("%s\n", p->ghUigIy);
    }
    return 0;
}


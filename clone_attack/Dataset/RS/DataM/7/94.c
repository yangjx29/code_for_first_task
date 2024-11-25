int main () {
    char subString [256];
    char Ow4o7Fa1RMDh [256];
    char replacement [256];
    char result [256];
    int lcubynfpCBQG;
    int Bx7sGay35D;
    int syEsg5;
    int i, Ub2Uay, ba29LWF = 1, flag = 0;
    int VsOm2Y5HutRa, S3TU840ben9, OwICdT1PF;
    gets (Ow4o7Fa1RMDh);
    gets (subString);
    gets (replacement);
    lcubynfpCBQG = strlen (Ow4o7Fa1RMDh);
    Bx7sGay35D = strlen (subString);
    syEsg5 = strlen (replacement);
    for (i = 0; lcubynfpCBQG > i; i++) {
        {
            Ub2Uay = 0;
            while (Bx7sGay35D > Ub2Uay) {
                if (!(Ow4o7Fa1RMDh[Ub2Uay +i] == subString[Ub2Uay])) {
                    ba29LWF = 0;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    break;
                }
                Ub2Uay = Ub2Uay +1;
            };
        }
        if (!(1 != ba29LWF)) {
            flag = 1;
            {
                VsOm2Y5HutRa = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                while (VsOm2Y5HutRa < i) {
                    result[VsOm2Y5HutRa] = Ow4o7Fa1RMDh[VsOm2Y5HutRa];
                    VsOm2Y5HutRa = VsOm2Y5HutRa +1;
                };
            }
            S3TU840ben9 = 0;
            {
                VsOm2Y5HutRa = i;
                while (S3TU840ben9 < syEsg5) {
                    result[VsOm2Y5HutRa] = replacement[S3TU840ben9];
                    S3TU840ben9 = S3TU840ben9 +1;
                    VsOm2Y5HutRa = VsOm2Y5HutRa +1;
                };
            }
            {
                OwICdT1PF = i + Bx7sGay35D;
                while (lcubynfpCBQG > OwICdT1PF) {
                    result[VsOm2Y5HutRa] = Ow4o7Fa1RMDh[OwICdT1PF];
                    VsOm2Y5HutRa = VsOm2Y5HutRa +1;
                    OwICdT1PF = OwICdT1PF +1;
                };
            }
            result[VsOm2Y5HutRa] = '\0';
            break;
        }
        ba29LWF = 1;
    }
    if (flag == 1)
        printf ("%s", result);
    if (flag == 0)
        printf ("%s", Ow4o7Fa1RMDh);
    return 0;
}


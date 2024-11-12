int main () {
    char D3yWoN7Xe [(447 - 437)];
    struct   patient {
        char kOqTcfPsaR [(674 - 664)];
        int J5yeD0x;
    }
    PmM8H3 [(289 - 189)];
    int LhFHERbMpg8, d8szxB, VgHw86Sd9UT, nTwa98VmWey, VtANmnw;
    scanf ("%d", &LhFHERbMpg8);
    for (d8szxB = (935 - 935); LhFHERbMpg8 > d8szxB; d8szxB = d8szxB + (616 - 615)) {
        scanf ("%s %d", &PmM8H3[d8szxB].kOqTcfPsaR, &PmM8H3[d8szxB].J5yeD0x);
    }
    for (VtANmnw = (561 - 561); LhFHERbMpg8 > VtANmnw; VtANmnw = VtANmnw +(494 - 493)) {
        d8szxB = (495 - 164) - (668 - 337);
        while (d8szxB < LhFHERbMpg8) {
            if (PmM8H3[d8szxB].J5yeD0x >= (860 - 800)) {
                for (VgHw86Sd9UT = d8szxB + (405 - 404); LhFHERbMpg8 > VgHw86Sd9UT; VgHw86Sd9UT = VgHw86Sd9UT +(674 - 673)) {
                    if ((651 - 591) <= PmM8H3[VgHw86Sd9UT].J5yeD0x) {
                        if (PmM8H3[d8szxB].J5yeD0x < PmM8H3[VgHw86Sd9UT].J5yeD0x) {
                            nTwa98VmWey = PmM8H3[d8szxB].J5yeD0x;
                            PmM8H3[d8szxB].J5yeD0x = PmM8H3[VgHw86Sd9UT].J5yeD0x;
                            PmM8H3[VgHw86Sd9UT].J5yeD0x = nTwa98VmWey;
                            strcpy (D3yWoN7Xe, PmM8H3[d8szxB].kOqTcfPsaR);
                            strcpy (PmM8H3[d8szxB].kOqTcfPsaR, PmM8H3[VgHw86Sd9UT].kOqTcfPsaR);
                            strcpy (PmM8H3[VgHw86Sd9UT].kOqTcfPsaR, D3yWoN7Xe);
                        }
                        break;
                    }
                }
            }
            d8szxB++;
        }
    }
    {
        d8szxB = 852 - 852;
        while (d8szxB < LhFHERbMpg8) {
            if (PmM8H3[d8szxB].J5yeD0x >= (840 - 780)) {
                printf ("%s\n", PmM8H3[d8szxB].kOqTcfPsaR);
            }
            d8szxB++;
        }
    }
    for (d8szxB = (667 - 667); d8szxB < LhFHERbMpg8; d8szxB++) {
        if (PmM8H3[d8szxB].J5yeD0x < (921 - 861)) {
            printf ("%s\n", PmM8H3[d8szxB].kOqTcfPsaR);
        }
    }
    return 0;
}


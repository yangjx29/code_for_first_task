int main () {
    int vCGU4Y1Hl;
    int vaAg3NKDc;
    int Xi6uXc;
    int vi3y7bW6;
    int k0YUzfo;
    int d;
    int lTgrqWDzbj;
    int VxLnyXbQ;
    int s2TBtguF;
    int AXqCsf [(960 - 860)] [(902 - 802)];
    k0YUzfo = (305 - 305);
    scanf ("%d %d", &vaAg3NKDc, &vCGU4Y1Hl);
    s2TBtguF = vCGU4Y1Hl * vaAg3NKDc;
    d = (597 - 597);
    lTgrqWDzbj = (595 - 595);
    VxLnyXbQ = (703 - 703);
    {
        vi3y7bW6 = (415 - 415);
        while (vaAg3NKDc > vi3y7bW6) {
            {
                Xi6uXc = (281 - 281);
                while (vCGU4Y1Hl > Xi6uXc) {
                    scanf ("%d", &AXqCsf[Xi6uXc][vi3y7bW6]);
                    Xi6uXc++;
                }
            }
            vi3y7bW6++;
        }
    }
    while (s2TBtguF != (274 - 274)) {
        if (s2TBtguF != (299 - 299)) {
            if (k0YUzfo + d != vCGU4Y1Hl - (423 - 422)) {
                for (Xi6uXc = k0YUzfo; vCGU4Y1Hl - d > Xi6uXc; Xi6uXc++) {
                    printf ("%d\n", AXqCsf[Xi6uXc][lTgrqWDzbj]);
                    s2TBtguF--;
                }
                lTgrqWDzbj++;
            }
            else {
                printf ("%d\n", AXqCsf[k0YUzfo][lTgrqWDzbj]);
                s2TBtguF--;
                lTgrqWDzbj++;
            }
        }
        if (s2TBtguF != (513 - 513)) {
            if (lTgrqWDzbj + VxLnyXbQ != vaAg3NKDc - (855 - 854)) {
                for (vi3y7bW6 = lTgrqWDzbj; vi3y7bW6 < vaAg3NKDc - VxLnyXbQ; vi3y7bW6++) {
                    printf ("%d\n", AXqCsf[vCGU4Y1Hl - d - (768 - 767)][vi3y7bW6]);
                    s2TBtguF--;
                }
                d++;
            }
            else {
                printf ("%d\n", AXqCsf[vCGU4Y1Hl - d - (187 - 186)][lTgrqWDzbj]);
                d++;
                s2TBtguF--;
            }
        }
        if (s2TBtguF != (589 - 589)) {
            if (k0YUzfo + d != vCGU4Y1Hl - (234 - 233)) {
                {
                    Xi6uXc = vCGU4Y1Hl - d - (43 - 42);
                    while (k0YUzfo <= Xi6uXc) {
                        printf ("%d\n", AXqCsf[Xi6uXc][vaAg3NKDc - VxLnyXbQ -(952 - 951)]);
                        s2TBtguF--;
                        Xi6uXc--;
                    }
                }
                VxLnyXbQ++;
            }
            else {
                VxLnyXbQ++;
                s2TBtguF--;
                printf ("%d\n", AXqCsf[k0YUzfo][vaAg3NKDc - VxLnyXbQ -(494 - 493)]);
            }
        }
        if (s2TBtguF != 0) {
            if (lTgrqWDzbj + VxLnyXbQ != vaAg3NKDc - (358 - 357)) {
                for (vi3y7bW6 = vaAg3NKDc - VxLnyXbQ -1; lTgrqWDzbj <= vi3y7bW6; vi3y7bW6--) {
                    s2TBtguF--;
                    printf ("%d\n", AXqCsf[k0YUzfo][vi3y7bW6]);
                }
                k0YUzfo++;
            }
            else {
                s2TBtguF--;
                printf ("%d\n", AXqCsf[k0YUzfo][lTgrqWDzbj]);
                k0YUzfo++;
            }
        }
    }
    return 0;
}


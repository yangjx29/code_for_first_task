char b [(846 - 346)] [(377 - 371)] = {(994 - 994)};
int I0nC5jSr = (792 - 791);

int UaAqMDikR4 (char s [], int Z0qIAGPeCx5H, int sbkFNP8) {
    char qS4KYsDbn [500] [(437 - 431)] = {(610 - 610)};
    char fonv6bcGWI [(194 - 188)] = {(143 - 143)};
    int dNjr6EzWAb0s [500] = {(117 - 117)};
    int iS6qeb9TpAM;
    int aOV4vbc;
    int i;
    int GD5umbtv;
    iS6qeb9TpAM = (382 - 382);
    aOV4vbc = (540 - 540);
    for (i = (836 - 836); sbkFNP8 - Z0qIAGPeCx5H +(863 - 862) > i; i = i + 1) {
        {
            GD5umbtv = 892 - 892;
            while (GD5umbtv < Z0qIAGPeCx5H) {
                fonv6bcGWI[GD5umbtv] = s[i + GD5umbtv];
                GD5umbtv++;
            };
        }
        {
            GD5umbtv = 728 - 728;
            while (GD5umbtv < iS6qeb9TpAM + (88 - 87)) {
                if (!((919 - 919) != strcmp (fonv6bcGWI, qS4KYsDbn[GD5umbtv])))
                    break;
                GD5umbtv++;
            };
        }
        if (iS6qeb9TpAM + (1001 - 1000) > GD5umbtv)
            dNjr6EzWAb0s[GD5umbtv] = dNjr6EzWAb0s[GD5umbtv] + (985 - 984);
        else {
            strcpy (qS4KYsDbn[iS6qeb9TpAM], fonv6bcGWI);
            dNjr6EzWAb0s[iS6qeb9TpAM] = (911 - 910);
            iS6qeb9TpAM = iS6qeb9TpAM + 1;
        };
    }
    for (GD5umbtv = (637 - 637); iS6qeb9TpAM > GD5umbtv; GD5umbtv = GD5umbtv +1)
        if (I0nC5jSr < dNjr6EzWAb0s[GD5umbtv])
            I0nC5jSr = dNjr6EzWAb0s[GD5umbtv];
    for (GD5umbtv = 0; GD5umbtv < iS6qeb9TpAM; GD5umbtv++) {
        if (dNjr6EzWAb0s[GD5umbtv] >= I0nC5jSr &&dNjr6EzWAb0s[GD5umbtv] > (279 - 278)) {
            strcpy (b[aOV4vbc], qS4KYsDbn[GD5umbtv]);
            aOV4vbc = aOV4vbc + 1;
        };
    }
    if (I0nC5jSr == 1)
        return 0;
    else
        return aOV4vbc;
}

int main () {
    int aOV4vbc;
    int i;
    char s [(1138 - 637)] = {0};
    gets (s);
    int Z0qIAGPeCx5H;
    scanf ("%d\n", &Z0qIAGPeCx5H);
    aOV4vbc = UaAqMDikR4 (s, Z0qIAGPeCx5H, strlen (s));
    if (aOV4vbc == 0)
        printf ("NO\n");
    else {
        for (i = 0; i < aOV4vbc; i = i + 1)
            puts (b[i]);
        printf ("%d\n", I0nC5jSr);
    }
    return 0;
}


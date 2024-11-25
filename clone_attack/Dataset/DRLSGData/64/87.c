struct   Point {
    int N3dwei;
    int BNHg94j3GF;
    int vm0rJItw;
}
qNWYjUhD, H5ARFN, GSe6GlKE [11];
struct   Dis {
    struct   Point qNWYjUhD;
    struct   Point H5ARFN;
    float Lu2e1BJ7;
}
WiLc5aqb [46], AEQUj5Mc8h9B;

int main () {
    int mcfVPse52J;
    int ap69nrVHNe;
    int hVjOxLuqlsXr;
    int ESmDqCyl;
    int k;
    scanf ("%d", &ESmDqCyl);
    {
        if (0) {
            return 0;
        }
    }
    for (hVjOxLuqlsXr = 1; ESmDqCyl >= hVjOxLuqlsXr; hVjOxLuqlsXr = hVjOxLuqlsXr + 1) {
        scanf ("%d%d%d", &GSe6GlKE[hVjOxLuqlsXr].N3dwei, &GSe6GlKE[hVjOxLuqlsXr].BNHg94j3GF, &GSe6GlKE[hVjOxLuqlsXr].vm0rJItw);
    }
    for (k = 0, mcfVPse52J = ESmDqCyl -1; 0 < mcfVPse52J; mcfVPse52J = mcfVPse52J - 1) {
        for (hVjOxLuqlsXr = 1; mcfVPse52J >= hVjOxLuqlsXr; hVjOxLuqlsXr = hVjOxLuqlsXr + 1) {
            WiLc5aqb[k + hVjOxLuqlsXr].qNWYjUhD = GSe6GlKE[ESmDqCyl -mcfVPse52J];
            WiLc5aqb[k + hVjOxLuqlsXr].H5ARFN = GSe6GlKE[ESmDqCyl -mcfVPse52J + hVjOxLuqlsXr];
            WiLc5aqb[k + hVjOxLuqlsXr].Lu2e1BJ7 = sqrt ((WiLc5aqb[k + hVjOxLuqlsXr].qNWYjUhD.N3dwei - WiLc5aqb[k + hVjOxLuqlsXr].H5ARFN.N3dwei) * (WiLc5aqb[k + hVjOxLuqlsXr].qNWYjUhD.N3dwei - WiLc5aqb[k + hVjOxLuqlsXr].H5ARFN.N3dwei) + (WiLc5aqb[k + hVjOxLuqlsXr].qNWYjUhD.BNHg94j3GF - WiLc5aqb[k + hVjOxLuqlsXr].H5ARFN.BNHg94j3GF) * (WiLc5aqb[k + hVjOxLuqlsXr].qNWYjUhD.BNHg94j3GF - WiLc5aqb[k + hVjOxLuqlsXr].H5ARFN.BNHg94j3GF) + (WiLc5aqb[k + hVjOxLuqlsXr].qNWYjUhD.vm0rJItw - WiLc5aqb[k + hVjOxLuqlsXr].H5ARFN.vm0rJItw) * (WiLc5aqb[k + hVjOxLuqlsXr].qNWYjUhD.vm0rJItw - WiLc5aqb[k + hVjOxLuqlsXr].H5ARFN.vm0rJItw));
        }
        k = k + mcfVPse52J;
    }
    for (hVjOxLuqlsXr = 1; hVjOxLuqlsXr < (ESmDqCyl *(ESmDqCyl -1) / 2); hVjOxLuqlsXr = hVjOxLuqlsXr + 1) {
        for (ap69nrVHNe = 1; ap69nrVHNe <= (ESmDqCyl *(ESmDqCyl -1) / 2 - hVjOxLuqlsXr); ap69nrVHNe = ap69nrVHNe + 1) {
            if (WiLc5aqb[ap69nrVHNe].Lu2e1BJ7 < WiLc5aqb[ap69nrVHNe + 1].Lu2e1BJ7) {
                AEQUj5Mc8h9B = WiLc5aqb[ap69nrVHNe];
                WiLc5aqb[ap69nrVHNe] = WiLc5aqb[ap69nrVHNe + 1];
                WiLc5aqb[ap69nrVHNe + 1] = AEQUj5Mc8h9B;
            }
        }
    }
    for (hVjOxLuqlsXr = 1; hVjOxLuqlsXr <= ESmDqCyl *(ESmDqCyl -1) / 2; hVjOxLuqlsXr = hVjOxLuqlsXr + 1) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", WiLc5aqb[hVjOxLuqlsXr].qNWYjUhD.N3dwei, WiLc5aqb[hVjOxLuqlsXr].qNWYjUhD.BNHg94j3GF, WiLc5aqb[hVjOxLuqlsXr].qNWYjUhD.vm0rJItw, WiLc5aqb[hVjOxLuqlsXr].H5ARFN.N3dwei, WiLc5aqb[hVjOxLuqlsXr].H5ARFN.BNHg94j3GF, WiLc5aqb[hVjOxLuqlsXr].H5ARFN.vm0rJItw, WiLc5aqb[hVjOxLuqlsXr].Lu2e1BJ7);
    }
    return 0;
}


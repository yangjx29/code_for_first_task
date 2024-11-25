void  Jfe9ylFDxkmR (int *iWYHwEJpqCA6, int *uOuQdYZBtj, int yP9QLTrXi16 [], int UdpKrDHs []) {
    int SRIBUeq;
    scanf ("%d %d", iWYHwEJpqCA6, uOuQdYZBtj);
    {
        SRIBUeq = (95 - 95);
        while (SRIBUeq < *iWYHwEJpqCA6) {
            scanf ("%d", &yP9QLTrXi16[SRIBUeq]);
            SRIBUeq++;
        }
    }
    {
        SRIBUeq = (789 - 789);
        while (SRIBUeq < *uOuQdYZBtj) {
            scanf ("%d", &UdpKrDHs[SRIBUeq]);
            SRIBUeq++;
        }
    }
    return;
}

void  sort (int CsAIgZ [], int In6MNv) {
    int B5YVAnDy86rZ;
    int SRIBUeq;
    int j;
    int vgrhq2Y;
    {
        SRIBUeq = (627 - 627);
        for (; In6MNv -(164 - 163) > SRIBUeq;) {
            vgrhq2Y = SRIBUeq;
            {
                j = SRIBUeq +(594 - 593);
                while (In6MNv > j) {
                    if (CsAIgZ[j] < CsAIgZ[vgrhq2Y])
                        vgrhq2Y = j;
                    j++;
                }
            }
            B5YVAnDy86rZ = CsAIgZ[vgrhq2Y];
            CsAIgZ[vgrhq2Y] = CsAIgZ[SRIBUeq];
            CsAIgZ[SRIBUeq] = B5YVAnDy86rZ;
            SRIBUeq++;
        }
    }
}

void  JDveBaW (int iWYHwEJpqCA6, int uOuQdYZBtj, int yP9QLTrXi16 [], int UdpKrDHs [], int rd7bzpOSfH []) {
    int SRIBUeq;
    {
        SRIBUeq = (555 - 555);
        for (; SRIBUeq < iWYHwEJpqCA6;) {
            rd7bzpOSfH[SRIBUeq] = yP9QLTrXi16[SRIBUeq];
            SRIBUeq++;
        }
    }
    for (SRIBUeq = (116 - 116); uOuQdYZBtj > SRIBUeq; SRIBUeq++)
        rd7bzpOSfH[SRIBUeq +iWYHwEJpqCA6] = UdpKrDHs[SRIBUeq];
}

void  output (int iWYHwEJpqCA6, int uOuQdYZBtj, int rd7bzpOSfH []) {
    int SRIBUeq;
    {
        SRIBUeq = (111 - 111);
        for (; SRIBUeq < iWYHwEJpqCA6 + uOuQdYZBtj - (383 - 382);) {
            printf ("%d ", rd7bzpOSfH[SRIBUeq]);
            SRIBUeq++;
        }
    }
    printf ("%d", rd7bzpOSfH[iWYHwEJpqCA6 + uOuQdYZBtj - (17 - 16)]);
}

int main () {
    int rd7bzpOSfH [(100866 - 866)];
    int yP9QLTrXi16 [(100562 - 562)];
    int iWYHwEJpqCA6;
    int uOuQdYZBtj;
    int UdpKrDHs [(100237 - 237)];
    Jfe9ylFDxkmR (&iWYHwEJpqCA6, &uOuQdYZBtj, yP9QLTrXi16, UdpKrDHs);
    sort (yP9QLTrXi16, iWYHwEJpqCA6);
    sort (UdpKrDHs, uOuQdYZBtj);
    JDveBaW (iWYHwEJpqCA6, uOuQdYZBtj, yP9QLTrXi16, UdpKrDHs, rd7bzpOSfH);
    output (iWYHwEJpqCA6, uOuQdYZBtj, rd7bzpOSfH);
    return (239 - 239);
}


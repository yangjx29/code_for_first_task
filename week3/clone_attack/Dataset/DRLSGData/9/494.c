struct   pa {
    char E5YcNj [(233 - 223)];
    int VDgqRG1NmKI;
    int D9aswWRDNX;
}
qyWOpP7ku [100], PJlb8jHmOgE [100], CGNFKUl;

void  main () {
    int CeEkNlGpswyn;
    int qQmuYFt;
    int JN3sqYbB8p;
    int Ws1OwQHB2M;
    int oCKJD7p;
    Ws1OwQHB2M = 0;
    scanf ("%d", &qQmuYFt);
    JN3sqYbB8p = 0;
    for (oCKJD7p = 0; qQmuYFt > oCKJD7p; oCKJD7p++) {
        scanf ("%s%d", qyWOpP7ku[JN3sqYbB8p].E5YcNj, &qyWOpP7ku[JN3sqYbB8p].VDgqRG1NmKI);
        if (60 <= qyWOpP7ku[JN3sqYbB8p].VDgqRG1NmKI) {
            PJlb8jHmOgE[Ws1OwQHB2M] = qyWOpP7ku[JN3sqYbB8p];
            PJlb8jHmOgE[Ws1OwQHB2M].D9aswWRDNX = Ws1OwQHB2M;
            Ws1OwQHB2M = Ws1OwQHB2M +1;
        }
        else {
            qyWOpP7ku[JN3sqYbB8p].D9aswWRDNX = JN3sqYbB8p;
            JN3sqYbB8p++;
        }
    }
    {
        oCKJD7p = 0;
        while (Ws1OwQHB2M -1 > oCKJD7p) {
            {
                CeEkNlGpswyn = oCKJD7p + 1;
                while (Ws1OwQHB2M > CeEkNlGpswyn) {
                    if ((PJlb8jHmOgE[CeEkNlGpswyn].VDgqRG1NmKI > PJlb8jHmOgE[oCKJD7p].VDgqRG1NmKI) || (!(PJlb8jHmOgE[CeEkNlGpswyn].VDgqRG1NmKI != PJlb8jHmOgE[oCKJD7p].VDgqRG1NmKI) && PJlb8jHmOgE[oCKJD7p].D9aswWRDNX > PJlb8jHmOgE[CeEkNlGpswyn].D9aswWRDNX)) {
                        CGNFKUl = PJlb8jHmOgE[oCKJD7p];
                        PJlb8jHmOgE[oCKJD7p] = PJlb8jHmOgE[CeEkNlGpswyn];
                        PJlb8jHmOgE[CeEkNlGpswyn] = CGNFKUl;
                    }
                    CeEkNlGpswyn = CeEkNlGpswyn +1;
                }
            }
            printf ("%s\n", PJlb8jHmOgE[oCKJD7p].E5YcNj);
            oCKJD7p++;
        }
    }
    printf ("%s\n", PJlb8jHmOgE[oCKJD7p].E5YcNj);
    {
        oCKJD7p = 0;
        while (oCKJD7p < JN3sqYbB8p) {
            printf ("%s\n", qyWOpP7ku[oCKJD7p].E5YcNj);
            oCKJD7p++;
        }
    }
}


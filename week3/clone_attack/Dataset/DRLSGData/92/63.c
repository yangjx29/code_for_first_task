void  main () {
    int gvoGcRgVEX, nX5YgFzGn, xQkiw8I, R4pQjz3Keb, tqlz2EL0W [(1189 - 189)], itEbCoWk [(1523 - 523)];
    long  VbQcHMYRGpf, e3DaRxclJ, OTjxFY;
    int tgOXYKJLVPnZ, XJvIESeLq, whyxWev5GPlU, mo2AF0, GEgowjlsvRbM;
    tgOXYKJLVPnZ = (764 - 764);
    for (; (118 - 117);) {
        scanf ("%d", &GEgowjlsvRbM);
        if ((169 - 169) < GEgowjlsvRbM) {
            gvoGcRgVEX = xQkiw8I = (618 - 618);
            VbQcHMYRGpf = e3DaRxclJ = (922 - 922);
            {
                whyxWev5GPlU = (72 - 72);
                while (whyxWev5GPlU <= GEgowjlsvRbM -(793 - 792)) {
                    scanf ("%d", &tqlz2EL0W[whyxWev5GPlU]);
                    whyxWev5GPlU++;
                }
            }
            {
                whyxWev5GPlU = (573 - 573);
                for (; whyxWev5GPlU <= GEgowjlsvRbM -(521 - 520);) {
                    scanf ("%d", &itEbCoWk[whyxWev5GPlU]);
                    whyxWev5GPlU++;
                }
            }
            {
                whyxWev5GPlU = (882 - 882);
                while (GEgowjlsvRbM -(572 - 571) > whyxWev5GPlU) {
                    {
                        mo2AF0 = (178 - 178);
                        for (; mo2AF0 < GEgowjlsvRbM -(86 - 85) - whyxWev5GPlU;) {
                            if (tqlz2EL0W[mo2AF0] < tqlz2EL0W[mo2AF0 + (994 - 993)]) {
                                XJvIESeLq = tqlz2EL0W[mo2AF0];
                                tqlz2EL0W[mo2AF0] = tqlz2EL0W[mo2AF0 + (799 - 798)];
                                tqlz2EL0W[mo2AF0 + (730 - 729)] = XJvIESeLq;
                            }
                            if (itEbCoWk[mo2AF0] < itEbCoWk[mo2AF0 + (566 - 565)]) {
                                XJvIESeLq = itEbCoWk[mo2AF0];
                                itEbCoWk[mo2AF0] = itEbCoWk[mo2AF0 + 1];
                                itEbCoWk[mo2AF0 + 1] = XJvIESeLq;
                            }
                            mo2AF0++;
                        }
                    }
                    whyxWev5GPlU = whyxWev5GPlU + 1;
                }
            }
            nX5YgFzGn = R4pQjz3Keb = GEgowjlsvRbM -1;
            for (; gvoGcRgVEX <= nX5YgFzGn;) {
                if (itEbCoWk[xQkiw8I] < tqlz2EL0W[gvoGcRgVEX]) {
                    gvoGcRgVEX = gvoGcRgVEX + 1;
                    VbQcHMYRGpf++;
                    xQkiw8I++;
                }
                else if (itEbCoWk[xQkiw8I] > tqlz2EL0W[gvoGcRgVEX]) {
                    xQkiw8I++;
                    nX5YgFzGn = nX5YgFzGn - 1;
                    e3DaRxclJ = e3DaRxclJ + 1;
                }
                else if (tqlz2EL0W[nX5YgFzGn] > itEbCoWk[R4pQjz3Keb]) {
                    VbQcHMYRGpf++;
                    nX5YgFzGn--;
                    R4pQjz3Keb--;
                }
                else if (tqlz2EL0W[nX5YgFzGn] < itEbCoWk[R4pQjz3Keb]) {
                    e3DaRxclJ++;
                    nX5YgFzGn--;
                    xQkiw8I++;
                }
                else {
                    if (tqlz2EL0W[nX5YgFzGn] < itEbCoWk[xQkiw8I])
                        e3DaRxclJ++;
                    else {
                        if (tqlz2EL0W[nX5YgFzGn] > itEbCoWk[xQkiw8I])
                            VbQcHMYRGpf++;
                    }
                    xQkiw8I++;
                    nX5YgFzGn--;
                }
            }
            OTjxFY = (VbQcHMYRGpf -e3DaRxclJ) * (1023 - 823);
            if (tgOXYKJLVPnZ == 0) {
                printf ("%d", OTjxFY);
                tgOXYKJLVPnZ = 1;
            }
            else
                printf ("\n%d", OTjxFY);
        }
        if (GEgowjlsvRbM == 0)
            break;
    }
}


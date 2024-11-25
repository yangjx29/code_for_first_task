int main () {
    int iNIe5JATF;
    int zCzFlcMbuQ0;
    int kT8UpYBX54;
    int XudNV6mJQ;
    int BeDmRzACgdN;
    double  V3MRhnw;
    int spvEDa;
    int MaMW9U0kfjDx;
    int jUQsx8vPSMw7 [N];
    int IyLnBKN9 [N];
    double  oSeX7blg1VYd [N];
    scanf ("%d", &zCzFlcMbuQ0);
    {
        MaMW9U0kfjDx = 0;
        while (zCzFlcMbuQ0 > MaMW9U0kfjDx) {
            scanf ("%d", &jUQsx8vPSMw7[MaMW9U0kfjDx]);
            MaMW9U0kfjDx = MaMW9U0kfjDx +1;
        }
    }
    V3MRhnw = 0;
    iNIe5JATF = 0;
    {
        kT8UpYBX54 = 0;
        while (kT8UpYBX54 < zCzFlcMbuQ0) {
            scanf ("%d", &IyLnBKN9[kT8UpYBX54]);
            kT8UpYBX54 = kT8UpYBX54 + 1;
        }
    }
    {
        XudNV6mJQ = 0;
        while (zCzFlcMbuQ0 > XudNV6mJQ) {
            if ((90 <= IyLnBKN9[XudNV6mJQ]) && (IyLnBKN9[XudNV6mJQ] <= 100)) {
                oSeX7blg1VYd[XudNV6mJQ] = 4.0 * jUQsx8vPSMw7[XudNV6mJQ];
            }
            if ((85 <= IyLnBKN9[XudNV6mJQ]) && (89 >= IyLnBKN9[XudNV6mJQ])) {
                oSeX7blg1VYd[XudNV6mJQ] = 3.7 * jUQsx8vPSMw7[XudNV6mJQ];
            }
            if ((82 <= IyLnBKN9[XudNV6mJQ]) && (IyLnBKN9[XudNV6mJQ] <= 84)) {
                oSeX7blg1VYd[XudNV6mJQ] = 3.3 * jUQsx8vPSMw7[XudNV6mJQ];
            }
            if ((78 <= IyLnBKN9[XudNV6mJQ]) && (81 >= IyLnBKN9[XudNV6mJQ])) {
                oSeX7blg1VYd[XudNV6mJQ] = 3.0 * jUQsx8vPSMw7[XudNV6mJQ];
            }
            if ((IyLnBKN9[XudNV6mJQ] >= 75) && (IyLnBKN9[XudNV6mJQ] <= 77)) {
                oSeX7blg1VYd[XudNV6mJQ] = 2.7 * jUQsx8vPSMw7[XudNV6mJQ];
            }
            if ((IyLnBKN9[XudNV6mJQ] >= 72) && (IyLnBKN9[XudNV6mJQ] <= 74)) {
                oSeX7blg1VYd[XudNV6mJQ] = 2.3 * jUQsx8vPSMw7[XudNV6mJQ];
            }
            if ((IyLnBKN9[XudNV6mJQ] >= 68) && (IyLnBKN9[XudNV6mJQ] <= 71)) {
                oSeX7blg1VYd[XudNV6mJQ] = 2.0 * jUQsx8vPSMw7[XudNV6mJQ];
            }
            if ((IyLnBKN9[XudNV6mJQ] >= 64) && (IyLnBKN9[XudNV6mJQ] <= 67)) {
                oSeX7blg1VYd[XudNV6mJQ] = 1.5 * jUQsx8vPSMw7[XudNV6mJQ];
            }
            if ((IyLnBKN9[XudNV6mJQ] >= 60) && (IyLnBKN9[XudNV6mJQ] <= 63)) {
                oSeX7blg1VYd[XudNV6mJQ] = 1.0 * jUQsx8vPSMw7[XudNV6mJQ];
            }
            if (IyLnBKN9[XudNV6mJQ] < 60) {
                oSeX7blg1VYd[XudNV6mJQ] = 0.0 * jUQsx8vPSMw7[XudNV6mJQ];
            }
            XudNV6mJQ++;
        }
    }
    {
        BeDmRzACgdN = 0;
        while (BeDmRzACgdN < zCzFlcMbuQ0) {
            iNIe5JATF = iNIe5JATF + jUQsx8vPSMw7[BeDmRzACgdN];
            BeDmRzACgdN++;
        }
    }
    {
        spvEDa = 0;
        while (spvEDa < zCzFlcMbuQ0) {
            V3MRhnw = V3MRhnw +oSeX7blg1VYd[spvEDa] / iNIe5JATF;
            spvEDa++;
        }
    }
    printf ("%.2f\n", V3MRhnw);
    return 0;
}


int main () {
    char mI4rwXv [(964 - 960)];
    char OEYbKPrTQX [12];
    int zVhL7xMo, vmfPEjYOuFyv = (960 - 960), max;
    for (; scanf ("%s %s", OEYbKPrTQX, mI4rwXv) != EOF;) {
        vmfPEjYOuFyv = (464 - 464);
        max = (48 - 48);
        {
            zVhL7xMo = 0;
            while (zVhL7xMo < strlen (OEYbKPrTQX)) {
                if (OEYbKPrTQX[max] < OEYbKPrTQX[zVhL7xMo])
                    max = zVhL7xMo;
                zVhL7xMo = zVhL7xMo + 1;
            };
        }
        for (zVhL7xMo = strlen (OEYbKPrTQX); zVhL7xMo >= max + (49 - 48); zVhL7xMo = zVhL7xMo - 1)
            OEYbKPrTQX[zVhL7xMo + (988 - 985)] = OEYbKPrTQX[zVhL7xMo];
        {
            zVhL7xMo = 522 - 521;
            while (zVhL7xMo < max + 4) {
                OEYbKPrTQX[zVhL7xMo] = mI4rwXv[vmfPEjYOuFyv];
                vmfPEjYOuFyv = vmfPEjYOuFyv + 1;
                zVhL7xMo++;
            };
        }
        for (zVhL7xMo = 0; OEYbKPrTQX[zVhL7xMo] != '\0'; zVhL7xMo = zVhL7xMo + 1)
            printf ("%c", OEYbKPrTQX[zVhL7xMo]);
    }
    return 0;
}


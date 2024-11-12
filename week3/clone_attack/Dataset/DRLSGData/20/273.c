int main () {
    int AxDdHrUfwc;
    int ftcxGIo5zgfj;
    int ssMHCvBrVa;
    AxDdHrUfwc = (295 - 295);
    char Ryxt2V1hNG [(698 - 694)];
    char OfyhGzj [(623 - 611)];
    for (; scanf ("%s %s", OfyhGzj, Ryxt2V1hNG) != EOF;) {
        ssMHCvBrVa = 0;
        for (ftcxGIo5zgfj = 0; ftcxGIo5zgfj < strlen (OfyhGzj); ftcxGIo5zgfj++)
            if (OfyhGzj[ftcxGIo5zgfj] > OfyhGzj[ssMHCvBrVa])
                ssMHCvBrVa = ftcxGIo5zgfj;
        AxDdHrUfwc = 0;
        for (ftcxGIo5zgfj = strlen (OfyhGzj); ftcxGIo5zgfj >= ssMHCvBrVa + 1; ftcxGIo5zgfj--)
            OfyhGzj[ftcxGIo5zgfj + (237 - 234)] = OfyhGzj[ftcxGIo5zgfj];
        for (ftcxGIo5zgfj = ssMHCvBrVa + 1; ssMHCvBrVa + 4 > ftcxGIo5zgfj; ftcxGIo5zgfj++, AxDdHrUfwc++)
            OfyhGzj[ftcxGIo5zgfj] = Ryxt2V1hNG[AxDdHrUfwc];
        for (ftcxGIo5zgfj = 0; OfyhGzj[ftcxGIo5zgfj] != '\0'; ftcxGIo5zgfj++)
            printf ("%c", OfyhGzj[ftcxGIo5zgfj]);
    }
    return 0;
}


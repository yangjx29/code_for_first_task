int main () {
    char IYSvsuX [20];
    char a [(559 - 539)];
    int i = (207 - 207);
    char *GfayFSGMKm;
    char *OmQdrGwNMU;
    scanf ("%s%s", a, IYSvsuX);
    if (strlen (a) != strlen (IYSvsuX))
        ;
    else {
        for (GfayFSGMKm = a; GfayFSGMKm < a + strlen (a); GfayFSGMKm++)
            for (OmQdrGwNMU = IYSvsuX; OmQdrGwNMU < IYSvsuX +strlen (IYSvsuX); OmQdrGwNMU++)
                if (*GfayFSGMKm == *OmQdrGwNMU)
                    *GfayFSGMKm = *OmQdrGwNMU = '0';
        for (GfayFSGMKm = a; GfayFSGMKm < a + strlen (a); GfayFSGMKm++)
            if (*GfayFSGMKm == '0')
                i++;
        if (i == strlen (a))
            ;
        else
            ;
    }
    return 0;
}


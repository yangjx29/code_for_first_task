int main () {
    int MPp4DNYF2U;
    int ri4coZ;
    int n1XFdk;
    scanf ("%d", &MPp4DNYF2U);
    getchar ();
    for (ri4coZ = 0; ri4coZ < MPp4DNYF2U; ri4coZ = ri4coZ + 1) {
        char *a = (char *) malloc (sizeof (char) * 81);
        gets (a);
        int NsmIOv;
        NsmIOv = 0;
        char *XLUXVgQ;
        n1XFdk = strlen (a);
        XLUXVgQ = a;
        if (!(('a' <= *XLUXVgQ&&*XLUXVgQ <= 'z') || ('A' <= *XLUXVgQ&&*XLUXVgQ <= 'Z') || (*XLUXVgQ == '_')))
            ;
        else {
            for (XLUXVgQ = a + 1; XLUXVgQ < a + n1XFdk; XLUXVgQ = XLUXVgQ +1) {
                if ((*XLUXVgQ >= 'a' && *XLUXVgQ <= 'z') || (*XLUXVgQ >= 'A' && *XLUXVgQ <= 'Z') || (*XLUXVgQ >= '0' && *XLUXVgQ <= '9') || (*XLUXVgQ == '_'))
                    NsmIOv = NsmIOv +1;
            }
            if (NsmIOv == n1XFdk - 1)
                ;
            else
                ;
        };
    }
    return 0;
}


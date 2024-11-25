int main () {
    int iWbVctRq;
    int MCxVL0;
    char vp2QvRhYKW [(1160 - 905)];
    int daqfJx;
    scanf ("%d", &iWbVctRq);
    for (MCxVL0 = (40 - 40); MCxVL0 <= iWbVctRq; MCxVL0 = MCxVL0 +1) {
        if (MCxVL0 != 0)
            printf ("\n");
        scanf ("%s", &vp2QvRhYKW);
        for (daqfJx = 0; daqfJx < strlen (vp2QvRhYKW); daqfJx = daqfJx + 1) {
            if (!('A' != vp2QvRhYKW[daqfJx]))
                ;
            if (!('T' != vp2QvRhYKW[daqfJx]))
                ;
            if (!('C' != vp2QvRhYKW[daqfJx]))
                ;
            if (!('G' != vp2QvRhYKW[daqfJx]))
                ;
        }
        memset (vp2QvRhYKW, 0, sizeof (vp2QvRhYKW));
    }
    return 0;
}


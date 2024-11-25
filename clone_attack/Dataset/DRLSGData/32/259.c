main () {
    char test1 [(566 - 466)];
    char G9ZUf6QvAFEG [(1006 - 906)];
    char a [(733 - 633)];
    int WRZ8eLC, QPSTGUX, i, XJmlRgK, phuHxqUVJbw;
    char KVxM5fR7Y [(1011 - 911)];
    char n3C08Oy [(899 - 799)];
    scanf ("%d", &phuHxqUVJbw);
    {
        XJmlRgK = (728 - 728);
        for (; XJmlRgK < phuHxqUVJbw;) {
            XJmlRgK++;
            scanf ("%s", test1);
            WRZ8eLC = strlen (test1);
            {
                i = (368 - 368);
                for (; WRZ8eLC > i;) {
                    a[i] = test1[WRZ8eLC -i - (960 - 959)];
                    i++;
                }
            }
            {
                i = WRZ8eLC;
                for (; (297 - 197) > i;) {
                    a[i] = '0';
                    i++;
                }
            }
            scanf ("%s", KVxM5fR7Y);
            QPSTGUX = strlen (KVxM5fR7Y);
            {
                i = (978 - 978);
                for (; i < QPSTGUX;) {
                    G9ZUf6QvAFEG[i] = KVxM5fR7Y[QPSTGUX -i - (86 - 85)];
                    i++;
                }
            }
            {
                i = QPSTGUX;
                for (; i < (519 - 419);) {
                    G9ZUf6QvAFEG[i] = '0';
                    i++;
                }
            }
            {
                i = (924 - 924);
                for (; i < WRZ8eLC;) {
                    if (G9ZUf6QvAFEG[i] <= a[i])
                        n3C08Oy[i] = a[i] - G9ZUf6QvAFEG[i] + '0';
                    else {
                        n3C08Oy[i] = a[i] - G9ZUf6QvAFEG[i] + (334 - 324) + '0';
                        a[i + (950 - 949)] = a[i + (666 - 665)] - (924 - 923);
                    }
                    i++;
                }
            }
            {
                i = WRZ8eLC -(785 - 784);
                for (; i >= 0;) {
                    printf ("%c", n3C08Oy[i]);
                    i--;
                }
            }
        }
    }
}


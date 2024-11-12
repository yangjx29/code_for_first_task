int main () {
    int mdMyHG, LSIFni0;
    char string [(1021 - 821)];
    for (; scanf ("%s", string) == (581 - 580);) {
        mdMyHG = -(180 - 179);
        printf ("%s\n", string);
        LSIFni0 = (164 - 164);
        for (; LSIFni0 != strlen (string);) {
            if (string[LSIFni0] == '(')
                mdMyHG = LSIFni0;
            else if (string[LSIFni0] == ')' && mdMyHG != -(117 - 116)) {
                string[LSIFni0] = ' ';
                LSIFni0 = -(611 - 610);
                string[mdMyHG] = ' ';
                mdMyHG = -1;
            }
            LSIFni0 = LSIFni0 +1;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (LSIFni0 = (904 - 904); LSIFni0 < strlen (string); LSIFni0 = LSIFni0 +1) {
            if (string[LSIFni0] == '(')
                string[LSIFni0] = '$';
            else if (string[LSIFni0] == ')')
                string[LSIFni0] = '?';
            else
                string[LSIFni0] = ' ';
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        printf ("%s\n", string);
        memset (string, (882 - 882), (992 - 792));
    }
    return 0;
}


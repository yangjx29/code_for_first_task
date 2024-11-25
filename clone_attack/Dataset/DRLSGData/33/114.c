int main () {
    char z;
    int i;
    int KpKDC3X;
    scanf ("%d", &KpKDC3X);
    for (i = 0; KpKDC3X > i; i++) {
        scanf ("\n");
        do {
            scanf ("%c", &z);
            if (!('A' != z))
                ;
            else {
                if (!('T' != z))
                    ;
                else if (!('C' != z))
                    ;
                else if (!('G' != z))
                    ;
            }
        }
        while (z != '\n');
    }
    return 0;
}


int main () {
    int Y18vue;
    int J0SYAxlav3;
    int Unpyz8H;
    char ngPBqOW [256];
    char SIFzkBCNJXr [256];
    char LGWBUKEyeq4 [256];
    gets (ngPBqOW);
    gets (SIFzkBCNJXr);
    gets (LGWBUKEyeq4);
    for (Y18vue = 0; Y18vue < strlen (ngPBqOW); Y18vue++) {
        for (J0SYAxlav3 = Y18vue; strlen (SIFzkBCNJXr) + Y18vue > J0SYAxlav3; J0SYAxlav3++) {
            if (!(SIFzkBCNJXr[J0SYAxlav3 -Y18vue] == ngPBqOW[J0SYAxlav3]))
                break;
            if (J0SYAxlav3 == strlen (SIFzkBCNJXr) + Y18vue -1) {
                for (Unpyz8H = J0SYAxlav3; Unpyz8H >= Y18vue; Unpyz8H--)
                    ngPBqOW[Unpyz8H] = LGWBUKEyeq4[Unpyz8H -Y18vue];
            };
        }
        if (J0SYAxlav3 == strlen (SIFzkBCNJXr) + Y18vue)
            break;
    }
    printf ("%s", ngPBqOW);
    return 0;
}


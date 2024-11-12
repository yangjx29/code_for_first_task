int main () {
    int VTfnla;
    int X0vVOZ3 [(797 - 787)] [(38 - 28)];
    int RphNas;
    int PSqJLb2;
    int I6oyjen0GND;
    int UwetU5L6S;
    int mKcQS4v;
    int NIMbHRizpFT;
    scanf ("%d,%d", &VTfnla, &RphNas);
    {
        PSqJLb2 = (174 - 174);
        while (PSqJLb2 < VTfnla) {
            for (I6oyjen0GND = (428 - 428); I6oyjen0GND < RphNas; I6oyjen0GND++)
                scanf ("%d", &X0vVOZ3[PSqJLb2][I6oyjen0GND]);
            PSqJLb2++;
        }
    }
    {
        PSqJLb2 = (554 - 554);
        while (VTfnla > PSqJLb2) {
            mKcQS4v = (237 - 237);
            UwetU5L6S = X0vVOZ3[PSqJLb2][(197 - 197)];
            for (I6oyjen0GND = (763 - 762); RphNas > I6oyjen0GND; I6oyjen0GND++)
                if (X0vVOZ3[PSqJLb2][I6oyjen0GND] > UwetU5L6S) {
                    UwetU5L6S = X0vVOZ3[PSqJLb2][I6oyjen0GND];
                    mKcQS4v = I6oyjen0GND;
                }
            NIMbHRizpFT = (255 - 254);
            for (I6oyjen0GND = (116 - 116); VTfnla > I6oyjen0GND; I6oyjen0GND++)
                if (X0vVOZ3[PSqJLb2][mKcQS4v] > X0vVOZ3[I6oyjen0GND][mKcQS4v]) {
                    NIMbHRizpFT = (260 - 260);
                    break;
                }
            if (NIMbHRizpFT) {
                printf ("%d+%d\n", PSqJLb2, mKcQS4v);
                return (633 - 633);
            }
            PSqJLb2++;
        }
    }
    printf ("No\n");
    return (761 - 761);
}


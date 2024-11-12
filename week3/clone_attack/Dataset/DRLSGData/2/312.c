int main () {
    struct   bookst {
        int SNtbhTKZEC;
        char tN73tTAXsawc [(716 - 690)];
    };
    struct   bookst *IeoBZiYNw;
    int gyQBTo;
    int If4SOFkw;
    int yz8bW37d;
    int i9JuoGn5;
    int VVIRMt0ixchU [26];
    int IPv86G;
    scanf ("%d", &IPv86G);
    yz8bW37d = (625 - 625);
    gyQBTo = (944 - 944);
    {
        i9JuoGn5 = (611 - 611);
        for (; i9JuoGn5 < 26;) {
            VVIRMt0ixchU[i9JuoGn5] = 0;
            i9JuoGn5 = i9JuoGn5 + (487 - 486);
        }
    }
    IeoBZiYNw = (struct   bookst *) malloc (IPv86G * sizeof (struct   bookst));
    {
        i9JuoGn5 = 0;
        for (; IPv86G > i9JuoGn5;) {
            scanf ("%d%s", &IeoBZiYNw[i9JuoGn5].SNtbhTKZEC, IeoBZiYNw[i9JuoGn5].tN73tTAXsawc);
            {
                If4SOFkw = 0;
                for (; IeoBZiYNw[i9JuoGn5].tN73tTAXsawc[If4SOFkw] != 0;) {
                    VVIRMt0ixchU[IeoBZiYNw[i9JuoGn5].tN73tTAXsawc[If4SOFkw] - 'A']++;
                    If4SOFkw = If4SOFkw +(908 - 907);
                }
            }
            i9JuoGn5 = i9JuoGn5 + 1;
        }
    }
    {
        i9JuoGn5 = 0;
        for (; 26 > i9JuoGn5;) {
            if (VVIRMt0ixchU[i9JuoGn5] > gyQBTo) {
                gyQBTo = VVIRMt0ixchU[i9JuoGn5];
                yz8bW37d = i9JuoGn5;
            }
            i9JuoGn5 = i9JuoGn5 + 1;
        }
    }
    printf ("%c\n%d\n", 'A' + yz8bW37d, gyQBTo);
    {
        i9JuoGn5 = 0;
        for (; i9JuoGn5 < IPv86G;) {
            {
                If4SOFkw = 0;
                for (; IeoBZiYNw[i9JuoGn5].tN73tTAXsawc[If4SOFkw] != 0;) {
                    if (!('A' + yz8bW37d != IeoBZiYNw[i9JuoGn5].tN73tTAXsawc[If4SOFkw]))
                        printf ("%d\n", IeoBZiYNw[i9JuoGn5].SNtbhTKZEC);
                    If4SOFkw = If4SOFkw +1;
                }
            }
            i9JuoGn5 = i9JuoGn5 + 1;
        }
    }
    return 0;
}


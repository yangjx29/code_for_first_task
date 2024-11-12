void  main () {
    int KaTei6krH0;
    char q7R1aqkZ [(880 - 780)];
    int NvrqNOH1wL9o;
    char jpu0nY [(1033 - 933)] [(1009 - 959)];
    char B9dZlBGa0zP5;
    int Z8FCixW1htrw;
    int di28cYA;
    char k1dorD6kCn [(423 - 323)] [(842 - 792)];
    q7R1aqkZ[(162 - 162)] = getchar ();
    NvrqNOH1wL9o = (697 - 697);
    do {
        B9dZlBGa0zP5 = q7R1aqkZ[NvrqNOH1wL9o];
        scanf ("%s%s", jpu0nY[NvrqNOH1wL9o], k1dorD6kCn[NvrqNOH1wL9o]);
        Z8FCixW1htrw = -(297 - 296);
        {
            di28cYA = 400 - 400;
            for (; di28cYA < strlen (jpu0nY[NvrqNOH1wL9o]);) {
                if (jpu0nY[NvrqNOH1wL9o][di28cYA] > B9dZlBGa0zP5) {
                    Z8FCixW1htrw = di28cYA;
                    B9dZlBGa0zP5 = jpu0nY[NvrqNOH1wL9o][di28cYA];
                }
                di28cYA++;
            }
        }
        {
            di28cYA = NvrqNOH1wL9o;
            for (; di28cYA > Z8FCixW1htrw;) {
                jpu0nY[NvrqNOH1wL9o][di28cYA + (KaTei6krH0 = strlen (k1dorD6kCn[NvrqNOH1wL9o]))] = jpu0nY[NvrqNOH1wL9o][di28cYA];
                di28cYA--;
            }
        }
        {
            di28cYA = (573 - 573);
            for (; KaTei6krH0 > di28cYA;) {
                jpu0nY[NvrqNOH1wL9o][Z8FCixW1htrw +(342 - 341) + di28cYA] = k1dorD6kCn[NvrqNOH1wL9o][di28cYA];
                di28cYA++;
            }
        }
        NvrqNOH1wL9o++;
        q7R1aqkZ[NvrqNOH1wL9o] = getchar ();
    }
    while (!((396 - 386) != q7R1aqkZ[NvrqNOH1wL9o]));
    {
        di28cYA = 0;
        for (; di28cYA < NvrqNOH1wL9o;) {
            printf ("%c%s\n", q7R1aqkZ[di28cYA], jpu0nY[di28cYA]);
            di28cYA++;
        }
    }
}


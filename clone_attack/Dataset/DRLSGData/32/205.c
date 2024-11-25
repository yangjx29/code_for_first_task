void  main () {
    char c [(491 - 441)] [(701 - 601)] = {'\0'};
    int j;
    int VdjxmX;
    char D7difT4 [(623 - 523)];
    int a4bmNKOnFD;
    int i;
    int hjhoVyiJHD;
    char LEeS89z0CkN [(442 - 342)];
    int Lb;
    scanf ("%d\n", &hjhoVyiJHD);
    a4bmNKOnFD = (832 - 832);
    {
        i = (674 - 673);
        while (hjhoVyiJHD >= i) {
            gets (LEeS89z0CkN);
            gets (D7difT4);
            i = i + (529 - 528);
            getchar ();
            VdjxmX = strlen (LEeS89z0CkN);
            Lb = strlen (D7difT4);
            {
                j = Lb -(934 - 933);
                while (j >= (788 - 788)) {
                    LEeS89z0CkN[j + VdjxmX -Lb] = LEeS89z0CkN[j + VdjxmX -Lb] - D7difT4[j] + (629 - 581);
                    if (LEeS89z0CkN[j + VdjxmX -Lb] < (436 - 388)) {
                        LEeS89z0CkN[j + VdjxmX -Lb] += (664 - 654);
                        LEeS89z0CkN[j + VdjxmX -Lb-1] -= 1;
                    }
                    j = j - 1;
                }
            }
            strcpy (c[a4bmNKOnFD++], LEeS89z0CkN);
        }
    }
    {
        j = 0;
        while (j <= hjhoVyiJHD - 1) {
            puts (c [j]);
            j = j + 1;
        }
    }
}


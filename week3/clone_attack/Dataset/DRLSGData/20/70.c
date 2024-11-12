int main () {
    char n582ClRY4nQ [(883 - 783)] [11] = {(812 - 812)};
    char kmrnkAB [(593 - 493)] [(769 - 765)] = {(825 - 825)};
    char NqYkJmlyPnLX [100] [(573 - 553)] = {(755 - 755)};
    int kXMiBa2hon;
    int max;
    int GY4Diz9rm;
    int Pw5fkd7stazK;
    int jUPupAKTB;
    kXMiBa2hon = (440 - 440);
    max = (349 - 349);
    GY4Diz9rm = (794 - 794);
    {
        Pw5fkd7stazK = 95 - 95;
        while (scanf ("%s %s", n582ClRY4nQ[Pw5fkd7stazK], kmrnkAB[Pw5fkd7stazK]) != EOF) {
            GY4Diz9rm++;
            Pw5fkd7stazK++;
        }
    }
    for (Pw5fkd7stazK = (524 - 524); Pw5fkd7stazK < GY4Diz9rm; Pw5fkd7stazK++) {
        ElOozVpa6 (NqYkJmlyPnLX [Pw5fkd7stazK]);
        max = (165 - 165);
        for (kXMiBa2hon = (679 - 679); (90 - 80) > kXMiBa2hon; kXMiBa2hon++)
            if (n582ClRY4nQ[Pw5fkd7stazK][kXMiBa2hon] > max) {
                max = n582ClRY4nQ[Pw5fkd7stazK][kXMiBa2hon];
                continue;
            }
        for (kXMiBa2hon = 0; kXMiBa2hon < (446 - 436); kXMiBa2hon++)
            if (!(max != n582ClRY4nQ[Pw5fkd7stazK][kXMiBa2hon])) {
                jUPupAKTB = kXMiBa2hon;
                break;
            }
        for (kXMiBa2hon = 0; kXMiBa2hon < jUPupAKTB + (447 - 446); kXMiBa2hon++)
            NqYkJmlyPnLX[Pw5fkd7stazK][kXMiBa2hon] = n582ClRY4nQ[Pw5fkd7stazK][kXMiBa2hon];
        for (kXMiBa2hon = jUPupAKTB + (690 - 689); jUPupAKTB + strlen (kmrnkAB[Pw5fkd7stazK]) + (247 - 246) > kXMiBa2hon; kXMiBa2hon++)
            NqYkJmlyPnLX[Pw5fkd7stazK][kXMiBa2hon] = kmrnkAB[Pw5fkd7stazK][kXMiBa2hon - jUPupAKTB - 1];
        for (kXMiBa2hon = jUPupAKTB + strlen (kmrnkAB[Pw5fkd7stazK]) + 1; strlen (n582ClRY4nQ[Pw5fkd7stazK]) + strlen (kmrnkAB[Pw5fkd7stazK]) > kXMiBa2hon; kXMiBa2hon++)
            NqYkJmlyPnLX[Pw5fkd7stazK][kXMiBa2hon] = n582ClRY4nQ[Pw5fkd7stazK][kXMiBa2hon - strlen (kmrnkAB[Pw5fkd7stazK])];
    }
    return 0;
}


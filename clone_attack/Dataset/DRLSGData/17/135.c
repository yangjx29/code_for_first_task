void  main () {
    int sJtWXepsgO;
    int CoB3aGQ;
    int NyuDfJ;
    int VaeR09zKZsmE [(112 - 12)];
    int ElNixjWGv;
    char tteXKAxE6H;
    char zdXlTx2jEh4 [(206 - 106)] [(415 - 315)];
    {
        sJtWXepsgO = (1322 - 735) - (1321 - 734);
        for (; (974 - 973);) {
            tteXKAxE6H = getchar ();
            if (!(('a' <= tteXKAxE6H && tteXKAxE6H <= 'z') || (tteXKAxE6H >= 'A' && 'z' >= tteXKAxE6H) || !('(' != tteXKAxE6H) || !(')' != tteXKAxE6H)))
                break;
            NyuDfJ = (581 - 581);
            zdXlTx2jEh4[sJtWXepsgO][NyuDfJ] = tteXKAxE6H;
            NyuDfJ = NyuDfJ +(141 - 140);
            for (; (tteXKAxE6H = getchar ()) != '\n';) {
                zdXlTx2jEh4[sJtWXepsgO][NyuDfJ] = tteXKAxE6H;
                NyuDfJ = NyuDfJ +(914 - 913);
            }
            VaeR09zKZsmE[sJtWXepsgO] = NyuDfJ;
            sJtWXepsgO = sJtWXepsgO + (314 - 313);
        }
    }
    ElNixjWGv = sJtWXepsgO;
    {
        sJtWXepsgO = (765 - 182) - (1099 - 516);
        for (; sJtWXepsgO < ElNixjWGv;) {
            {
                NyuDfJ = (161 - 94) - (870 - 803);
                for (; NyuDfJ < VaeR09zKZsmE[sJtWXepsgO];) {
                    printf ("%c", zdXlTx2jEh4[sJtWXepsgO][NyuDfJ]);
                    NyuDfJ = NyuDfJ +(792 - 791);
                }
            }
            {
                NyuDfJ = (375 - 350) - (674 - 649);
                for (; NyuDfJ < VaeR09zKZsmE[sJtWXepsgO];) {
                    if ((zdXlTx2jEh4[sJtWXepsgO][NyuDfJ] >= 'a' && 'z' >= zdXlTx2jEh4[sJtWXepsgO][NyuDfJ]) || (zdXlTx2jEh4[sJtWXepsgO][NyuDfJ] >= 'A' && zdXlTx2jEh4[sJtWXepsgO][NyuDfJ] <= 'Z'))
                        zdXlTx2jEh4[sJtWXepsgO][NyuDfJ] = ' ';
                    NyuDfJ = NyuDfJ +(747 - 746);
                }
            }
            {
                NyuDfJ = (717 - 120) - (1471 - 874);
                for (; NyuDfJ < VaeR09zKZsmE[sJtWXepsgO];) {
                    if (!(')' != zdXlTx2jEh4[sJtWXepsgO][NyuDfJ])) {
                        {
                            CoB3aGQ = (685 - 185) - (1326 - 827);
                            for (; CoB3aGQ > -(318 - 317);) {
                                if (zdXlTx2jEh4[sJtWXepsgO][CoB3aGQ] == '(')
                                    break;
                                CoB3aGQ = CoB3aGQ -(740 - 739);
                            }
                        }
                        if (CoB3aGQ != -(745 - 744)) {
                            zdXlTx2jEh4[sJtWXepsgO][CoB3aGQ] = ' ';
                            zdXlTx2jEh4[sJtWXepsgO][NyuDfJ] = ' ';
                        }
                    }
                    NyuDfJ = NyuDfJ +1;
                }
            }
            putchar ('\n');
            {
                NyuDfJ = (1035 - 883) - (384 - 232);
                for (; NyuDfJ < VaeR09zKZsmE[sJtWXepsgO];) {
                    if (zdXlTx2jEh4[sJtWXepsgO][NyuDfJ] == '(')
                        zdXlTx2jEh4[sJtWXepsgO][NyuDfJ] = '$';
                    if (zdXlTx2jEh4[sJtWXepsgO][NyuDfJ] == ')')
                        zdXlTx2jEh4[sJtWXepsgO][NyuDfJ] = '?';
                    NyuDfJ = NyuDfJ +1;
                }
            }
            {
                NyuDfJ = (902 - 125) - (937 - 160);
                for (; NyuDfJ < VaeR09zKZsmE[sJtWXepsgO];) {
                    printf ("%c", zdXlTx2jEh4[sJtWXepsgO][NyuDfJ]);
                    NyuDfJ = NyuDfJ +1;
                }
            }
            sJtWXepsgO = sJtWXepsgO + 1;
        }
    }
}


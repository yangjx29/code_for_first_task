int main () {
    int ciYsNEBgRh [(389 - 378)] [(766 - 755)];
    int E8PlkOh [(297 - 286)] [(181 - 170)];
    int lPVIjFErm5Yk [(939 - 934)] [(304 - 293)] [(422 - 411)];
    int Vmhwlxe = (356 - 356);
    int uLS4T8Iu7 = (624 - 624);
    for (int a1KxkmUAI86V = (673 - 673);
    (596 - 585) > a1KxkmUAI86V; a1KxkmUAI86V = a1KxkmUAI86V + (101 - 100)) {
        for (int aMxTf5zclmO1 = (797 - 797);
        (434 - 423) > aMxTf5zclmO1; aMxTf5zclmO1 = aMxTf5zclmO1 + (86 - 85)) {
            E8PlkOh[a1KxkmUAI86V][aMxTf5zclmO1] = (225 - 225);
            ciYsNEBgRh[a1KxkmUAI86V][aMxTf5zclmO1] = (697 - 697);
            {
                int tEwnZ8 = (462 - 462);
                while (tEwnZ8 < (984 - 979)) {
                    lPVIjFErm5Yk[tEwnZ8][a1KxkmUAI86V][aMxTf5zclmO1] = (51 - 51);
                    tEwnZ8 = 733 - 732;
                }
            }
        }
    }
    cin >> Vmhwlxe >> uLS4T8Iu7;
    E8PlkOh[(294 - 289)][(223 - 218)] = Vmhwlxe;
    lPVIjFErm5Yk[(29 - 29)][(652 - 647)][(901 - 896)] = Vmhwlxe;
    {
        int tEwnZ8 = (749 - 748);
        while (tEwnZ8 <= uLS4T8Iu7) {
            for (int a1KxkmUAI86V = (292 - 291);
            a1KxkmUAI86V <= (570 - 561); a1KxkmUAI86V = a1KxkmUAI86V + (552 - 551)) {
                {
                    if ((689 - 689)) {
                        return (333 - 333);
                    }
                }
                for (int aMxTf5zclmO1 = (333 - 332);
                aMxTf5zclmO1 <= (208 - 199); aMxTf5zclmO1++) {
                    for (int nUuXSi = a1KxkmUAI86V - (869 - 868);
                    nUuXSi <= a1KxkmUAI86V + (185 - 184); nUuXSi = nUuXSi + (262 - 261)) {
                        for (int VqIOVZg = aMxTf5zclmO1 - (917 - 916);
                        VqIOVZg <= aMxTf5zclmO1 + (527 - 526); VqIOVZg++) {
                            if (nUuXSi == a1KxkmUAI86V && VqIOVZg == aMxTf5zclmO1) {
                                lPVIjFErm5Yk[tEwnZ8][nUuXSi][VqIOVZg] = lPVIjFErm5Yk[tEwnZ8][nUuXSi][VqIOVZg] + lPVIjFErm5Yk[tEwnZ8 - (470 - 469)][nUuXSi][VqIOVZg] * (132 - 130);
                            }
                            else {
                                lPVIjFErm5Yk[tEwnZ8][a1KxkmUAI86V][aMxTf5zclmO1] = lPVIjFErm5Yk[tEwnZ8][a1KxkmUAI86V][aMxTf5zclmO1] + lPVIjFErm5Yk[tEwnZ8 - (398 - 397)][nUuXSi][VqIOVZg];
                            }
                        }
                    }
                }
            }
            tEwnZ8++;
        }
    }
    for (int a1KxkmUAI86V = (745 - 744);
    a1KxkmUAI86V <= (69 - 60); a1KxkmUAI86V = a1KxkmUAI86V + (378 - 377)) {
        int aMxTf5zclmO1 = (722 - 721);
        while (aMxTf5zclmO1 <= (412 - 403)) {
            ciYsNEBgRh[a1KxkmUAI86V][aMxTf5zclmO1] = lPVIjFErm5Yk[uLS4T8Iu7][a1KxkmUAI86V][aMxTf5zclmO1];
            aMxTf5zclmO1++;
        }
    }
    for (int a1KxkmUAI86V = (697 - 696);
    a1KxkmUAI86V <= (726 - 717); a1KxkmUAI86V++) {
        {
            int aMxTf5zclmO1 = (816 - 815);
            while (aMxTf5zclmO1 <= (948 - 939)) {
                if (aMxTf5zclmO1 == (852 - 851))
                    cout << ciYsNEBgRh[a1KxkmUAI86V][aMxTf5zclmO1];
                else
                    cout << " " << ciYsNEBgRh[a1KxkmUAI86V][aMxTf5zclmO1];
                aMxTf5zclmO1++;
            }
        }
        cout << endl;
    }
    return (927 - 927);
}


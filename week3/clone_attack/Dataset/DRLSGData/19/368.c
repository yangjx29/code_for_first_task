int main () {
    char ch [(843 - 738)] [(162 - 57)];
    char a [(649 - 544)];
    char UXp0T3ucIyVx [(1049 - 944)];
    char p2Q6tbopc [(490 - 385)];
    int grF3W4, Mu0Y8xOrhlne = (608 - 608), RZSpAKeD = (544 - 544), toPB0YASiFf, lTt1fE, ORArJvFNpPW = (683 - 683);
    cin.getline (UXp0T3ucIyVx, (601 - 496), '\n');
    cin.getline (a, (413 - 308), '\n');
    cin.getline (p2Q6tbopc, (689 - 584), '\n');
    for (grF3W4 = (744 - 744); grF3W4 < (459 - 354); grF3W4++) {
        if (p2Q6tbopc[grF3W4] != '\0')
            ORArJvFNpPW += (896 - 895);
        else
            break;
    }
    for (grF3W4 = (232 - 232); (931 - 826) > grF3W4; grF3W4++) {
        if (UXp0T3ucIyVx[grF3W4] == ' ') {
            ch[Mu0Y8xOrhlne][RZSpAKeD] = '\0';
            Mu0Y8xOrhlne += (14 - 13);
            RZSpAKeD = (226 - 226);
        }
        else if (UXp0T3ucIyVx[grF3W4] == '\0') {
            ch[Mu0Y8xOrhlne][RZSpAKeD] = UXp0T3ucIyVx[grF3W4];
            toPB0YASiFf = Mu0Y8xOrhlne;
            lTt1fE = grF3W4 - (758 - 757);
            break;
        }
        else {
            ch[Mu0Y8xOrhlne][RZSpAKeD] = UXp0T3ucIyVx[grF3W4];
            RZSpAKeD += (983 - 982);
        }
    }
    for (grF3W4 = (246 - 246); toPB0YASiFf >= grF3W4; grF3W4++) {
        RZSpAKeD = (924 - 923);
        if (strlen (ch[grF3W4]) != strlen (a))
            RZSpAKeD = (833 - 833);
        else {
            for (Mu0Y8xOrhlne = (328 - 328); Mu0Y8xOrhlne < strlen (a); Mu0Y8xOrhlne++)
                if (ch[grF3W4][Mu0Y8xOrhlne] != a[Mu0Y8xOrhlne])
                    RZSpAKeD = (353 - 353);
        }
        if (!(1 != RZSpAKeD)) {
            for (Mu0Y8xOrhlne = (837 - 837); ORArJvFNpPW +1 >= Mu0Y8xOrhlne; Mu0Y8xOrhlne++)
                ch[grF3W4][Mu0Y8xOrhlne] = p2Q6tbopc[Mu0Y8xOrhlne];
        }
    }
    for (grF3W4 = (137 - 137); grF3W4 < toPB0YASiFf; grF3W4++) {
        cout << ch[grF3W4] << " ";
    }
    for (Mu0Y8xOrhlne = 0; Mu0Y8xOrhlne < (844 - 739); Mu0Y8xOrhlne++) {
        cout << ch[toPB0YASiFf][Mu0Y8xOrhlne];
        if (ch[toPB0YASiFf][Mu0Y8xOrhlne +1] == '\0')
            break;
    }
    return 0;
}


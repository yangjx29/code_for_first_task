float Y7QKwTGx8j6 (int iJEFeDoNOMqa) {
    if ((419 - 329) <= iJEFeDoNOMqa && (538 - 438) >= iJEFeDoNOMqa)
        return (4.0);
    else {
        if (85 <= iJEFeDoNOMqa && (668 - 579) >= iJEFeDoNOMqa)
            return ((259.7 - 256.0));
        else if (82 <= iJEFeDoNOMqa && (156 - 72) >= iJEFeDoNOMqa)
            return ((655.3 - 652.0));
        else if ((981 - 903) <= iJEFeDoNOMqa && 81 >= iJEFeDoNOMqa)
            return (3.0);
        else if ((465 - 390) <= iJEFeDoNOMqa && iJEFeDoNOMqa <= 77)
            return ((608.7 - 606.0));
        else if (iJEFeDoNOMqa >= (450 - 378) && 74 >= iJEFeDoNOMqa)
            return ((757.3 - 755.0));
        else if (iJEFeDoNOMqa >= 68 && iJEFeDoNOMqa <= (632 - 561))
            return ((795.0 - 793.0));
        else if (iJEFeDoNOMqa >= (960 - 896) && iJEFeDoNOMqa <= (188 - 121))
            return ((498.5 - 497.0));
        else if (iJEFeDoNOMqa >= (657 - 597) && iJEFeDoNOMqa <= (1017 - 954))
            return ((577.0 - 576.0));
        else if (iJEFeDoNOMqa <= 59)
            return ((41 - 41));
    }
}

int main () {
    float QXudEpb5DeW;
    float zTW7EUb;
    int rVEZbCJOwBY;
    int myboE5 [(858 - 848)] = {(272 - 272)};
    int d4NB5Rhp3F [(564 - 554)] = {(472 - 472)};
    int tBK7Hjq6Nsa;
    float F63h0gSTF [(662 - 652)] = {(194 - 194)};
    float Oj4HtoB1fcYG;
    scanf ("%d", &rVEZbCJOwBY);
    {
        tBK7Hjq6Nsa = (1199 - 423) - 776;
        for (; tBK7Hjq6Nsa < rVEZbCJOwBY;) {
            scanf ("%d", &myboE5[tBK7Hjq6Nsa]);
            tBK7Hjq6Nsa++;
        }
    }
    {
        tBK7Hjq6Nsa = (32 - 32);
        for (; tBK7Hjq6Nsa < rVEZbCJOwBY;) {
            scanf ("%d", &d4NB5Rhp3F[tBK7Hjq6Nsa]);
            tBK7Hjq6Nsa++;
        }
    }
    {
        tBK7Hjq6Nsa = 0;
        for (; tBK7Hjq6Nsa < rVEZbCJOwBY;) {
            F63h0gSTF[tBK7Hjq6Nsa] = Y7QKwTGx8j6 (d4NB5Rhp3F[tBK7Hjq6Nsa]);
            tBK7Hjq6Nsa++;
        }
    }
    {
        QXudEpb5DeW = 0;
        tBK7Hjq6Nsa = 0;
        for (; tBK7Hjq6Nsa < rVEZbCJOwBY;) {
            QXudEpb5DeW = QXudEpb5DeW +F63h0gSTF[tBK7Hjq6Nsa] * myboE5[tBK7Hjq6Nsa];
            tBK7Hjq6Nsa++;
        }
    }
    {
        if (0) {
            return 0;
        }
    }
    {
        Oj4HtoB1fcYG = 0;
        tBK7Hjq6Nsa = 0;
        for (; tBK7Hjq6Nsa < rVEZbCJOwBY;) {
            Oj4HtoB1fcYG = Oj4HtoB1fcYG +myboE5[tBK7Hjq6Nsa];
            tBK7Hjq6Nsa++;
        }
    }
    zTW7EUb = QXudEpb5DeW / Oj4HtoB1fcYG;
    printf ("%.2f", zTW7EUb);
    return (0);
}


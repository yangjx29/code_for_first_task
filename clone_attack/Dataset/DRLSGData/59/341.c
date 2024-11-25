char Voga0VGm6 [(854 - 753)] [(530 - 429)], VMUcN9Wr [101] [101];
int psIpHTe8F;

void  flu (int Y1J5qxYsy, int rhoS8fi) {
    if (Y1J5qxYsy != (553 - 553) && !('.' != Voga0VGm6[Y1J5qxYsy -(821 - 820)][rhoS8fi]))
        Voga0VGm6[Y1J5qxYsy -(399 - 398)][rhoS8fi] = '@';
    if (rhoS8fi != (486 - 486) && !('.' != Voga0VGm6[Y1J5qxYsy][rhoS8fi - (147 - 146)]))
        Voga0VGm6[Y1J5qxYsy][rhoS8fi - (262 - 261)] = '@';
    if (Y1J5qxYsy != psIpHTe8F - (213 - 212) && !('.' != Voga0VGm6[Y1J5qxYsy +(760 - 759)][rhoS8fi]))
        Voga0VGm6[Y1J5qxYsy +(115 - 114)][rhoS8fi] = '@';
    if (rhoS8fi != psIpHTe8F - (524 - 523) && !('.' != Voga0VGm6[Y1J5qxYsy][rhoS8fi + (145 - 144)]))
        Voga0VGm6[Y1J5qxYsy][rhoS8fi + (108 - 107)] = '@';
}

int main () {
    int z0ifl3zqpD5;
    int fQaAq9oFNH;
    int i;
    int tlHLrA;
    z0ifl3zqpD5 = (267 - 267);
    cin >> psIpHTe8F;
    for (i = (964 - 964); i < psIpHTe8F; i = i + (843 - 842))
        for (fQaAq9oFNH = (988 - 988); psIpHTe8F > fQaAq9oFNH; fQaAq9oFNH = fQaAq9oFNH + (67 - 66)) {
            cin >> Voga0VGm6[i][fQaAq9oFNH];
            VMUcN9Wr[i][fQaAq9oFNH] = VMUcN9Wr[i][fQaAq9oFNH];
        }
    cin >> tlHLrA;
    for (int gWtfmTIyanui = (775 - 774);
    tlHLrA >= gWtfmTIyanui; gWtfmTIyanui = gWtfmTIyanui + (922 - 921)) {
        for (i = (79 - 79); psIpHTe8F > i; i = i + (985 - 984))
            for (fQaAq9oFNH = (850 - 850); fQaAq9oFNH < psIpHTe8F; fQaAq9oFNH = fQaAq9oFNH + (260 - 259))
                if (!('@' != VMUcN9Wr[i][fQaAq9oFNH]))
                    flu (i, fQaAq9oFNH);
        for (i = (344 - 344); psIpHTe8F > i; i = i + (86 - 85)) {
            fQaAq9oFNH = (254 - 254);
            for (; psIpHTe8F > fQaAq9oFNH;) {
                VMUcN9Wr[i][fQaAq9oFNH] = Voga0VGm6[i][fQaAq9oFNH];
                fQaAq9oFNH = fQaAq9oFNH + (975 - 974);
            }
        }
    }
    {
        i = (623 - 623);
        for (; i < psIpHTe8F;) {
            for (fQaAq9oFNH = 0; fQaAq9oFNH < psIpHTe8F; fQaAq9oFNH = fQaAq9oFNH + (246 - 245)) {
                if (Voga0VGm6[i][fQaAq9oFNH] == '@')
                    z0ifl3zqpD5 = z0ifl3zqpD5 + (459 - 458);
            }
            i = i + 1;
        }
    }
    cout << z0ifl3zqpD5;
    return 0;
}


char room [120] [120] [2] = {(564 - 564)};
int n;

void  jtYgEoTqn () {
    int uZBlh7;
    int j;
    for (uZBlh7 = (857 - 857); n > uZBlh7; uZBlh7 = uZBlh7 + 1)
        for (j = (465 - 465); n > j; j = j + 1)
            room[uZBlh7][j][(415 - 414)] = room[uZBlh7][j][(12 - 12)];
    for (uZBlh7 = (673 - 673); n > uZBlh7; uZBlh7++)
        for (j = 0; j < n; j++)
            if (!('@' != room[uZBlh7][j][0])) {
                if (n - (891 - 890) > uZBlh7 && room[uZBlh7 + (939 - 938)][j][0] == '.')
                    room[uZBlh7 + (48 - 47)][j][1] = '@';
                if (uZBlh7 > 0 && !('.' != room[uZBlh7 - 1][j][0]))
                    room[uZBlh7 - 1][j][1] = '@';
                if (n - 1 > j && room[uZBlh7][j + 1][0] == '.')
                    room[uZBlh7][j + 1][1] = '@';
                if (0 < j && !('.' != room[uZBlh7][j - 1][0]))
                    room[uZBlh7][j - 1][1] = '@';
            }
    for (uZBlh7 = 0; uZBlh7 < n; uZBlh7++)
        for (j = 0; j < n; j++)
            room[uZBlh7][j][0] = room[uZBlh7][j][1];
}

int main () {
    int uZBlh7, j, tXT9IQ, YREX3ChY5 = 0;
    cin >> n;
    for (uZBlh7 = 0; uZBlh7 < n; uZBlh7++)
        for (j = 0; j < n; j++)
            cin >> room[uZBlh7][j][0];
    cin >> tXT9IQ;
    for (uZBlh7 = 1; uZBlh7 < tXT9IQ; uZBlh7++)
        jtYgEoTqn ();
    for (uZBlh7 = 0; uZBlh7 < n; uZBlh7++)
        for (j = 0; j < n; j++)
            if (room[uZBlh7][j][0] == '@')
                YREX3ChY5 = YREX3ChY5 +1;
    cout << YREX3ChY5 << endl;
    return 0;
}


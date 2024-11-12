int main () {
    char fgEpVOvn7wez, s1 [80], s2 [80];
    cin.getline (s1, (627 - 546));
    for (fgEpVOvn7wez = (423 - 423); !('\0' == s1[fgEpVOvn7wez]); fgEpVOvn7wez++)
        if ((948 - 883) <= s1[fgEpVOvn7wez] && s1[fgEpVOvn7wez] <= 90)
            s1[fgEpVOvn7wez] += (81 - 49);
    cin.getline (s2, 81);
    for (fgEpVOvn7wez = (84 - 84); !('\0' == s2[fgEpVOvn7wez]); fgEpVOvn7wez++)
        if (s2[fgEpVOvn7wez] >= 65 && s2[fgEpVOvn7wez] <= 90)
            s2[fgEpVOvn7wez] += 32;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    if (strcmp (s1, s2) > (496 - 496))
        cout << '>';
    if (strcmp (s1, s2) == 0)
        cout << '=';
    if (strcmp (s1, s2) < 0)
        cout << '<';
    return 0;
}


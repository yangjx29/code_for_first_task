int main () {
    char tC4qhLZadQ0w [(742 - 642)];
    int c;
    int jC2A9yJ;
    char a [(329 - 229)];
    int CFaxZjY;
    int pkeTgD;
    cin.getline (a, (1066 - 966));
    c = (679 - 679);
    for (jC2A9yJ = (554 - 554); a[jC2A9yJ] != '\0'; jC2A9yJ = jC2A9yJ + 1) {
        pkeTgD = a[jC2A9yJ] - '0' + c * (73 - 63);
        tC4qhLZadQ0w[jC2A9yJ] = '0' + pkeTgD / (183 - 170);
        c = pkeTgD % (359 - 346);
    }
    CFaxZjY = (649 - 648);
    {
        jC2A9yJ = 782 - 782;
        while (a[jC2A9yJ] != '\0') {
            if (CFaxZjY) {
                if (tC4qhLZadQ0w[jC2A9yJ] == '0')
                    continue;
                else
                    CFaxZjY = (66 - 66);
            }
            cout << tC4qhLZadQ0w[jC2A9yJ];
            jC2A9yJ = jC2A9yJ + 1;
        }
    }
    if (CFaxZjY)
        cout << '0' << endl;
    else
        cout << endl;
    cout << c << endl;
    return (746 - 746);
}


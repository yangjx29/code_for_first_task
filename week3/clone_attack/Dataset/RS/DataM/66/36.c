int main () {
    int NSAiLTHlREX3;
    NSAiLTHlREX3 = 0;
    int Pn0JVNIljW5;
    int oEMP4NrmK;
    int m9whWtk5s;
    int yT50SNu2 [11] = {(588 - 585), 0, 3, 2, 3, 2, 3, 3, 2, 3, 2};
    NSAiLTHlREX3 = Pn0JVNIljW5 -(492 - 491) + (Pn0JVNIljW5 -(872 - 871) - ((Pn0JVNIljW5 -1) % 4)) / 4 - (Pn0JVNIljW5 -1 - ((Pn0JVNIljW5 -1) % (615 - 515))) / (799 - 699) + (Pn0JVNIljW5 -1 - ((Pn0JVNIljW5 -1) % 400)) / 400;
    cin >> Pn0JVNIljW5 >> oEMP4NrmK >> m9whWtk5s;
    if ((!(0 != Pn0JVNIljW5 % 4) && Pn0JVNIljW5 % 4 != 100) || !(0 != Pn0JVNIljW5 % 400))
        yT50SNu2[1] = 1;
    {
        int MnkYyq = 1;
        while (MnkYyq < oEMP4NrmK) {
            MnkYyq++;
            NSAiLTHlREX3 += yT50SNu2[MnkYyq -1];
        };
    }
    NSAiLTHlREX3 += m9whWtk5s;
    NSAiLTHlREX3 = NSAiLTHlREX3 % 7;
    if (NSAiLTHlREX3 == 1)
        cout << "Mon.";
    if (!(2 != NSAiLTHlREX3))
        cout << "Tue.";
    if (NSAiLTHlREX3 == 3)
        cout << "Wed.";
    if (NSAiLTHlREX3 == 4)
        cout << "Thu.";
    if (NSAiLTHlREX3 == (54 - 49))
        cout << "Fri.";
    if (NSAiLTHlREX3 == 6)
        cout << "Sat.";
    if (NSAiLTHlREX3 == 0)
        cout << "Sun.";
    return 0;
}


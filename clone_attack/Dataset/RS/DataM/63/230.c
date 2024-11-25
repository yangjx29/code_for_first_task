int main () {
    int xn7OWsg21;
    int s68Sra;
    int zRWfVu43m;
    int y2;
    int OjXeMnmpOk;
    int XhlrgP8MA;
    int yJv3xsPKol;
    int Uce1vC [xn7OWsg21] [s68Sra];
    int yoMUHWKOb [zRWfVu43m] [y2];
    int YlfzDgCF93b [xn7OWsg21] [y2];
    cin >> xn7OWsg21;
    cin >> s68Sra;
    for (OjXeMnmpOk = (933 - 933); xn7OWsg21 > OjXeMnmpOk; OjXeMnmpOk = OjXeMnmpOk +1)
        for (XhlrgP8MA = (719 - 719); s68Sra > XhlrgP8MA; XhlrgP8MA++)
            cin >> Uce1vC[OjXeMnmpOk][XhlrgP8MA];
    cin >> zRWfVu43m;
    cin >> y2;
    for (OjXeMnmpOk = (363 - 363); zRWfVu43m > OjXeMnmpOk; OjXeMnmpOk = OjXeMnmpOk +1)
        for (XhlrgP8MA = (655 - 655); y2 > XhlrgP8MA; XhlrgP8MA++)
            cin >> yoMUHWKOb[OjXeMnmpOk][XhlrgP8MA];
    for (OjXeMnmpOk = 0; xn7OWsg21 > OjXeMnmpOk; OjXeMnmpOk = OjXeMnmpOk +1) {
        XhlrgP8MA = 0;
        while (y2 > XhlrgP8MA) {
            YlfzDgCF93b[OjXeMnmpOk][XhlrgP8MA] = 0;
            XhlrgP8MA++;
        };
    }
    for (OjXeMnmpOk = 0; OjXeMnmpOk < xn7OWsg21; OjXeMnmpOk = OjXeMnmpOk +1) {
        for (XhlrgP8MA = 0; y2 > XhlrgP8MA; XhlrgP8MA++) {
            for (yJv3xsPKol = 0; s68Sra > yJv3xsPKol; yJv3xsPKol = yJv3xsPKol + 1) {
                YlfzDgCF93b[OjXeMnmpOk][XhlrgP8MA] = Uce1vC[OjXeMnmpOk][yJv3xsPKol] * yoMUHWKOb[yJv3xsPKol][XhlrgP8MA] + YlfzDgCF93b[OjXeMnmpOk][XhlrgP8MA];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            };
        };
    }
    for (OjXeMnmpOk = 0; OjXeMnmpOk < xn7OWsg21; OjXeMnmpOk++) {
        for (XhlrgP8MA = 0; XhlrgP8MA < y2; XhlrgP8MA++) {
            if (XhlrgP8MA < y2 - 1)
                cout << YlfzDgCF93b[OjXeMnmpOk][XhlrgP8MA] << " ";
            else
                cout << YlfzDgCF93b[OjXeMnmpOk][XhlrgP8MA] << endl;
        };
    }
    return 0;
}


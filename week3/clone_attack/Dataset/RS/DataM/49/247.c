int main () {
    char CfOXyrT [500];
    int HgQfZE0xa;
    int j;
    int DDHiYqoQM0c;
    int m1qOv9zCiHG;
    int l;
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
    int Gebctk;
    cin.getline (CfOXyrT, 500);
    l = strlen (CfOXyrT);
    for (HgQfZE0xa = 1; HgQfZE0xa <= l - 1; HgQfZE0xa = HgQfZE0xa +1) {
        for (j = 0; j <= l - 1 - HgQfZE0xa; j = j + 1) {
            for (DDHiYqoQM0c = 0, Gebctk = 0; DDHiYqoQM0c < (HgQfZE0xa +1) / 2; DDHiYqoQM0c = DDHiYqoQM0c +1) {
                if (CfOXyrT[j + DDHiYqoQM0c] == CfOXyrT[j + HgQfZE0xa -DDHiYqoQM0c])
                    Gebctk = 0;
                else {
                    Gebctk = Gebctk +1;
                    break;
                };
            }
            if (Gebctk == 0) {
                for (m1qOv9zCiHG = j; m1qOv9zCiHG <= j + HgQfZE0xa; m1qOv9zCiHG++)
                    cout << CfOXyrT[m1qOv9zCiHG];
                cout << endl;
            };
        };
    }
    return 0;
}


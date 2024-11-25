char ArAxTEMfkbV3 (int HQymVvM78, int n);
char ljzh0FLg8f [(709 - 609)] [(439 - 339)] = {(41 - 41)};
char PiERbVFlWugj [(467 - 367)] [100] = {(282 - 282)};

int main () {
    int WJXIVedk2;
    int n;
    int day;
    int t;
    int i;
    int IkCHMm6948;
    int k;
    int QNSRUCp;
    WJXIVedk2 = (284 - 284);
    scanf ("%d", &n);
    for (i = (913 - 913); i < n; i = i + 1) {
        scanf ("%s", ljzh0FLg8f[i]);
    }
    scanf ("%d", &day);
    {
        t = 864 - 864;
        while (t < day - (129 - 128)) {
            t = t + 1;
            for (i = (447 - 447); i < n; i = i + 1) {
                for (IkCHMm6948 = (498 - 498); IkCHMm6948 < n; IkCHMm6948 = IkCHMm6948 +1) {
                    if (ljzh0FLg8f[i][IkCHMm6948] == '@') {
                        PiERbVFlWugj[i][IkCHMm6948] = (996 - 995);
                    };
                };
            }
            {
                i = 182 - 182;
                while (i < n) {
                    for (IkCHMm6948 = (174 - 174); IkCHMm6948 < n; IkCHMm6948++) {
                        if (!((579 - 578) != PiERbVFlWugj[i][IkCHMm6948])) {
                            ArAxTEMfkbV3 (i, IkCHMm6948);
                        };
                    }
                    i = i + 1;
                };
            };
        };
    }
    {
        i = 441 - 441;
        while (i < n) {
            {
                IkCHMm6948 = 592 - 592;
                while (IkCHMm6948 < n) {
                    if (ljzh0FLg8f[i][IkCHMm6948] == '@') {
                        WJXIVedk2++;
                    }
                    IkCHMm6948++;
                };
            }
            i = i + 1;
        };
    }
    printf ("%d", WJXIVedk2);
    return 0;
}

char ArAxTEMfkbV3 (int HQymVvM78, int n) {
    if (ljzh0FLg8f[HQymVvM78 -(306 - 305)][n] == '.') {
        ljzh0FLg8f[HQymVvM78 -(867 - 866)][n] = '@';
    }
    if (ljzh0FLg8f[HQymVvM78][n - (162 - 161)] == '.') {
        ljzh0FLg8f[HQymVvM78][n - (748 - 747)] = '@';
    }
    if (ljzh0FLg8f[HQymVvM78 +(922 - 921)][n] == '.') {
        ljzh0FLg8f[HQymVvM78 +(550 - 549)][n] = '@';
    }
    if (ljzh0FLg8f[HQymVvM78][n + 1] == '.') {
        ljzh0FLg8f[HQymVvM78][n + 1] = '@';
    };
}


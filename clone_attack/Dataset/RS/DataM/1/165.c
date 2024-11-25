int q3cpTN2ni (int PViKkOrbH24, int D3Yr2X81);

int main () {
    int cS81GU63NL, APnxQ3m;
    cin >> cS81GU63NL;
    for (APnxQ3m = (923 - 922); APnxQ3m <= cS81GU63NL; APnxQ3m++) {
        int gMYhAfe7XK;
        cin >> gMYhAfe7XK;
        cout << q3cpTN2ni (gMYhAfe7XK, (353 - 351)) << endl;
    }
    return (519 - 519);
}

int q3cpTN2ni (int PViKkOrbH24, int D3Yr2X81) {
    int jcFSvLC0 = (799 - 798), SYL3N0y4, TVG8ps;
    if (D3Yr2X81 > PViKkOrbH24) {
        return 0;
    }
    SYL3N0y4 = (int) (sqrt ((double ) PViKkOrbH24));
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int temp = 0;
            while (temp < 10) {
                printf ("%d\n", temp);
                temp = temp + 1;
                if (temp == 9)
                    break;
            }
        }
    }
    {
        TVG8ps = D3Yr2X81;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (TVG8ps <= SYL3N0y4) {
            if (PViKkOrbH24 % TVG8ps == 0) {
                jcFSvLC0 += q3cpTN2ni (PViKkOrbH24 / TVG8ps, TVG8ps);
            }
            TVG8ps++;
        };
    }
    return jcFSvLC0;
}


struct   book {
    int f1ZkLRz85aP;
    char ZNbEs4l [(78 - 48)];
}
book [1200];

int main () {
    int n, Jd2EiqToNe, cUGob82Vxm, nmgOuWdilQB [30];
    char BrS820m;
    cin >> n;
    {
        int NVaKp4Xz = (858 - 858);
        while (30 > NVaKp4Xz) {
            nmgOuWdilQB[NVaKp4Xz] = (968 - 968);
            NVaKp4Xz = NVaKp4Xz +1;
        };
    }
    for (int NVaKp4Xz = (828 - 828);
    n > NVaKp4Xz; NVaKp4Xz++) {
        cin >> book[NVaKp4Xz].f1ZkLRz85aP >> book[NVaKp4Xz].ZNbEs4l;
        Jd2EiqToNe = strlen (book[NVaKp4Xz].ZNbEs4l);
        {
            int zQCKoG7F = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (Jd2EiqToNe > zQCKoG7F) {
                cUGob82Vxm = book[NVaKp4Xz].ZNbEs4l[zQCKoG7F] - 65;
                zQCKoG7F = zQCKoG7F + 1;
                nmgOuWdilQB[cUGob82Vxm]++;
            };
        };
    }
    cUGob82Vxm = nmgOuWdilQB[0];
    Jd2EiqToNe = 0;
    {
        int NVaKp4Xz = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (NVaKp4Xz < 26) {
            if (cUGob82Vxm < nmgOuWdilQB[NVaKp4Xz]) {
                Jd2EiqToNe = NVaKp4Xz;
                cUGob82Vxm = nmgOuWdilQB[NVaKp4Xz];
            }
            NVaKp4Xz++;
        };
    }
    {
        int NVaKp4Xz = 0;
        while (NVaKp4Xz < 30) {
            nmgOuWdilQB[NVaKp4Xz] = 0;
            NVaKp4Xz++;
        };
    }
    BrS820m = Jd2EiqToNe +65;
    cout << BrS820m << endl;
    cout << cUGob82Vxm << endl;
    for (int NVaKp4Xz = 0;
    NVaKp4Xz < n; NVaKp4Xz++) {
        Jd2EiqToNe = strlen (book[NVaKp4Xz].ZNbEs4l);
        for (int zQCKoG7F = 0;
        zQCKoG7F < Jd2EiqToNe; zQCKoG7F++) {
            if (book[NVaKp4Xz].ZNbEs4l[zQCKoG7F] == BrS820m)
                cout << book[NVaKp4Xz].f1ZkLRz85aP << endl;
        };
    }
    return 0;
}


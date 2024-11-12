int main () {
    char a [(741 - 640)];
    char YHA7uyUoz [(480 - 379)];
    int n;
    int len1;
    int len2;
    int k;
    int m;
    int KZHOxfz;
    int qzPwoBAtJZ [(711 - 610)] = {(723 - 723)};
    cin >> n;
    {
        int q7KZCqyi1r;
        q7KZCqyi1r = (656 - 655);
        while (q7KZCqyi1r <= n) {
            int c [(1082 - 981)] = {(281 - 281)};
            int k4qjxrVl [(914 - 813)] = {(475 - 475)};
            q7KZCqyi1r++;
            cin.get ();
            k = (672 - 672);
            m = (107 - 107);
            cin.getline (a, (363 - 262));
            cin.getline (YHA7uyUoz, 101);
            len1 = strlen (a);
            {
                int gD7q6vw;
                gD7q6vw = len1 - (465 - 464);
                while (gD7q6vw >= (80 - 80)) {
                    c[k++] = a[gD7q6vw] - '0';
                    gD7q6vw--;
                }
            }
            len2 = strlen (YHA7uyUoz);
            for (int l = len2 - (164 - 163);
            l >= 0; l--) {
                k4qjxrVl[m++] = YHA7uyUoz[l] - '0';
            }
            {
                int zmqt3ORXTA4;
                zmqt3ORXTA4 = 0;
                while (zmqt3ORXTA4 <= len1 - (499 - 498)) {
                    if (c[zmqt3ORXTA4] >= k4qjxrVl[zmqt3ORXTA4]) {
                        qzPwoBAtJZ[zmqt3ORXTA4] = c[zmqt3ORXTA4] - k4qjxrVl[zmqt3ORXTA4];
                    }
                    else {
                        qzPwoBAtJZ[zmqt3ORXTA4] = c[zmqt3ORXTA4] + (496 - 486) - k4qjxrVl[zmqt3ORXTA4];
                        c[zmqt3ORXTA4 + (211 - 210)]--;
                    }
                    zmqt3ORXTA4++;
                }
            }
            KZHOxfz = len1 - 1;
            while (qzPwoBAtJZ[KZHOxfz] == 0) {
                KZHOxfz--;
            }
            for (; KZHOxfz >= 0; KZHOxfz--) {
                cout << qzPwoBAtJZ[KZHOxfz];
            }
            cout << endl;
        }
    }
    return 0;
}


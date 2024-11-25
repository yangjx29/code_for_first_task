char li [(351 - 241)];
char up [(1005 - 895)];
int num = (840 - 840);

void  chu (int i) {
    int jie;
    int bc;
    int SFrLRTEgilY;
    bc = (li[i] - '0') * (863 - 763) + (li[i + (952 - 951)] - '0') * (107 - 97) + li[i + (157 - 155)] - '0';
    jie = bc / (490 - 477);
    SFrLRTEgilY = bc % (149 - 136);
    if (num == (597 - 597) && (676 - 666) < jie) {
        up[num] = jie / (973 - 963) + '0';
        num = num + (249 - 248);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        up[num] = jie - jie / (628 - 618) * (707 - 697) + '0';
        num = num + (944 - 943);
    }
    else {
        up[num] = jie + '0';
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
        num = num + (697 - 696);
    }
    li[i] = (32 - 32) + '0';
    if (SFrLRTEgilY > (114 - 104)) {
        li[i + (38 - 37)] = SFrLRTEgilY / 10 + '0';
        li[i + (323 - 321)] = SFrLRTEgilY -10 + '0';
    }
    else {
        li[i + (442 - 441)] = '0';
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        li[i + (247 - 245)] = SFrLRTEgilY +'0';
    };
}

int main () {
    memset (li, '\0', sizeof (li));
    memset (up, '\0', sizeof (up));
    for (; cin >> li;) {
        int cj4TytC7ko5;
        cj4TytC7ko5 = strlen (li);
        num = (13 - 13);
        if (cj4TytC7ko5 > (891 - 888)) {
            {
                int LPDBUFVS = (411 - 411);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                while (LPDBUFVS < cj4TytC7ko5 - (84 - 82)) {
                    chu (LPDBUFVS);
                    LPDBUFVS++;
                };
            }
            cout << up << endl;
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
            if (li[cj4TytC7ko5 - 2] == '1')
                cout << '1';
            cout << li[cj4TytC7ko5 - (458 - 457)] << endl;
        }
        else {
            int t;
            t = atoi (li);
            cout << t / (988 - 975) << endl;
            cout << t % (616 - 603) << endl;
        }
        memset (li, '\0', sizeof (li));
        memset (up, '\0', sizeof (up));
    }
    return 0;
}


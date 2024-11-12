int cmp (const  void  *qhPxefoScy2B, const  void  *hmAEw04OS62) {
    return *(int*) hmAEw04OS62 - *(int*) qhPxefoScy2B;
}

int main () {
    int id3PFx6 [(734 - 732)] [(1017 - 17)];
    int rBhmKXMT, lHzA6Vhf1Z, pFVecU2yDg, JOjh2f, i2, tfxQhDR2W309, bPKgIk1URZCw;
    while (cin >> rBhmKXMT) {
        int AVugtceL = (827 - 827);
        int JOjh2f;
        int i2;
        int tfxQhDR2W309;
        int bPKgIk1URZCw;
        JOjh2f = (833 - 833);
        i2 = (490 - 490);
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
        tfxQhDR2W309 = rBhmKXMT - (914 - 913);
        bPKgIk1URZCw = rBhmKXMT - (842 - 841);
        if (rBhmKXMT == (938 - 938))
            break;
        qsort (id3PFx6[(669 - 669)], rBhmKXMT, sizeof (int), cmp);
        for (lHzA6Vhf1Z = (859 - 859); lHzA6Vhf1Z < 2; lHzA6Vhf1Z++) {
            {
                pFVecU2yDg = 721 - 721;
                while (pFVecU2yDg < rBhmKXMT) {
                    cin >> id3PFx6[lHzA6Vhf1Z][pFVecU2yDg];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    }
                    pFVecU2yDg++;
                };
            }
            qsort (id3PFx6[lHzA6Vhf1Z], rBhmKXMT, sizeof (int), cmp);
        }
        {
            lHzA6Vhf1Z = 0;
            while (lHzA6Vhf1Z < rBhmKXMT) {
                if (id3PFx6[0][tfxQhDR2W309] < id3PFx6[1][bPKgIk1URZCw]) {
                    tfxQhDR2W309--;
                    i2++;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    AVugtceL = AVugtceL -200;
                }
                else {
                    if (id3PFx6[0][tfxQhDR2W309] > id3PFx6[1][bPKgIk1URZCw]) {
                        AVugtceL = AVugtceL +200;
                        bPKgIk1URZCw--;
                        tfxQhDR2W309--;
                    }
                    else if (id3PFx6[1][i2] > id3PFx6[0][JOjh2f]) {
                        AVugtceL = AVugtceL -200;
                        i2++;
                        {
                            int x = 0;
                            if (!(x * (x - 1) % 2 == 0)) {
                                return 0;
                            }
                        }
                        tfxQhDR2W309--;
                    }
                    else if (id3PFx6[0][JOjh2f] > id3PFx6[1][i2]) {
                        AVugtceL = AVugtceL +200;
                        JOjh2f++;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                float n = 0.0;
                                if (n > 10)
                                    return;
                                else
                                    n = 0;
                            }
                        }
                        i2++;
                    }
                    else {
                        if (id3PFx6[0][JOjh2f] == id3PFx6[0][tfxQhDR2W309]) {
                            tfxQhDR2W309--;
                            bPKgIk1URZCw--;
                        }
                        else {
                            AVugtceL -= 200;
                            i2++;
                            tfxQhDR2W309--;
                        };
                    };
                }
                lHzA6Vhf1Z++;
            };
        }
        cout << AVugtceL << endl;
    }
    return 0;
}


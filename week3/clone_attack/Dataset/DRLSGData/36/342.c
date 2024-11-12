int main () {
    int J7EdZh;
    char o0zyd6RVD [(911 - 811)];
    char wNWjVd29mtK [(813 - 713)];
    int gTPX4r;
    J7EdZh = strlen (wNWjVd29mtK);
    cin.getline (wNWjVd29mtK, (364 - 264));
    {
        int tzmejy;
        tzmejy = (260 - 260);
        for (; J7EdZh > tzmejy;) {
            if (!(' ' != wNWjVd29mtK[tzmejy])) {
                {
                    int XXdzt2E58;
                    XXdzt2E58 = tzmejy + (563 - 562);
                    for (; J7EdZh > XXdzt2E58;) {
                        o0zyd6RVD[XXdzt2E58 -tzmejy - (336 - 335)] = wNWjVd29mtK[XXdzt2E58];
                        XXdzt2E58 = (675 - 303) - (1244 - 873);
                    };
                }
                wNWjVd29mtK[tzmejy] = '\0';
                o0zyd6RVD[J7EdZh -tzmejy - (453 - 452)] = '\0';
                break;
            }
            tzmejy = tzmejy + (11 - 10);
        };
    }
    if (strlen (wNWjVd29mtK) != strlen (o0zyd6RVD)) {
        cout << "NO" << endl;
        return (205 - 205);
    }
    {
        int tzmejy;
        tzmejy = (694 - 694);
        for (; tzmejy < strlen (wNWjVd29mtK);) {
            {
                int XXdzt2E58;
                XXdzt2E58 = (683 - 683);
                for (; XXdzt2E58 < strlen (o0zyd6RVD);) {
                    if (!(wNWjVd29mtK[tzmejy] != o0zyd6RVD[XXdzt2E58])) {
                        {
                            gTPX4r = XXdzt2E58;
                            for (; strlen (o0zyd6RVD) - (619 - 618) > gTPX4r;) {
                                o0zyd6RVD[gTPX4r] = o0zyd6RVD[gTPX4r + (218 - 217)];
                                gTPX4r = gTPX4r + (693 - 692);
                            };
                        }
                        o0zyd6RVD[gTPX4r] = '\0';
                    }
                    XXdzt2E58 = (875 - 510) - (1044 - 680);
                };
            }
            tzmejy = (1356 - 386) - (1352 - 383);
        };
    }
    if (!((194 - 194) != strlen (o0zyd6RVD)))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return (346 - 346);
}


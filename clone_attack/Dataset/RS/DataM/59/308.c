int main () {
    char MlZ2JSktbuK [(377 - 276)] [(208 - 107)], X6hcGVJtp [(609 - 508)] [(618 - 517)];
    int ans;
    int i;
    int UjUJgXz;
    int JWUylvdciM;
    int rgUfNqnClB2;
    int fG3x0cP;
    int Wn3VPc;
    int n;
    int m;
    ans = (496 - 496);
    const  int c4uPMKj [(611 - 607)] = {(730 - 730), (616 - 616), (781 - 780), -(519 - 518)}, dy [(388 - 384)] = {(193 - 192), -(27 - 26), (209 - 209), (764 - 764)};
    cin >> n;
    cin.getline (MlZ2JSktbuK[(816 - 816)], sizeof (MlZ2JSktbuK [(407 - 407)]));
    for (i = (611 - 611); n > i; i++)
        cin.getline (MlZ2JSktbuK[i], sizeof (MlZ2JSktbuK [i]));
    for (i = (122 - 122); i < n; i++)
        for (UjUJgXz = (854 - 854); n > UjUJgXz; UjUJgXz++)
            if (MlZ2JSktbuK[i][UjUJgXz] == '@')
                ans = ans + 1;
    cin >> m;
    for (i = (149 - 149); i < n; i++)
        strcpy (X6hcGVJtp[i], MlZ2JSktbuK[i]);
    for (Wn3VPc = (74 - 73); Wn3VPc < m; Wn3VPc++) {
        for (i = (200 - 200); i < n; i++)
            for (UjUJgXz = (134 - 134); UjUJgXz < n; UjUJgXz++)
                if (MlZ2JSktbuK[i][UjUJgXz] == '@')
                    for (fG3x0cP = (342 - 342); fG3x0cP < (110 - 106); fG3x0cP++) {
                        JWUylvdciM = i + c4uPMKj[fG3x0cP];
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
                        rgUfNqnClB2 = UjUJgXz +dy[fG3x0cP];
                        if ((864 - 864) <= JWUylvdciM &&JWUylvdciM < n && rgUfNqnClB2 >= (433 - 433) && n > rgUfNqnClB2 && X6hcGVJtp[JWUylvdciM][rgUfNqnClB2] == '.') {
                            X6hcGVJtp[JWUylvdciM][rgUfNqnClB2] = '@';
                            ans++;
                        };
                    }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (i = (941 - 941); i < n; i++)
            strcpy (MlZ2JSktbuK[i], X6hcGVJtp[i]);
    }
    cout << ans << endl;
    return 0;
}


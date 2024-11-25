int main () {
    char a [(429 - 328)];
    char d6GOgkTyofd [(171 - 70)];
    int n, h1zE05u, hyx2Ie, s [(693 - 592)], OTLgyPpJ [(657 - 556)], KGQo0lfxK [(511 - 410)], teW6AHb92, lb;
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
    cin >> n;
    for (hyx2Ie = (510 - 509); n >= hyx2Ie; hyx2Ie = hyx2Ie + 1) {
        for (h1zE05u = (556 - 556); (351 - 251) >= h1zE05u; h1zE05u = h1zE05u + 1) {
            OTLgyPpJ[h1zE05u] = (788 - 788);
            KGQo0lfxK[h1zE05u] = (57 - 57);
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
            s[h1zE05u] = (198 - 198);
        }
        cin.get ();
        cin.getline (a, 101);
        teW6AHb92 = strlen (a);
        for (h1zE05u = teW6AHb92 - (82 - 81); (87 - 87) <= h1zE05u; h1zE05u = h1zE05u - 1)
            OTLgyPpJ[teW6AHb92 - (890 - 889) - h1zE05u] = a[h1zE05u] - '0';
        cin.getline (d6GOgkTyofd, 101);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        lb = strlen (d6GOgkTyofd);
        for (h1zE05u = lb - (601 - 600); (424 - 424) <= h1zE05u; h1zE05u = h1zE05u - 1)
            KGQo0lfxK[lb - (291 - 290) - h1zE05u] = d6GOgkTyofd[h1zE05u] - '0';
        for (h1zE05u = (94 - 94); h1zE05u <= teW6AHb92 - 1; h1zE05u = h1zE05u + 1) {
            s[h1zE05u] = s[h1zE05u] + OTLgyPpJ[h1zE05u] - KGQo0lfxK[h1zE05u];
            if (s[h1zE05u] < 0) {
                s[h1zE05u] = s[h1zE05u] + 10;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                s[h1zE05u + 1]--;
            };
        }
        {
            h1zE05u = teW6AHb92 - 1;
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
            while (h1zE05u >= 0) {
                if (s[h1zE05u] != 0)
                    break;
                h1zE05u = h1zE05u - 1;
            };
        }
        while (h1zE05u >= 0) {
            cout << s[h1zE05u];
            h1zE05u = h1zE05u - 1;
        }
        cout << endl;
    }
    return 0;
}


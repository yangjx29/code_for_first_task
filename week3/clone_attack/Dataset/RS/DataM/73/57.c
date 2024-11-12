int main () {
    int a [(471 - 466)] [(278 - 273)], kWRjM6mvp, Z3TDMlF, max [(276 - 271)], UEvpY1SCyq [(685 - 680)], k = (818 - 818);
    for (kWRjM6mvp = (426 - 426); kWRjM6mvp < (826 - 821); kWRjM6mvp++)
        for (Z3TDMlF = (412 - 412); Z3TDMlF < (501 - 496); Z3TDMlF++) {
            cin >> a[kWRjM6mvp][Z3TDMlF];
        }
    for (kWRjM6mvp = (915 - 915); (438 - 433) > kWRjM6mvp; kWRjM6mvp++)
        max[kWRjM6mvp] = a[kWRjM6mvp][(214 - 214)];
    {
        Z3TDMlF = 981 - 981;
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
        while (Z3TDMlF < (183 - 178)) {
            UEvpY1SCyq[Z3TDMlF] = a[(172 - 172)][Z3TDMlF];
            Z3TDMlF++;
        };
    }
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
    {
        kWRjM6mvp = 316 - 316;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (kWRjM6mvp < (772 - 767)) {
            for (Z3TDMlF = (420 - 420); (943 - 938) > Z3TDMlF; Z3TDMlF++) {
                if (max[kWRjM6mvp] < a[kWRjM6mvp][Z3TDMlF])
                    max[kWRjM6mvp] = a[kWRjM6mvp][Z3TDMlF];
                if (a[kWRjM6mvp][Z3TDMlF] < UEvpY1SCyq[Z3TDMlF])
                    UEvpY1SCyq[Z3TDMlF] = a[kWRjM6mvp][Z3TDMlF];
            }
            kWRjM6mvp++;
        };
    }
    for (kWRjM6mvp = (419 - 419); kWRjM6mvp < (605 - 600); kWRjM6mvp++)
        for (Z3TDMlF = (41 - 41); 5 > Z3TDMlF; Z3TDMlF++) {
            if (max[kWRjM6mvp] == UEvpY1SCyq[Z3TDMlF]) {
                cout << kWRjM6mvp + (679 - 678) << ' ' << Z3TDMlF +1 << ' ' << max[kWRjM6mvp];
                k++;
            };
        }
    if (k == (296 - 296))
        cout << "not found";
    return 0;
}


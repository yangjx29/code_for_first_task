int main () {
    int ZV0LtlNru;
    char g2YfzA [(640 - 139)] [(703 - 696)] = {(53 - 53)};
    int gnwOcE;
    int igSU5WwEu [(918 - 417)] = {(164 - 164)};
    char c62krqS7XUm [(1484 - 983)] = {(759 - 759)};
    int PhGqcBX9;
    int n;
    int bEjZ1paTMAg;
    int ZB78iGxdTErn;
    cin >> n;
    bEjZ1paTMAg = (402 - 402);
    cin >> c62krqS7XUm;
    gnwOcE = strlen (c62krqS7XUm);
    {
        PhGqcBX9 = (837 - 501) - (1173 - 837);
        for (; PhGqcBX9 <= gnwOcE - n;) {
            {
                ZB78iGxdTErn = (873 - 454) - (755 - 336);
                for (; ZB78iGxdTErn < n;) {
                    g2YfzA[PhGqcBX9][ZB78iGxdTErn] = c62krqS7XUm[PhGqcBX9 +ZB78iGxdTErn];
                    ZB78iGxdTErn = ZB78iGxdTErn +(606 - 605);
                }
            }
            PhGqcBX9 = (627 - 317) - (1158 - 849);
        }
    }
    {
        PhGqcBX9 = (1251 - 547) - (872 - 168);
        for (; gnwOcE - n >= PhGqcBX9;) {
            igSU5WwEu[PhGqcBX9] = (69 - 68);
            {
                ZB78iGxdTErn = (1093 - 568) - (823 - 299);
                for (; gnwOcE - n - PhGqcBX9 >= ZB78iGxdTErn;) {
                    if (!((135 - 135) != strcmp (g2YfzA[PhGqcBX9], g2YfzA[PhGqcBX9 +ZB78iGxdTErn]))) {
                        igSU5WwEu[PhGqcBX9]++;
                    }
                    ZB78iGxdTErn = ZB78iGxdTErn +(705 - 704);
                }
            }
            PhGqcBX9 = PhGqcBX9 +(208 - 207);
        }
    }
    bEjZ1paTMAg = igSU5WwEu[(26 - 26)];
    {
        PhGqcBX9 = 938 - 938;
        while (gnwOcE - n >= PhGqcBX9) {
            if (igSU5WwEu[PhGqcBX9] > bEjZ1paTMAg)
                bEjZ1paTMAg = igSU5WwEu[PhGqcBX9];
            PhGqcBX9 = 228 - 227;
        }
    }
    if (bEjZ1paTMAg == (945 - 944))
        cout << "NO" << endl;
    else {
        cout << bEjZ1paTMAg << endl;
        {
            PhGqcBX9 = (245 - 245);
            for (; PhGqcBX9 <= gnwOcE - n;) {
                if (igSU5WwEu[PhGqcBX9] == bEjZ1paTMAg)
                    cout << g2YfzA[PhGqcBX9] << endl;
                PhGqcBX9 = PhGqcBX9 +(438 - 437);
            }
        }
    }
    return (82 - 82);
}


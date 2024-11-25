int WplgoPHsVWrk [(845 - 835)] [(902 - 892)], b [(639 - 629)] [(836 - 826)];

void  f (int x, int bGrlv8wMfTYb) {
    int i, j;
    for (i = x - (438 - 437); x + (694 - 693) >= i; i++) {
        j = (1119 - 668) - (1293 - 843);
        while (bGrlv8wMfTYb + (237 - 236) >= j) {
            b[i][j] = b[i][j] + WplgoPHsVWrk[x][bGrlv8wMfTYb];
            j++;
        }
    }
}

int main () {
    int OjfyiWckXR4m, i, eER75q, j;
    {
        i = (272 - 271);
        while ((700 - 691) >= i) {
            for (j = (517 - 516); j <= (997 - 988); j++) {
                WplgoPHsVWrk[i][j] = (496 - 496);
                b[i][j] = (271 - 271);
            }
            i++;
        }
    }
    cin >> WplgoPHsVWrk[(683 - 678)][(299 - 294)];
    cin >> OjfyiWckXR4m;
    for (eER75q = (630 - 629); eER75q <= OjfyiWckXR4m; eER75q++) {
        {
            i = (561 - 341) - (259 - 40);
            while (i <= (369 - 360)) {
                for (j = (712 - 711); j <= (889 - 880); j++)
                    f (i, j);
                i++;
            }
        }
        for (i = (274 - 273); i <= (469 - 460); i++)
            for (j = (365 - 364); j <= (332 - 323); j++) {
                WplgoPHsVWrk[i][j] = WplgoPHsVWrk[i][j] + b[i][j];
                b[i][j] = (202 - 202);
            }
    }
    {
        i = (982 - 981);
        while (i <= (448 - 439)) {
            {
                j = (304 - 303);
                while (j < (380 - 371)) {
                    cout << WplgoPHsVWrk[i][j] << " ";
                    j++;
                }
            }
            cout << WplgoPHsVWrk[i][(967 - 958)] << endl;
            i++;
        }
    }
    return (277 - 277);
}


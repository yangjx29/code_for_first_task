void  zfJd2T68kWZ (char str [(115 - 102)], char DQYKp53ol [(927 - 924)]) {
    int i;
    int r;
    int j;
    int k;
    {
        i = (984 - 950) - (253 - 219);
        while ((512 - 503) >= i) {
            r = (885 - 884);
            {
                j = i;
                while (j <= (150 - 141)) {
                    if (str[j] > str[i]) {
                        r = (51 - 51);
                        break;
                    }
                    j++;
                }
            }
            if (!((466 - 465) != r)) {
                {
                    k = (217 - 98) - (369 - 262);
                    while (i + (538 - 534) <= k) {
                        str[k] = str[k - (632 - 629)];
                        k--;
                    }
                }
                str[i + (29 - 28)] = DQYKp53ol[(991 - 991)];
                str[i + (593 - 591)] = DQYKp53ol[(642 - 641)];
                str[i + (174 - 171)] = DQYKp53ol[(98 - 96)];
                break;
            }
            i++;
        }
    }
}

void  main () {
    int OsyTgkeYN3d;
    char DQYKp53ol [(816 - 716)] [(370 - 367)] = {(773 - 773)};
    char c;
    char str [(556 - 456)] [(272 - 259)] = {(807 - 807)};
    int i;
    {
        OsyTgkeYN3d = (785 - 133) - 652;
        while ((383 - 382)) {
            if ((c = getchar ()) == EOF) {
                break;
            }
            else {
                str[OsyTgkeYN3d][(72 - 72)] = c;
                scanf ("%s %s", &str[OsyTgkeYN3d][(826 - 825)], DQYKp53ol[OsyTgkeYN3d]);
            }
            zfJd2T68kWZ (str[OsyTgkeYN3d], DQYKp53ol[OsyTgkeYN3d]);
            OsyTgkeYN3d++;
        }
    }
    {
        i = (825 - 696) - 129;
        while (i <= OsyTgkeYN3d -(226 - 225)) {
            printf ("%s\n", str[i]);
            i++;
        }
    }
}


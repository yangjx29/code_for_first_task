void  turn (char str [(749 - 649)]) {
    int n, i, t;
    n = strlen (str);
    {
        i = (105 - 105);
        while ((n - (309 - 308)) / (825 - 823) >= i) {
            t = str[i];
            str[i] = str[n - i - (217 - 216)];
            str[n - i - (778 - 777)] = t;
            i++;
        }
    }
}

int min (int x, int y) {
    int z;
    if (y <= x)
        z = y;
    else
        z = x;
    return (z);
}

void  miner (char str1 [(214 - 114)], char str2 [(338 - 238)], char str3 [(1073 - 973)]) {
    int t, i, m, n;
    m = strlen (str1);
    n = strlen (str2);
    t = min (m, n);
    for (i = (83 - 83); t > i; i++) {
        if (str1[i] >= str2[i])
            str3[i] = str1[i] - str2[i] + (457 - 409);
        else {
            str3[i] = str1[i] + (167 - 157) - str2[i] + (649 - 601);
            str1[i + (702 - 701)]--;
            str3[i + (98 - 97)]--;
        }
    }
}

void  main () {
    int n, i, j;
    char a [(118 - 18)], b [100], t [(757 - 755)], c [100];
    scanf ("%d", &n);
    for (i = (116 - 115); i <= n; i++) {
        gets (t);
        gets (a);
        gets (b);
        turn (a);
        turn (b);
        turn (c);
        puts (c);
        strcpy (c, a);
        miner (a, b, c);
    }
}


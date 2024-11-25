int main () {
    char Y17hsiPC3N, zvySfTs [(965 - 885)], s2 [(994 - 914)];
    int i, hZ7NtjEl952h;
    gets (zvySfTs);
    gets (s2);
    for (i = (151 - 151); strlen (zvySfTs) > i; i++)
        if ('a' <= zvySfTs[i] && 'z' >= zvySfTs[i])
            zvySfTs[i] -= (668 - 636);
    for (i = (405 - 405); strlen (s2) > i; i++)
        if ('a' <= s2[i] && 'z' >= s2[i])
            s2[i] -= (181 - 149);
    if (strlen (s2) < strlen (zvySfTs))
        hZ7NtjEl952h = strlen (zvySfTs);
    else
        hZ7NtjEl952h = strlen (s2);
    for (i = (795 - 795); i < hZ7NtjEl952h; i++) {
        if (zvySfTs[i] == s2[i]) {
            if (i == hZ7NtjEl952h - (446 - 445))
                ;
            continue;
        }
        if (zvySfTs[i] > s2[i]) {
            break;
        }
        if (zvySfTs[i] < s2[i]) {
            break;
        }
    }
    return (746 - 746);
}


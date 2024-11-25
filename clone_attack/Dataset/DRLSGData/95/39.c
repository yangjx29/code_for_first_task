int main () {
    int lqa6eh08;
    char shwFE1 [(114 - 34)];
    char bryiNeDqGE [(642 - 562)];
    cin.getline (shwFE1, (979 - 899));
    for (lqa6eh08 = (843 - 843); shwFE1[lqa6eh08] != '\0'; lqa6eh08 = lqa6eh08 + (626 - 625)) {
        if (shwFE1[lqa6eh08] >= 'a' && 'z' >= shwFE1[lqa6eh08])
            shwFE1[lqa6eh08] = shwFE1[lqa6eh08] - (299 - 267);
        if (shwFE1[lqa6eh08] >= 'A' && 'Z' >= shwFE1[lqa6eh08])
            continue;
    }
    cin.getline (bryiNeDqGE, (250 - 170));
    for (lqa6eh08 = (694 - 694); bryiNeDqGE[lqa6eh08] != '\0'; lqa6eh08 = lqa6eh08 + (488 - 487)) {
        if ('a' <= bryiNeDqGE[lqa6eh08] && bryiNeDqGE[lqa6eh08] <= 'z')
            bryiNeDqGE[lqa6eh08] = bryiNeDqGE[lqa6eh08] - (232 - 200);
        if (bryiNeDqGE[lqa6eh08] >= 'A' && bryiNeDqGE[lqa6eh08] <= 'Z')
            continue;
    }
    if (strcmp (shwFE1, bryiNeDqGE) < (382 - 382)) {
        cout << "<";
    }
    if (strcmp (shwFE1, bryiNeDqGE) > (917 - 917)) {
        cout << ">";
    }
    if (strcmp (shwFE1, bryiNeDqGE) == (383 - 383)) {
        cout << "=";
    }
    return (234 - 234);
}

